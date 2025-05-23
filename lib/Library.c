#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifdef R05_POSIX
#include <sys/wait.h>
#endif  /* R05_POSIX */

#include "refal05rts.h"


enum {
  R05_NUMBER_BITS = CHAR_BIT * sizeof(r05_number),
};


#define STATIC_ASSERT(message, expr) \
  int message : ((expr) ? +1 : -1)

struct static_asserts {
  STATIC_ASSERT(char_bit_is_8, CHAR_BIT == 8);
  STATIC_ASSERT(
    platform_32_or_64, R05_NUMBER_BITS == 32 || R05_NUMBER_BITS == 64
  );
};


#define ALIAS_DESCRIPTOR(name, rep, origin) \
  struct r05_function r05f_ ## name = { \
    origin, rep, 1, NULL, R05_INIT_PROFILER \
  };


#define DEFINE_ALIAS(name, rep, origin) \
  static void r05c_ ## origin( \
    struct r05_node *arg_begin, struct r05_node *arg_end \
  ); \
  ALIAS_DESCRIPTOR(name, rep, r05c_ ## origin)


DEFINE_ALIAS(k25_, "%", Mod);
DEFINE_ALIAS(k2A_, "*", Mul);
DEFINE_ALIAS(k2B_, "+", Add);
DEFINE_ALIAS(m_, "-", Sub);
DEFINE_ALIAS(k2F_, "/", Div);


#define is_ident_tail(c) \
  (isalpha((int) (c)) || isdigit((int) (c)) || (c) == '_' || (c) == '-')


static struct r05_function *s_arithmetic_names[] = {
  &r05f_k25_, &r05f_k2A_, &r05f_k2B_, &r05f_m_, &r05f_k2F_, NULL
};


struct builtin_info {
  r05_number id;
  struct r05_function *function;
  struct r05_function *type;
};

static struct builtin_info s_builtin_info[];


static int chain_str_eq(
  struct r05_node *begin, struct r05_node *end, const char *name
);


/**
   1. <Mu s.Func e.Arg> == <s.Func e.Arg>
*/
R05_IMPLEMENT_METAFUNCTION(Mu, "Mu") {
  struct r05_node *mu = arg_begin->next;
  struct r05_node *callable = mu->next;
  struct r05_metatable *metatable = mu->info.function->metatable;
  struct r05_function **cur, **end;
  struct r05_node *brackets[2];

  assert(metatable != NULL);
  cur = metatable->functions;
  end = metatable->functions + metatable->size;

  if (R05_DATATAG_FUNCTION == callable->tag) {
    const char *name = callable->info.function->name;
    while (cur < end && strcmp((*cur)->name, name) != 0) {
      ++cur;
    }
    if (cur < end) {
      callable->info.function = *cur;
    } else if (! callable->info.function->entry) {
      r05_recognition_impossible();
    }
    r05_splice_to_freelist(mu, mu);
  } else if (R05_DATATAG_CHAR == callable->tag) {
    char name = callable->info.char_;
    struct r05_function **alias = s_arithmetic_names;
    while (*alias != NULL && (*alias)->name[0] != name) {
      ++alias;
    }

    if (*alias != NULL) {
      mu->info.function = *alias;
    } else {
      while (
        cur < end && ((*cur)->name[0] != name || (*cur)->name[1] != '\0')
      ) {
        ++cur;
      }
      if (cur < end) {
        mu->info.function = *cur;
      } else {
        r05_recognition_impossible();
      }
    }
    r05_splice_to_freelist(callable, callable);
  } else if (
    r05_brackets_left(brackets, mu, arg_end)
    && brackets[0]->next != brackets[1]
  ) {
    struct r05_node *p = brackets[0]->next;
    struct r05_node *name_b = brackets[0]->next;
    struct r05_node *name_e = brackets[1]->prev;
    struct r05_function *callee = NULL;
    struct builtin_info *bi = s_builtin_info;
    struct r05_function **alias = s_arithmetic_names;

    while (p != brackets[1] && R05_DATATAG_CHAR == p->tag) {
      p = p->next;
    }
    if (p != brackets[1]) {
      r05_recognition_impossible();
    }

    while (cur < end && ! chain_str_eq(name_b, name_e, (*cur)->name)) {
      ++cur;
    }
    if (cur < end) {
      callee = *cur;
    }

    while (
      bi->function != NULL && ! chain_str_eq(name_b, name_e, bi->function->name)
    ) {
      ++bi;
    }
    if (bi->function != NULL) {
      assert(callee == NULL);
      callee = bi->function;
    }

    while (*alias != NULL && ! chain_str_eq(name_b, name_e, (*alias)->name)) {
      ++alias;
    }
    if (*alias != NULL) {
      assert(callee == NULL);
      callee = *alias;
    }

    if (callee) {
      mu->info.function = callee;
    } else {
      r05_recognition_impossible();
    }
    r05_splice_to_freelist(brackets[0], brackets[1]);
  } else {
    r05_recognition_impossible();
  }

  r05_push_stack(arg_end);
  r05_push_stack(arg_begin);
}


struct signed_number {
  signed sign;
  r05_number value;
};


static struct r05_node *parse_signed_number(
  struct signed_number *sn, struct r05_node *p
) {
  if (R05_DATATAG_CHAR == p->tag) {
    if ('-' == p->info.char_) {
      sn->sign = -1;
    } else if ('+' == p->info.char_) {
      sn->sign = +1;
    } else {
      r05_recognition_impossible();
    }

    p = p->next;
  } else {
    sn->sign = +1;
  }

  if (R05_DATATAG_NUMBER != p->tag) {
    r05_recognition_impossible();
  }

  sn->value = p->info.number;

  if (0 == sn->value) {
    sn->sign = +1;
  }

  return p->next;
}


struct arithm_arg {
  struct signed_number x, y;
};


static void parse_arithm_arg(
  struct arithm_arg *aa, struct r05_node *arg_begin, struct r05_node *arg_end
) {
  struct r05_node *func_name, *p;

  func_name = arg_begin->next;
  p = func_name->next;

  if (R05_DATATAG_OPEN_BRACKET == p->tag) {
    p = p->next;
    p = parse_signed_number(&aa->x, p);

    if (R05_DATATAG_CLOSE_BRACKET != p->tag) {
      r05_recognition_impossible();
    }

    p = p->next;
  } else {
    p = parse_signed_number(&aa->x, p);
  }

  p = parse_signed_number(&aa->y, p);

  if (p != arg_end) {
    r05_recognition_impossible();
  }
}


/**
   2. <Add e.ArithmArg> == '-'? 1? s.NUMBER

   e.ArithmArg ::=
       (s.Sign? s.NUMBER) s.Sign? s.NUMBER
     | s.Sign? s.NUMBER s.Sign? s.NUMBER
*/
static void add(
  const struct arithm_arg *aa,
  struct r05_node *arg_begin, struct r05_node *arg_end
);


R05_DEFINE_ENTRY_FUNCTION(Add, "Add") {
  struct arithm_arg arg;

  parse_arithm_arg(&arg, arg_begin, arg_end);
  add(&arg, arg_begin, arg_end);
}


static struct r05_node *emplace_number(
  struct signed_number res, r05_number high, struct r05_node *p
) {
  if (res.sign < 0) {
    p->tag = R05_DATATAG_CHAR;
    p->info.char_ = '-';
    p = p->next;
  }

  if (high) {
    p->tag = R05_DATATAG_NUMBER;
    p->info.number = high;
    p = p->next;
  }

  p->tag = R05_DATATAG_NUMBER;
  p->info.number = res.value;
  return p;
}



static void add(
  const struct arithm_arg *aa,
  struct r05_node *arg_begin, struct r05_node *arg_end
) {
  struct signed_number res;
  r05_number carry = 0;
  struct r05_node *p = arg_begin;

  if (aa->x.sign == aa->y.sign) {
    res.sign = aa->x.sign;
    res.value = aa->x.value + aa->y.value;
    if (res.value < aa->x.value) {
      carry = 1;
    }
  } else if (aa->x.value > aa->y.value) {
    res.sign = aa->x.sign;
    res.value = aa->x.value - aa->y.value;
  } else if (aa->x.value < aa->y.value) {
    res.sign = aa->y.sign;
    res.value = aa->y.value - aa->x.value;
  } else {
    res.sign = 0;
    res.value = 0;
  }

  p = emplace_number(res, carry, p);
  r05_splice_to_freelist(p->next, arg_end);
}


/**
   3. <Arg s.ArgNo> == e.Argument

      s.ArgNo ::= s.NUMBER
      e.Argument ::= s.CHAR*
*/
R05_DEFINE_ENTRY_FUNCTION(Arg, "Arg") {
  struct r05_node *callable = arg_begin->next;
  struct r05_node *parg_no = callable->next;
  int arg_no;

  if (
    parg_no == arg_end
    || R05_DATATAG_NUMBER != parg_no->tag
    || parg_no->next != arg_end
  ) {
    r05_recognition_impossible();
  }

  arg_no = (int) parg_no->info.number;

  r05_reset_allocator();
  r05_alloc_string(r05_arg(arg_no));
  r05_splice_from_freelist(arg_begin);
  r05_splice_to_freelist(arg_begin, arg_end);
}


/**
  4. <Br e.Key '=' e.Value> == empty
*/
ALIAS_DESCRIPTOR(Br, "Br", r05_br);


/**
   5. <Card> == s.CHAR* 0?
*/
static void read_from_stream(FILE *input);

R05_DEFINE_ENTRY_FUNCTION(Card, "Card") {
  struct r05_node *callee = arg_begin->next;

  if (callee->next != arg_end) {
    r05_recognition_impossible();
  }

  r05_reset_allocator();
  read_from_stream(stdin);
  r05_splice_from_freelist(arg_begin);
  r05_splice_to_freelist(arg_begin, arg_end);
}


static void read_from_stream(FILE *input) {
  int cur_char;

  while (cur_char = fgetc(input), cur_char != EOF && cur_char != '\n') {
    r05_alloc_char((char) cur_char);
  }

  if (cur_char == EOF) {
    r05_alloc_number(0);
  }
}


/**
   6. <Chr e.Expr> == e.Expr’

   В e.Expr’ все числа заменены на литеры с соответствующими кодами
*/
R05_DEFINE_ENTRY_FUNCTION(Chr, "Chr") {
  struct r05_node *callee = arg_begin->next;
  struct r05_node *p = callee->next;

  while (p != arg_end) {
    if (p->tag == R05_DATATAG_NUMBER) {
      p->tag = R05_DATATAG_CHAR;
      p->info.char_ = (unsigned char) p->info.number;
    }
    p = p->next;
  }

  r05_splice_to_freelist(arg_begin, callee);
  r05_splice_to_freelist(arg_end, arg_end);
}


/**
  7. <Cp e.Key> == e.Value
*/
ALIAS_DESCRIPTOR(Cp, "Cp", r05_cp);


/**
  8. <Dg e.Key> == e.Value
*/
ALIAS_DESCRIPTOR(Dg, "Dg", r05_dg);


/**
  10. <Div e.ArithmArg> == '-'? s.NUMBER
*/
struct divmod {
  struct signed_number div, mod;
};


void divmod(const struct arithm_arg *aa, struct divmod *res) {
  if (0 == aa->y.value) {
    r05_builtin_error("divide by zero");
  }

  res->div.value = aa->x.value / aa->y.value;
  res->div.sign = aa->x.sign * aa->y.sign;
  res->mod.value = aa->x.value % aa->y.value;
  res->mod.sign = aa->x.sign;
}


R05_DEFINE_ENTRY_FUNCTION(Div, "Div") {
  struct arithm_arg arg;
  struct divmod res;
  struct r05_node *p = arg_begin;

  parse_arithm_arg(&arg, arg_begin, arg_end);
  divmod(&arg, &res);
  p = emplace_number(res.div, 0, p);
  r05_splice_to_freelist(p->next, arg_end);
}


/**
  11. <Divmod e.ArithmArg> == ('-'? s.NUMBER) '-'? s.NUMBER
*/
R05_DEFINE_ENTRY_FUNCTION(Divmod, "Divmod") {
  struct arithm_arg arg;
  struct divmod res;
  struct r05_node *open = arg_begin, *close, *p;

  parse_arithm_arg(&arg, arg_begin, arg_end);
  divmod(&arg, &res);
  open->tag = R05_DATATAG_OPEN_BRACKET;
  close = emplace_number(res.div, 0, open->next)->next;
  close->tag = R05_DATATAG_CLOSE_BRACKET;
  r05_link_brackets(open, close);
  p = emplace_number(res.mod, 0, close->next);

  if (p != arg_end) {
    r05_splice_to_freelist(p->next, arg_end);
  }
}


/**
  12. <Explode s.FUNCTION> == s.CHAR+
*/
R05_DEFINE_ENTRY_FUNCTION(Explode, "Explode") {
  struct r05_node *callable = arg_begin->next;
  struct r05_node *ident = callable->next;

  if (
     ident == arg_end
     || R05_DATATAG_FUNCTION != ident->tag
     || ident->next != arg_end
  ) {
    r05_recognition_impossible();
  }

  r05_reset_allocator();
  r05_alloc_string(ident->info.function->name);
  r05_splice_from_freelist(arg_begin);
  r05_splice_to_freelist(arg_begin, arg_end);
}


/**
  13. <First s.Len e.Items> == (e.Prefix) e.Suffix

  e.Items : e.Prefix e.Suffix
  |e.Prefix| == s.Len || { |e.Prefix| < s.Len && |e.Suffix| == 0 }
*/
R05_DEFINE_ENTRY_FUNCTION(First, "First") {
  struct r05_node *sLen;
  r05_number counter;
  struct r05_node *ePrefix[2];
  struct r05_node *left_bracket, *right_bracket, *callee;

  callee = arg_begin->next;

  if (
    ! r05_svar_left(&sLen, callee, arg_end) || sLen->tag != R05_DATATAG_NUMBER
  ) {
    r05_recognition_impossible();
  }

  counter = sLen->info.number;

  ePrefix[0] = sLen->next;
  ePrefix[1] = sLen;
  while (counter > 0 && r05_open_evar_advance(ePrefix, arg_end)) {
    -- counter;
  }

  left_bracket = callee;
  right_bracket = sLen;

  left_bracket->tag = R05_DATATAG_OPEN_BRACKET;
  right_bracket->tag = R05_DATATAG_CLOSE_BRACKET;
  r05_link_brackets(left_bracket, right_bracket);

  r05_correct_evar(ePrefix);
  r05_splice_evar(right_bracket, ePrefix);

  r05_splice_to_freelist(arg_begin, arg_begin);
  r05_splice_to_freelist(arg_end, arg_end);
}


/**
  14. <Get s.FileNo> == s.Char* 0?
      s.FileNo ::= s.NUMBER
*/
FILE *open_numbered(unsigned int no, const char mode);

R05_DEFINE_ENTRY_FUNCTION(Get, "Get") {
  struct r05_node *callable = arg_begin->next;
  struct r05_node *pfile_no = callable->next;
  FILE *stream;

  if (
    pfile_no == arg_end
    || R05_DATATAG_NUMBER != pfile_no->tag
    || pfile_no->next != arg_end
  ) {
    r05_recognition_impossible();
  }

  stream = open_numbered((unsigned int) pfile_no->info.number, 'r');

  r05_reset_allocator();
  read_from_stream(stream);
  r05_splice_from_freelist(arg_begin);
  r05_splice_to_freelist(arg_begin, arg_end);
}


enum { FILE_LIMIT = 40 };

static FILE *s_streams[FILE_LIMIT] = { NULL };

enum { UINT_DIGITS = (sizeof(unsigned int) * 8 + 2) / 3 };

FILE *open_numbered(unsigned int file_no, const char mode) {
  char mode_str[2] = "*";

  /*
    Ложное предупреждение BCC 5.5:
    компилятор не допускает инициализацию структур и массивов переменными.
  */
  mode_str[0] = mode;
  file_no %= FILE_LIMIT;
  if (file_no == 0 && mode == 'r') {
    return stdin;
  } else if (file_no == 0 && mode == 'w') {
    return stderr;
  }

  if (s_streams[file_no] == NULL) {
    static const char filename_format[] = "REFAL%u.DAT";
    char filename[sizeof(filename_format) + UINT_DIGITS];

    sprintf(filename, filename_format, file_no);
    s_streams[file_no] = fopen(filename, mode_str);

    if (s_streams[file_no] == NULL) {
      static const char error_format[] = "Can't open REFAL%u.DAT as \"%c\"";
      char error[sizeof(error_format) + UINT_DIGITS];

      sprintf(error, error_format, file_no, mode);
      r05_builtin_error_errno(error);
    }
  }

  return s_streams[file_no];
}


/**
  15. <Implode e.ValidPrefix e.Suffix> == s.FUNCTION e.Suffix
      <Implode e.Suffix> == 0 e.Suffix

  e.ValidPrefix ::= s.Lettern { s.Letter | s.Digit | '_' | '-' | '$' }
  s.Letter ::= 'A' | … | 'Z' | 'a' | … | 'z'
  s.Digit ::= '0' | … | '9'
*/
static struct r05_function *implode(
  struct r05_node *begin, struct r05_node *end
);


R05_DEFINE_ENTRY_FUNCTION(Implode, "Implode") {
  struct r05_node *sFunc, *sBegin, *sEnd;

  sFunc = arg_begin->next;
  sBegin = sFunc->next;

  if (sBegin->tag != R05_DATATAG_CHAR || ! isalpha((int) sBegin->info.char_)) {
    sFunc->tag = R05_DATATAG_NUMBER;
    sFunc->info.number = 0;
  } else {
    sEnd = sBegin->next;

#define is_implode_tail(c) (is_ident_tail(c) || (c) == '$')
    while (sEnd->tag == R05_DATATAG_CHAR && is_implode_tail(sEnd->info.char_)) {
      sEnd = sEnd->next;
    }
#undef is_implode_tail

    sEnd = sEnd->prev;
    sFunc->info.function = implode(sBegin, sEnd);
    r05_splice_to_freelist(sBegin, sEnd);
  }

  r05_splice_to_freelist(arg_begin, arg_begin);
  r05_splice_to_freelist(arg_end, arg_end);
}


static int chain_str_eq(
  struct r05_node *begin, struct r05_node *end, const char *name
) {
  struct r05_node *node = begin, *limit = end->next;
  const char *pc = name;
  while (node != limit && *pc != '\0' && *pc == node->info.char_) {
    node = node->next;
    pc++;
  }

  return node == limit && *pc == '\0';
}


struct imploded {
  struct r05_function function;
  size_t hash;
  struct imploded *next;
  char name[1];
};


static struct imploded **s_imploded = NULL;
static size_t s_imploded_size = 0;
static size_t s_imploded_count = 0;


static void cleanup_imploded_table(void) {
  size_t i;
  for (i = 0; i < s_imploded_size; ++i) {
    struct imploded *item = s_imploded[i];
    while (item != NULL) {
      struct imploded *next = item->next;
      free(item);
      item = next;
    }
  }
  free(s_imploded);
}


static struct r05_function *implode(
  struct r05_node *begin, struct r05_node *end
) {
  struct builtin_info *info;
  struct r05_function **alias;
  struct r05_node *node, *limit = end->next;
  size_t len, hash, i;
  struct imploded **bucket, *known, *new;

  for (info = s_builtin_info; info->function != 0; ++info) {
    if (chain_str_eq(begin, end, info->function->name)) {
      return info->function;
    }
  }

  for (alias = s_arithmetic_names; *alias != NULL; ++alias) {
    if (chain_str_eq(begin, end, (*alias)->name)) {
      return *alias;
    }
  }

  len = 0;
  hash = 7369; /* просто число */
  for (node = begin; node != limit; node = node->next) {
    len++;
    hash *= 6007; /* простое число */
    hash += (unsigned char) node->info.char_;
  }

  if (s_imploded == NULL) {
    s_imploded_size = 100;
    s_imploded = calloc(s_imploded_size, sizeof(s_imploded[0]));
    atexit(cleanup_imploded_table);
  }

  bucket = &s_imploded[hash % s_imploded_size];
  for (known = *bucket; known != NULL; known = known->next) {
    if (chain_str_eq(begin, end, known->function.name)) {
      return &known->function;
    }
  }

  new = malloc(sizeof(struct imploded) + len);
  new->function.ptr = r05_enum_function_code;
  new->function.name = new->name;
  new->hash = hash;
  new->next = *bucket;

  for (i = 0, node = begin; node != limit; node = node->next, i++) {
    new->name[i] = node->info.char_;
  }
  new->name[i] = '\0';

  *bucket = new;
  s_imploded_count++;

  if (s_imploded_count > 3 * s_imploded_size) {
    size_t new_size = 3 * s_imploded_size / 2;
    struct imploded **new_table = calloc(new_size, sizeof(new_table[0]));

    for (i = 0; i < s_imploded_size; ++i) {
      known = s_imploded[i];
      while (known != NULL) {
        struct imploded *next = known->next;
        bucket = &new_table[known->hash % new_size];
        known->next = *bucket;
        *bucket = known;
        known = next;
      }
    }

    free(s_imploded);
    s_imploded = new_table;
    s_imploded_size = new_size;
  }

  return &new->function;
}


/**
  17. <Lenw e.Expr> == s.Len e.Expr
      s.Len ::= s.NUMBER, s.Len == |e.Expr|
*/
R05_DEFINE_ENTRY_FUNCTION(Lenw, "Lenw") {
  struct r05_node *sLen, *tTerm[2];
  r05_number counter = 0;

  sLen = tTerm[1] = arg_begin->next;

  while (r05_tvar_left(tTerm, tTerm[1], arg_end)) {
    ++ counter;
  }

  sLen->tag = R05_DATATAG_NUMBER;
  sLen->info.number = counter;

  r05_splice_to_freelist(arg_begin, arg_begin);
  r05_splice_to_freelist(arg_end, arg_end);
}


/**
   18. <Lower e.Expr> == e.Expr’

   В e.Expr’ все литеры приведены к нижнему регистру
*/
R05_DEFINE_ENTRY_FUNCTION(Lower, "Lower") {
  struct r05_node *callee = arg_begin->next;
  struct r05_node *p = callee->next;

  while (p != arg_end) {
    if (p->tag == R05_DATATAG_CHAR) {
      p->info.char_ = (char) tolower(p->info.char_);
    }
    p = p->next;
  }

  r05_splice_to_freelist(arg_begin, callee);
  r05_splice_to_freelist(arg_end, arg_end);
}

/**
  19. <Mod e.ArithmArg> == '-'? s.NUMBER
*/
R05_DEFINE_ENTRY_FUNCTION(Mod, "Mod") {
  struct arithm_arg arg;
  struct divmod res;
  struct r05_node *p = arg_begin;

  parse_arithm_arg(&arg, arg_begin, arg_end);
  divmod(&arg, &res);
  p = emplace_number(res.mod, 0, p);
  r05_splice_to_freelist(p->next, arg_end);
}


/**
  20. <Mul e.ArithmArg> == '-'? s.NUMBER? s.NUMBER
*/
R05_DEFINE_ENTRY_FUNCTION(Mul, "Mul") {
  struct arithm_arg arg;
  struct signed_number res;
  r05_number high = 0;
  struct r05_node *p = arg_begin;

  parse_arithm_arg(&arg, arg_begin, arg_end);
  res.sign = arg.x.sign * arg.y.sign;
  res.value = arg.x.value * arg.y.value;

  /* особая логика для переполнения */
  if (arg.x.value != 0 && res.value / arg.x.value != arg.y.value) {
    r05_number x = arg.x.value, y = arg.y.value, y_low, y_high;

    if (x > y) {
      r05_number prev_x = x;
      x = y;
      y = prev_x;
    }

    y_low = y;
    y_high = 0;
    res.value = 0;

    while (x > 0) {
      if (x & 1) {
        res.value += y_low;
        high += y_high;
        if (res.value < y_low) {
          high += 1;
        }
      }

      y_high <<= 1;
      y_high |= (y_low >> 31);
      y_low <<= 1;
      x >>= 1;
    }
  }

  p = emplace_number(res, high, p);
  r05_splice_to_freelist(p->next, arg_end);
}


/**
  21. <Numb s.Space* s.Sign? s.Digit* e.Skipped> == '-'? s.NUMBER+
      s.Space ::= ' ' | '\t'
      s.Sign ::= '+' | '-'
      s.Digit ::= '0' | '1' | '2' | '3' | '4' | '5' | '6' | '7' | '8' | '9'

      Если аргумент не начинается с последовательности цифр,
      функция возвращает 0.
*/
R05_DEFINE_ENTRY_FUNCTION(Numb, "Numb") {
  struct r05_node *callee = arg_begin->next;
  struct r05_node *p = callee->next;
  signed sign = +1;

  while (
    R05_DATATAG_CHAR == p->tag
    && (' ' == p->info.char_ || '\t' == p->info.char_)
  ) {
    p = p->next;
  }

  if (R05_DATATAG_CHAR == p->tag) {
    if ('-' == p->info.char_) {
      sign = -1;
      p = p->next;
    } else if ('+' == p->info.char_) {
      p = p->next;
    }
  }

  /* Игнорируем начальные нули */
  while (R05_DATATAG_CHAR == p->tag && '0' == p->info.char_) {
    p = p->next;
  }

  if (R05_DATATAG_CHAR != p->tag || ! isdigit((int) p->info.char_)) {
    arg_begin->tag = R05_DATATAG_NUMBER;
    arg_begin->info.number = 0;
    r05_splice_to_freelist(callee, arg_end);
  } else {
    struct r05_node *first_digit, *target;
    size_t ndigits;
    r05_number accum;
    struct r05_node *first_10p, *last_10p;

    enum {
      BITS_PORTION = 2 * sizeof(r05_number),
      PORTION_MASK = (1 << BITS_PORTION) - 1,
    };

    /* Подсчитываем число значимых цифр */
    first_digit = p;
    ndigits = 0;
    while (R05_DATATAG_CHAR == p->tag && isdigit((int) p->info.char_)) {
      p = p->next;
      ndigits += 1;
    }

    /*
      Переводим число в систему по основанию 10 ** BITS_PORTION,
      first_10p и last_10p — первая и последняя цифры
    */
    accum = 0;
    p = first_digit;
    target = first_10p = arg_begin->next;
    do {
      accum = accum * 10 + p->info.char_ - '0';
      p = p->next;
      ndigits -= 1;
      if (ndigits % BITS_PORTION == 0) {
        /* Тег можно не устанавливать, это просто для красоты */
        target->tag = R05_DATATAG_NUMBER;
        target->info.number = accum;
        target = target->next;
        accum = 0;
      }
    } while (ndigits > 0);
    last_10p = target->prev;

    if (first_10p == last_10p) {
      /* Заведомо одна макроцифра в результате */
      if (first_10p->info.number > 0 && sign < 0) {
        arg_begin->tag = R05_DATATAG_CHAR;
        arg_begin->info.char_ = '-';
      } else {
        r05_splice_to_freelist(arg_begin, first_10p->prev);
      }
      r05_splice_to_freelist(last_10p->next, arg_end);
    } else {
      /* Вытягиваем порции бит из [first_10p, last_10p] */
      int offset, power;
      r05_number power5 = 1;

      for (power = 0; power < BITS_PORTION / 2; ++power) {
        power5 *= 25;
      }

      /*
        Пользуемся тем, что
        (y * (10**BITS_PORTION) + x) >> BITS_PORTION
          == y * (5**BITS_PORTION) + (x >> BITS_PORTION)
          == y * power5 + (x >> BITS_PORTION)
      */

      offset = 0;
      accum = 0;
      target = arg_end;
      do {
          accum |= (last_10p->info.number & PORTION_MASK) << offset;

          if (offset < 3 * BITS_PORTION) {
            offset += BITS_PORTION;
          } else {
            target->tag = R05_DATATAG_NUMBER;
            target->info.number = accum;
            target = target->prev;
            accum = 0;
            offset = 0;
          }

          p = last_10p;
          while (p != first_10p) {
            struct r05_node *prev = p->prev;
            p->info.number =
              (prev->info.number & PORTION_MASK) * power5
              + (p->info.number >> BITS_PORTION);
            p = prev;
          }
          first_10p->info.number >>= BITS_PORTION;

          if (first_10p->info.number == 0) {
            first_10p = first_10p->next;
          }
      } while (first_10p->prev != last_10p);

      if (accum > 0) {
        target->tag = R05_DATATAG_NUMBER;
        target->info.number = accum;
        target = target->prev;
      }

      if (sign < 0) {
        target->tag = R05_DATATAG_CHAR;
        target->info.char_ = '-';
        target = target->prev;
      }

      r05_splice_to_freelist(arg_begin, target);
    }
  }
}


/**
  22. <Open s.Mode s.FileNo e.FileName> == []
      s.Mode ::=
          'r' | 'w' | 'a'
        |  r  |  w  |  a
        |  rb |  wb |  ab
*/

static void ensure_close_stream(unsigned int file_no);

R05_DEFINE_ENTRY_FUNCTION(Open, "Open") {
  struct r05_node *eFileName[2], *sMode, *sFileNo;
  unsigned int file_no;
  char mode_str[2] = { '.', '\0' };
  const char *mode = mode_str;
  static const char filename_format[] = "REFAL%u.DAT";
  enum {
    DEFAULT_LEN = sizeof(filename_format) + UINT_DIGITS,
    FILENAME_LEN = FILENAME_MAX > DEFAULT_LEN ? FILENAME_MAX : DEFAULT_LEN
  };
  char filename[FILENAME_LEN + 1] = { '\0' };
  size_t filename_len;

  if (
    ! r05_svar_left(&sMode, arg_begin->next, arg_end)
    || (R05_DATATAG_CHAR != sMode->tag && R05_DATATAG_FUNCTION != sMode->tag)
    || ! r05_svar_left(&sFileNo, sMode, arg_end)
    || R05_DATATAG_NUMBER != sFileNo->tag
  ) {
    r05_recognition_impossible();
  }

  filename_len =
    r05_read_chars(eFileName, filename, FILENAME_LEN, sFileNo, arg_end);

  file_no = sFileNo->info.number % FILE_LIMIT;

  if (filename_len != 0) {
    filename[filename_len] = '\0';
  } else {
    sprintf(filename, filename_format, file_no);
  }

  if (R05_DATATAG_CHAR == sMode->tag) {
    char mode = sMode->info.char_;
    if (mode != 'r' && mode != 'w' && mode != 'a') {
      r05_builtin_error("Bad file mode, expected 'r', 'w' or 'a'");
    }
    mode_str[0] = mode;
  } else {
    mode = sMode->info.function->name;
  }

  if (! r05_empty_hole(eFileName[1], arg_end)) {
    static const char error_format[] =
      "Very long file name, maximum available is %u";
    char error[sizeof(error_format) + UINT_DIGITS];

    sprintf(error, error_format, (unsigned int) FILENAME_MAX);
    r05_builtin_error(error);
  }

  ensure_close_stream(file_no);

  s_streams[file_no] = fopen(filename, mode);
  if (s_streams[file_no] == NULL) {
    char mode_buffer[100] = { '\0' };
    static const char error_format[] = "Can't open %s for \"%s\"";
    char error[sizeof(error_format) + FILENAME_MAX + sizeof(mode_buffer)];

    strncpy(mode_buffer, mode, sizeof(mode_buffer) - 1);
    sprintf(error, error_format, filename, mode_buffer);
    r05_builtin_error_errno(error);
  }

  r05_splice_to_freelist(arg_begin, arg_end);
}

static void ensure_close_stream(unsigned int file_no) {
  if (s_streams[file_no] != NULL && fclose(s_streams[file_no]) == EOF) {
    r05_builtin_error_errno("Can't close stream");
  }

  s_streams[file_no] = NULL;
}


/**
  23. <Ord e.Expr> == e.Expr’

  В e.Expr’ все литеры заменены на их коды ASCII
*/
R05_DEFINE_ENTRY_FUNCTION(Ord, "Ord") {
  struct r05_node *callee = arg_begin->next;
  struct r05_node *p = callee->next;

  while (p != arg_end) {
    if (p->tag == R05_DATATAG_CHAR) {
      p->tag = R05_DATATAG_NUMBER;
      p->info.number = (unsigned char) p->info.char_;
    }
    p = p->next;
  }

  r05_splice_to_freelist(arg_begin, callee);
  r05_splice_to_freelist(arg_end, arg_end);
}


enum output_func_type {
  PRINT, PROUT, PUT, PUTOUT, WRITE
};

static void output_func(
  struct r05_node *arg_begin, struct r05_node *arg_end,
  enum output_func_type type
) {
  struct r05_node *callee = arg_begin->next;
  struct r05_node *p, *before_expr;
  FILE *output;

  if (type == PRINT || type == PROUT) {
    before_expr = callee;
    output = stdout;
  } else if (type == PUT || type == PUTOUT || type == WRITE) {
    struct r05_node *pfile_no = callee->next;

    if (R05_DATATAG_NUMBER != pfile_no->tag) {
      r05_recognition_impossible();
    }

    before_expr = pfile_no;
    output = open_numbered((unsigned int) pfile_no->info.number, 'w');
  } else {
    r05_switch_default_violation(type);
  }

#define CHECK_PRINTF(printf_call) \
  ((printf_call) >= 0 ? (void) 0 \
  : r05_builtin_error_errno("Error in call " #printf_call))
#define CHECK_PUTC(putc_call) \
  ((putc_call) != EOF ? (void) 0 \
  : r05_builtin_error_errno("Error in call " #putc_call))

  for (p = before_expr->next; p != arg_end; p = p->next) {
    switch (p->tag) {
      case R05_DATATAG_CHAR:
        CHECK_PUTC(putc(p->info.char_, output));
        break;

      case R05_DATATAG_FUNCTION:
        CHECK_PRINTF(fprintf(output, "%s ", p->info.function->name));
        break;

      case R05_DATATAG_NUMBER:
        CHECK_PRINTF(fprintf(output, "%lu ", (long unsigned int) p->info.number));
        break;

      case R05_DATATAG_OPEN_BRACKET:
        CHECK_PUTC(putc('(', output));
        break;

      case R05_DATATAG_CLOSE_BRACKET:
        CHECK_PUTC(putc(')', output));
        break;

      default:
        r05_switch_default_violation(p->tag);
    }
  }

  if (type != WRITE) {
    CHECK_PRINTF(fprintf(output, "\n"));
  }

#undef CHECK_PRINTF

  if (type == PRINT || type == PUT) {
    r05_splice_to_freelist(arg_begin, before_expr);
    r05_splice_to_freelist(arg_end, arg_end);
  } else if (type == PROUT || type == PUTOUT || type == WRITE) {
    r05_splice_to_freelist(arg_begin, arg_end);
  } else {
    r05_switch_default_violation(type);
  }
}


/**
  24. <Print e.Expr> == []
*/
R05_DEFINE_ENTRY_FUNCTION(Print, "Print") {
  output_func(arg_begin, arg_end, PRINT);
}


/**
  25. <Prout e.Expr> == []
*/
R05_DEFINE_ENTRY_FUNCTION(Prout, "Prout") {
  output_func(arg_begin, arg_end, PROUT);
}


/**
  26. <Put s.FileNo e.Expr> == []
*/
R05_DEFINE_ENTRY_FUNCTION(Put, "Put") {
  output_func(arg_begin, arg_end, PUT);
}


/**
  27. <Putout s.FileNo e.Expr> == []
*/
R05_DEFINE_ENTRY_FUNCTION(Putout, "Putout") {
  output_func(arg_begin, arg_end, PUTOUT);
}


/**
  28. <Rp e.Key '=' e.Value> == empty
*/
ALIAS_DESCRIPTOR(Rp, "Rp", r05_rp);


/**
  29. <Step> == s.NUMBER
*/
R05_DEFINE_ENTRY_FUNCTION(Step, "Step") {
  arg_begin->tag = R05_DATATAG_NUMBER;
  arg_begin->info.number = r05_step_count();
  r05_splice_to_freelist(arg_begin->next, arg_end);
}


/**
  30. <Sub s.NUMBER s.NUMBER> == '-' s.NUMBER
*/
R05_DEFINE_ENTRY_FUNCTION(Sub, "Sub") {
  struct arithm_arg arg;

  parse_arithm_arg(&arg, arg_begin, arg_end);
  arg.y.sign = -arg.y.sign;
  add(&arg, arg_begin, arg_end);
}


/**
  31. <Symb e.Sign s.NUMBER+> == e.Sign s.CHAR+
      e.Sign ::= '+' | '-' | пусто
*/
R05_DEFINE_ENTRY_FUNCTION(Symb, "Symb") {
  struct r05_node *callable = arg_begin->next;
  struct r05_node *number_start = callable->next;
  struct r05_node *p;


  if (R05_DATATAG_CHAR == number_start->tag) {
    char sign = number_start->info.char_;

    if (sign != '+' && sign != '-') {
      r05_recognition_impossible();
    }
    number_start = number_start->next;
  }

  if (R05_DATATAG_NUMBER != number_start->tag) {
    r05_recognition_impossible();
  }
  p = number_start;

  /* Пропускаем лидирующие нули */
  while (R05_DATATAG_NUMBER == p->tag && 0 == p->info.number) {
    p = p->next;
  }

  if (p == arg_end) {
    /* Число состоит из нулей, результат — ноль */
    number_start->tag = R05_DATATAG_CHAR;
    number_start->info.char_ = '0';
    r05_splice_to_freelist(arg_begin, callable);
    r05_splice_to_freelist(number_start->next, arg_end);
  } else if (R05_DATATAG_NUMBER == p->tag) {
    /* Есть ненулевые цифры, подсчитываем их */
    size_t nmacrodigits;
    struct r05_node *pvalue_start = p;

    nmacrodigits = 0;
    while (R05_DATATAG_NUMBER == p->tag) {
      nmacrodigits += 1;
      p = p->next;
    }

    if (p == arg_end) {
      /*
        Длина десятичного числа = lg(2) × длина двоичного числа
        lg(2) = 0.30102… ≈ 28 / 93 = 0.30107…, т.е. 28 / 93 — оценка сверху.
        Это хорошая оценка, для числа из 1000 32-битных макроцифр даёт
        ошибку только в 2 лишние десятичные цифры.
      */
      size_t nbits = nmacrodigits * R05_NUMBER_BITS;
      size_t ndecdigits = (nbits * 28 + 92) / 93;
      size_t i;
      struct r05_node *insert_pos, *last_dec_digit;
      r05_number rem;
      int last_loop;

      enum {
        DEC_CHUNK = R05_NUMBER_BITS == 32 ? 4 : 9,
        DEC_POWER = R05_NUMBER_BITS == 32 ? 10 * 1000 : 1000 * 1000 * 1000,
        HALF = R05_NUMBER_BITS / 2,
      };

      const r05_number HALF_MASK = ((r05_number) 1 << HALF) - 1;

      r05_reset_allocator();
      for (i = 0; i < ndecdigits; ++i) {
        r05_alloc_char('0');
      }
      insert_pos = arg_end->next;
      r05_splice_from_freelist(insert_pos);
      last_dec_digit = insert_pos->prev;

      do {
        rem = 0;
        p = pvalue_start;
        do {
          r05_number high, low;

          high = (rem << HALF) | (p->info.number >> HALF);
          rem = high % DEC_POWER;
          high /= DEC_POWER;

          low = (rem << HALF) | (p->info.number & HALF_MASK);
          rem = low % DEC_POWER;
          low /= DEC_POWER;

          p->info.number = (high << HALF) | low;
          p = p->next;
        } while (p != arg_end);

        if (0 == pvalue_start->info.number) {
          pvalue_start = pvalue_start->next;
        }

        last_loop = pvalue_start == arg_end;
        for (i = 0; last_loop ? rem > 0 : i < DEC_CHUNK; ++i) {
          last_dec_digit->info.char_ += (char) (rem % 10);
          rem /= 10;
          last_dec_digit = last_dec_digit->prev;
        }
      } while (! last_loop);

      r05_splice_to_freelist(arg_begin, callable);
      r05_splice_to_freelist(number_start, last_dec_digit);
    } else {
      r05_recognition_impossible();
    }
  } else {
    r05_recognition_impossible();
  }
}


/**
  32. <Time> == s.CHAR+
*/
R05_DEFINE_ENTRY_FUNCTION(Time, "Time") {
  char *time_str, *n;
  time_t now;

  if (arg_begin->next->next != arg_end) {
    r05_recognition_impossible();
  }

  time(&now);
  time_str = ctime(&now);
  n = strchr(time_str, '\n');
  assert(n != NULL);
  *n = '\0';

  r05_reset_allocator();
  r05_alloc_string(time_str);
  r05_splice_from_freelist(arg_begin);
  r05_splice_to_freelist(arg_begin, arg_end);
}


/**
  33. <Type e.Expr> == s.Type s.SubType e.Expr
      Type of first term of e.Expr

      s.Type s.SubType ::=
          'Lu' — uppercase latin letter
        | 'Ll' — lowercase latin letter
        | 'D0' — decimal digit
        | 'Wi' — identifier (function)
        | 'Wq' — quotted identifier
        | 'N0' — number
        | 'Pu' — isprint() && isupper()
        | 'Pl' — isprint() && ! isupper()
        | 'Ou' — other && isupper()
        | 'Ol' — other && ! isupper()
        | 'B0' — brackets
        | '*0' — empty expression
*/
R05_DEFINE_ENTRY_FUNCTION(Type, "Type") {
  struct r05_node *callee = arg_begin->next;
  struct r05_node *first_term = callee->next;
  char type, subtype;

  if (first_term == arg_end) {
    type = '*';
    subtype = '0';
  } else if (R05_DATATAG_CHAR == first_term->tag) {
    char ch = first_term->info.char_;

    if (isupper(ch)) {
      subtype = 'u';
    } else {
      subtype = 'l';
    }
    if (isalpha(ch)) {
      type = 'L';
    } else if (isdigit(ch)) {
      type = 'D';
      subtype = '0';
    } else if (isprint(ch)) {
      type = 'P';
    } else {
      type = 'O';
    }
  } else if (R05_DATATAG_FUNCTION == first_term->tag) {
    type = 'W';
    subtype = 'q';

    if (isalpha((int) first_term->info.function->name[0])) {
      const char *p = &first_term->info.function->name[1];
      while (*p != '\0' && is_ident_tail(*p)) {
        p++;
      }

      if (*p == '\0') {
        subtype = 'i';
      }
    }
  } else if (R05_DATATAG_NUMBER == first_term->tag) {
    type = 'N';
    subtype = '0';
  } else if (R05_DATATAG_OPEN_BRACKET == first_term->tag) {
    type = 'B';
    subtype = '0';
  } else {
    r05_switch_default_violation(first_term->tag);
#ifndef R05_NORETURN_DEFINED
    return;
#endif
  }

  arg_begin->tag = R05_DATATAG_CHAR;
  arg_begin->info.char_ = type;
  callee->tag = R05_DATATAG_CHAR;
  callee->info.char_ = subtype;

  r05_splice_to_freelist(arg_end, arg_end);
}


/**
   34. <Upper e.Expr> == e.Expr’

   В e.Expr’ все литеры приведены к верхнему регистру
*/
R05_DEFINE_ENTRY_FUNCTION(Upper, "Upper") {
  struct r05_node *callee = arg_begin->next;
  struct r05_node *p = callee->next;

  while (p != arg_end) {
    if (p->tag == R05_DATATAG_CHAR) {
      p->info.char_ = (char) toupper(p->info.char_);
    }
    p = p->next;
  }

  r05_splice_to_freelist(arg_begin, callee);
  r05_splice_to_freelist(arg_end, arg_end);
}


/**
  44. Пустая функция с именем ""
*/
struct r05_function r05f_ = {
  r05_enum_function_code, "", 1, NULL, R05_INIT_PROFILER
};



/**
  48. <Up ↓e.Expr> == e.Expr′
*/
R05_IMPLEMENT_METAFUNCTION(Up, "Up") {
  (void) arg_begin, (void) arg_end;
  r05_builtin_error("Metafunction Up is not implemented yet");
}


/**
  49. <Ev-met ↓e.Expr> == { 0 | 1 | 2 } ↓e.Expr′
*/
R05_IMPLEMENT_METAFUNCTION(Evm_met, "Ev-met") {
  (void) arg_begin, (void) arg_end;
  r05_builtin_error("Metafunction Ev-met is not implemented yet");
}


/**
   50. <Residue s.Func e.Arg> == <s.Func e.Arg>
*/
R05_IMPLEMENT_METAFUNCTION(Residue, "Residue") {
  r05c_Mu(arg_begin, arg_end);
}

void r05c_k3F_(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05c_Residue(arg_begin, arg_end);
}


/**
  51. <GetEnv e.EnvName> == e.EnvValue
      e.EnvName, e.EnvValue ::= s.CHAR*
*/
R05_DEFINE_ENTRY_FUNCTION(GetEnv, "GetEnv") {
  struct r05_node *eEnvName[2];
  enum { MAX_ENV = 2000 };
  char env_name[MAX_ENV + 1];
  size_t env_name_len;
  const char *env_value;

  env_name_len =
    r05_read_chars(eEnvName, env_name, MAX_ENV, arg_begin->next, arg_end);

  if (! r05_empty_hole(eEnvName[1], arg_end)) {
    if (R05_DATATAG_CHAR == eEnvName[1]->next->tag) {
      r05_builtin_error("very long environment variable name");
    } else {
      r05_recognition_impossible();
    }
  }

  env_name[env_name_len] = '\0';
  env_value = getenv(env_name);
  if (! env_value) {
    env_value = "";
  }

  r05_reset_allocator();
  r05_alloc_string(env_value);
  r05_splice_from_freelist(arg_begin);
  r05_splice_to_freelist(arg_begin, arg_end);
}


/**
  52. <System e.Command> == e.RetCode
      e.RetCode ::= '-'? s.NUMBER
*/
R05_DEFINE_ENTRY_FUNCTION(System, "System") {
  struct r05_node *eCommand[2];
  enum { MAX_COMMAND = 2000 };
  char command[MAX_COMMAND + 1];
  size_t command_len;
  int retcode;

  command_len =
    r05_read_chars(eCommand, command, MAX_COMMAND, arg_begin->next, arg_end);

  if (! r05_empty_hole(eCommand[1], arg_end)) {
    if (R05_DATATAG_CHAR == eCommand[1]->next->tag) {
      r05_builtin_error("very long command line");
    } else {
      r05_recognition_impossible();
    }
  }

  command[command_len] = '\0';
  fflush(NULL);
  retcode = system(command);

#if defined(WIFEXITED) && defined(WEXITSTATUS)
  if (WIFEXITED(retcode)) {
    retcode = WEXITSTATUS(retcode);
  } else {
    retcode = -1;
  }
#endif  /* defined(WIFEXITED) && defined(WEXITSTATUS) */

  r05_reset_allocator();
  if (retcode < 0) {
    r05_alloc_char('-');
    retcode = -retcode;
  }
  r05_alloc_number((r05_number) retcode);
  r05_splice_from_freelist(arg_begin);
  r05_splice_to_freelist(arg_begin, arg_end);
}


/**
  53. <Exit e.RetCode>
*/
R05_DEFINE_ENTRY_FUNCTION(Exit, "Exit") {
  struct r05_node *callable = arg_begin->next;
  struct r05_node *pretcode = callable->next;
  int retcode;
  signed sign = +1;

  if (pretcode == arg_end) {
    r05_recognition_impossible();
  }

  if (R05_DATATAG_CHAR == pretcode->tag) {
    if ('-' == pretcode->info.char_) {
      sign = -1;
      pretcode = pretcode->next;
    } else {
      r05_recognition_impossible();
    }
  }

  if (
    pretcode == arg_end
    || R05_DATATAG_NUMBER != pretcode->tag
    || pretcode->next != arg_end
  ) {
    r05_recognition_impossible();
  }

  retcode = sign * (int) pretcode->info.number;
  r05_exit(retcode);
}


/**
  54. <Close s.FileNo> == []
*/
R05_DEFINE_ENTRY_FUNCTION(Close, "Close") {
  struct r05_node *callable = arg_begin->next;
  struct r05_node *pfile_no = callable->next;
  unsigned int file_no;

  if (
    pfile_no == arg_end
    || R05_DATATAG_NUMBER != pfile_no->tag
    || pfile_no->next != arg_end
  ) {
    r05_recognition_impossible();
  }

  file_no = (unsigned int) pfile_no->info.number % FILE_LIMIT;
  ensure_close_stream(file_no);
  r05_splice_to_freelist(arg_begin, arg_end);
}


/**
  55. <ExistFile e.FileName>
        == True
        == False
      e.FileName ::= s.CHAR+
*/
R05_DEFINE_LOCAL_ENUM(True, "True")
R05_DEFINE_LOCAL_ENUM(False, "False")

R05_DEFINE_ENTRY_FUNCTION(ExistFile, "ExistFile") {
  struct r05_node *callee = arg_begin->next;
  struct r05_node *eFileName[2];
  char filename[FILENAME_MAX + 1];
  size_t filename_len;
  FILE *file;

  filename_len =
    r05_read_chars(eFileName, filename, FILENAME_MAX, callee, arg_end);

  if (! r05_empty_hole(eFileName[1], arg_end)) {
    if (R05_DATATAG_CHAR == eFileName[1]->next->tag) {
      r05_builtin_error("very long filename");
    } else {
      r05_recognition_impossible();
    }
  }

  filename[filename_len] = '\0';
  file = fopen(filename, "r");

  arg_begin->tag = R05_DATATAG_FUNCTION;
  if (file != NULL) {
    arg_begin->info.function = &r05f_True;
    if (fclose(file) == EOF) {
      r05_builtin_error_errno("fclose error");
    }
  } else {
    arg_begin->info.function = &r05f_False;
  }

  r05_splice_to_freelist(callee, arg_end);
}


/**
  57. <RemoveFile e.FileName>
        == True ()
        == False (e.Message)
      e.Message ::= s.CHAR*
*/
R05_DEFINE_ENTRY_FUNCTION(RemoveFile, "RemoveFile") {
  struct r05_node *eFileName[2], *left_bracket, *right_bracket;
  char filename[FILENAME_MAX + 1];
  size_t filename_len;
  int res;
  struct r05_function *sign;
  const char *message;

  filename_len =
    r05_read_chars(eFileName, filename, FILENAME_MAX, arg_begin->next, arg_end);

  if (! r05_empty_hole(eFileName[1], arg_end)) {
    if (R05_DATATAG_CHAR == eFileName[1]->next->tag) {
      r05_builtin_error("very long filename");
    } else {
      r05_recognition_impossible();
    }
  }

  filename[filename_len] = '\0';
  errno = 0;
  res = remove(filename);

  if (res == 0) {
    sign = &r05f_True;
    message = "";
  } else {
    sign = &r05f_False;
    message = strerror(errno);
  }

  r05_reset_allocator();
  r05_alloc_function(sign);
  r05_alloc_open_bracket(&left_bracket);
  r05_alloc_string(message);
  r05_alloc_close_bracket(&right_bracket);
  r05_link_brackets(left_bracket, right_bracket);
  r05_splice_from_freelist(arg_begin);
  r05_splice_to_freelist(arg_begin, arg_end);
}


/**
  58. <Implode_Ext s.CHAR*> == s.FUNCTION
*/
R05_DEFINE_ENTRY_FUNCTION(Implodeu_Ext, "Implode_Ext") {
  struct r05_node *func_name = arg_begin->next;
  struct r05_node *current;

  current = func_name->next;
  while (R05_DATATAG_CHAR == current->tag) {
    current = current->next;
  }

  if (current != arg_end) {
    r05_recognition_impossible();
  }

  arg_begin->tag = R05_DATATAG_FUNCTION;
  arg_begin->info.function = implode(func_name->next, arg_end->prev);
  r05_splice_to_freelist(func_name, arg_end);
}


/**
  59. <Explode_Ext s.FUNCTION> == s.CHAR+
*/
ALIAS_DESCRIPTOR(Explodeu_Ext, "Explode_Ext", r05c_Explode)


/**
  60. <TimeElapsed 0?> == s.CHAR+
*/
R05_DEFINE_ENTRY_FUNCTION(TimeElapsed, "TimeElapsed") {
  struct r05_node *func_name = arg_begin->next;
  struct r05_node *maybe_zero = func_name->next;
  double now = r05_time_elapsed();
  char buffer[100];
  static double last_cutoff = 0;

  sprintf(buffer, "%.3f", now - last_cutoff);

  if (
    R05_DATATAG_NUMBER == maybe_zero->tag && 0 == maybe_zero->info.number
    && maybe_zero->next == arg_end
  ) {
    last_cutoff = now;
  } else if (maybe_zero != arg_end) {
    r05_recognition_impossible();
  }

  r05_reset_allocator();
  r05_alloc_string(buffer);
  r05_splice_from_freelist(arg_begin);
  r05_splice_to_freelist(arg_begin, arg_end);
}


/**
  61. <Compare e.ArithmArg> == '-' | '0' | '+'

  Функция возвращает знак разности между аргументами
*/
R05_DEFINE_ENTRY_FUNCTION(Compare, "Compare") {
  struct arithm_arg arg;
  signed result;

  parse_arithm_arg(&arg, arg_begin, arg_end);

  result =
    arg.x.sign < arg.y.sign ? -1 :
    arg.x.sign > arg.y.sign ? +1 : 0;

  if (result == 0) {
    result =
      arg.x.value < arg.y.value ? -1 :
      arg.x.value > arg.y.value ? +1 : 0;

    result *= arg.x.sign;
  }

  arg_begin->tag = R05_DATATAG_CHAR;
  /* Suppress false warning in BCC 5.5.1 */
  arg_begin->info.char_ = (char) (result < 0 ? '-' : result > 0 ? '+' : '0');
  r05_splice_to_freelist(arg_begin->next, arg_end);
}


static r05_number random_digit_in_range(r05_number max);
static r05_number random_digit(void);


/**
  64. <Random s.Len> == e.RandomDigits
      e.RandomDigits ::= s.NUMBER+
      |e.RandomDigits| == ((s.Len != 0) ? s.Len : 1)
*/
R05_DEFINE_ENTRY_FUNCTION(Random, "Random") {
  struct r05_node *callable = arg_begin->next;
  struct r05_node *pcount = callable->next;
  r05_number count;

  if (R05_DATATAG_NUMBER != pcount->tag || pcount->next != arg_end) {
    r05_recognition_impossible();
  }

  count = pcount->info.number;
  count = count > 0 ? count - 1 : 1;
  count = random_digit_in_range(count) + 1;

  r05_reset_allocator();
  while (count > 0) {
    r05_alloc_number(random_digit());
    --count;
  }

  r05_splice_from_freelist(arg_begin);
  r05_splice_to_freelist(arg_begin, arg_end);
}


/**
  65. <RandomDigit s.Max> == s.RandomDigit
      s.RandomDigit, s.Max ::= s.NUMBER
      s.RandomDigit <= s.Max
*/
R05_DEFINE_ENTRY_FUNCTION(RandomDigit, "RandomDigit") {
  struct r05_node *callee = arg_begin->next;
  struct r05_node *pmax = callee->next;
  const r05_number MAX = ~0;
  r05_number max, res;

  if (R05_DATATAG_NUMBER != pmax->tag || pmax->next != arg_end) {
    r05_recognition_impossible();
  }

  max = pmax->info.number;
  if (max != MAX) {
    res = random_digit_in_range(max + 1);
  } else {
    res = random_digit();
  }

  arg_begin->tag = R05_DATATAG_NUMBER;
  arg_begin->info.number = res;
  r05_splice_to_freelist(callee, arg_end);
}


static r05_number random_digit_in_range(r05_number limit) {
  const r05_number MAX = ~0;
  r05_number max_valid;
  r05_number random;

  if (limit == 0) {
    return 0;
  }

  max_valid = MAX - MAX % limit;

  do {
    random = random_digit();
  } while (random >= max_valid);

  return random % limit;
}

/*
  Метод Фибоначчи с запаздываниями.
  См. D. E. Knuth, The Art of Computer Programming,
  Volume 2, chapter 3.2.2, program A
*/
static r05_number random_digit(void) {
  enum { cMinDelay = 24, cMaxDelay = 55 };

  static int init = 0;
  static size_t k = cMaxDelay - 1;
  static size_t j = cMinDelay - 1;
  static r05_number y[cMaxDelay];

  r05_number result;

  if (! init) {
    r05_number seed = (r05_number) time(NULL);
    size_t i;

    for (i = 0; i < cMaxDelay; ++i) {
      seed = seed * 1103515245 + 12345;
      y[i] = seed;
    }

    init = 1;
  }

  result = y[k] = y[k] + y[j];
  k = (k + cMaxDelay - 1) % cMaxDelay;
  j = (j + cMaxDelay - 1) % cMaxDelay;

  return result;
}


/**
  66. <Write s.FileNo e.Expr> == []
*/
R05_DEFINE_ENTRY_FUNCTION(Write, "Write") {
  output_func(arg_begin, arg_end, WRITE);
}


/**
  67. <ListOfBuiltin> == (s.No s.Name s.Type)*

      s.No ::= s.NUMBER
      s.Name ::= s.FUNCTION
      s.Type ::= special | regular
*/
R05_DEFINE_LOCAL_ENUM(special, "special")
R05_DEFINE_LOCAL_ENUM(regular, "regular")


/*
  Чтобы добавить встроенную функцию Рефала-5, нужно раскомментировать
  строчку в функции ListOfBuiltin и реализовать функцию.

  Для удобства чтения и поиска функция должна находиться в месте,
  определяемом её порядковым номером. Например, Lenw (номер 17) должна
  находиться между Get (14) и Mod (19).

  В комментарии перед функцией должен быть кратко описан её тип в стиле
  принятой здесь нотации.

  Функции с номерами 42 ("Imp$$") и 43 ("Stop$$") определять не нужно,
  поскольку они — деталь внутренней реализации Рефала-5 (версии PZ).
*/

R05_DECLARE_ENTRY_FUNCTION(ListOfBuiltin);

static struct builtin_info s_builtin_info[] = {
#define ALLOC_BUILTIN(id, function, type) \
  { id, &r05f_ ## function, &r05f_ ## type },

  ALLOC_BUILTIN(1, Mu, special)
  ALLOC_BUILTIN(2, Add, regular)
  ALLOC_BUILTIN(3, Arg, regular)
  ALLOC_BUILTIN(4, Br, regular)
  ALLOC_BUILTIN(5, Card, regular)
  ALLOC_BUILTIN(6, Chr, regular)
  ALLOC_BUILTIN(7, Cp, regular)
  ALLOC_BUILTIN(8, Dg, regular)
  /* ALLOC_BUILTIN(9, Dgall, regular) */
  ALLOC_BUILTIN(10, Div, regular)
  ALLOC_BUILTIN(11, Divmod, regular)
  ALLOC_BUILTIN(12, Explode, regular)
  ALLOC_BUILTIN(13, First, regular)
  ALLOC_BUILTIN(14, Get, regular)
  ALLOC_BUILTIN(15, Implode, regular)
  /* ALLOC_BUILTIN(16, Last, regular) */
  ALLOC_BUILTIN(17, Lenw, regular)
  ALLOC_BUILTIN(18, Lower, regular)
  ALLOC_BUILTIN(19, Mod, regular)
  ALLOC_BUILTIN(20, Mul, regular)
  ALLOC_BUILTIN(21, Numb, regular)
  ALLOC_BUILTIN(22, Open, regular)
  ALLOC_BUILTIN(23, Ord, regular)
  ALLOC_BUILTIN(24, Print, regular)
  ALLOC_BUILTIN(25, Prout, regular)
  ALLOC_BUILTIN(26, Put, regular)
  ALLOC_BUILTIN(27, Putout, regular)
  ALLOC_BUILTIN(28, Rp, regular)
  ALLOC_BUILTIN(29, Step, regular)
  ALLOC_BUILTIN(30, Sub, regular)
  ALLOC_BUILTIN(31, Symb, regular)
  ALLOC_BUILTIN(32, Time, regular)
  ALLOC_BUILTIN(33, Type, regular)
  ALLOC_BUILTIN(34, Upper, regular)
  /* ALLOC_BUILTIN(35, Sysfun, regular) */
  /* ALLOC_BUILTIN(42, Impd_d_, regular) */
  /* ALLOC_BUILTIN(43, Stopd_d_, regular) */
  { 44, &r05f_, &r05f_regular },
  /* ALLOC_BUILTIN(45, Freeze, regular) */
  /* ALLOC_BUILTIN(46, Freezer, regular) */
  /* ALLOC_BUILTIN(47, Dn, regular) */
  ALLOC_BUILTIN(48, Up, special)
  ALLOC_BUILTIN(49, Evm_met, special)
  ALLOC_BUILTIN(50, Residue, special)
  ALLOC_BUILTIN(51, GetEnv, regular)
  ALLOC_BUILTIN(52, System, regular)
  ALLOC_BUILTIN(53, Exit, regular)
  ALLOC_BUILTIN(54, Close, regular)
  ALLOC_BUILTIN(55, ExistFile, regular)
  /* ALLOC_BUILTIN(56, GetCurrentDirectory, regular) */
  ALLOC_BUILTIN(57, RemoveFile, regular)
  ALLOC_BUILTIN(58, Implodeu_Ext, regular)
  ALLOC_BUILTIN(59, Explodeu_Ext, regular)
  ALLOC_BUILTIN(60, TimeElapsed, regular)
  ALLOC_BUILTIN(61, Compare, regular)
  /* ALLOC_BUILTIN(62, DeSysfun, regular) */
  /* ALLOC_BUILTIN(63, XMLParse, regular) */
  ALLOC_BUILTIN(64, Random, regular)
  ALLOC_BUILTIN(65, RandomDigit, regular)
  ALLOC_BUILTIN(66, Write, regular)
  ALLOC_BUILTIN(67, ListOfBuiltin, regular)
  /* ALLOC_BUILTIN(68, SizeOf, regular) */
  /* ALLOC_BUILTIN(69, GetPID, regular) */
  /* ALLOC_BUILTIN(70, int4fab_1, regular) */
  /* ALLOC_BUILTIN(71, GetPPID, regular) */

#undef ALLOC_BUILTIN

  { 0, NULL, NULL },
};


R05_DEFINE_ENTRY_FUNCTION(ListOfBuiltin, "ListOfBuiltin") {
  struct r05_node *callee = arg_begin->next;
  struct r05_node *left_bracket, *right_bracket;
  struct builtin_info *info;

  if (callee->next != arg_end) {
    r05_recognition_impossible();
  }

  r05_reset_allocator();
  for (info = s_builtin_info; info->function != NULL; ++info) {
    r05_alloc_open_bracket(&left_bracket);
    r05_alloc_number(info->id);
    r05_alloc_function(info->function);
    r05_alloc_function(info->type);
    r05_alloc_close_bracket(&right_bracket);
    r05_link_brackets(left_bracket, right_bracket);
  }

  r05_splice_from_freelist(arg_begin);
  r05_splice_to_freelist(arg_begin, arg_end);
};

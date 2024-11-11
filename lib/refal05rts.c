#ifdef LAMELIB
  #define LAMESTD_IMPLEMENTATION
  #include "lamestd.h"
  #undef LAMESTD_IMPLEMENTATION
#endif /* LAMELIB */


#ifndef LAMELIB
  #include <assert.h>
  #include <errno.h>
  #include <limits.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <time.h>
#endif /* LAMELIB */

#include <limits.h>
#include "refal05rts.h"

#ifndef R05_SHOW_DEBUG
#define R05_SHOW_DEBUG 0
#endif  /* ifdef R05_SHOW_DEBUG */


#define EXIT_CODE_RECOGNITION_IMPOSSIBLE 201
#define EXIT_CODE_NO_MEMORY 202
#define EXIT_CODE_BUILTIN_ERROR 203


#ifdef R05_CLOCK_SKIP

static clock_t fast_clock(void) {
  static clock_t prev = 0;
  static int skip = 0;

  if (skip++ % R05_CLOCK_SKIP == 0) {
    prev = clock();
  }

  return prev;
}

#define clock() fast_clock()

#endif  /* ifdef R05_CLOCK_SKIP */


#define STATIC_ASSERT(message, expr) \
  int message : ((expr) ? +1 : -1)

struct static_asserts {
  STATIC_ASSERT(r05_number_is_32bit, sizeof(r05_number) * CHAR_BIT == 32);
};


/*==============================================================================
   Операции сопоставления с образцом
==============================================================================*/


#define equal_functions(left, right) \
  (strcmp((left)->name, (right)->name) == 0)


#define match_symbol_func(type, side, dir, param_type, tag_suf, field) \
  int r05_ ## type ## _ ## side( \
    struct r05_node **res, struct r05_node *left, struct r05_node *right, \
    param_type value \
  ) { \
    *res = side = side->dir; \
    \
    return left != right && R05_DATATAG_ ## tag_suf == side->tag \
      && equal_ ## type ## s(side->info.field, value); \
  }


#define match_symbol_funcs(type, param_type, tag_suf, field) \
  match_symbol_func(type, left, next, param_type, tag_suf, field) \
  match_symbol_func(type, right, prev, param_type, tag_suf, field)


#define equal_chars(x, y) ((x) == (y))
#define equal_numbers(x, y) ((x) == (y))


match_symbol_funcs(function, struct r05_function *, FUNCTION, function);
match_symbol_funcs(char, char, CHAR, char_);
match_symbol_funcs(number, r05_number, NUMBER, number);


int r05_brackets_left(
  struct r05_node **brackets, struct r05_node *left, struct r05_node *right
) {
  left = left->next;

  if (left != right && R05_DATATAG_OPEN_BRACKET == left->tag) {
    brackets[0] = left;
    brackets[1] = left->info.link;

    return 1;
  } else {
    return 0;
  }
}


int r05_brackets_right(
  struct r05_node **brackets, struct r05_node *left, struct r05_node *right
) {
  right = right->prev;

  if (left != right && R05_DATATAG_CLOSE_BRACKET == right->tag) {
    brackets[0] = right->info.link;
    brackets[1] = right;

    return 1;
  } else {
    return 0;
  }
}


#define is_open_bracket(node) (R05_DATATAG_OPEN_BRACKET == (node)->tag)
#define is_close_bracket(node) (R05_DATATAG_CLOSE_BRACKET == (node)->tag)

int r05_svar_left(
  struct r05_node **svar, struct r05_node *left, struct r05_node *right
) {
  *svar = left = left->next;

  return left != right && ! is_open_bracket(left);
}


int r05_svar_right(
  struct r05_node **svar, struct r05_node *left, struct r05_node *right
) {
  *svar = right = right->prev;

  return left != right && ! is_close_bracket(right);
}


int r05_tvar_left(
  struct r05_node **tvar, struct r05_node *left, struct r05_node *right
) {
  left = left->next;

  if (left == right) {
    return 0;
  } else {
    tvar[0] = left;
    tvar[1] = is_open_bracket(left) ? left->info.link : left;
    return 1;
  }
}


int r05_tvar_right(
  struct r05_node **tvar, struct r05_node *left, struct r05_node *right
) {
  right = right->prev;

  if (left == right) {
    return 0;
  } else {
    tvar[0] = is_close_bracket(right) ? right->info.link : right;
    tvar[1] = right;
    return 1;
  }
}


static int equal_nodes(struct r05_node *node1, struct r05_node *node2) {
  if (node1->tag != node2->tag) {
    return 0;
  } else {
    switch (node1->tag) {
      case R05_DATATAG_CHAR:
        return (node1->info.char_ == node2->info.char_);

      case R05_DATATAG_NUMBER:
        return (node1->info.number == node2->info.number);

      case R05_DATATAG_FUNCTION:
        return equal_functions(node1->info.function, node2->info.function);

      /*
        Сведения о связях между скобками нужны для других целей,
        здесь же нам важны только их одновременные появления.
      */
      case R05_DATATAG_OPEN_BRACKET:
      case R05_DATATAG_CLOSE_BRACKET:
        return 1;

      /*
        Данная функция предназначена только для использования функциями
        сопоставления с образцом. Поэтому других узлов мы тут не ожидаем.
      */
      default:
        r05_switch_default_violation(node1->tag);
#ifndef R05_NORETURN_DEFINED
        return 0;
#endif
    }
  }
}


int r05_repeated_svar_left(
  struct r05_node **svar, struct r05_node *left, struct r05_node *right,
  struct r05_node **svar_sample
) {
  *svar = left = left->next;

  return left != right && equal_nodes(left, *svar_sample);
}

int r05_repeated_svar_right(
  struct r05_node **svar, struct r05_node *left, struct r05_node *right,
  struct r05_node **svar_sample
) {
  *svar = right = right->prev;

  return left != right && equal_nodes(right, *svar_sample);
}


static void add_match_repeated_tvar_time(clock_t duration);
static void add_match_repeated_evar_time(clock_t duration);

int r05_repeated_tevar_left(
  struct r05_node **tevar, struct r05_node *left, struct r05_node *right,
  struct r05_node **tevar_sample, char type
) {
  clock_t start_match = clock();
  struct r05_node *current = left->next;
  struct r05_node *limit = right;
  struct r05_node *cur_sample = tevar_sample[0];
  struct r05_node *limit_sample = tevar_sample[1]->next;

  while (
    /* порядок условий важен */
    current != limit && cur_sample != limit_sample
      && equal_nodes(current, cur_sample)
  ) {
    cur_sample = cur_sample->next;
    current = current->next;
  }

  (type == 't' ? add_match_repeated_tvar_time : add_match_repeated_evar_time)(
    clock() - start_match
  );

  /*
    Здесь current == limit || cur_sample == limit_sample
      || ! equal_nodes(current, cur_sample)
  */
  if (cur_sample == limit_sample) {
    /* Это нормальное завершение цикла — вся образцовая переменная проверена */
    tevar[0] = left->next;
    tevar[1] = current->prev;
    return 1;
  } else {
    return 0;
  }
}


int r05_repeated_tevar_right(
  struct r05_node **tevar, struct r05_node *left, struct r05_node *right,
  struct r05_node **tevar_sample, char type
) {
  clock_t start_match = clock();
  struct r05_node *current = right->prev;
  struct r05_node *limit = left;
  struct r05_node *cur_sample = tevar_sample[1];
  struct r05_node *limit_sample = tevar_sample[0]->prev;

  while (
    /* порядок условий важен */
    current != limit && cur_sample != limit_sample
      && equal_nodes(current, cur_sample)
  ) {
    current = current->prev;
    cur_sample = cur_sample->prev;
  }

  (type == 't' ? add_match_repeated_tvar_time : add_match_repeated_evar_time)(
    clock() - start_match
  );

  /*
    Здесь current == limit || cur_sample == limit_sample
      || ! equal_nodes(current, cur_sample)
  */
  if (cur_sample == limit_sample) {
    /* Это нормальное завершение цикла — вся образцовая переменная проверена */
    tevar[0] = current->next;
    tevar[1] = right->prev;
    return 1;
  } else {
    return 0;
  }
}


int r05_open_evar_advance(struct r05_node **evar, struct r05_node *right) {
  struct r05_node *term[2];

  if (r05_tvar_left(term, evar[1], right)) {
    evar[1] = term[1];
    return 1;
  } else {
    return 0;
  }
}


size_t r05_read_chars(
  struct r05_node **char_interval, char buffer[], size_t buflen,
  struct r05_node *left, struct r05_node *right
) {
  size_t nread = 0;
  struct r05_node *cur = char_interval[0] = left->next;
  while (nread < buflen && cur != right && R05_DATATAG_CHAR == cur->tag) {
    buffer[nread] = cur->info.char_;
    ++nread;
    cur = cur->next;
  }

  char_interval[1] = cur->prev;
  return nread;
}


/*==============================================================================
   Распределитель памяти
==============================================================================*/

static struct r05_node s_end_free_list;

static struct r05_node s_begin_free_list = {
  0, &s_end_free_list, R05_DATATAG_ILLEGAL, { '\0' }
};
static struct r05_node s_end_free_list = {
  &s_begin_free_list, 0, R05_DATATAG_ILLEGAL, { '\0' }
};

static struct r05_node *s_free_ptr = &s_end_free_list;

static size_t s_memory_use = 0;


enum { CHUNK_SIZE = 251 };

struct memory_chunk {
  struct r05_node elems[CHUNK_SIZE];
  struct memory_chunk *next;
};

static struct memory_chunk *s_pool = NULL;


static void weld(struct r05_node *left, struct r05_node *right) {
  assert(left != 0 && right != 0);

  left->next = right;
  right->prev = left;
}


static int create_nodes(void) {
  size_t i;
  struct memory_chunk *chunk;

#ifdef R05_MEMORY_LIMIT
  if (s_memory_use >= R05_MEMORY_LIMIT) {
    return 0;
  }
#endif  /* ifdef R05_MEMORY_LIMIT */

  chunk = malloc(sizeof(*chunk));

  if (chunk == 0) {
    return 0;
  }

  chunk->next = s_pool;
  s_pool = chunk;

  for (i = 0; i < CHUNK_SIZE - 1; ++i) {
    chunk->elems[i].next = &chunk->elems[i + 1];
    chunk->elems[i + 1].prev = &chunk->elems[i];
    chunk->elems[i].tag = R05_DATATAG_ILLEGAL;
  }
  chunk->elems[CHUNK_SIZE - 1].tag = R05_DATATAG_ILLEGAL;

  weld(s_end_free_list.prev, &chunk->elems[0]);
  weld(&chunk->elems[CHUNK_SIZE - 1], &s_end_free_list);

  s_free_ptr = &chunk->elems[0];
  s_memory_use += CHUNK_SIZE;

  return 1;
}


static void make_dump(void);

static void ensure_memory(void) {
  if ((s_free_ptr == &s_end_free_list) && ! create_nodes()) {
    fprintf(stderr, "\nNO MEMORY\n\n");
    make_dump();

    r05_exit(EXIT_CODE_NO_MEMORY);
  }
}


static void free_memory(void) {
  #ifdef LAMELIB
    lame_pool_free();
  #endif /* LAMELIB */

  while (s_pool != 0) {
    struct memory_chunk *next = s_pool->next;
    free(s_pool);
    s_pool = next;
  }

#ifdef R05_SHOW_STAT
  fprintf(
    stderr,
    "Memory used %lu nodes, %lu * %lu = %lu bytes\n",
    (unsigned long int) s_memory_use,
    (unsigned long int) s_memory_use,
    (unsigned long int) sizeof(struct r05_node),
    (unsigned long int) (s_memory_use * sizeof(struct r05_node))
  );
#endif  /* R05_SHOW_STAT */
}


/*==============================================================================
   Операции построения результата
==============================================================================*/

static void start_building_result(void);

void r05_reset_allocator(void) {
  start_building_result();
  s_free_ptr = s_begin_free_list.next;
}


struct r05_node *r05_alloc_node(enum r05_datatag tag) {
  struct r05_node *node;

  ensure_memory();
  node = s_free_ptr;
  s_free_ptr = s_free_ptr->next;
  node->tag = tag;
  return node;
}


struct r05_node *r05_insert_pos(void) {
  ensure_memory();
  return s_free_ptr;
}


static void list_splice(
  struct r05_node *res, struct r05_node *begin, struct r05_node *end
) {
  assert ((begin == 0) == (end == 0));

  if (begin != 0) {
    struct r05_node *prev_res = res->prev;
    struct r05_node *prev_begin = begin->prev;
    struct r05_node *next_end = end->next;

    weld(prev_res, begin);
    weld(end, res);
    weld(prev_begin, next_end);
  }
}


static void add_copy_tevar_time(clock_t duration);

void r05_alloc_tevar(struct r05_node **sample) {
  struct r05_node *p, *limit;
  clock_t start_copy_time = clock();

  struct r05_node *bracket_stack = 0;

  for (p = sample[0], limit = sample[1]->next; p != limit; p = p->next) {
    struct r05_node *copy = r05_alloc_node(p->tag);

    if (is_open_bracket(copy)) {
      copy->info.link = bracket_stack;
      bracket_stack = copy;
    } else if (is_close_bracket(copy)) {
      struct r05_node *open_cobracket = bracket_stack;

      assert(bracket_stack != 0);
      bracket_stack = bracket_stack->info.link;
      r05_link_brackets(open_cobracket, copy);
    } else {
      copy->info = p->info;
    }
  }

  assert(bracket_stack == 0);

  add_copy_tevar_time(clock() - start_copy_time);
}


void r05_alloc_chars(const char buffer[], size_t len) {
  size_t i;
  for (i = 0; i < len; ++i) {
    r05_alloc_char(buffer[i]);
  }
}


void r05_alloc_string(const char *string) {
  for (/* пусто */; *string != '\0'; ++string) {
    r05_alloc_char(*string);
  }
}


static struct r05_node *s_stack_ptr;

void r05_push_stack(struct r05_node *call_bracket) {
  call_bracket->info.link = s_stack_ptr;
  s_stack_ptr = call_bracket;
}


void r05_link_brackets(struct r05_node *left, struct r05_node *right) {
  left->info.link = right;
  right->info.link = left;
}


void r05_correct_evar(struct r05_node **evar) {
  if (evar[1]->next == evar[0]) {
    evar[0] = 0;
    evar[1] = 0;
  }
}


void r05_splice_tevar(struct r05_node *res, struct r05_node **tevar) {
  list_splice(res, tevar[0], tevar[1]);
}


void r05_splice_to_freelist(struct r05_node *begin, struct r05_node *end) {
  list_splice(s_free_ptr, begin, end);
}


void r05_splice_from_freelist(struct r05_node *pos) {
  if (s_free_ptr != s_begin_free_list.next) {
    list_splice(pos, s_begin_free_list.next, s_free_ptr->prev);
  }
}


void r05_enum_function_code(struct r05_node *begin, struct r05_node *end) {
  (void) begin;
  (void) end;
  r05_recognition_impossible();
}


/*==============================================================================
   Внутренний профилировщик
==============================================================================*/

static clock_t s_start_program_time;
static clock_t s_start_pattern_match_time;
static clock_t s_total_pattern_match_time;
static clock_t s_start_building_result_time;
static clock_t s_total_building_result_time;
static clock_t s_total_copy_tevar_time;
static clock_t s_total_match_repeated_tvar_time;
static clock_t s_total_match_repeated_evar_time;
static clock_t s_start_e_loop;
static clock_t s_total_e_loop;
static clock_t s_total_match_repeated_tvar_time_outside_e;
static clock_t s_total_match_repeated_evar_time_outside_e;


static int s_in_generated;
static int s_in_e_loop;


#ifdef R05_PROFILER
static struct r05_function *s_profiled_functions;
#endif  /* R05_PROFILER */


static void start_profiler(void) {
  s_start_program_time = clock();
  s_in_generated = 0;
}


static void start_building_result(void) {
  if (s_in_generated) {
    clock_t pattern_match;

    s_start_building_result_time = clock();
    pattern_match = s_start_building_result_time - s_start_pattern_match_time;
    s_total_pattern_match_time += pattern_match;

    if (s_in_e_loop > 0) {
      s_total_e_loop += (s_start_building_result_time - s_start_e_loop);
      s_in_e_loop = 0;
    }
  }
}


static void after_step(void) {
  if (s_in_generated) {
    clock_t building_result = clock() - s_start_building_result_time;
    s_total_building_result_time += building_result;
  }

  assert(s_in_e_loop == 0);

  s_in_generated = 0;
  s_in_e_loop = 0;
}


static void add_copy_tevar_time(clock_t duration) {
  s_total_copy_tevar_time += duration;
}

static void add_match_repeated_tvar_time(clock_t duration) {
  if (s_in_e_loop) {
    s_total_match_repeated_tvar_time += duration;
  } else {
    s_total_match_repeated_tvar_time_outside_e += duration;
  }
}

static void add_match_repeated_evar_time(clock_t duration) {
  if (s_in_e_loop) {
    s_total_match_repeated_evar_time += duration;
  } else {
    s_total_match_repeated_evar_time_outside_e += duration;
  }
}

#ifdef R05_SHOW_STAT
struct time_item {
  const char *name;
  clock_t counter;
};

static int reverse_compare(const void *left_void, const void *right_void) {
  const struct time_item *left = left_void;
  const struct time_item *right = right_void;

  if (left->counter > right->counter) {
    return -1;
  } else if (left->counter < right->counter) {
    return +1;
  } else {
    return 0;
  }
}

#ifdef R05_PROFILER
static void print_functions_profile(double full_time_sec);
#endif  /* R05_PROFILER */

static void print_profile(void) {
  const double cfSECS_PER_CLOCK = 1.0 / CLOCKS_PER_SEC;

  clock_t full_time;
  clock_t refal_time;
  clock_t repeated_time;
  clock_t eloop_time;
  clock_t repeated_time_outside_e;

  enum { nItems = 11 };
  struct time_item items[nItems];

  size_t i;

  full_time = clock() - s_start_program_time;
  refal_time = s_total_pattern_match_time + s_total_building_result_time;
  repeated_time =
    s_total_match_repeated_tvar_time + s_total_match_repeated_evar_time;
  eloop_time = s_total_e_loop - repeated_time;
  repeated_time_outside_e =
    s_total_match_repeated_tvar_time_outside_e
    + s_total_match_repeated_evar_time_outside_e;

  /*
    Ложное предупреждение BCC 5.5:
    компилятор не допускает инициализацию структур и массивов переменными.
  */
  items[0].name = "\nTotal program time";
  items[0].counter = full_time;
  items[1].name = "Builtin time";
  items[1].counter = full_time - refal_time;
  items[2].name = "(Total refal time)";
  items[2].counter = refal_time;
  items[3].name = "Linear pattern time";
  items[3].counter = s_total_pattern_match_time
    - (eloop_time + repeated_time + repeated_time_outside_e);
  items[4].name = "Linear result time";
  items[4].counter = s_total_building_result_time - s_total_copy_tevar_time;
  items[5].name = "Open e-loop time (clear)";
  items[5].counter = eloop_time;
  items[6].name = "Repeated e-var match time (inside e-loops)";
  items[6].counter = s_total_match_repeated_evar_time;
  items[7].name = "Repeated e-var match time (outside e-loops)";
  items[7].counter = s_total_match_repeated_tvar_time_outside_e;
  items[8].name = "Repeated t-var match time (inside e-loops)";
  items[8].counter = s_total_match_repeated_tvar_time;
  items[9].name = "Repeated t-var match time (outside e-loops)";
  items[9].counter = s_total_match_repeated_tvar_time_outside_e;
  items[10].name = "t- and e-var copy time";
  items[10].counter = s_total_copy_tevar_time;

  qsort(items, nItems, sizeof(items[0]), reverse_compare);

  for (i = 0; i < nItems; ++i) {
    unsigned long value = items[i].counter;

    if (value > 0) {
      double percent = (full_time != 0) ? 100.0 * value / full_time : 0.0;
      fprintf(
        stderr, "%s: %.3f seconds (%.1f %%).\n",
        items[i].name, value * cfSECS_PER_CLOCK, percent
      );
    }
  }

#ifdef R05_PROFILER
  print_functions_profile(full_time * cfSECS_PER_CLOCK);
#endif  /* R05_PROFILER */
}

#ifdef R05_PROFILER
/* предобъявление, без инициализатора */
static unsigned long s_step_counter;

static void print_functions_profile(double full_time_sec) {
  double mean_step_time = full_time_sec / s_step_counter;
  struct r05_function *func, *sorted = NULL;
  FILE *profile;
  double increment = 0;
  int no = 1;

  while (s_profiled_functions != NULL) {
    struct r05_function **parent;

    func = s_profiled_functions;
    s_profiled_functions = func->next;
    parent = &sorted;
    while (*parent != NULL && (*parent)->seconds > func->seconds) {
      parent = &(*parent)->next;
    }
    func->next = *parent;
    *parent = func;
  }

  s_profiled_functions = sorted;

  // profile = fopen("__profile-05.txt", "w");
  profile = stderr;
  // if (profile == NULL) {
  //   fprintf(stderr, "Can't open '__profile-05.txt' for writting.\n");
  //   fprintf(stderr, "Profile will be written to stderr.\n\n");
  //   profile = stderr;
  // }

  fprintf(profile, "Total steps: %lu\n", s_step_counter);
  fprintf(profile, "Total time: %.3f secs\n", full_time_sec);
  fprintf(profile, "Mean step time: %.3f us\n\n", mean_step_time * 1e6);
  for (
    func = s_profiled_functions;
    func != NULL && func->seconds > 0;
    func = func->next, no++
  ) {
    double percent = func->seconds / full_time_sec * 100.0;
    increment += percent;
    fprintf(
      profile,
      "%3d. %-45s %10.3f ms (%6.2f %% += %6.2f %%), %10lu calls, %10.3f steps\n",
      no, func->name, func->seconds * 1e3, percent, increment,
      func->calls, func->seconds / func->calls / mean_step_time
    );
  }
  if (profile != stderr) {
    fclose(profile);
  }
}
#endif  /* R05_PROFILER */

#endif  /* R05_SHOW_STAT */

static void end_profiler(void) {
  after_step();

#ifdef R05_SHOW_STAT
  print_profile();
#endif  /* R05_SHOW_STAT */
}


void r05_start_e_loop(void) {
  assert(s_in_generated);

  if (s_in_e_loop++ == 0) {
    s_start_e_loop = clock();
  }
}


void r05_this_is_generated_function(void) {
  s_start_pattern_match_time = clock();
  s_in_generated = 1;
}


void r05_stop_e_loop(void) {
  assert(s_in_generated);

  if (--s_in_e_loop == 0) {
    s_total_e_loop += (clock() - s_start_e_loop);
  }
}


double r05_time_elapsed(void) {
  return (clock() - s_start_program_time) / (double) CLOCKS_PER_SEC;
}


/*==============================================================================
   Рефал-машина
==============================================================================*/


static struct r05_node s_end_view_field;

static struct r05_node s_begin_view_field = {
  0, &s_end_view_field, R05_DATATAG_ILLEGAL, { '\0' }
};
static struct r05_node s_end_view_field = {
  &s_begin_view_field, 0, R05_DATATAG_ILLEGAL, { '\0' }
};

static struct r05_node *s_stack_ptr = NULL;

static unsigned long s_step_counter = 0;


static struct r05_node *pop_stack(void) {
  struct r05_node *res = s_stack_ptr;
  s_stack_ptr = s_stack_ptr->info.link;
  return res;
}

static int empty_stack(void) {
  return (s_stack_ptr == 0);
}


extern struct r05_function r05f_Go;

static void init_view_field(void) {
  struct r05_node *open, *close;

  r05_reset_allocator();
  r05_alloc_open_call(&open);
  r05_alloc_function(&r05f_Go);
  r05_alloc_close_call(&close);
  r05_push_stack(close);
  r05_push_stack(open);
  r05_splice_from_freelist(s_begin_view_field.next);
}

static struct r05_node *s_arg_begin;
static struct r05_node *s_arg_end;

static void main_loop(void) {
#ifdef R05_PROFILER
  clock_t start_step = clock(), now;
#endif  /* R05_PROFILER */

  while (! empty_stack()) {
    struct r05_node *function;
    struct r05_function *callee;

    s_arg_begin = pop_stack();
    assert(! empty_stack());
    s_arg_end = pop_stack();

#if R05_SHOW_DEBUG
    if (s_step_counter >= (unsigned long) R05_SHOW_DEBUG) {
      make_dump();
    }
#endif  /* R05_SHOW_DEBUG */

    function = s_arg_begin->next;
    if (R05_DATATAG_FUNCTION == function->tag) {
      callee = function->info.function;
      (callee->ptr)(s_arg_begin, s_arg_end);
    } else {
      r05_recognition_impossible();
    }
    after_step();

#ifdef R05_PROFILER
    now = clock();
    if (callee->next == 0) {
      callee->next = s_profiled_functions;
      s_profiled_functions = callee;
    }
    callee->seconds += (now - start_step) / (double) CLOCKS_PER_SEC;
    callee->calls += 1;
    start_step = now;
#endif  /* R05_PROFILER */

    ++ s_step_counter;
  }
}


static void print_indent(int level) {
  enum { cPERIOD = 4 };
  int i;

  putc('\n', stderr);

  if (level < 0) {
    putc('!', stderr);
    return;
  }

  for (i = 0; i < level; ++i) {
    /* Каждые cPERIOD позиций вместо пробела ставим точку. */
    int put_marker = ((i % cPERIOD) == (cPERIOD - 1));

    const char cSpace =  ' ';
    const char cMarker = '.';

    putc((put_marker ? cMarker : cSpace), stderr);
  }
}


static void print_seq(struct r05_node *begin, struct r05_node *end) {
  enum {
    cStateView = 100,
    cStateString,
    cStateFinish
  } state = cStateView;

  int indent = 0;
  int after_bracket = 0;
  int reset_after_bracket = 1;

  while ((state != cStateFinish) && end->next != begin) {
    if (reset_after_bracket) {
      after_bracket = 0;
      reset_after_bracket = 0;
    }

    if (after_bracket) {
      reset_after_bracket = 1;
    }

    switch (state) {
      case cStateView:
        switch (begin->tag) {
          case R05_DATATAG_ILLEGAL:
            if (0 == begin->prev) {
              fprintf(stderr, "[FIRST] ");
            } else if (0 == begin->next) {
              fprintf(stderr, "\n[LAST]");
              state = cStateFinish;
            } else {
              fprintf(stderr, "\n[NONE]");
            }
            begin = begin->next;
            continue;

          case R05_DATATAG_CHAR:
            state = cStateString;
            fprintf(stderr, "\'");
            continue;

          case R05_DATATAG_NUMBER:
            fprintf(stderr, "%u ", begin->info.number);
            begin = begin->next;
            continue;

          case R05_DATATAG_FUNCTION:
            fprintf(stderr, "%s ", begin->info.function->name);
            begin = begin->next;
            continue;

          case R05_DATATAG_OPEN_BRACKET:
            if (! after_bracket) {
              print_indent(indent);
            }
            ++indent;
            after_bracket = 1;
            reset_after_bracket = 0;
            fprintf(stderr, "(");
            begin = begin->next;
            continue;

          case R05_DATATAG_CLOSE_BRACKET:
            --indent;
            fprintf(stderr, ")");
            begin = begin->next;
            continue;

          case R05_DATATAG_OPEN_CALL:
            if (! after_bracket) {
              print_indent(indent);
            }
            ++indent;
            after_bracket = 1;
            reset_after_bracket = 0;
            fprintf(stderr, "<");
            begin = begin->next;
            continue;

          case R05_DATATAG_CLOSE_CALL:
            --indent;
            fprintf(stderr, ">");
            begin = begin->next;
            continue;

          default:
            r05_switch_default_violation(begin->tag);
        }

      case cStateString:
        switch (begin->tag) {
          case R05_DATATAG_CHAR: {
            unsigned char ch = begin->info.char_;
            switch (ch) {
              case '(': case ')':
              case '<': case '>':
                fprintf(stderr, "\\%c", ch);
                break;

              case '\n':
                fprintf(stderr, "\\n");
                break;

              case '\t':
                fprintf(stderr, "\\t");
                break;

              case '\\':
                fprintf(stderr, "\\\\");
                break;

              case '\'':
                fprintf(stderr, "\\\'");
                break;

              default:
                if (ch < '\x20') {
                  fprintf(stderr, "\\x%02x", ch);
                } else {
                  fprintf(stderr, "%c", ch);
                }
                break;
              }
              begin = begin->next;
              continue;
            }

          default:
            state = cStateView;
            fprintf(stderr, "\' ");
            continue;
        }

      case cStateFinish:
        continue;

      default:
        r05_switch_default_violation(state);
    }
  }

  if (cStateString == state) {
    fprintf(stderr, "\'");
  }
}


static void dump_buried(void);

static void make_dump(void) {
  fprintf(stderr, "\nSTEP NUMBER %lu\n", s_step_counter);
  fprintf(stderr, "\nPRIMARY ACTIVE EXPRESSION:\n");
  print_seq(s_arg_begin, s_arg_end);
  fprintf(stderr, "\nVIEW FIELD:\n");
  print_seq(&s_begin_view_field, &s_end_view_field);

  dump_buried();

#ifdef R05_DUMP_FREE_LIST
  fprintf(stderr, "\nFREE LIST:\n");
  print_seq(&s_begin_free_list, &s_end_free_list);
#endif  /* ifdef R05_DUMP_FREE_LIST */

  fprintf(stderr,"\nEnd dump\n");
  fflush(stderr);
}


R05_NORETURN void r05_exit(int retcode) {
  dump_buried();
  fflush(stderr);
  fflush(stdout);
  end_profiler();

#ifdef R05_SHOW_STAT
  fprintf(stderr, "Step count %lu\n", s_step_counter);
#endif  /* R05_SHOW_STAT */

  free_memory();
  fflush(stdout);

  exit(retcode);
}


R05_NORETURN void r05_recognition_impossible(void) {
  fprintf(stderr, "\nRECOGNITION IMPOSSIBLE\n\n");
  make_dump();
  r05_exit(EXIT_CODE_RECOGNITION_IMPOSSIBLE);
}


R05_NORETURN void r05_builtin_error(const char *message) {
  fprintf(stderr, "\nBUILTIN FUNCTION ERROR: %s\n\n", message);
  make_dump();
  r05_exit(EXIT_CODE_RECOGNITION_IMPOSSIBLE);
}


R05_NORETURN void r05_builtin_error_errno(const char *message) {
  fprintf(
    stderr, "\nBUILTIN FUNCTION ERROR: %s\n(errno = %d: %s)\n\n",
    message, errno, strerror(errno)
  );
  make_dump();
  r05_exit(EXIT_CODE_RECOGNITION_IMPOSSIBLE);
}


static char **s_argv = 0;
static int s_argc = 0;

const char *r05_arg(int no) {
  if (no < s_argc) {
    return s_argv[no];
  } else {
    return "";
  }
}


R05_NORETURN void r05_switch_default_violation_impl(
  const char *expr, long value, const char *file, int line
) {
  fprintf(stderr, "%s:%d:SWITCH DEFAULT VIOLATION\n", file, line);
  fprintf(stderr, "    expression %s -> %ld is not handled\n", expr, value);
  abort();
}


/*==============================================================================
   Копилка
==============================================================================*/


static struct r05_node s_end_buried;

static struct r05_node s_begin_buried = {
  0, &s_end_buried, R05_DATATAG_ILLEGAL, { '\0' }
};
static struct r05_node s_end_buried = {
  &s_begin_buried, 0, R05_DATATAG_ILLEGAL, { '\0' }
};


struct buried_query {
  struct r05_node *left_bracket;
  struct r05_node *right_bracket;
  struct r05_node *value[2];
};

static int buried_query(struct buried_query *res, struct r05_node *key[]) {
  struct r05_node *buried_begin = s_begin_buried.next;
  struct r05_node *left_bracket, *right_bracket, *eq;
  int found = 0;

  while (buried_begin != &s_end_buried && ! found) {
    struct r05_node *rep_key[2];

    left_bracket = buried_begin;
    right_bracket = left_bracket->info.link;

    found = r05_repeated_evar_left(rep_key, left_bracket, right_bracket, key)
      && r05_char_left(&eq, rep_key[1], right_bracket, '=');

    buried_begin = right_bracket->next;
  }

  if (found) {
    res->left_bracket = left_bracket;
    res->right_bracket = right_bracket;
    res->value[0] = eq->next;
    res->value[1] = right_bracket->prev;
  }

  return found;
}


enum brrp_behavior { BRRP_BR, BRRP_RP };

static void brrp_impl(
  struct r05_node *arg_begin, struct r05_node *arg_end,
  enum brrp_behavior behavior
) {
  struct r05_node *callee = arg_begin->next;
  struct r05_node *key[2], *eq;

  key[0] = callee->next;
  key[1] = key[0]->prev;
  do {
    if (r05_char_left(&eq, key[1], arg_end, '=')) {
      struct buried_query query;

      if (BRRP_RP == behavior && buried_query(&query, key)) {
        struct r05_node *val[2];
        r05_close_evar(val, eq, arg_end);
        r05_correct_evar(val);
        r05_correct_evar(query.value);
        r05_splice_tevar(query.right_bracket, val);
        r05_splice_tevar(arg_end, query.value);
      } else {
        struct r05_node *left_bracket = callee;
        struct r05_node *right_bracket = arg_end;
        left_bracket->tag = R05_DATATAG_OPEN_BRACKET;
        right_bracket->tag = R05_DATATAG_CLOSE_BRACKET;
        r05_link_brackets(left_bracket, right_bracket);
        list_splice(s_begin_buried.next, left_bracket, right_bracket);
        arg_end = arg_begin;
      }
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    }
  } while (r05_open_evar_advance(key, arg_end));

  r05_recognition_impossible();
}


enum dgcp_behavior { DGCP_DG, DGCP_CP };

static void dgcp_impl(
  struct r05_node *arg_begin, struct r05_node *arg_end,
  enum dgcp_behavior behavior
) {
  struct r05_node *key[2];
  struct buried_query query;
  int found;

  key[0] = arg_begin->next->next;
  key[1] = arg_end->prev;
  r05_reset_allocator();

  found = buried_query(&query, key);

  if (found) {
    if (behavior == DGCP_DG) {
      r05_correct_evar(query.value);
      r05_splice_tevar(arg_begin, query.value);
      r05_splice_to_freelist(query.left_bracket, query.right_bracket);
    } else {
      r05_alloc_tevar(query.value);
      r05_splice_from_freelist(arg_begin);
    }
  }

  r05_splice_to_freelist(arg_begin, arg_end);
}


void r05_br(struct r05_node *arg_begin, struct r05_node *arg_end) {
  brrp_impl(arg_begin, arg_end, BRRP_BR);
}

void r05_dg(struct r05_node *arg_begin, struct r05_node *arg_end) {
  dgcp_impl(arg_begin, arg_end, DGCP_DG);
}

void r05_cp(struct r05_node *arg_begin, struct r05_node *arg_end) {
  dgcp_impl(arg_begin, arg_end, DGCP_CP);
}

void r05_rp(struct r05_node *arg_begin, struct r05_node *arg_end) {
  brrp_impl(arg_begin, arg_end, BRRP_RP);
}


static void dump_buried(void) {
#ifdef R05_DUMP_BURIED
  fprintf(stderr, "\nBURIED:\n");
  print_seq(&s_begin_buried, &s_end_buried);
#endif  /* ifdef R05_DUMP_BURIED */
}


void reset_static_vars() {
  s_end_free_list = (struct r05_node ) {0};

  s_begin_free_list = (struct r05_node) {
    0, &s_end_free_list, R05_DATATAG_ILLEGAL, { '\0' }
  };
  s_end_free_list = (struct r05_node ) {
    &s_begin_free_list, 0, R05_DATATAG_ILLEGAL, { '\0' }
  };

  s_free_ptr = &s_end_free_list;

  s_memory_use = 0;

  s_pool = NULL;
  s_stack_ptr = NULL;

  s_start_program_time = 0;
  s_start_pattern_match_time = 0;
  s_total_pattern_match_time = 0;
  s_start_building_result_time = 0;
  s_total_building_result_time = 0;
  s_total_copy_tevar_time = 0;
  s_total_match_repeated_tvar_time = 0;
  s_total_match_repeated_evar_time = 0;
  s_start_e_loop = 0;
  s_total_e_loop = 0;
  s_total_match_repeated_tvar_time_outside_e = 0;
  s_total_match_repeated_evar_time_outside_e = 0;

  s_in_generated = 0;
  s_in_e_loop = 0;

  #ifdef R05_PROFILER
  s_profiled_functions = NULL;
  #endif  /* R05_PROFILER */

  s_step_counter = 0;

  s_end_view_field = (struct r05_node) {0};

  s_begin_view_field = (struct r05_node) {
    0, &s_end_view_field, R05_DATATAG_ILLEGAL, { '\0' }
  };
  s_end_view_field = (struct r05_node) {
    &s_begin_view_field, 0, R05_DATATAG_ILLEGAL, { '\0' }
  };

  s_stack_ptr = NULL;

  s_step_counter = 0;

  s_arg_begin = NULL;
  s_arg_end = NULL;

  s_argv = 0;
  s_argc = 0;

  s_end_buried = (struct r05_node) {0};

  s_begin_buried = (struct r05_node ) {
    0, &s_end_buried, R05_DATATAG_ILLEGAL, { '\0' }
  };
  s_end_buried = (struct r05_node) {
    &s_begin_buried, 0, R05_DATATAG_ILLEGAL, { '\0' }
  };
}

int main(int argc, char** argv) {
#ifdef LAMELIB
  reset_static_vars();
#endif

  s_argc = argc;
  s_argv = argv;

  init_view_field();
  start_profiler();
  main_loop();
  r05_exit(0);

#ifndef R05_NORETURN_DEFINED
  return 0;
#endif
}

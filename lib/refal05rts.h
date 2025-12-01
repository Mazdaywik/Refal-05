#ifndef Refal05RTS_H_
#define Refal05RTS_H_

#include <stddef.h>


/* https://stackoverflow.com/questions/2354784 */
#if defined(_MSC_VER) && _MSC_VER >= 1400
#  include <sal.h>
#  if _MSC_VER > 1400
#    define R05_PRINTF_PARAM _Printf_format_string_
#  else
#    define R05_PRINTF_PARAM __format_string
#  endif
#else
#  define R05_PRINTF_PARAM
#endif


/* https://gcc.gnu.org/onlinedocs/gcc-8.5.0/gcc/Common-Function-Attributes.html */
#if defined(__GNUC__) || defined(__clang__)
#  define R05_PRINTF_LIKE_FUNCTION __attribute__((format(printf, 1, 2)))
#else
#  define R05_PRINTF_LIKE_FUNCTION
#endif


#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */


#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
#  define R05_NORETURN _Noreturn
#  define R05_NORETURN_DEFINED
#elif defined(__cplusplus) && __cplusplus >= 201103L
#  define R05_NORETURN [[noreturn]]
#  define R05_NORETURN_DEFINED
#elif defined(_MSC_VER) && _MSC_VER >= 1800
#  define R05_NORETURN __declspec(noreturn)
#  define R05_NORETURN_DEFINED
#elif defined(__GNUC__)
#  define R05_NORETURN __attribute__((noreturn))
#  define R05_NORETURN_DEFINED
#elif defined(__clang__)
#  define R05_NORETURN __attribute__((noreturn))
#  define R05_NORETURN_DEFINED
#else
#  define R05_NORETURN
#endif


enum r05_datatag {
  R05_DATATAG_ILLEGAL = 0,
  R05_DATATAG_CHAR,
  R05_DATATAG_FUNCTION,
  R05_DATATAG_NUMBER,

  R05_DATATAG_OPEN_BRACKET,
  R05_DATATAG_CLOSE_BRACKET,
  R05_DATATAG_OPEN_CALL,
  R05_DATATAG_CLOSE_CALL,
};

struct r05_node;

typedef void (*r05_function_ptr) (struct r05_node *begin, struct r05_node *end);

struct r05_function {
  r05_function_ptr ptr;
  const char *name;
  int entry;
  struct r05_metatable *metatable;
#ifdef R05_PROFILER
  double seconds;
  unsigned long calls;
  struct r05_function *next;
#endif
};

typedef unsigned int r05_number;

struct r05_node {
  struct r05_node *prev;
  struct r05_node *next;
  enum r05_datatag tag;
  union {
    char char_;
    struct r05_function *function;
    r05_number number;
    struct r05_node *link;
  } info;
};


/* Операции сопоставления с образцом */

#define r05_empty_hole(left, right) ((left)->next == (right))

int r05_function_left(
  struct r05_node **res, struct r05_node *left, struct r05_node *right,
  struct r05_function *function
);

int r05_function_right(
  struct r05_node **res, struct r05_node *left, struct r05_node *right,
  struct r05_function *function
);

int r05_char_left(
  struct r05_node **res, struct r05_node *left, struct r05_node *right, char ch
);

int r05_char_right(
  struct r05_node **res, struct r05_node *left, struct r05_node *right, char ch
);

int r05_number_left(
  struct r05_node **res, struct r05_node *left, struct r05_node *right,
  r05_number number
);

int r05_number_right(
  struct r05_node **res, struct r05_node *left, struct r05_node *right,
  r05_number number
);

int r05_brackets_left(
  struct r05_node **brackets, struct r05_node *left, struct r05_node *right
);

int r05_brackets_right(
  struct r05_node **brackets, struct r05_node *left, struct r05_node *right
);

int r05_svar_left(
  struct r05_node **svar, struct r05_node *left, struct r05_node *right
);

int r05_svar_right(
  struct r05_node **svar, struct r05_node *left, struct r05_node *right
);

int r05_tvar_left(
  struct r05_node **tvar, struct r05_node *left, struct r05_node *right
);

int r05_tvar_right(
  struct r05_node **tvar, struct r05_node *left, struct r05_node *right
);

int r05_repeated_svar_left(
  struct r05_node **svar, struct r05_node *left, struct r05_node *right,
  struct r05_node **svar_sample
);

int r05_repeated_svar_right(
  struct r05_node **svar, struct r05_node *left, struct r05_node *right,
  struct r05_node **svar_sample
);

#define r05_repeated_tvar_left(v, l, r, s) \
  r05_repeated_tevar_left(v, l, r, s, 't')

#define r05_repeated_tvar_right(v, l, r, s) \
  r05_repeated_tevar_right(v, l, r, s, 't')

#define r05_repeated_evar_left(v, l, r, s) \
  r05_repeated_tevar_left(v, l, r, s, 'e')

#define r05_repeated_evar_right(v, l, r, s) \
  r05_repeated_tevar_right(v, l, r, s, 'e')

int r05_repeated_tevar_left(
  struct r05_node **tevar, struct r05_node *left, struct r05_node *right,
  struct r05_node **tevar_sample, char type
);

int r05_repeated_tevar_right(
  struct r05_node **tevar, struct r05_node *left, struct r05_node *right,
  struct r05_node **tevar_sample, char type
);

#define r05_close_evar(evar, left, right) \
  ((evar)[0] = (left)->next, (evar)[1] = (right)->prev)

int r05_open_evar_advance(struct r05_node **evar, struct r05_node *right);

size_t r05_read_chars(
  struct r05_node **char_interval, char buffer[], size_t buflen,
  struct r05_node *left, struct r05_node *right
);

/* Операции построения результата */

void r05_push_stack(struct r05_node *call_bracket);
void r05_link_brackets(struct r05_node *left, struct r05_node *right);

void r05_correct_evar(struct r05_node **evar);

#define r05_splice_tvar r05_splice_tevar
#define r05_splice_evar r05_splice_tevar

void r05_splice_tevar(struct r05_node *res, struct r05_node **tevar);

void r05_splice_to_freelist(struct r05_node *first, struct r05_node *last);
void r05_splice_from_freelist(struct r05_node *pos);

void r05_reset_allocator(void);

struct r05_node *r05_alloc_node(enum r05_datatag tag);

struct r05_node *r05_insert_pos(void);

#define r05_alloc_char(ch) \
  (r05_alloc_node(R05_DATATAG_CHAR)->info.char_ = (ch))

void r05_alloc_chars(const char buffer[], size_t len);

#define r05_alloc_number(num) \
  (r05_alloc_node(R05_DATATAG_NUMBER)->info.number = (num))

#define r05_alloc_function(func) \
  (r05_alloc_node(R05_DATATAG_FUNCTION)->info.function = func)

#define r05_alloc_open_bracket(pos) \
  (*(pos) = r05_alloc_node(R05_DATATAG_OPEN_BRACKET))

#define r05_alloc_close_bracket(pos) \
  (*(pos) = r05_alloc_node(R05_DATATAG_CLOSE_BRACKET))

#define r05_alloc_open_call(pos) \
  (*(pos) = r05_alloc_node(R05_DATATAG_OPEN_CALL))

#define r05_alloc_close_call(pos) \
  (*(pos) = r05_alloc_node(R05_DATATAG_CLOSE_CALL))

#define r05_alloc_insert_pos(pos) (*(pos) = r05_insert_pos());

#define r05_alloc_svar(sample) \
  (r05_alloc_node((*(sample))->tag)->info = (*(sample))->info);

#define r05_alloc_tvar r05_alloc_tevar
#define r05_alloc_evar r05_alloc_tevar

void r05_alloc_tevar(struct r05_node **sample);
void r05_alloc_string(const char *string);


void r05_enum_function_code(struct r05_node *begin, struct r05_node *end);


/* Профилирование */

void r05_this_is_generated_function(void);
void r05_start_e_loop(void);
void r05_stop_e_loop(void);
double r05_time_elapsed(void);

/* Рефал-машина, операционная среда и диагностика */

R05_NORETURN void r05_recognition_impossible(void);
R05_NORETURN void r05_exit(int retcode);
R05_NORETURN R05_PRINTF_LIKE_FUNCTION void r05_builtin_error(
  R05_PRINTF_PARAM const char *message, ...
);
R05_NORETURN R05_PRINTF_LIKE_FUNCTION void r05_builtin_error_errno(
  R05_PRINTF_PARAM const char *message,
  ...
);

r05_number r05_step_count(void);
const char *r05_arg(int no);

#define r05_switch_default_violation(value) \
  r05_switch_default_violation_impl(#value, value, __FILE__, __LINE__)

R05_NORETURN void r05_switch_default_violation_impl(
  const char *expr, long value, const char *file, int line
);


#ifdef R05_PROFILER
#define R05_INIT_PROFILER 0, 0, NULL,
#else
#define R05_INIT_PROFILER
#endif


#define R05_DEFINE_ENTRY_ENUM(name, rep) \
  struct r05_function r05f_ ## name = { \
    r05_enum_function_code, rep, 1, NULL, \
    R05_INIT_PROFILER \
  };
#define R05_DEFINE_LOCAL_ENUM(name, rep) \
  static struct r05_function r05f_ ## name = { \
    r05_enum_function_code, rep, 0, NULL, \
    R05_INIT_PROFILER \
  };


#define R05_DECLARE_ENTRY_FUNCTION(name) \
  extern struct r05_function r05f_ ## name;
#define R05_DECLARE_LOCAL_FUNCTION(name) \
  static struct r05_function r05f_ ## name;


#define R05_DEFINE_ENTRY_FUNCTION(name, rep) \
  R05_DEFINE_FUNCTION_AUX(name, /* пусто */, rep, 1)
#define R05_DEFINE_LOCAL_FUNCTION(name, rep) \
  R05_DEFINE_FUNCTION_AUX(name, static, rep, 0)

#define R05_DEFINE_FUNCTION_AUX(name, scope, rep, entry) \
  static void r05c_ ## name( \
    struct r05_node *arg_begin, struct r05_node *arg_end \
  ); \
  scope struct r05_function r05f_ ## name = { \
    r05c_ ## name, rep, entry, NULL, R05_INIT_PROFILER \
  }; \
  static void r05c_ ## name( \
    struct r05_node *arg_begin, struct r05_node *arg_end \
  )


struct r05_metatable {
  size_t size;
  struct r05_function **functions;
};


#define R05_DEFINE_METAFUNCTION(name, rep) \
  extern void r05c_ ## name( \
    struct r05_node *arg_begin, struct r05_node *arg_end \
  ); \
  static struct r05_metatable metatable; \
  static struct r05_function r05f_ ## name = { \
    r05c_ ## name, rep, 0, &metatable, R05_INIT_PROFILER \
  };

#define R05_IMPLEMENT_METAFUNCTION(name, rep) \
  extern void r05c_ ## name( \
    struct r05_node *arg_begin, struct r05_node *arg_end \
  ); \
  static struct r05_function r05f_ ## name = { \
    r05c_ ## name, rep, 0, NULL, R05_INIT_PROFILER \
  }; \
  void r05c_ ## name( \
    struct r05_node *arg_begin, struct r05_node *arg_end \
  )


void r05_br(struct r05_node *arg_begin, struct r05_node *arg_end);
void r05_dg(struct r05_node *arg_begin, struct r05_node *arg_end);
void r05_cp(struct r05_node *arg_begin, struct r05_node *arg_end);
void r05_rp(struct r05_node *arg_begin, struct r05_node *arg_end);


#ifdef __cplusplus
}  /* extern "C" */
#endif /* __cplusplus */


#endif /* Refal05RTS_H_ */

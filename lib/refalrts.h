#ifndef RefalRTS_H_
#define RefalRTS_H_

#include <stddef.h>


#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */


enum r05_fnresult {
  R05_SUCCESS = 0,
  R05_RECOGNITION_IMPOSSIBLE = 1,
  R05_NO_MEMORY = 2,
  R05_EXIT = 3,
};

enum r05_datatag {
  R05_DATATAG_ILLEGAL = 0,
  R05_DATATAG_CHAR,
  R05_DATATAG_FILE,
  R05_DATATAG_FUNCTION,
  R05_DATATAG_NUMBER,

  R05_DATATAG_OPEN_BRACKET,
  R05_DATATAG_CLOSE_BRACKET,
  R05_DATATAG_OPEN_CALL,
  R05_DATATAG_CLOSE_CALL,
};

typedef r05_fnresult (*r05_function_ptr) (
  struct r05_node *begin, struct r05_node *end
);

struct r05_function {
  r05_function_ptr ptr;
  const char *name;
};

typedef unsigned long r05_number;

struct r05_node {
  struct r05_node *prev;
  struct r05_node *next;
  enum r05_datatag tag;
  union {
    char char_;
    void *file;
    struct r05_function function;
    r05_number number;
    struct r05_node *link;
  } info;
};


/* Операции сопоставления с образцом */

void r05_use(struct r05_node **ref);

void r05_prepare_argument(
  struct r05_node **left, struct r05_node **right,
  struct r05_node *arg_begin, struct r05_node *arg_end
);

void r05_move_left(struct r05_node **begin, struct r05_node **end);
void r05_move_right(struct r05_node **begin, struct r05_node **end);

int r05_empty_seq(struct r05_node *begin, struct r05_node *end);

int r05_function_left(
  r05_function_ptr func, struct r05_node **first, struct r05_node **last
);
int r05_function_right(
  r05_function_ptr func, struct r05_node **first, struct r05_node **last
);

int r05_char_left(char ch, struct r05_node **first, struct r05_node **last);
int r05_char_right(char ch, struct r05_node **first, struct r05_node **last);

int r05_number_left(
  r05_number num, struct r05_node **first, struct r05_node **last
);
int r05_number_right(
  r05_number num, struct r05_node **first, struct r05_node **last
);

int r05_brackets_left(
  struct r05_node **res_first, struct r05_node **res_last,
  struct r05_node **first, struct r05_node **last
);

int r05_brackets_right(
  struct r05_node **res_first, struct r05_node **res_last,
  struct r05_node **first, struct r05_node **last
);

int r05_svar_left(
  struct r05_node **svar, struct r05_node **first, struct r05_node **last
);

int r05_svar_right(
  struct r05_node **svar, struct r05_node **first, struct r05_node **last
);

int r05_tvar_left(
  struct r05_node **tvar, struct r05_node **first, struct r05_node **last
);

int r05_tvar_right(
  struct r05_node **tvar, struct r05_node **first, struct r05_node **last
);

int r05_repeated_stvar_left(
  struct r05_node **stvar, struct r05_node *stvar_sample,
  struct r05_node **first, struct r05_node **last
);

int r05_repeated_stvar_right(
  struct r05_node **stvar, struct r05_node *stvar_sample,
  struct r05_node **first, struct r05_node **last
);

int r05_repeated_evar_left(
  struct r05_node **evar_b, struct r05_node **evar_e,
  struct r05_node *evar_b_sample, struct r05_node *evar_e_sample,
  struct r05_node **first, struct r05_node **last
);

int r05_repeated_evar_right(
  struct r05_node **evar_b, struct r05_node **evar_e,
  struct r05_node *evar_b_sample, struct r05_node *evar_e_sample,
  struct r05_node **first, struct r05_node **last
);

int r05_open_evar_advance(
  struct r05_node **evar_b, struct r05_node **evar_e,
  struct r05_node **first, struct r05_node **last
);

size_t r05_read_chars(
  char buffer[], size_t buflen,
  struct r05_node **first, struct r05_node **last
);


/* Диагностика */

#define r05_switch_default_violation(value) \
  r05_switch_default_violation_impl(#value, value, __FILE__, __LINE__)

void r05_switch_default_violation_impl(
  const char *expr, long value, const char *file, int line
);


#ifdef __cplusplus
}  /* extern "C" */
#endif /* __cplusplus */

namespace refalrts {

// ↓↓↓ DELETE
// ↑↑↑ DELETE

// Операции построения результата

extern void reset_allocator();

extern bool copy_evar(
  struct r05_node *&evar_res_b, struct r05_node *&evar_res_e,
  struct r05_node *evar_b_sample, struct r05_node *evar_e_sample
);

extern bool copy_stvar(struct r05_node *&stvar_res, struct r05_node *stvar_sample);

extern bool alloc_char(struct r05_node *&res, char ch);
extern bool alloc_number(struct r05_node *&res, r05_number num);
extern bool alloc_name(
  struct r05_node *&res, r05_function_ptr func, const char *name = 0
);
extern bool alloc_open_bracket(struct r05_node *&res);
extern bool alloc_close_bracket(struct r05_node *&res);
extern bool alloc_open_call(struct r05_node *&res);
extern bool alloc_close_call(struct r05_node *&res);

#ifndef alloc_copy_svar
#define alloc_copy_svar alloc_copy_svar_
#endif

#ifndef alloc_copy_tvar
#define alloc_copy_tvar copy_stvar
#endif

extern bool alloc_copy_evar(
  struct r05_node *&res,
  struct r05_node *evar_b_sample, struct r05_node *evar_e_sample
);
extern bool alloc_copy_svar_(
  struct r05_node *&svar_res, struct r05_node *svar_sample
);

extern bool alloc_chars(
  struct r05_node *&res_b, struct r05_node *&res_e,
  const char buffer[], unsigned buflen
);
extern bool alloc_string(
  struct r05_node *&res_b, struct r05_node *&res_e, const char *string
);

extern void push_stack(struct r05_node *call_bracket);
extern void link_brackets(struct r05_node *left, struct r05_node *right);

extern struct r05_node *splice_elem(struct r05_node *res, struct r05_node *elem);
extern struct r05_node *splice_stvar(struct r05_node *res, struct r05_node *var);
extern struct r05_node *splice_evar(
  struct r05_node *res, struct r05_node *first, struct r05_node *last
);
extern void splice_to_freelist(struct r05_node *first, struct r05_node *last);
extern void splice_from_freelist(struct r05_node *pos);

// Профилирование

extern void this_is_generated_function();
extern void start_sentence();
extern void start_e_loop();

// Прочие функции

extern void set_return_code(int retcode);

inline void set_return_code(r05_number retcode) {
  set_return_code(static_cast<int>(retcode));
}

/*
  Функция производит печать рефал-выражения в поток file
  в том же формате, как и при отладочном дампе памяти.

  Переменная file представляет собой стандартный файловый
  поток FILE* из stdio.h. Сделана она была void* только
  для того, чтобы не включать сюда лишние заголовочные файлы
  (пусть даже и стандартные).
*/
void debug_print_expr(void *file, struct r05_node *first, struct r05_node *last);

} //namespace refalrts

#endif //RefalRTS_H_

#ifndef RefalRTS_H_
#define RefalRTS_H_

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */


enum r05_FnResult {
  r05_cSuccess = 0,
  r05_cRecognitionImpossible = 1,
  r05_cNoMemory = 2,
  r05_cExit = 3,
};

enum r05_DataTag {
  r05_cDataIllegal = 0,
  r05_cDataChar,
  r05_cDataFile,
  r05_cDataFunction,
  r05_cDataNumber,

  r05_cDataOpenBracket,
  r05_cDataCloseBracket,
  r05_cDataOpenCall,
  r05_cDataCloseCall,
};

typedef r05_FnResult (*r05_FunctionPtr) (
  struct r05_Node *begin, struct r05_Node *end
);

struct r05_Function {
  r05_FunctionPtr ptr;
  const char *name;
};

typedef unsigned long r05_Number;

struct r05_Node {
  struct r05_Node *prev;
  struct r05_Node *next;
  enum r05_DataTag tag;
  union {
    char char_;
    void *file;
    struct r05_Function function;
    r05_Number number;
    struct r05_Node *link;
  } info;
};


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
typedef ::r05_FnResult FnResult;

const FnResult cRecognitionImpossible = ::r05_cRecognitionImpossible;
const FnResult cNoMemory = ::r05_cNoMemory;
const FnResult cSuccess = ::r05_cSuccess;
const FnResult cExit = ::r05_cExit;

typedef ::r05_DataTag DataTag;
const DataTag cDataIllegal      = ::r05_cDataIllegal;
const DataTag cDataChar         = ::r05_cDataChar;
const DataTag cDataNumber       = ::r05_cDataNumber;
const DataTag cDataFunction     = ::r05_cDataFunction;
const DataTag cDataOpenBracket  = ::r05_cDataOpenBracket;
const DataTag cDataCloseBracket = ::r05_cDataCloseBracket;
const DataTag cDataOpenCall     = ::r05_cDataOpenCall;
const DataTag cDataCloseCall    = ::r05_cDataCloseCall;
const DataTag cDataFile         = ::r05_cDataFile;

typedef struct ::r05_Node Node;
typedef Node *NodePtr;
typedef Node *Iter;
typedef ::r05_FunctionPtr RefalFunctionPtr;
typedef const char *RefalFuncName;
typedef struct r05_Function RefalFunction;
typedef ::r05_Number RefalNumber;

#define char_info info.char_
#define number_info info.number
#define function_info info.function
#define link_info info.link
#define file_info info.file
// ↑↑↑ DELETE

extern void use(struct r05_Node *&);

// Операции распознавания образца

extern void move_left(struct r05_Node *&begin, struct r05_Node *&end);
extern void move_right(struct r05_Node *&begin, struct r05_Node *&end);
extern bool empty_seq(struct r05_Node *begin, struct r05_Node *end);

extern bool function_left(
  r05_FunctionPtr func, struct r05_Node *&first, struct r05_Node *&last
);
extern bool function_right(
  r05_FunctionPtr func, struct r05_Node *&first, struct r05_Node *&last
);

extern bool char_left(char ch, struct r05_Node *&first, struct r05_Node *&last);
extern bool char_right(char ch, struct r05_Node *&first, struct r05_Node *&last);

extern bool number_left(
  r05_Number num, struct r05_Node *&first, struct r05_Node *&last
);
extern bool number_right(
  r05_Number num, struct r05_Node *&first, struct r05_Node *&last
);

extern bool brackets_left(
  struct r05_Node *&res_first, struct r05_Node *&res_last,
  struct r05_Node *&first, struct r05_Node *&last
);
extern bool brackets_right(
  struct r05_Node *&res_first, struct r05_Node *&res_last,
  struct r05_Node *&first, struct r05_Node *&last
);

extern bool svar_left(
  struct r05_Node *&svar, struct r05_Node *&first, struct r05_Node *&last
);
extern bool svar_right(
  struct r05_Node *&svar, struct r05_Node *&first, struct r05_Node *&last
);

extern bool tvar_left(
  struct r05_Node *&tvar, struct r05_Node *&first, struct r05_Node *&last
);
extern bool tvar_right(
  struct r05_Node *&tvar, struct r05_Node *&first, struct r05_Node *&last
);

extern bool repeated_stvar_left(
  struct r05_Node *&stvar, struct r05_Node *stvar_sample,
  struct r05_Node *&first, struct r05_Node *&last
);
extern bool repeated_stvar_right(
  struct r05_Node *&stvar, struct r05_Node *stvar_sample,
  struct r05_Node *&first, struct r05_Node *&last
);

extern bool repeated_evar_left(
  struct r05_Node *&evar_b, struct r05_Node *&evar_e,
  struct r05_Node *evar_b_sample, struct r05_Node *evar_e_sample,
  struct r05_Node *&first, struct r05_Node *&last
);

extern bool repeated_evar_right(
  struct r05_Node *&evar_b, struct r05_Node *&evar_e,
  struct r05_Node *evar_b_sample, struct r05_Node *evar_e_sample,
  struct r05_Node *&first, struct r05_Node *&last
);

extern bool open_evar_advance(
  struct r05_Node *&evar_b, struct r05_Node *&evar_e,
  struct r05_Node *&first, struct r05_Node *&last
);

extern unsigned read_chars(
  char buffer[], unsigned buflen, struct r05_Node *&first, struct r05_Node *&last
);

// Операции построения результата

extern void reset_allocator();

extern bool copy_evar(
  struct r05_Node *&evar_res_b, struct r05_Node *&evar_res_e,
  struct r05_Node *evar_b_sample, struct r05_Node *evar_e_sample
);

extern bool copy_stvar(struct r05_Node *&stvar_res, struct r05_Node *stvar_sample);

extern bool alloc_char(struct r05_Node *&res, char ch);
extern bool alloc_number(struct r05_Node *&res, r05_Number num);
extern bool alloc_name(
  struct r05_Node *&res, r05_FunctionPtr func, const char *name = 0
);
extern bool alloc_open_bracket(struct r05_Node *&res);
extern bool alloc_close_bracket(struct r05_Node *&res);
extern bool alloc_open_call(struct r05_Node *&res);
extern bool alloc_close_call(struct r05_Node *&res);

#ifndef alloc_copy_svar
#define alloc_copy_svar alloc_copy_svar_
#endif

#ifndef alloc_copy_tvar
#define alloc_copy_tvar copy_stvar
#endif

extern bool alloc_copy_evar(
  struct r05_Node *&res,
  struct r05_Node *evar_b_sample, struct r05_Node *evar_e_sample
);
extern bool alloc_copy_svar_(
  struct r05_Node *&svar_res, struct r05_Node *svar_sample
);

extern bool alloc_chars(
  struct r05_Node *&res_b, struct r05_Node *&res_e,
  const char buffer[], unsigned buflen
);
extern bool alloc_string(
  struct r05_Node *&res_b, struct r05_Node *&res_e, const char *string
);

extern void push_stack(struct r05_Node *call_bracket);
extern void link_brackets(struct r05_Node *left, struct r05_Node *right);

extern struct r05_Node *splice_elem(struct r05_Node *res, struct r05_Node *elem);
extern struct r05_Node *splice_stvar(struct r05_Node *res, struct r05_Node *var);
extern struct r05_Node *splice_evar(
  struct r05_Node *res, struct r05_Node *first, struct r05_Node *last
);
extern void splice_to_freelist(struct r05_Node *first, struct r05_Node *last);
extern void splice_from_freelist(struct r05_Node *pos);

// Профилирование

extern void this_is_generated_function();
extern void start_sentence();
extern void start_e_loop();

// Прочие функции

extern void set_return_code(int retcode);
extern void use_counter(unsigned& counter);

inline void set_return_code(r05_Number retcode) {
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
void debug_print_expr(void *file, struct r05_Node *first, struct r05_Node *last);

} //namespace refalrts

#endif //RefalRTS_H_

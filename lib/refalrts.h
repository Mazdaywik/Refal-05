#ifndef RefalRTS_H_
#define RefalRTS_H_

namespace refalrts {

typedef enum FnResult {
  cRecognitionImpossible = 0,
  cNoMemory = 1,
  cSuccess = 2,
  cExit = 3
} FnResult;

typedef struct Node Node;

typedef struct Node *NodePtr;

typedef struct Node *Iter;

typedef enum DataTag {
  cDataIllegal = 0,
  cDataChar,
  cDataNumber,
  cDataFunction,
  cDataOpenBracket, cDataCloseBracket,
  cDataOpenCall, cDataCloseCall,
  cDataFile,
} DataTag;

typedef FnResult (*RefalFunctionPtr) (Iter begin, Iter end);

typedef const char * RefalFuncName;

typedef struct RefalFunction {
  RefalFunctionPtr ptr;
  RefalFuncName name;
} RefalFunction;

typedef unsigned long RefalNumber;

typedef struct Node {
  NodePtr prev;
  NodePtr next;
  DataTag tag;
  union {
    char char_info;
    RefalNumber number_info;
    RefalFunction function_info;
    NodePtr link_info;
    void *file_info;
  };
} Node;

extern void use(Iter&);

// Операции распознавания образца

extern void move_left(Iter& begin, Iter& end);
extern void move_right(Iter& begin, Iter& end);
extern bool empty_seq(Iter begin, Iter end);

extern bool function_left(RefalFunctionPtr func, Iter& first, Iter& last);
extern bool function_right(RefalFunctionPtr func, Iter& first, Iter& last);

extern bool char_left(char ch, Iter& first, Iter& last);
extern bool char_right(char ch, Iter& first, Iter& last);

extern bool number_left(RefalNumber num, Iter& first, Iter& last);
extern bool number_right(RefalNumber num, Iter& first, Iter& last);

extern bool brackets_left(Iter& res_first, Iter& res_last, Iter& first, Iter& last);
extern bool brackets_right(Iter& res_first, Iter& res_last, Iter& first, Iter& last);

extern bool svar_left(Iter& svar, Iter& first, Iter& last);
extern bool svar_right(Iter& svar, Iter& first, Iter& last);

extern bool tvar_left(Iter& tvar, Iter& first, Iter& last);
extern bool tvar_right(Iter& tvar, Iter& first, Iter& last);

extern bool repeated_stvar_left(Iter& stvar, Iter stvar_sample, Iter& first, Iter& last);
extern bool repeated_stvar_right(Iter& stvar, Iter stvar_sample, Iter& first, Iter& last);

extern bool repeated_evar_left(
  Iter& evar_b, Iter& evar_e,
  Iter evar_b_sample, Iter evar_e_sample,
  Iter& first, Iter& last
);

extern bool repeated_evar_right(
  Iter& evar_b, Iter& evar_e,
  Iter evar_b_sample, Iter evar_e_sample,
  Iter& first, Iter& last
);

extern bool open_evar_advance(
  Iter& evar_b, Iter& evar_e,
  Iter& first, Iter& last
);

extern unsigned read_chars(
  char buffer[], unsigned buflen, Iter& first, Iter& last
);

// Операции построения результата

extern void reset_allocator();

extern bool copy_evar(
  Iter& evar_res_b, Iter& evar_res_e,
  Iter evar_b_sample, Iter evar_e_sample
);

extern bool copy_stvar(Iter& stvar_res, Iter stvar_sample);

extern bool alloc_char(Iter& res, char ch);
extern bool alloc_number(Iter& res, RefalNumber num);
extern bool alloc_name(
  Iter& res, RefalFunctionPtr func, RefalFuncName name = 0
);
extern bool alloc_open_bracket(Iter& res);
extern bool alloc_close_bracket(Iter& res);
extern bool alloc_open_call(Iter& res);
extern bool alloc_close_call(Iter& res);

#ifndef alloc_copy_svar
#define alloc_copy_svar alloc_copy_svar_
#endif

#ifndef alloc_copy_tvar
#define alloc_copy_tvar copy_stvar
#endif

extern bool alloc_copy_evar(
  Iter& res, Iter evar_b_sample, Iter evar_e_sample
);
extern bool alloc_copy_svar_(Iter& svar_res, Iter svar_sample);

extern bool alloc_chars(
  Iter& res_b, Iter& res_e, const char buffer[], unsigned buflen
);
extern bool alloc_string(Iter& res_b, Iter& res_e, const char *string);

extern void push_stack(Iter call_bracket);
extern void link_brackets(Iter left, Iter right);

extern Iter splice_elem(Iter res, Iter elem);
extern Iter splice_stvar(Iter res, Iter var);
extern Iter splice_evar(Iter res, Iter first, Iter last);
extern void splice_to_freelist(Iter first, Iter last);
extern void splice_from_freelist(Iter pos);

// Профилирование

extern void this_is_generated_function();
extern void start_sentence();
extern void start_e_loop();

// Прочие функции

extern void set_return_code(int retcode);
extern void use_counter(unsigned& counter);

inline void set_return_code(RefalNumber retcode) {
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
void debug_print_expr(void *file, Iter first, Iter last);

} //namespace refalrts

#endif //RefalRTS_H_

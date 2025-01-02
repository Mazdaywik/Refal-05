#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Go)

R05_DEFINE_ENTRY_FUNCTION(GO, "GO") {
  arg_begin->next->info.function = &r05f_Go;
  r05f_Go.ptr(arg_begin, arg_end);
}

/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_ENTRY_FUNCTION(Prout)

R05_DEFINE_ENTRY_FUNCTION(Go, "Go") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[12] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("Hello, World!", 13);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("\320\237\321\200\320\270\320\262\320\265\321\202, \320\274\320\270\321\200!");
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("\344\275\240\345\245\275\357\274\214\344\270\226\347\225\214\357\274\201");
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("\343\201\223\343\202\223\343\201\253\343\201\241\343\201\257\343\200\201\344\270\226\347\225\214\357\274\201");
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("\360\237\214\215\360\237\214\216\360\237\214\217 Unicode Test \360\237\216\211");
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_push_stack(p[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */

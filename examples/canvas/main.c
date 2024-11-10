/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(FillRect)
R05_DECLARE_ENTRY_FUNCTION(SetFillStyle)
R05_DECLARE_ENTRY_FUNCTION(Go)

R05_DEFINE_ENTRY_FUNCTION(Go, "Go") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[26] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(228 3 3)", 12);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_number(0UL);
    r05_alloc_number(0UL);
    r05_alloc_number(200UL);
    r05_alloc_number(10UL);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(255 140 0)", 14);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_number(0UL);
    r05_alloc_number(10UL);
    r05_alloc_number(200UL);
    r05_alloc_number(10UL);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(255 237 0)", 14);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_number(0UL);
    r05_alloc_number(20UL);
    r05_alloc_number(200UL);
    r05_alloc_number(10UL);
    r05_alloc_close_call(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(0 128 38)", 13);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_number(0UL);
    r05_alloc_number(30UL);
    r05_alloc_number(200UL);
    r05_alloc_number(10UL);
    r05_alloc_close_call(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(0 77 255)", 13);
    r05_alloc_close_call(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_number(0UL);
    r05_alloc_number(40UL);
    r05_alloc_number(200UL);
    r05_alloc_number(10UL);
    r05_alloc_close_call(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_SetFillStyle);
    r05_alloc_chars("rgb(117 7 135)", 14);
    r05_alloc_close_call(p+23);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_FillRect);
    r05_alloc_number(0UL);
    r05_alloc_number(50UL);
    r05_alloc_number(200UL);
    r05_alloc_number(10UL);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[24]);
    r05_push_stack(p[23]);
    r05_push_stack(p[22]);
    r05_push_stack(p[21]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
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

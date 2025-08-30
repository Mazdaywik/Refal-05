/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_LOCAL_FUNCTION(Test1)
R05_DECLARE_LOCAL_FUNCTION(Test2)
R05_DECLARE_LOCAL_FUNCTION(Test3)
R05_DECLARE_ENTRY_FUNCTION(Prout)
R05_DECLARE_ENTRY_FUNCTION(Ord)
R05_DECLARE_ENTRY_FUNCTION(Chr)

R05_DEFINE_ENTRY_FUNCTION(Go, "Go") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[8] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Test1);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Test2);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Test3);
    r05_alloc_close_call(p+7);
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

R05_DEFINE_LOCAL_FUNCTION(Test1, "Test1") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[10] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("ASCII roundtrip:", 16);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  65 -> Chr -> Ord = ", 21);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(65UL);
    r05_alloc_close_call(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[4]);
    r05_push_stack(p[8]);
    r05_push_stack(p[5]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_push_stack(p[3]);
    r05_push_stack(p[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Test2, "Test2") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[16] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("Unicode roundtrip:", 18);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  1046 -> Chr -> Ord = ", 23);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(1046UL);
    r05_alloc_close_call(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  20013 -> Chr -> Ord = ", 24);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(20013UL);
    r05_alloc_close_call(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[10]);
    r05_push_stack(p[14]);
    r05_push_stack(p[11]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_push_stack(p[9]);
    r05_push_stack(p[4]);
    r05_push_stack(p[8]);
    r05_push_stack(p[5]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_push_stack(p[3]);
    r05_push_stack(p[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Test3, "Test3") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[10] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("Emoji roundtrip:", 16);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  127881 -> Chr -> Ord = ", 25);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(127881UL);
    r05_alloc_close_call(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[4]);
    r05_push_stack(p[8]);
    r05_push_stack(p[5]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_push_stack(p[3]);
    r05_push_stack(p[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */

/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_LOCAL_FUNCTION(TestASCII)
R05_DECLARE_LOCAL_FUNCTION(TestUnicode)
R05_DECLARE_LOCAL_FUNCTION(TestEmoji)
R05_DECLARE_ENTRY_FUNCTION(Chr)
R05_DECLARE_ENTRY_FUNCTION(Prout)
R05_DECLARE_ENTRY_FUNCTION(Ord)

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
    r05_alloc_function(&r05f_TestASCII);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_TestUnicode);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_TestEmoji);
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

R05_DEFINE_LOCAL_FUNCTION(TestASCII, "TestASCII") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[20] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("Testing ASCII:", 14);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Chr 65 = ", 11);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(65UL);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Ord A = ", 10);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_char('A');
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Chr 97 = ", 11);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(97UL);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Ord a = ", 10);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_char('a');
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[16]);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_push_stack(p[12]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_push_stack(p[8]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_push_stack(p[4]);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_push_stack(p[3]);
    r05_push_stack(p[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TestUnicode, "TestUnicode") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[20] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("Testing Unicode:", 16);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Chr 1046 (\320\226) = ", 18);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(1046UL);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Ord \320\226 = ", 11);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_chars("\320\226", 2);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Chr 20013 (\344\270\255) = ", 20);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(20013UL);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Ord \344\270\255 = ", 12);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_chars("\344\270\255", 3);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[16]);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_push_stack(p[12]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_push_stack(p[8]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_push_stack(p[4]);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_push_stack(p[3]);
    r05_push_stack(p[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TestEmoji, "TestEmoji") {
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
    r05_alloc_chars("Testing Emoji:", 14);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Chr 127881 (\360\237\216\211) = ", 22);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(127881UL);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Ord \360\237\216\211 = ", 13);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_chars("\360\237\216\211", 4);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[8]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_push_stack(p[4]);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_push_stack(p[3]);
    r05_push_stack(p[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */

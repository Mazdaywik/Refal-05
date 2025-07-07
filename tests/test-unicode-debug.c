/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_LOCAL_FUNCTION(TestOrd)
R05_DECLARE_LOCAL_FUNCTION(TestCharComparison)
R05_DECLARE_LOCAL_FUNCTION(CompareChar)
R05_DECLARE_LOCAL_FUNCTION(TestSimplePattern)
R05_DECLARE_LOCAL_FUNCTION(MatchString)
R05_DECLARE_ENTRY_FUNCTION(Ord)
R05_DECLARE_ENTRY_FUNCTION(Prout)
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
    r05_alloc_function(&r05f_TestOrd);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_TestCharComparison);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_TestSimplePattern);
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

R05_DEFINE_LOCAL_FUNCTION(TestOrd, "TestOrd") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[24] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("Testing Ord function:", 21);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Ord A = ", 10);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_char('A');
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Ord \320\226 = ");
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_utf8_string("\320\226");
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Ord \344\270\255 = ");
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_utf8_string("\344\270\255");
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Chr 1046 = ", 13);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(1046UL);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Chr 20013 = ", 14);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(20013UL);
    r05_alloc_close_call(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[20]);
    r05_push_stack(p[22]);
    r05_push_stack(p[21]);
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

R05_DEFINE_LOCAL_FUNCTION(TestCharComparison, "TestCharComparison") {
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
    r05_alloc_chars("Testing character comparison:", 29);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CompareChar);
    r05_alloc_chars("AA", 2);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_CompareChar);
    r05_alloc_utf8_string("\320\226\320\226");
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_CompareChar);
    r05_alloc_utf8_string("\344\270\255\344\270\255");
    r05_alloc_close_call(p+9);
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

R05_DEFINE_LOCAL_FUNCTION(CompareChar, "CompareChar") {
  r05_this_is_generated_function();

  do {
    /* s.X: 2, 3 */
    struct r05_node *p[6] = { 0 };
    /* s.X s.X */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_repeated_svar_left(p+3, p[2], p[1], p+2))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  ", 2);
    r05_alloc_svar(p+2);
    r05_alloc_chars(" == ", 4);
    r05_alloc_svar(p+2);
    r05_alloc_chars(": Match", 7);
    r05_alloc_close_call(p+5);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.X: 2 */
    /* s.Y: 3 */
    struct r05_node *p[6] = { 0 };
    /* s.X s.Y */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  ", 2);
    r05_alloc_svar(p+2);
    r05_alloc_chars(" != ", 4);
    r05_alloc_svar(p+3);
    r05_alloc_chars(": No match", 10);
    r05_alloc_close_call(p+5);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TestSimplePattern, "TestSimplePattern") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[22] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("Testing simple patterns:", 24);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_MatchString);
    r05_alloc_open_bracket(p+5);
    r05_alloc_chars("ABC", 3);
    r05_alloc_close_bracket(p+6);
    r05_alloc_open_bracket(p+7);
    r05_alloc_chars("ABC", 3);
    r05_alloc_close_bracket(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_MatchString);
    r05_alloc_open_bracket(p+11);
    r05_alloc_utf8_string("\320\220\320\221\320\222");
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_utf8_string("\320\220\320\221\320\222");
    r05_alloc_close_bracket(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_MatchString);
    r05_alloc_open_bracket(p+17);
    r05_alloc_utf8_string("\344\270\255\346\226\207");
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_utf8_string("\344\270\255\346\226\207");
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[19], p[20]);
    r05_link_brackets(p[17], p[18]);
    r05_push_stack(p[15]);
    r05_push_stack(p[10]);
    r05_link_brackets(p[13], p[14]);
    r05_link_brackets(p[11], p[12]);
    r05_push_stack(p[9]);
    r05_push_stack(p[4]);
    r05_link_brackets(p[7], p[8]);
    r05_link_brackets(p[5], p[6]);
    r05_push_stack(p[3]);
    r05_push_stack(p[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(MatchString, "MatchString") {
  r05_this_is_generated_function();

  do {
    /* e.X: 6, 8 */
    struct r05_node *p[13] = { 0 };
    /* (e.X) (e.X) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    if (! r05_repeated_evar_left(p+8, p[4], p[5], p+6))
      continue;
    if (! r05_empty_hole(p[9], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  String match: ", 16);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[11], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.X: 6 */
    /* e.Y: 8 */
    struct r05_node *p[14] = { 0 };
    /* (e.X) (e.Y) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  String no match: ", 19);
    r05_alloc_insert_pos(p+11);
    r05_alloc_chars(" != ", 4);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+6);
    r05_splice_evar(p[11], p+6);
    r05_splice_evar(p[12], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */

/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_LOCAL_FUNCTION(TestASCII)
R05_DECLARE_LOCAL_FUNCTION(TestUnicode)
R05_DECLARE_LOCAL_FUNCTION(TestMixed)
R05_DECLARE_LOCAL_FUNCTION(TestEmoji)
R05_DECLARE_LOCAL_FUNCTION(TestCase)
R05_DECLARE_LOCAL_FUNCTION(CompareChars)
R05_DECLARE_LOCAL_FUNCTION(CompareStrings)
R05_DECLARE_ENTRY_FUNCTION(Prout)
R05_DECLARE_ENTRY_FUNCTION(Upper)
R05_DECLARE_ENTRY_FUNCTION(Lower)

R05_DEFINE_ENTRY_FUNCTION(Go, "Go") {
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
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_TestASCII);
    r05_alloc_close_call(p+4);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_TestUnicode);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_TestMixed);
    r05_alloc_close_call(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_TestEmoji);
    r05_alloc_close_call(p+16);
    r05_alloc_close_call(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_TestCase);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[18]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_push_stack(p[17]);
    r05_push_stack(p[14]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_push_stack(p[10]);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_push_stack(p[6]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_push_stack(p[2]);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TestASCII, "TestASCII") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[4] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_CompareChars);
    r05_alloc_chars("AA", 2);
    r05_alloc_close_call(p+3);
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
    struct r05_node *p[4] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_CompareChars);
    r05_alloc_utf8_string("\320\226\320\226");
    r05_alloc_close_call(p+3);
    r05_push_stack(p[3]);
    r05_push_stack(p[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TestMixed, "TestMixed") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[4] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_CompareStrings);
    r05_alloc_utf8_string("Hello, \320\274\320\270\321\200!Hello, \320\274\320\270\321\200!");
    r05_alloc_close_call(p+3);
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
    struct r05_node *p[4] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_CompareChars);
    r05_alloc_utf8_string("\360\237\216\211\360\237\216\211");
    r05_alloc_close_call(p+3);
    r05_push_stack(p[3]);
    r05_push_stack(p[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TestCase, "TestCase") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[18] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("Upper of a: ", 12);
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_Upper);
    r05_alloc_char('a');
    r05_alloc_close_call(p+4);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("Upper of \320\266: ");
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Upper);
    r05_alloc_utf8_string("\320\266");
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("Lower of A: ", 12);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Lower);
    r05_alloc_char('A');
    r05_alloc_close_call(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("Lower of \320\226: ");
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Lower);
    r05_alloc_utf8_string("\320\226");
    r05_alloc_close_call(p+16);
    r05_alloc_close_call(p+17);
    r05_alloc_chars("Case conversion: OK", 19);
    r05_push_stack(p[17]);
    r05_push_stack(p[14]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_push_stack(p[10]);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_push_stack(p[6]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_push_stack(p[2]);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CompareChars, "CompareChars") {
  r05_this_is_generated_function();

  do {
    /* s.X: 2, 3 */
    struct r05_node *p[4] = { 0 };
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
    r05_alloc_chars("Character compare: OK", 21);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.X: 2 */
    /* s.Y: 3 */
    struct r05_node *p[4] = { 0 };
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
    r05_alloc_chars("Character compare: FAILED", 25);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CompareStrings, "CompareStrings") {
  r05_this_is_generated_function();

  do {
    /* e.X: 6, 8 */
    struct r05_node *p[10] = { 0 };
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
    r05_alloc_chars("String compare: OK", 18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[4] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_chars("String compare: FAILED", 22);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}


/* End of file */

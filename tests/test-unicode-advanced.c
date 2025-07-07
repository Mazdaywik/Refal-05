/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_LOCAL_FUNCTION(TestCharTypes)
R05_DECLARE_LOCAL_FUNCTION(ShowType)
R05_DECLARE_LOCAL_FUNCTION(TestCaseConversion)
R05_DECLARE_LOCAL_FUNCTION(TestPatternMatching)
R05_DECLARE_LOCAL_FUNCTION(TestMatch)
R05_DECLARE_LOCAL_FUNCTION(TestMixedStrings)
R05_DECLARE_LOCAL_FUNCTION(ParseMixed)
R05_DECLARE_ENTRY_FUNCTION(Prout)
R05_DECLARE_ENTRY_FUNCTION(Type)
R05_DECLARE_ENTRY_FUNCTION(Upper)
R05_DECLARE_ENTRY_FUNCTION(Lower)
R05_DECLARE_ENTRY_FUNCTION(Ord)

R05_DEFINE_ENTRY_FUNCTION(Go, "Go") {
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
    r05_alloc_function(&r05f_TestCharTypes);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_TestCaseConversion);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_TestPatternMatching);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_TestMixedStrings);
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

R05_DEFINE_LOCAL_FUNCTION(TestCharTypes, "TestCharTypes") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[40] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("Testing character types:", 24);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Type of A: ", 13);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_ShowType);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Type);
    r05_alloc_char('A');
    r05_alloc_close_call(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Type of 5: ", 13);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_ShowType);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Type);
    r05_alloc_char('5');
    r05_alloc_close_call(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Type of \320\226: ");
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_ShowType);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Type);
    r05_alloc_utf8_string("\320\226");
    r05_alloc_close_call(p+19);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Type of \344\270\255: ");
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_ShowType);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_Type);
    r05_alloc_utf8_string("\344\270\255");
    r05_alloc_close_call(p+25);
    r05_alloc_close_call(p+26);
    r05_alloc_close_call(p+27);
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Type of \360\237\216\211: ");
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_ShowType);
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_Type);
    r05_alloc_utf8_string("\360\237\216\211");
    r05_alloc_close_call(p+31);
    r05_alloc_close_call(p+32);
    r05_alloc_close_call(p+33);
    r05_alloc_open_call(p+34);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Type of space: ", 17);
    r05_alloc_open_call(p+35);
    r05_alloc_function(&r05f_ShowType);
    r05_alloc_open_call(p+36);
    r05_alloc_function(&r05f_Type);
    r05_alloc_char(' ');
    r05_alloc_close_call(p+37);
    r05_alloc_close_call(p+38);
    r05_alloc_close_call(p+39);
    r05_push_stack(p[39]);
    r05_push_stack(p[34]);
    r05_push_stack(p[38]);
    r05_push_stack(p[35]);
    r05_push_stack(p[37]);
    r05_push_stack(p[36]);
    r05_push_stack(p[33]);
    r05_push_stack(p[28]);
    r05_push_stack(p[32]);
    r05_push_stack(p[29]);
    r05_push_stack(p[31]);
    r05_push_stack(p[30]);
    r05_push_stack(p[27]);
    r05_push_stack(p[22]);
    r05_push_stack(p[26]);
    r05_push_stack(p[23]);
    r05_push_stack(p[25]);
    r05_push_stack(p[24]);
    r05_push_stack(p[21]);
    r05_push_stack(p[16]);
    r05_push_stack(p[20]);
    r05_push_stack(p[17]);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
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

R05_DEFINE_LOCAL_FUNCTION(ShowType, "ShowType") {
  r05_this_is_generated_function();

  do {
    /* s.Sub: 3 */
    /* e.Rest: 4 */
    struct r05_node *p[6] = { 0 };
    /* 'L' s.Sub e.Rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], 'L'))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_chars("Letter (", 8);
    r05_alloc_svar(p+3);
    r05_alloc_char(')');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Digit: 3 */
    struct r05_node *p[4] = { 0 };
    /* 'D' s.Digit */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], 'D'))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("Digit", 5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Sub: 3 */
    /* e.Rest: 4 */
    struct r05_node *p[6] = { 0 };
    /* 'W' s.Sub e.Rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], 'W'))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_chars("Word (", 6);
    r05_alloc_svar(p+3);
    r05_alloc_char(')');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Sub: 3 */
    /* e.Rest: 4 */
    struct r05_node *p[6] = { 0 };
    /* 'P' s.Sub e.Rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], 'P'))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_chars("Punctuation (", 13);
    r05_alloc_svar(p+3);
    r05_alloc_char(')');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Sub: 3 */
    /* e.Rest: 4 */
    struct r05_node *p[6] = { 0 };
    /* 'S' s.Sub e.Rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], 'S'))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_chars("Space (", 7);
    r05_alloc_svar(p+3);
    r05_alloc_char(')');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[5] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+4);
    r05_correct_evar(p+2);
    r05_splice_evar(p[4], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(TestCaseConversion, "TestCaseConversion") {
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
    r05_alloc_chars("Testing case conversion:", 24);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Upper(hello \320\274\320\270\321\200): ");
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Upper);
    r05_alloc_utf8_string("hello \320\274\320\270\321\200");
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Lower(HELLO \320\234\320\230\320\240): ");
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Lower);
    r05_alloc_utf8_string("HELLO \320\234\320\230\320\240");
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Mixed case: ", 14);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Upper);
    r05_alloc_char('a');
    r05_alloc_close_call(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Lower);
    r05_alloc_char('B');
    r05_alloc_close_call(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Upper);
    r05_alloc_utf8_string("\320\266");
    r05_alloc_close_call(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Lower);
    r05_alloc_utf8_string("\320\251");
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[12]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
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

R05_DEFINE_LOCAL_FUNCTION(TestPatternMatching, "TestPatternMatching") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[28] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("Testing pattern matching:", 25);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_TestMatch);
    r05_alloc_open_bracket(p+5);
    r05_alloc_utf8_string("\320\220\320\221\320\222");
    r05_alloc_close_bracket(p+6);
    r05_alloc_open_bracket(p+7);
    r05_alloc_utf8_string("\320\220\320\221\320\222");
    r05_alloc_close_bracket(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_TestMatch);
    r05_alloc_open_bracket(p+11);
    r05_alloc_chars("ABC", 3);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_utf8_string("\320\220\320\221\320\222");
    r05_alloc_close_bracket(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_TestMatch);
    r05_alloc_open_bracket(p+17);
    r05_alloc_utf8_string("\344\270\255\346\226\207");
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_utf8_string("\344\270\255\346\226\207");
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_TestMatch);
    r05_alloc_open_bracket(p+23);
    r05_alloc_utf8_string("\360\237\214\215\360\237\214\216\360\237\214\217");
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_utf8_string("\360\237\214\215\360\237\214\216\360\237\214\217");
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[22]);
    r05_link_brackets(p[25], p[26]);
    r05_link_brackets(p[23], p[24]);
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

R05_DEFINE_LOCAL_FUNCTION(TestMatch, "TestMatch") {
  r05_this_is_generated_function();

  do {
    /* e.X: 6, 8 */
    struct r05_node *p[14] = { 0 };
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
    r05_alloc_chars("  Match ", 8);
    r05_alloc_insert_pos(p+11);
    r05_alloc_chars(" = ", 3);
    r05_alloc_insert_pos(p+12);
    r05_alloc_chars(": YES", 5);
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
    r05_alloc_chars("  Match ", 8);
    r05_alloc_insert_pos(p+11);
    r05_alloc_chars(" != ", 4);
    r05_alloc_insert_pos(p+12);
    r05_alloc_chars(": NO", 4);
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

R05_DEFINE_LOCAL_FUNCTION(TestMixedStrings, "TestMixedStrings") {
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
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("Testing mixed strings:", 22);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_ParseMixed);
    r05_alloc_utf8_string("Hello, \320\274\320\270\321\200! \344\275\240\345\245\275 \360\237\214\215");
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_ParseMixed);
    r05_alloc_utf8_string("Test123\343\203\206\343\202\271\343\203\210");
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

R05_DEFINE_LOCAL_FUNCTION(ParseMixed, "ParseMixed") {
  r05_this_is_generated_function();

  do {
    /* s.Char: 2 */
    /* e.Rest: 3 */
    struct r05_node *p[12] = { 0 };
    /* s.Char e.Rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Char: ", 8);
    r05_alloc_svar(p+2);
    r05_alloc_chars(" (code ", 7);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+7);
    r05_alloc_char(')');
    r05_alloc_close_call(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_ParseMixed);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+3);
    r05_push_stack(p[8]);
    r05_push_stack(p[5]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[10], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */

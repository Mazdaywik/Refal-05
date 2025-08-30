/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_LOCAL_FUNCTION(TestNormalization)
R05_DECLARE_LOCAL_FUNCTION(CompareNorm)
R05_DECLARE_LOCAL_FUNCTION(TestScripts)
R05_DECLARE_LOCAL_FUNCTION(TestScript)
R05_DECLARE_LOCAL_FUNCTION(TestBoundaries)
R05_DECLARE_LOCAL_FUNCTION(TestBoundary)
R05_DECLARE_LOCAL_FUNCTION(TestSorting)
R05_DECLARE_LOCAL_FUNCTION(CompareChars)
R05_DECLARE_ENTRY_FUNCTION(Prout)
R05_DECLARE_ENTRY_FUNCTION(Chr)
R05_DECLARE_ENTRY_FUNCTION(Lenw)
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
    r05_alloc_function(&r05f_TestNormalization);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_TestScripts);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_TestBoundaries);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_TestSorting);
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

R05_DEFINE_LOCAL_FUNCTION(TestNormalization, "TestNormalization") {
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
    r05_alloc_chars("Testing normalization:", 22);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Caf\303\251 (\303\251 as single char) vs Caf\303\251 (e + combining accent)");
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_CompareNorm);
    r05_alloc_open_bracket(p+7);
    r05_alloc_utf8_string("Caf\303\251");
    r05_alloc_close_bracket(p+8);
    r05_alloc_open_bracket(p+9);
    r05_alloc_utf8_string("Caf\303\251");
    r05_alloc_close_bracket(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[6]);
    r05_link_brackets(p[9], p[10]);
    r05_link_brackets(p[7], p[8]);
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

R05_DEFINE_LOCAL_FUNCTION(CompareNorm, "CompareNorm") {
  r05_this_is_generated_function();

  do {
    /* e.X: 6, 8 */
    struct r05_node *p[12] = { 0 };
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
    r05_alloc_chars("  Normalized match: YES", 23);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.X: 6 */
    /* e.Y: 8 */
    struct r05_node *p[12] = { 0 };
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
    r05_alloc_chars("  Normalized match: NO (different byte sequences)", 49);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TestScripts, "TestScripts") {
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
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("Testing different scripts:", 26);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_TestScript);
    r05_alloc_chars("LatinHello", 10);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_TestScript);
    r05_alloc_utf8_string("Cyrillic\320\237\321\200\320\270\320\262\320\265\321\202");
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_TestScript);
    r05_alloc_utf8_string("Greek\316\223\316\265\316\271\316\254");
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_TestScript);
    r05_alloc_utf8_string("Arabic\331\205\330\261\330\255\330\250\330\247");
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_TestScript);
    r05_alloc_utf8_string("Hebrew\327\251\327\234\327\225\327\235");
    r05_alloc_close_call(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_TestScript);
    r05_alloc_utf8_string("Devanagari\340\244\250\340\244\256\340\244\270\340\245\215\340\244\244\340\245\207");
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_TestScript);
    r05_alloc_utf8_string("Bengali\340\246\271\340\247\215\340\246\257\340\246\276\340\246\262\340\247\213");
    r05_alloc_close_call(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_TestScript);
    r05_alloc_utf8_string("Thai\340\270\252\340\270\247\340\270\261\340\270\252\340\270\224\340\270\265");
    r05_alloc_close_call(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_TestScript);
    r05_alloc_utf8_string("Korean\354\225\210\353\205\225");
    r05_alloc_close_call(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_TestScript);
    r05_alloc_utf8_string("Japanese Hiragana\343\201\223\343\202\223\343\201\253\343\201\241\343\201\257");
    r05_alloc_close_call(p+23);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_TestScript);
    r05_alloc_utf8_string("Japanese Katakana\343\202\263\343\203\263\343\203\213\343\203\201\343\203\217");
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

R05_DEFINE_LOCAL_FUNCTION(TestScript, "TestScript") {
  r05_this_is_generated_function();

  do {
    /* e.Name: 2 */
    /* e.Text: 4 */
    struct r05_node *p[12] = { 0 };
    /* e.Name e.Text */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      r05_close_evar(p+4, p[3], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+6);
      r05_alloc_function(&r05f_Prout);
      r05_alloc_chars("  ", 2);
      r05_alloc_insert_pos(p+7);
      r05_alloc_chars(": ", 2);
      r05_alloc_insert_pos(p+8);
      r05_alloc_chars(" (length ", 9);
      r05_alloc_open_call(p+9);
      r05_alloc_function(&r05f_Lenw);
      r05_alloc_evar(p+4);
      r05_alloc_close_call(p+10);
      r05_alloc_char(')');
      r05_alloc_close_call(p+11);
      r05_push_stack(p[11]);
      r05_push_stack(p[6]);
      r05_push_stack(p[10]);
      r05_push_stack(p[9]);
      r05_correct_evar(p+4);
      r05_correct_evar(p+2);
      r05_splice_evar(p[7], p+2);
      r05_splice_evar(p[8], p+4);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TestBoundaries, "TestBoundaries") {
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
    r05_alloc_chars("Testing boundary cases:", 23);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_TestBoundary);
    r05_alloc_chars("ASCII max", 9);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(127UL);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_TestBoundary);
    r05_alloc_chars("First Unicode", 13);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(128UL);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_TestBoundary);
    r05_alloc_chars("BMP boundary", 12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(65535UL);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_TestBoundary);
    r05_alloc_chars("First SMP", 9);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(65536UL);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_TestBoundary);
    r05_alloc_chars("High emoji", 10);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(128512UL);
    r05_alloc_close_call(p+22);
    r05_alloc_close_call(p+23);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_TestBoundary);
    r05_alloc_chars("Math symbol", 11);
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(8721UL);
    r05_alloc_close_call(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[24]);
    r05_push_stack(p[26]);
    r05_push_stack(p[25]);
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

R05_DEFINE_LOCAL_FUNCTION(TestBoundary, "TestBoundary") {
  r05_this_is_generated_function();

  do {
    /* s.Char: 2 */
    /* e.Name: 3 */
    struct r05_node *p[10] = { 0 };
    /* e.Name s.Char */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[0], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  ", 2);
    r05_alloc_insert_pos(p+6);
    r05_alloc_chars(": ", 2);
    r05_alloc_svar(p+2);
    r05_alloc_chars(" (code ", 7);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+8);
    r05_alloc_char(')');
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[5]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TestSorting, "TestSorting") {
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
    r05_alloc_chars("Testing character codes:", 24);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CompareChars);
    r05_alloc_chars("AB", 2);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_CompareChars);
    r05_alloc_chars("Za", 2);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_CompareChars);
    r05_alloc_utf8_string("\320\220\320\221");
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_CompareChars);
    r05_alloc_utf8_string("\320\257\320\260");
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_CompareChars);
    r05_alloc_utf8_string("\344\270\255\345\233\275");
    r05_alloc_close_call(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_CompareChars);
    r05_alloc_utf8_string("\360\237\214\215\360\237\214\216");
    r05_alloc_close_call(p+15);
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

R05_DEFINE_LOCAL_FUNCTION(CompareChars, "CompareChars") {
  r05_this_is_generated_function();

  do {
    /* s.A: 2 */
    /* s.B: 3 */
    struct r05_node *p[10] = { 0 };
    /* s.A s.B */
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
    r05_alloc_chars(" (", 2);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+6);
    r05_alloc_chars(") vs ", 5);
    r05_alloc_svar(p+3);
    r05_alloc_chars(" (", 2);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+8);
    r05_alloc_char(')');
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[4]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */

/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_LOCAL_FUNCTION(TestDecimal)
R05_DECLARE_LOCAL_FUNCTION(TestHex)
R05_DECLARE_LOCAL_FUNCTION(TestHexEquality)
R05_DECLARE_LOCAL_FUNCTION(CompareNums)
R05_DECLARE_LOCAL_FUNCTION(TestUnicodeHex)
R05_DECLARE_LOCAL_FUNCTION(TestHexMath)
R05_DECLARE_ENTRY_FUNCTION(Prout)
R05_DECLARE_ENTRY_FUNCTION(Chr)
R05_DECLARE_ENTRY_FUNCTION(Add)
R05_DECLARE_ENTRY_FUNCTION(Sub)
R05_DECLARE_ENTRY_FUNCTION(Mul)
R05_DECLARE_ENTRY_FUNCTION(Symb)

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
    r05_alloc_function(&r05f_TestDecimal);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_TestHex);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_TestHexEquality);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_TestUnicodeHex);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_TestHexMath);
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

R05_DEFINE_LOCAL_FUNCTION(TestDecimal, "TestDecimal") {
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
    r05_alloc_chars("Testing decimal literals:", 25);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  65 = ", 7);
    r05_alloc_number(65UL);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  255 = ", 8);
    r05_alloc_number(255UL);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  1046 = ", 9);
    r05_alloc_number(1046UL);
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

R05_DEFINE_LOCAL_FUNCTION(TestHex, "TestHex") {
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
    r05_alloc_chars("Testing hex literals:", 21);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  0x41 = ", 9);
    r05_alloc_number(65UL);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  0xFF = ", 9);
    r05_alloc_number(255UL);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  0x416 = ", 10);
    r05_alloc_number(1046UL);
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

R05_DEFINE_LOCAL_FUNCTION(TestHexEquality, "TestHexEquality") {
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
    r05_alloc_chars("Testing hex/decimal equality:", 29);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CompareNums);
    r05_alloc_number(65UL);
    r05_alloc_number(65UL);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_CompareNums);
    r05_alloc_number(255UL);
    r05_alloc_number(255UL);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_CompareNums);
    r05_alloc_number(1046UL);
    r05_alloc_number(1046UL);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_CompareNums);
    r05_alloc_number(20013UL);
    r05_alloc_number(20013UL);
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

R05_DEFINE_LOCAL_FUNCTION(CompareNums, "CompareNums") {
  r05_this_is_generated_function();

  do {
    /* s.X: 2, 3 */
    struct r05_node *p[10] = { 0 };
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
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+6);
    r05_alloc_chars(" == ", 4);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+8);
    r05_alloc_chars(": EQUAL", 7);
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

  do {
    /* s.X: 2 */
    /* s.Y: 3 */
    struct r05_node *p[10] = { 0 };
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
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+6);
    r05_alloc_chars(" != ", 4);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+8);
    r05_alloc_chars(": NOT EQUAL", 11);
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

R05_DEFINE_LOCAL_FUNCTION(TestUnicodeHex, "TestUnicodeHex") {
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
    r05_alloc_chars("Testing Unicode with hex:", 25);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Chr 0x41 = ", 13);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(65UL);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Chr 0x416 = ", 14);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(1046UL);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Chr 0x4E2D = ", 15);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(20013UL);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Chr 0x1F389 = ", 16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(127881UL);
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

R05_DEFINE_LOCAL_FUNCTION(TestHexMath, "TestHexMath") {
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
    r05_alloc_chars("Testing hex in math:", 20);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  0x10 + 0x20 = ", 16);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Add);
    r05_alloc_number(16UL);
    r05_alloc_number(32UL);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  0xFF - 0x0F = ", 16);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Sub);
    r05_alloc_number(255UL);
    r05_alloc_number(15UL);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  0x10 * 0x10 = ", 16);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Mul);
    r05_alloc_number(16UL);
    r05_alloc_number(16UL);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
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


/* End of file */

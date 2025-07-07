/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_LOCAL_FUNCTION(TestUnicodeStrings)
R05_DECLARE_LOCAL_FUNCTION(TestHexUnicode)
R05_DECLARE_ENTRY_FUNCTION(Prout)
R05_DECLARE_ENTRY_FUNCTION(Chr)

R05_DEFINE_ENTRY_FUNCTION(Go, "Go") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[6] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_TestUnicodeStrings);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_TestHexUnicode);
    r05_alloc_close_call(p+5);
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

R05_DEFINE_LOCAL_FUNCTION(TestUnicodeStrings, "TestUnicodeStrings") {
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
    r05_alloc_chars("Testing Unicode in strings:", 27);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Russian: \320\237\321\200\320\270\320\262\320\265\321\202, \320\274\320\270\321\200!");
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Chinese: \344\275\240\345\245\275\344\270\226\347\225\214");
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Japanese: \343\201\223\343\202\223\343\201\253\343\201\241\343\201\257\344\270\226\347\225\214");
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Arabic: \331\205\330\261\330\255\330\250\330\247 \330\250\330\247\331\204\330\271\330\247\331\204\331\205");
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Hebrew: \327\251\327\234\327\225\327\235 \327\242\327\225\327\234\327\235");
    r05_alloc_close_call(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Korean: \354\225\210\353\205\225\355\225\230\354\204\270\354\232\224");
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  Emoji: \360\237\214\215\360\237\214\216\360\237\214\217 \342\235\244\357\270\217 \360\237\216\211");
    r05_alloc_close_call(p+17);
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

R05_DEFINE_LOCAL_FUNCTION(TestHexUnicode, "TestHexUnicode") {
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
    r05_alloc_chars("Unicode via hex literals:", 25);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  U+0410 (\320\220): ");
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(1040UL);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  U+4E2D (\344\270\255): ");
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(20013UL);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  U+1F389 (\360\237\216\211): ");
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(127881UL);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  U+05E9 (\327\251): ");
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(1513UL);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  U+0627 (\330\247): ");
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_number(1575UL);
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


/* End of file */

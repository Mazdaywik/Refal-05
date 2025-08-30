/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Go)
R05_DECLARE_LOCAL_FUNCTION(TestASCII)
R05_DECLARE_LOCAL_FUNCTION(TestUnicode)
R05_DECLARE_LOCAL_FUNCTION(TestEmoji)
R05_DECLARE_LOCAL_FUNCTION(TestRoundtrip)
R05_DECLARE_ENTRY_FUNCTION(ChrHex)
R05_DECLARE_ENTRY_FUNCTION(Prout)
R05_DECLARE_ENTRY_FUNCTION(OrdHex)

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
    r05_alloc_function(&r05f_TestASCII);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_TestUnicode);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_TestEmoji);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_TestRoundtrip);
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
    r05_alloc_chars("Testing ASCII with hex:", 23);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  ChrHex 0x41 = ", 16);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_ChrHex);
    r05_alloc_chars("0x41", 4);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  OrdHex A = ", 13);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_OrdHex);
    r05_alloc_char('A');
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  ChrHex 0x61 = ", 16);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_ChrHex);
    r05_alloc_chars("0x61", 4);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  OrdHex a = ", 13);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_OrdHex);
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
    r05_alloc_chars("Testing Unicode with hex:", 25);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  ChrHex 0x416 (\320\226) = ");
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_ChrHex);
    r05_alloc_chars("0x416", 5);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  OrdHex \320\226 = ");
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_OrdHex);
    r05_alloc_utf8_string("\320\226");
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  ChrHex 0x4E2D (\344\270\255) = ");
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_ChrHex);
    r05_alloc_chars("0x4E2D", 6);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  OrdHex \344\270\255 = ");
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_OrdHex);
    r05_alloc_utf8_string("\344\270\255");
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
    r05_alloc_chars("Testing Emoji with hex:", 23);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  ChrHex 0x1F389 (\360\237\216\211) = ");
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_ChrHex);
    r05_alloc_chars("0x1F389", 7);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_utf8_string("  OrdHex \360\237\216\211 = ");
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_OrdHex);
    r05_alloc_utf8_string("\360\237\216\211");
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

R05_DEFINE_LOCAL_FUNCTION(TestRoundtrip, "TestRoundtrip") {
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
    r05_alloc_chars("Testing roundtrip:", 18);
    r05_alloc_close_call(p+3);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  ASCII: 0x41 -> ChrHex -> OrdHex = ", 36);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_OrdHex);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_ChrHex);
    r05_alloc_chars("0x41", 4);
    r05_alloc_close_call(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Unicode: 0x4E2D -> ChrHex -> OrdHex = ", 40);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_OrdHex);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_ChrHex);
    r05_alloc_chars("0x4E2D", 6);
    r05_alloc_close_call(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("  Emoji: 0x1F389 -> ChrHex -> OrdHex = ", 39);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_OrdHex);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_ChrHex);
    r05_alloc_chars("0x1F389", 7);
    r05_alloc_close_call(p+19);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
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


/* End of file */

/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(TokName)
R05_DECLARE_ENTRY_FUNCTION(Builtins)
R05_DECLARE_LOCAL_FUNCTION(DoBuiltins)
R05_DECLARE_ENTRY_FUNCTION(ListOfBuiltin)
R05_DECLARE_ENTRY_FUNCTION(Explode)
R05_DEFINE_LOCAL_ENUM(TkName, "TkName")
R05_DEFINE_LOCAL_ENUM(TkCompound, "TkCompound")
R05_DEFINE_LOCAL_ENUM(TkMacroDigit, "TkMacroDigit")
R05_DEFINE_LOCAL_ENUM(TkChar, "TkChar")
R05_DEFINE_LOCAL_ENUM(TkVariable, "TkVariable")
R05_DEFINE_LOCAL_ENUM(TkOpenBracket, "TkOpenBracket")
R05_DEFINE_LOCAL_ENUM(TkCloseBracket, "TkCloseBracket")
R05_DEFINE_LOCAL_ENUM(TkOpenBlock, "TkOpenBlock")
R05_DEFINE_LOCAL_ENUM(TkCloseBlock, "TkCloseBlock")
R05_DEFINE_LOCAL_ENUM(TkOpenCall, "TkOpenCall")
R05_DEFINE_LOCAL_ENUM(TkCloseCall, "TkCloseCall")
R05_DEFINE_LOCAL_ENUM(TkComma, "TkComma")
R05_DEFINE_LOCAL_ENUM(TkColon, "TkColon")
R05_DEFINE_LOCAL_ENUM(TkAssign, "TkAssign")
R05_DEFINE_LOCAL_ENUM(TkSemicolon, "TkSemicolon")
R05_DEFINE_LOCAL_ENUM(TkExtern, "TkExtern")
R05_DEFINE_LOCAL_ENUM(TkEntry, "TkEntry")
R05_DEFINE_LOCAL_ENUM(TkSpecComment, "TkSpecComment")
R05_DEFINE_LOCAL_ENUM(TkEOF, "TkEOF")

R05_DEFINE_ENTRY_FUNCTION(TokName, "TokName") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[3] = { 0 };
    /* TkName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkName))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("identifier", 10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkCompound */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkCompound))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("compound symbol", 15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkMacroDigit */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkMacroDigit))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("number", 6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkChar */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkChar))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("character", 9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkVariable */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkVariable))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("variable", 8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkOpenBracket */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkOpenBracket))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'(\'", 3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkCloseBracket */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkCloseBracket))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\')\'", 3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkOpenBlock */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkOpenBlock))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'{\'", 3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkCloseBlock */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkCloseBlock))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'}\'", 3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkOpenCall */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkOpenCall))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'<\'", 3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkCloseCall */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkCloseCall))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'>\'", 3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkComma */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkComma))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\',\'", 3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkColon */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkColon))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\':\'", 3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkAssign */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkAssign))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'=\'", 3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkSemicolon */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkSemicolon))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\';\'", 3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkExtern */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkExtern))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("$EXTERN", 7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkEntry */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkEntry))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("$ENTRY", 6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkSpecComment */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkSpecComment))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'*$\'-comment", 12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* TkEOF */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_TkEOF))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("end of file", 11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Builtins, "Builtins") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[18] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+2);
    r05_alloc_char('+');
    r05_alloc_close_bracket(p+3);
    r05_alloc_open_bracket(p+4);
    r05_alloc_char('-');
    r05_alloc_close_bracket(p+5);
    r05_alloc_open_bracket(p+6);
    r05_alloc_char('*');
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_bracket(p+8);
    r05_alloc_char('/');
    r05_alloc_close_bracket(p+9);
    r05_alloc_open_bracket(p+10);
    r05_alloc_char('%');
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_char('?');
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_DoBuiltins);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_ListOfBuiltin);
    r05_alloc_close_call(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[14]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[12], p[13]);
    r05_link_brackets(p[10], p[11]);
    r05_link_brackets(p[8], p[9]);
    r05_link_brackets(p[6], p[7]);
    r05_link_brackets(p[4], p[5]);
    r05_link_brackets(p[2], p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoBuiltins, "DoBuiltins") {
  r05_this_is_generated_function();

  do {
    /* e.Builtins: 4 */
    /* s.Number: 6 */
    /* s.Name: 7 */
    /* s.Type: 8 */
    struct r05_node *p[16] = { 0 };
    /* (s.Number s.Name s.Type) e.Builtins */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);
    if (! r05_svar_left(p+6, p[2], p[3]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[3]))
      continue;
    if (! r05_svar_left(p+8, p[7], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Explode);
    r05_alloc_svar(p+7);
    r05_alloc_close_call(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_DoBuiltins);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+4);
    r05_link_brackets(p[9], p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_splice_evar(p[14], p+4);
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

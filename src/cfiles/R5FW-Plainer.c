/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Plain)
R05_DECLARE_LOCAL_FUNCTION(TrimLines)
R05_DECLARE_LOCAL_FUNCTION(UndoubleEmtpyLines)
R05_DECLARE_LOCAL_FUNCTION(Trimm_R)
R05_DECLARE_LOCAL_FUNCTION(DoPlain)
R05_DECLARE_LOCAL_FUNCTION(MAXm_LINE)
R05_DECLARE_LOCAL_FUNCTION(LongLine)
R05_DECLARE_LOCAL_FUNCTION(DoLongLine)
R05_DECLARE_LOCAL_FUNCTION(PlainExtern)
R05_DECLARE_LOCAL_FUNCTION(DoExtern)
R05_DECLARE_LOCAL_FUNCTION(DoExternu_check)
R05_DECLARE_LOCAL_FUNCTION(DoExternu_cont)
R05_DECLARE_LOCAL_FUNCTION(DoExternu_check0)
R05_DECLARE_LOCAL_FUNCTION(DoExternu_cont0)
R05_DECLARE_LOCAL_FUNCTION(DoExtern0)
R05_DECLARE_LOCAL_FUNCTION(CommaOrSemicolon)
R05_DECLARE_LOCAL_FUNCTION(PlainFunction)
R05_DECLARE_LOCAL_FUNCTION(PlainScope)
R05_DECLARE_LOCAL_FUNCTION(Sentences)
R05_DECLARE_LOCAL_FUNCTION(Sentence)
R05_DECLARE_LOCAL_FUNCTION(Sentenceu_check)
R05_DECLARE_LOCAL_FUNCTION(Sentenceu_cont)
R05_DECLARE_LOCAL_FUNCTION(Sentenceu_check0)
R05_DECLARE_LOCAL_FUNCTION(Sentenceu_cont0)
R05_DECLARE_LOCAL_FUNCTION(PutComment)
R05_DECLARE_LOCAL_FUNCTION(Tail)
R05_DECLARE_LOCAL_FUNCTION(Tailu_check)
R05_DECLARE_LOCAL_FUNCTION(Tailu_cont)
R05_DECLARE_LOCAL_FUNCTION(Tail0)
R05_DECLARE_LOCAL_FUNCTION(Expression)
R05_DECLARE_LOCAL_FUNCTION(Expressionu_check)
R05_DECLARE_LOCAL_FUNCTION(Expressionu_cont)
R05_DECLARE_LOCAL_FUNCTION(DoExpression)
R05_DECLARE_LOCAL_FUNCTION(DoExpressionu_check)
R05_DECLARE_LOCAL_FUNCTION(DoExpressionu_check0)
R05_DECLARE_LOCAL_FUNCTION(DoExpression0)
R05_DECLARE_LOCAL_FUNCTION(DoExpression0u_check)
R05_DECLARE_LOCAL_FUNCTION(DoExpression0u_cont)
R05_DECLARE_LOCAL_FUNCTION(DoExpression1)
R05_DECLARE_LOCAL_FUNCTION(DoExpression1u_check)
R05_DECLARE_LOCAL_FUNCTION(DoExpression1u_cont)
R05_DECLARE_LOCAL_FUNCTION(DoExpression1u_check0)
R05_DECLARE_LOCAL_FUNCTION(DoExpression1u_cont0)
R05_DECLARE_LOCAL_FUNCTION(AppendTerm)
R05_DECLARE_LOCAL_FUNCTION(InlineTerm)
R05_DECLARE_LOCAL_FUNCTION(MultilineTerm)
R05_DECLARE_LOCAL_FUNCTION(MultilineTermm_Prefix)
R05_DECLARE_LOCAL_FUNCTION(MultilineTermm_Prefix0)
R05_DECLARE_LOCAL_FUNCTION(PlainTerm)
R05_DECLARE_LOCAL_FUNCTION(PlainCompound)
R05_DECLARE_LOCAL_FUNCTION(PlainCompoundu_check)
R05_DECLARE_LOCAL_FUNCTION(PlainCompoundu_cont)
R05_DECLARE_LOCAL_FUNCTION(DoCompound)
R05_DECLARE_LOCAL_FUNCTION(IsIdent)
R05_DECLARE_LOCAL_FUNCTION(IsIdentu_check)
R05_DECLARE_LOCAL_FUNCTION(IsIdentu_cont)
R05_DECLARE_LOCAL_FUNCTION(DoIsIdent)
R05_DECLARE_LOCAL_FUNCTION(DoIsIdentu_check)
R05_DECLARE_LOCAL_FUNCTION(DoIsIdentu_cont)
R05_DECLARE_LOCAL_FUNCTION(DoIsIdentu_check0)
R05_DECLARE_LOCAL_FUNCTION(DoIsIdentu_cont0)
R05_DECLARE_LOCAL_FUNCTION(PlainNumber)
R05_DECLARE_LOCAL_FUNCTION(PlainChar)
R05_DECLARE_LOCAL_FUNCTION(CharRep)
R05_DECLARE_LOCAL_FUNCTION(CharRepu_check)
R05_DECLARE_LOCAL_FUNCTION(CharRepu_cont)
R05_DECLARE_LOCAL_FUNCTION(CharRepu_check0)
R05_DECLARE_LOCAL_FUNCTION(CharRepu_cont0)
R05_DECLARE_LOCAL_FUNCTION(HexDigit)
R05_DECLARE_LOCAL_FUNCTION(HexDigitu_check)
R05_DECLARE_LOCAL_FUNCTION(PlainVariable)
R05_DECLARE_LOCAL_FUNCTION(PlainBrackets)
R05_DECLARE_LOCAL_FUNCTION(PlainCall)
R05_DECLARE_ENTRY_FUNCTION(InlineExpr)
R05_DECLARE_LOCAL_FUNCTION(DoInlineExpr)
R05_DECLARE_ENTRY_FUNCTION(Symb)
R05_DECLARE_ENTRY_FUNCTION(Type)
R05_DECLARE_ENTRY_FUNCTION(Ord)
R05_DECLARE_ENTRY_FUNCTION(Compare)
R05_DECLARE_ENTRY_FUNCTION(k2F_)
R05_DECLARE_ENTRY_FUNCTION(k25_)
R05_DECLARE_ENTRY_FUNCTION(m_)
R05_DECLARE_ENTRY_FUNCTION(First)
R05_DEFINE_LOCAL_ENUM(Extern, "Extern")
R05_DEFINE_LOCAL_ENUM(Function, "Function")
R05_DEFINE_LOCAL_ENUM(SpecialComment, "SpecialComment")
R05_DEFINE_LOCAL_ENUM(Word, "Word")
R05_DEFINE_LOCAL_ENUM(Number, "Number")
R05_DEFINE_LOCAL_ENUM(Symbol, "Symbol")
R05_DEFINE_LOCAL_ENUM(Char, "Char")
R05_DEFINE_LOCAL_ENUM(Variable, "Variable")
R05_DEFINE_LOCAL_ENUM(Call, "Call")
R05_DEFINE_LOCAL_ENUM(Brackets, "Brackets")
R05_DEFINE_LOCAL_ENUM(True, "True")
R05_DEFINE_LOCAL_ENUM(False, "False")
R05_DEFINE_LOCAL_ENUM(Entry, "Entry")
R05_DEFINE_LOCAL_ENUM(Local, "Local")
R05_DEFINE_LOCAL_ENUM(Comment, "Comment")
R05_DEFINE_LOCAL_ENUM(RETURN, "RETURN")
R05_DEFINE_LOCAL_ENUM(FIRST, "FIRST")
R05_DEFINE_LOCAL_ENUM(Condition, "Condition")
R05_DEFINE_LOCAL_ENUM(CALLm_BLOCK, "CALL-BLOCK")
R05_DEFINE_LOCAL_ENUM(NEXT, "NEXT")

R05_DEFINE_ENTRY_FUNCTION(Plain, "Plain") {
  r05_this_is_generated_function();

  do {
    /* e.Units: 2 */
    struct r05_node *p[11] = { 0 };
    /* e.Units */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_UndoubleEmtpyLines);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_TrimLines);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_DoPlain);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[4]);
    r05_push_stack(p[9]);
    r05_push_stack(p[5]);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[7], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(TrimLines, "TrimLines") {
  r05_this_is_generated_function();

  do {
    /* e.Line: 4 */
    /* e.Lines: 6 */
    struct r05_node *p[16] = { 0 };
    /* (e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Trimm_R);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_TrimLines);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[8], p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[10], p+4);
    r05_splice_evar(p[14], p+6);
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

R05_DEFINE_LOCAL_FUNCTION(UndoubleEmtpyLines, "UndoubleEmtpyLines") {
  r05_this_is_generated_function();

  do {
    /* e.Lines-B: 2 */
    /* e.Lines-E: 8 */
    struct r05_node *p[16] = { 0 };
    /* e.Lines-B () () e.Lines-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+4, p[3], p[1]))
        continue;
      if (! r05_brackets_left(p+6, p[5], p[1]))
        continue;
      if (! r05_empty_hole(p[4], p[5]))
        continue;
      if (! r05_empty_hole(p[6], p[7]))
        continue;
      r05_close_evar(p+8, p[7], p[1]);

      r05_reset_allocator();
      r05_alloc_insert_pos(p+10);
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_UndoubleEmtpyLines);
      r05_alloc_open_bracket(p+12);
      r05_alloc_close_bracket(p+13);
      r05_alloc_insert_pos(p+14);
      r05_alloc_close_call(p+15);
      r05_push_stack(p[15]);
      r05_push_stack(p[11]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[12], p[13]);
      r05_correct_evar(p+2);
      r05_splice_evar(p[10], p+2);
      r05_splice_evar(p[14], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Lines: 2 */
    struct r05_node *p[5] = { 0 };
    /* e.Lines */
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

R05_DEFINE_LOCAL_FUNCTION(Trimm_R, "Trim-R") {
  r05_this_is_generated_function();

  do {
    /* e.Line: 3 */
    struct r05_node *p[8] = { 0 };
    /* e.Line ' ' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], ' '))
      continue;
    r05_close_evar(p+3, p[0], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Trimm_R);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Line: 2 */
    struct r05_node *p[5] = { 0 };
    /* e.Line */
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

R05_DEFINE_LOCAL_FUNCTION(DoPlain, "DoPlain") {
  r05_this_is_generated_function();

  do {
    /* e.Names: 5 */
    /* e.Units: 7 */
    struct r05_node *p[15] = { 0 };
    /* (Extern e.Names) e.Units */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Extern))
      continue;
    r05_close_evar(p+5, p[4], p[3]);
    r05_close_evar(p+7, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_PlainExtern);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Plain);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+7);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[10], p+5);
    r05_splice_evar(p[13], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Units: 5 */
    /* t.SrcPos: 7 */
    /* e.Name: 11 */
    /* s.Scope: 13 */
    /* e.Sentences: 14 */
    struct r05_node *p[25] = { 0 };
    /* (Function t.SrcPos (e.Name) s.Scope e.Sentences) e.Units */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Function))
      continue;
    r05_close_evar(p+5, p[3], p[1]);
    if (! r05_tvar_left(p+7, p[4], p[3]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[3]))
      continue;
    r05_close_evar(p+11, p[9], p[10]);
    if (! r05_svar_left(p+13, p[10], p[3]))
      continue;
    r05_close_evar(p+14, p[13], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_PlainFunction);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_svar(p+13);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_Plain);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+5);
    r05_push_stack(p[21]);
    r05_push_stack(p[16]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+11);
    r05_splice_evar(p[18], p+11);
    r05_splice_evar(p[20], p+14);
    r05_splice_evar(p[23], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Units: 5 */
    /* t.SrcPos: 7 */
    /* e.Text: 9 */
    struct r05_node *p[17] = { 0 };
    /* (SpecialComment t.SrcPos e.Text) e.Units */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_SpecialComment))
      continue;
    r05_close_evar(p+5, p[3], p[1]);
    if (! r05_tvar_left(p+7, p[4], p[3]))
      continue;
    r05_close_evar(p+9, p[8], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Plain);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_push_stack(p[16]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+5);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[12], p+9);
    r05_splice_evar(p[15], p+5);
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

R05_DEFINE_LOCAL_FUNCTION(MAXm_LINE, "MAX-LINE") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_number(79UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(LongLine, "LongLine") {
  r05_this_is_generated_function();

  do {
    /* e.Line: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.Line */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DoLongLine);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_MAXm_LINE);
    r05_alloc_close_call(p+6);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_splice_evar(p[7], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoLongLine, "DoLongLine") {
  r05_this_is_generated_function();

  do {
    /* s.Len: 2 */
    struct r05_node *p[3] = { 0 };
    /* s.Len */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_False);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Line: 3 */
    struct r05_node *p[5] = { 0 };
    /* 0 e.Line */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_left(p+2, p[0], p[1], 0UL))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_True);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Len: 2 */
    /* t.Next: 3 */
    /* e.Line: 5 */
    struct r05_node *p[12] = { 0 };
    /* s.Len t.Next e.Line */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_DoLongLine);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_m_);
    r05_alloc_svar(p+2);
    r05_alloc_number(1UL);
    r05_alloc_close_call(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[7]);
    r05_correct_evar(p+5);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_splice_evar(p[10], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainExtern, "PlainExtern") {
  r05_this_is_generated_function();

  do {
    /* e.Names: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.Names */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DoExtern);
    r05_alloc_open_bracket(p+5);
    r05_alloc_chars("$EXTERN ", 8);
    r05_alloc_close_bracket(p+6);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_link_brackets(p[5], p[6]);
    r05_splice_evar(p[7], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoExtern, "DoExtern") {
  r05_this_is_generated_function();

  do {
    /* e.OutLine: 6 */
    /* e.Names: 8 */
    /* t.Pos: 10 */
    /* e.NextName: 12 */
    struct r05_node *p[28] = { 0 };
    /* (e.OutLine) (t.Pos e.NextName) e.Names */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[5], p[1]);
    if (! r05_tvar_left(p+10, p[4], p[5]))
      continue;
    r05_close_evar(p+12, p[11], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_DoExternu_check);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_CommaOrSemicolon);
    r05_alloc_evar(p+8);
    r05_alloc_close_call(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[14]);
    r05_push_stack(p[26]);
    r05_push_stack(p[25]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[16], p+6);
    r05_splice_tvar(p[18], p+10);
    r05_splice_evar(p[20], p+12);
    r05_splice_evar(p[23], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DoExternu_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoExternu_check, "DoExtern_check") {
  r05_this_is_generated_function();

  do {
    /* e.OutLine: 4 */
    /* t.Pos: 6 */
    /* e.NextName: 12 */
    /* e.Names: 14 */
    /* e.SEP: 16 */
    struct r05_node *p[33] = { 0 };
    /* (e.OutLine) t.Pos (e.NextName) (e.Names) e.SEP */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[10], p[11]);
    r05_close_evar(p+16, p[11], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_DoExternu_check0);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_evar(p+4);
    r05_alloc_evar(p+12);
    r05_alloc_evar(p+16);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[20], p+4);
    r05_splice_tvar(p[22], p+6);
    r05_splice_evar(p[24], p+12);
    r05_splice_evar(p[27], p+14);
    r05_splice_evar(p[30], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DoExternu_cont0);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoExternu_cont, "DoExtern_cont") {
  r05_this_is_generated_function();

  do {
    /* e.OutLine: 4 */
    struct r05_node *p[11] = { 0 };
    /* (e.OutLine) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_bracket(p+8);
    r05_alloc_open_bracket(p+9);
    r05_alloc_close_bracket(p+10);
    r05_link_brackets(p[9], p[10]);
    r05_link_brackets(p[6], p[8]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoExternu_check0, "DoExtern_check0") {
  r05_this_is_generated_function();

  do {
    /* e.OutLine: 4 */
    /* t.Pos: 6 */
    /* e.NextName: 14 */
    /* e.Names: 16 */
    /* e.SEP: 18 */
    /* e.NewOutLine: 20 */
    struct r05_node *p[42] = { 0 };
    /* (e.OutLine) t.Pos (e.NextName) (e.Names) (e.SEP) e.NewOutLine */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    r05_close_evar(p+14, p[8], p[9]);
    r05_close_evar(p+16, p[10], p[11]);
    r05_close_evar(p+18, p[12], p[13]);
    r05_close_evar(p+20, p[13], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_DoExtern0);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_open_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_open_call(p+39);
    r05_alloc_function(&r05f_LongLine);
    r05_alloc_evar(p+20);
    r05_alloc_close_call(p+40);
    r05_alloc_close_call(p+41);
    r05_push_stack(p[41]);
    r05_push_stack(p[22]);
    r05_push_stack(p[40]);
    r05_push_stack(p[39]);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+20);
    r05_link_brackets(p[33], p[35]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+4);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+16);
    r05_splice_tvar(p[23], p+6);
    r05_splice_evar(p[25], p+16);
    r05_splice_evar(p[28], p+4);
    r05_splice_evar(p[31], p+14);
    r05_splice_evar(p[34], p+18);
    r05_splice_evar(p[37], p+20);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.OutLine: 4 */
    /* t.Pos: 6 */
    /* e.NextName: 14 */
    /* e.Names: 16 */
    /* e.SEP: 18 */
    /* e.Other: 20 */
    struct r05_node *p[35] = { 0 };
    /* (e.OutLine) t.Pos (e.NextName) (e.Names) (e.SEP) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    r05_close_evar(p+14, p[8], p[9]);
    r05_close_evar(p+16, p[10], p[11]);
    r05_close_evar(p+18, p[12], p[13]);
    r05_close_evar(p+20, p[13], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_DoExternu_cont0);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_call(p+34);
    r05_push_stack(p[34]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[24], p+4);
    r05_splice_tvar(p[26], p+6);
    r05_splice_evar(p[28], p+14);
    r05_splice_evar(p[31], p+16);
    r05_splice_evar(p[33], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoExternu_cont0, "DoExtern_cont0") {
  r05_this_is_generated_function();

  do {
    /* e.OutLine: 4 */
    /* t.Pos: 6 */
    /* e.NextName: 12 */
    /* e.Names: 14 */
    /* e.Other: 16 */
    struct r05_node *p[27] = { 0 };
    /* (e.OutLine) t.Pos (e.NextName) (e.Names) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[10], p[11]);
    r05_close_evar(p+16, p[11], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_DoExternu_cont);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[18]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[20], p+4);
    r05_splice_tvar(p[23], p+6);
    r05_splice_evar(p[23], p+12);
    r05_splice_evar(p[25], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoExtern0, "DoExtern0") {
  r05_this_is_generated_function();

  do {
    /* e.Names: 13 */
    /* e.OutLine: 15 */
    /* e.NextName: 17 */
    /* e.SEP: 19 */
    /* e.NewOutLine: 21 */
    /* t.Pos: 23 */
    struct r05_node *p[36] = { 0 };
    /* t.Pos (e.Names) (e.OutLine) (e.NextName) (e.SEP) (e.NewOutLine) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[0], p[3]))
      continue;
    if (! r05_brackets_right(p+7, p[0], p[5]))
      continue;
    if (! r05_brackets_right(p+9, p[0], p[7]))
      continue;
    if (! r05_brackets_right(p+11, p[0], p[9]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[7], p[8]);
    r05_close_evar(p+19, p[5], p[6]);
    r05_close_evar(p+21, p[3], p[4]);
    if (! r05_tvar_left(p+23, p[0], p[11]))
      continue;
    if (! r05_empty_hole(p[24], p[11]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_Trimm_R);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_call(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_DoExtern);
    r05_alloc_open_bracket(p+31);
    r05_alloc_chars("  ", 2);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_call(p+35);
    r05_push_stack(p[35]);
    r05_push_stack(p[30]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+19);
    r05_correct_evar(p+17);
    r05_link_brackets(p[25], p[29]);
    r05_push_stack(p[28]);
    r05_push_stack(p[26]);
    r05_correct_evar(p+15);
    r05_splice_evar(p[27], p+15);
    r05_splice_evar(p[32], p+17);
    r05_splice_evar(p[32], p+19);
    r05_splice_evar(p[34], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Names: 13 */
    /* e.OutLine: 15 */
    /* e.NextName: 17 */
    /* e.SEP: 19 */
    /* e.NewOutLine: 21 */
    /* t.Pos: 23 */
    struct r05_node *p[31] = { 0 };
    /* t.Pos (e.Names) (e.OutLine) (e.NextName) (e.SEP) (e.NewOutLine) False */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_False))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[0], p[3]))
      continue;
    if (! r05_brackets_right(p+7, p[0], p[5]))
      continue;
    if (! r05_brackets_right(p+9, p[0], p[7]))
      continue;
    if (! r05_brackets_right(p+11, p[0], p[9]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[7], p[8]);
    r05_close_evar(p+19, p[5], p[6]);
    r05_close_evar(p+21, p[3], p[4]);
    if (! r05_tvar_left(p+23, p[0], p[11]))
      continue;
    if (! r05_empty_hole(p[24], p[11]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_DoExtern);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[25]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+21);
    r05_splice_evar(p[27], p+21);
    r05_splice_evar(p[29], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CommaOrSemicolon, "CommaOrSemicolon") {
  r05_this_is_generated_function();

  do {
    /* e.Names: 4 */
    /* t.Pos: 6 */
    /* e.NextName: 8 */
    struct r05_node *p[10] = { 0 };
    /* (t.Pos e.NextName) e.Names */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);
    if (! r05_tvar_left(p+6, p[2], p[3]))
      continue;
    r05_close_evar(p+8, p[7], p[3]);

    r05_reset_allocator();
    r05_alloc_chars(", ", 2);
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
    r05_alloc_char(';');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainFunction, "PlainFunction") {
  r05_this_is_generated_function();

  do {
    /* e.Name: 4 */
    /* s.Scope: 6 */
    /* e.Sentences: 7 */
    struct r05_node *p[23] = { 0 };
    /* (e.Name) s.Scope e.Sentences */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    r05_close_evar(p+7, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_PlainScope);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_chars(" {", 2);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_open_bracket(p+15);
    r05_alloc_chars("  ", 2);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_char('}');
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_link_brackets(p[21], p[22]);
    r05_link_brackets(p[19], p[20]);
    r05_push_stack(p[18]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[15], p[16]);
    r05_link_brackets(p[9], p[13]);
    r05_correct_evar(p+4);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_splice_evar(p[12], p+4);
    r05_splice_evar(p[17], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainScope, "PlainScope") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[3] = { 0 };
    /* Entry */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Entry))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("$ENTRY ", 7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* Local */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Local))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Sentences, "Sentences") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 6 */
    /* e.Sentence: 8 */
    struct r05_node *p[16] = { 0 };
    /* (e.Indent) (e.Sentence) */
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
    r05_alloc_function(&r05f_Sentence);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[12], p+6);
    r05_splice_evar(p[14], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Indent: 6 */
    /* e.Sentence: 8 */
    /* e.Sentences: 10 */
    struct r05_node *p[25] = { 0 };
    /* (e.Indent) (e.Sentence) e.Sentences */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Sentence);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_open_bracket(p+21);
    r05_alloc_evar(p+6);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[21], p[22]);
    r05_link_brackets(p[18], p[19]);
    r05_push_stack(p[17]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[14], p+6);
    r05_splice_evar(p[16], p+8);
    r05_splice_evar(p[23], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Indent: 4 */
    struct r05_node *p[6] = { 0 };
    /* (e.Indent) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Sentence, "Sentence") {
  r05_this_is_generated_function();

  do {
    /* e.Text: 5 */
    /* s.Space: 7 */
    /* e.Indent: 8 */
    struct r05_node *p[16] = { 0 };
    /* (s.Space e.Indent) Comment e.Text */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[3], p[1], &r05f_Comment))
      continue;
    r05_close_evar(p+5, p[4], p[1]);
    if (! r05_svar_left(p+7, p[2], p[3]))
      continue;
    r05_close_evar(p+8, p[7], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_PutComment);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+5);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[12], p+8);
    r05_splice_evar(p[14], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Indent: 9 */
    /* e.Pattern: 11 */
    /* e.Result: 13 */
    struct r05_node *p[30] = { 0 };
    /* (e.Indent) (e.Pattern) RETURN (e.Result) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[5], p[1], &r05f_RETURN))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_empty_hole(p[8], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[4], p[5]);
    r05_close_evar(p+13, p[7], p[8]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Sentenceu_check);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_evar(p+9);
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_InlineExpr);
    r05_alloc_evar(p+11);
    r05_alloc_close_call(p+26);
    r05_alloc_chars(" = ", 3);
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_InlineExpr);
    r05_alloc_evar(p+13);
    r05_alloc_close_call(p+28);
    r05_alloc_char(';');
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[15]);
    r05_push_stack(p[28]);
    r05_push_stack(p[27]);
    r05_push_stack(p[26]);
    r05_push_stack(p[25]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[17], p+9);
    r05_splice_evar(p[20], p+11);
    r05_splice_evar(p[23], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Sentenceu_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(Sentenceu_check, "Sentence_check") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 8 */
    /* e.Pattern: 10 */
    /* e.Result: 12 */
    /* e.OneLineSentence: 14 */
    struct r05_node *p[32] = { 0 };
    /* (e.Indent) (e.Pattern) (e.Result) e.OneLineSentence */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[6], p[7]);
    r05_close_evar(p+14, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Sentenceu_check0);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_LongLine);
    r05_alloc_evar(p+14);
    r05_alloc_close_call(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[16]);
    r05_push_stack(p[30]);
    r05_push_stack(p[29]);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[18], p+8);
    r05_splice_evar(p[21], p+10);
    r05_splice_evar(p[24], p+12);
    r05_splice_evar(p[27], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Sentenceu_cont0);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(Sentenceu_cont, "Sentence_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 6 */
    /* e.Pattern: 8 */
    /* e.Tail: 10 */
    struct r05_node *p[25] = { 0 };
    /* (e.Indent) (e.Pattern) e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_evar(p+6);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Tail);
    r05_alloc_open_bracket(p+21);
    r05_alloc_evar(p+6);
    r05_alloc_chars("  ", 2);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[21], p[22]);
    r05_push_stack(p[19]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[16], p[17]);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[14], p+6);
    r05_splice_evar(p[18], p+8);
    r05_splice_evar(p[23], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Sentenceu_check0, "Sentence_check0") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 11 */
    /* e.Pattern: 13 */
    /* e.Result: 15 */
    /* e.OneLineSentence: 17 */
    struct r05_node *p[22] = { 0 };
    /* (e.Indent) (e.Pattern) (e.Result) (e.OneLineSentence) False */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_False))
      continue;
    if (! r05_brackets_left(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    if (! r05_empty_hole(p[10], p[2]))
      continue;
    r05_close_evar(p+11, p[3], p[4]);
    r05_close_evar(p+13, p[5], p[6]);
    r05_close_evar(p+15, p[7], p[8]);
    r05_close_evar(p+17, p[9], p[10]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+17);
    r05_splice_evar(p[20], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Indent: 10 */
    /* e.Pattern: 12 */
    /* e.Result: 14 */
    /* e.OneLineSentence: 16 */
    /* e.Other: 18 */
    struct r05_node *p[32] = { 0 };
    /* (e.Indent) (e.Pattern) (e.Result) (e.OneLineSentence) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[2], p[3]);
    r05_close_evar(p+12, p[4], p[5]);
    r05_close_evar(p+14, p[6], p[7]);
    r05_close_evar(p+16, p[8], p[9]);
    r05_close_evar(p+18, p[9], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Sentenceu_cont0);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+10);
    r05_splice_evar(p[22], p+10);
    r05_splice_evar(p[25], p+12);
    r05_splice_evar(p[28], p+14);
    r05_splice_evar(p[30], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Sentenceu_cont0, "Sentence_cont0") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 8 */
    /* e.Pattern: 10 */
    /* e.Result: 12 */
    /* e.Other: 14 */
    struct r05_node *p[27] = { 0 };
    /* (e.Indent) (e.Pattern) (e.Result) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[6], p[7]);
    r05_close_evar(p+14, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Sentenceu_cont);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_function(&r05f_RETURN);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[18], p+8);
    r05_splice_evar(p[21], p+10);
    r05_splice_evar(p[24], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PutComment, "PutComment") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    /* e.Comment: 6 */
    /* e.Tail: 9 */
    struct r05_node *p[19] = { 0 };
    /* (e.Indent) e.Comment '\n' e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    p[6] = p[3]->next;
    p[7] = p[3];
    r05_start_e_loop();
    do {
      if (! r05_char_left(p+8, p[7], p[1], '\n'))
        continue;
      r05_close_evar(p+9, p[8], p[1]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+11);
      r05_alloc_char('*');
      r05_alloc_insert_pos(p+12);
      r05_alloc_close_bracket(p+13);
      r05_alloc_open_call(p+14);
      r05_alloc_function(&r05f_PutComment);
      r05_alloc_open_bracket(p+15);
      r05_alloc_evar(p+4);
      r05_alloc_close_bracket(p+16);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_call(p+18);
      r05_push_stack(p[18]);
      r05_push_stack(p[14]);
      r05_correct_evar(p+9);
      r05_link_brackets(p[15], p[16]);
      r05_link_brackets(p[11], p[13]);
      r05_correct_evar(p+6);
      r05_correct_evar(p+4);
      r05_splice_evar(p[12], p+4);
      r05_splice_evar(p[12], p+6);
      r05_splice_evar(p[17], p+9);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+6, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Indent: 4 */
    /* e.Comment: 6 */
    struct r05_node *p[11] = { 0 };
    /* (e.Indent) e.Comment */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_char('*');
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_bracket(p+10);
    r05_link_brackets(p[8], p[10]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Tail, "Tail") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 11 */
    /* e.Result: 13 */
    /* e.Pattern: 15 */
    /* e.Tail: 17 */
    struct r05_node *p[37] = { 0 };
    /* (e.Indent) (Condition (e.Result) (e.Pattern)) e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Condition))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[5]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[5]))
      continue;
    if (! r05_empty_hole(p[10], p[5]))
      continue;
    r05_close_evar(p+11, p[2], p[3]);
    r05_close_evar(p+13, p[7], p[8]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Tailu_check);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_evar(p+11);
    r05_alloc_chars(", ", 2);
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_InlineExpr);
    r05_alloc_evar(p+13);
    r05_alloc_close_call(p+33);
    r05_alloc_chars(": ", 2);
    r05_alloc_open_call(p+34);
    r05_alloc_function(&r05f_InlineExpr);
    r05_alloc_evar(p+15);
    r05_alloc_close_call(p+35);
    r05_alloc_close_call(p+36);
    r05_push_stack(p[36]);
    r05_push_stack(p[19]);
    r05_push_stack(p[35]);
    r05_push_stack(p[34]);
    r05_push_stack(p[33]);
    r05_push_stack(p[32]);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+11);
    r05_splice_evar(p[21], p+11);
    r05_splice_evar(p[24], p+13);
    r05_splice_evar(p[27], p+15);
    r05_splice_evar(p[30], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Tailu_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(Tailu_check, "Tail_check") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 10 */
    /* e.Result: 12 */
    /* e.Pattern: 14 */
    /* e.Tail: 16 */
    /* e.OneLineCondition: 18 */
    struct r05_node *p[39] = { 0 };
    /* (e.Indent) (e.Result) (e.Pattern) (e.Tail) e.OneLineCondition */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[2], p[3]);
    r05_close_evar(p+12, p[4], p[5]);
    r05_close_evar(p+14, p[6], p[7]);
    r05_close_evar(p+16, p[8], p[9]);
    r05_close_evar(p+18, p[9], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Tail0);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_open_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_open_call(p+36);
    r05_alloc_function(&r05f_LongLine);
    r05_alloc_evar(p+18);
    r05_alloc_close_call(p+37);
    r05_alloc_close_call(p+38);
    r05_push_stack(p[38]);
    r05_push_stack(p[20]);
    r05_push_stack(p[37]);
    r05_push_stack(p[36]);
    r05_link_brackets(p[33], p[35]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+16);
    r05_splice_evar(p[22], p+16);
    r05_splice_evar(p[25], p+10);
    r05_splice_evar(p[28], p+12);
    r05_splice_evar(p[31], p+14);
    r05_splice_evar(p[34], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Indent: 10 */
    /* e.Result: 12 */
    /* e.Pattern: 14 */
    /* e.Tail: 16 */
    /* e.Other: 18 */
    struct r05_node *p[34] = { 0 };
    /* (e.Indent) (e.Result) (e.Pattern) (e.Tail) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[2], p[3]);
    r05_close_evar(p+12, p[4], p[5]);
    r05_close_evar(p+14, p[6], p[7]);
    r05_close_evar(p+16, p[8], p[9]);
    r05_close_evar(p+18, p[9], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Tailu_cont);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_function(&r05f_Condition);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_call(p+33);
    r05_push_stack(p[33]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[24], p[31]);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+10);
    r05_splice_evar(p[22], p+10);
    r05_splice_evar(p[26], p+12);
    r05_splice_evar(p[29], p+14);
    r05_splice_evar(p[32], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Tailu_cont, "Tail_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 7 */
    /* e.Result: 9 */
    struct r05_node *p[19] = { 0 };
    /* (e.Indent) RETURN (e.Result) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[3], p[1], &r05f_RETURN))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_empty_hole(p[6], p[1]))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[5], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_chars("= ", 2);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_evar(p+7);
    r05_alloc_chars("  ", 2);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_char(';');
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[15], p[16]);
    r05_link_brackets(p[12], p[14]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[13], p+7);
    r05_splice_evar(p[17], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Indent: 7 */
    /* e.Result: 9 */
    /* e.Sentences: 11 */
    struct r05_node *p[30] = { 0 };
    /* (e.Indent) CALL-BLOCK (e.Result) e.Sentences */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[3], p[1], &r05f_CALLm_BLOCK))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_chars(", ", 2);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_evar(p+7);
    r05_alloc_chars("  ", 2);
    r05_alloc_close_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_call(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_evar(p+7);
    r05_alloc_chars(": {", 3);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_open_bracket(p+24);
    r05_alloc_evar(p+7);
    r05_alloc_chars("    ", 4);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_evar(p+7);
    r05_alloc_chars("  };", 4);
    r05_alloc_close_bracket(p+29);
    r05_link_brackets(p[28], p[29]);
    r05_push_stack(p[27]);
    r05_push_stack(p[23]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[24], p[25]);
    r05_link_brackets(p[21], p[22]);
    r05_push_stack(p[20]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[17], p[18]);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[15], p+7);
    r05_splice_evar(p[19], p+9);
    r05_splice_evar(p[26], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Tail0, "Tail0") {
  r05_this_is_generated_function();

  do {
    /* e.Tail: 13 */
    /* e.Indent: 15 */
    /* e.Result: 17 */
    /* e.Pattern: 19 */
    /* e.OneLineCondition: 21 */
    struct r05_node *p[43] = { 0 };
    /* (e.Tail) (e.Indent) (e.Result) (e.Pattern) (e.OneLineCondition) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_left(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[2]))
      continue;
    if (! r05_empty_hole(p[12], p[2]))
      continue;
    r05_close_evar(p+13, p[3], p[4]);
    r05_close_evar(p+15, p[5], p[6]);
    r05_close_evar(p+17, p[7], p[8]);
    r05_close_evar(p+19, p[9], p[10]);
    r05_close_evar(p+21, p[11], p[12]);

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_chars(", ", 2);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_evar(p+15);
    r05_alloc_chars("  ", 2);
    r05_alloc_close_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_call(p+30);
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_open_bracket(p+32);
    r05_alloc_evar(p+15);
    r05_alloc_chars(": ", 2);
    r05_alloc_close_bracket(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_evar(p+15);
    r05_alloc_chars("  ", 2);
    r05_alloc_close_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_call(p+37);
    r05_alloc_open_call(p+38);
    r05_alloc_function(&r05f_Tail);
    r05_alloc_open_bracket(p+39);
    r05_alloc_evar(p+15);
    r05_alloc_close_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_close_call(p+42);
    r05_push_stack(p[42]);
    r05_push_stack(p[38]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[39], p[40]);
    r05_push_stack(p[37]);
    r05_push_stack(p[31]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[34], p[35]);
    r05_link_brackets(p[32], p[33]);
    r05_push_stack(p[30]);
    r05_push_stack(p[23]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[27], p[28]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+15);
    r05_splice_evar(p[25], p+15);
    r05_splice_evar(p[29], p+17);
    r05_splice_evar(p[36], p+19);
    r05_splice_evar(p[41], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tail: 13 */
    /* e.Indent: 15 */
    /* e.Result: 17 */
    /* e.Pattern: 19 */
    /* e.OneLineCondition: 21 */
    struct r05_node *p[32] = { 0 };
    /* (e.Tail) (e.Indent) (e.Result) (e.Pattern) (e.OneLineCondition) False */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_False))
      continue;
    if (! r05_brackets_left(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[2]))
      continue;
    if (! r05_empty_hole(p[12], p[2]))
      continue;
    r05_close_evar(p+13, p[3], p[4]);
    r05_close_evar(p+15, p[5], p[6]);
    r05_close_evar(p+17, p[7], p[8]);
    r05_close_evar(p+19, p[9], p[10]);
    r05_close_evar(p+21, p[11], p[12]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_Tail);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[26]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+21);
    r05_splice_evar(p[24], p+21);
    r05_splice_evar(p[28], p+15);
    r05_splice_evar(p[30], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Expression, "Expression") {
  r05_this_is_generated_function();

  do {
    /* e.Prefix: 6 */
    /* e.Indent: 8 */
    struct r05_node *p[20] = { 0 };
    /* (e.Prefix) (e.Indent) */
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
    r05_alloc_function(&r05f_Expressionu_check);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Trimm_R);
    r05_alloc_evar(p+6);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[10]);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[12], p+6);
    r05_splice_evar(p[15], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Expressionu_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(Expressionu_check, "Expression_check") {
  r05_this_is_generated_function();

  do {
    /* e.Prefix: 6 */
    /* e.Indent: 8 */
    struct r05_node *p[10] = { 0 };
    /* (e.Prefix) (e.Indent) */
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
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Prefix: 6 */
    /* e.Indent: 8 */
    /* e.Other: 10 */
    struct r05_node *p[20] = { 0 };
    /* (e.Prefix) (e.Indent) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Expressionu_cont);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[14], p+6);
    r05_splice_evar(p[17], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Expressionu_cont, "Expression_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Prefix: 6 */
    /* e.Indent: 8 */
    struct r05_node *p[13] = { 0 };
    /* (e.Prefix) (e.Indent) */
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
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[11], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Prefix: 6 */
    /* e.Indent: 8 */
    /* e.Expression: 10 */
    struct r05_node *p[21] = { 0 };
    /* (e.Prefix) (e.Indent) e.Expression */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_DoExpression);
    r05_alloc_function(&r05f_FIRST);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[14], p+8);
    r05_splice_evar(p[17], p+6);
    r05_splice_evar(p[19], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoExpression, "DoExpression") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 6 */
    /* e.OutLine: 8 */
    /* s.Pos: 10 */
    struct r05_node *p[14] = { 0 };
    /* s.Pos (e.Indent) (e.OutLine) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    r05_close_evar(p+8, p[2], p[3]);
    if (! r05_svar_left(p+10, p[0], p[4]))
      continue;
    if (! r05_empty_hole(p[10], p[4]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[12], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Indent: 7 */
    /* e.OutLine: 9 */
    /* s.Pos: 11 */
    struct r05_node *p[15] = { 0 };
    /* s.Pos (e.Indent) (e.OutLine) ';' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], ';'))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[0], p[3]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[3], p[4]);
    if (! r05_svar_left(p+11, p[0], p[5]))
      continue;
    if (! r05_empty_hole(p[11], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_char(';');
    r05_alloc_close_bracket(p+14);
    r05_link_brackets(p[12], p[14]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[13], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Pos: 2 */
    /* e.Indent: 7 */
    /* e.OutLine: 9 */
    /* t.NextTerm: 11 */
    /* e.Expr: 13 */
    struct r05_node *p[29] = { 0 };
    /* s.Pos (e.Indent) (e.OutLine) t.NextTerm e.Expr */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_tvar_left(p+11, p[6], p[1]))
      continue;
    r05_close_evar(p+13, p[12], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoExpressionu_check);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_InlineTerm);
    r05_alloc_tvar(p+11);
    r05_alloc_close_call(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[15]);
    r05_push_stack(p[27]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[17], p+7);
    r05_splice_evar(p[20], p+9);
    r05_splice_tvar(p[22], p+11);
    r05_splice_evar(p[24], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoExpressionu_check, "DoExpression_check") {
  r05_this_is_generated_function();

  do {
    /* s.Pos: 2 */
    /* e.Indent: 7 */
    /* e.OutLine: 9 */
    /* t.NextTerm: 11 */
    /* e.Expr: 15 */
    /* e.TextualTerm: 17 */
    struct r05_node *p[38] = { 0 };
    /* s.Pos (e.Indent) (e.OutLine) t.NextTerm (e.Expr) e.TextualTerm */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_tvar_left(p+11, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[13], p[14]);
    r05_close_evar(p+17, p[14], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_DoExpressionu_check0);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_AppendTerm);
    r05_alloc_evar(p+9);
    r05_alloc_open_bracket(p+34);
    r05_alloc_evar(p+17);
    r05_alloc_close_bracket(p+35);
    r05_alloc_close_call(p+36);
    r05_alloc_close_call(p+37);
    r05_push_stack(p[37]);
    r05_push_stack(p[19]);
    r05_push_stack(p[36]);
    r05_push_stack(p[33]);
    r05_link_brackets(p[34], p[35]);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[21], p+7);
    r05_splice_evar(p[24], p+9);
    r05_splice_tvar(p[26], p+11);
    r05_splice_evar(p[28], p+15);
    r05_splice_evar(p[31], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoExpressionu_check0, "DoExpression_check0") {
  r05_this_is_generated_function();

  do {
    /* s.Pos: 2 */
    /* e.Indent: 7 */
    /* e.OutLine: 9 */
    /* t.NextTerm: 11 */
    /* e.Expr: 17 */
    /* e.TextualTerm: 19 */
    /* e.NewOutLine: 21 */
    struct r05_node *p[43] = { 0 };
    /* s.Pos (e.Indent) (e.OutLine) t.NextTerm (e.Expr) (e.TextualTerm) e.NewOutLine */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_tvar_left(p+11, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[15], p[16]);
    r05_close_evar(p+21, p[16], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_DoExpression0);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_open_call(p+40);
    r05_alloc_function(&r05f_LongLine);
    r05_alloc_evar(p+21);
    r05_alloc_close_call(p+41);
    r05_alloc_close_call(p+42);
    r05_push_stack(p[42]);
    r05_push_stack(p[23]);
    r05_push_stack(p[41]);
    r05_push_stack(p[40]);
    r05_link_brackets(p[37], p[39]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[25], p+7);
    r05_splice_evar(p[28], p+17);
    r05_splice_tvar(p[30], p+11);
    r05_splice_evar(p[32], p+9);
    r05_splice_evar(p[35], p+19);
    r05_splice_evar(p[38], p+21);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoExpression0, "DoExpression0") {
  r05_this_is_generated_function();

  do {
    /* e.OutLine: 9 */
    /* e.TextualTerm: 11 */
    /* e.NewOutLine: 13 */
    /* s.Pos: 15 */
    /* e.Indent: 20 */
    /* e.Expr: 22 */
    /* t.NextTerm: 24 */
    struct r05_node *p[44] = { 0 };
    /* s.Pos (e.Indent) (e.Expr) t.NextTerm (e.OutLine) (e.TextualTerm) (e.NewOutLine) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[0], p[3]))
      continue;
    if (! r05_brackets_right(p+7, p[0], p[5]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    r05_close_evar(p+11, p[5], p[6]);
    r05_close_evar(p+13, p[3], p[4]);
    if (! r05_svar_left(p+15, p[0], p[7]))
      continue;
    if (! r05_brackets_left(p+16, p[15], p[7]))
      continue;
    if (! r05_brackets_left(p+18, p[17], p[7]))
      continue;
    r05_close_evar(p+20, p[16], p[17]);
    r05_close_evar(p+22, p[18], p[19]);
    if (! r05_tvar_left(p+24, p[19], p[7]))
      continue;
    if (! r05_empty_hole(p[25], p[7]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_DoExpression0u_check);
    r05_alloc_svar(p+15);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_open_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_close_bracket(p+42);
    r05_alloc_evar(p+20);
    r05_alloc_evar(p+11);
    r05_alloc_close_call(p+43);
    r05_push_stack(p[43]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[40], p[42]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[37], p[39]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+22);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+20);
    r05_splice_evar(p[28], p+20);
    r05_splice_evar(p[31], p+22);
    r05_splice_tvar(p[33], p+24);
    r05_splice_evar(p[35], p+9);
    r05_splice_evar(p[38], p+11);
    r05_splice_evar(p[41], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DoExpression0u_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoExpression0u_check, "DoExpression0_check") {
  r05_this_is_generated_function();

  do {
    /* s.Pos: 2 */
    /* e.Indent: 7 */
    /* e.Expr: 9 */
    /* t.NextTerm: 11 */
    /* e.OutLine: 19 */
    /* e.TextualTerm: 21 */
    /* e.NewOutLine: 23 */
    /* e.OutLineTerm: 25 */
    struct r05_node *p[50] = { 0 };
    /* s.Pos (e.Indent) (e.Expr) t.NextTerm (e.OutLine) (e.TextualTerm) (e.NewOutLine) e.OutLineTerm */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_tvar_left(p+11, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    r05_close_evar(p+19, p[13], p[14]);
    r05_close_evar(p+21, p[15], p[16]);
    r05_close_evar(p+23, p[17], p[18]);
    r05_close_evar(p+25, p[18], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_DoExpression1);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_open_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_bracket(p+40);
    r05_alloc_open_bracket(p+41);
    r05_alloc_insert_pos(p+42);
    r05_alloc_close_bracket(p+43);
    r05_alloc_open_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_open_call(p+47);
    r05_alloc_function(&r05f_LongLine);
    r05_alloc_evar(p+25);
    r05_alloc_close_call(p+48);
    r05_alloc_close_call(p+49);
    r05_push_stack(p[49]);
    r05_push_stack(p[27]);
    r05_push_stack(p[48]);
    r05_push_stack(p[47]);
    r05_link_brackets(p[44], p[46]);
    r05_correct_evar(p+25);
    r05_link_brackets(p[41], p[43]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[38], p[40]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+23);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[29], p+9);
    r05_splice_tvar(p[31], p+11);
    r05_splice_evar(p[33], p+19);
    r05_splice_evar(p[36], p+23);
    r05_splice_evar(p[39], p+7);
    r05_splice_evar(p[42], p+21);
    r05_splice_evar(p[45], p+25);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Pos: 2 */
    /* e.Indent: 7 */
    /* e.Expr: 9 */
    /* t.NextTerm: 11 */
    /* e.OutLine: 19 */
    /* e.TextualTerm: 21 */
    /* e.NewOutLine: 23 */
    /* e.Other: 25 */
    struct r05_node *p[45] = { 0 };
    /* s.Pos (e.Indent) (e.Expr) t.NextTerm (e.OutLine) (e.TextualTerm) (e.NewOutLine) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_tvar_left(p+11, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    r05_close_evar(p+19, p[13], p[14]);
    r05_close_evar(p+21, p[15], p[16]);
    r05_close_evar(p+23, p[17], p[18]);
    r05_close_evar(p+25, p[18], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_DoExpression0u_cont);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_open_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_bracket(p+40);
    r05_alloc_open_bracket(p+41);
    r05_alloc_insert_pos(p+42);
    r05_alloc_close_bracket(p+43);
    r05_alloc_function(&r05f_True);
    r05_alloc_close_call(p+44);
    r05_push_stack(p[44]);
    r05_push_stack(p[27]);
    r05_link_brackets(p[41], p[43]);
    r05_correct_evar(p+23);
    r05_link_brackets(p[38], p[40]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[29], p+7);
    r05_splice_evar(p[32], p+9);
    r05_splice_tvar(p[34], p+11);
    r05_splice_evar(p[36], p+19);
    r05_splice_evar(p[39], p+21);
    r05_splice_evar(p[42], p+23);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoExpression0u_cont, "DoExpression0_cont") {
  r05_this_is_generated_function();

  do {
    /* e.OutLine: 9 */
    /* e.TextualTerm: 11 */
    /* e.NewOutLine: 13 */
    /* s.Pos: 15 */
    /* e.Indent: 20 */
    /* e.Expr: 22 */
    /* t.NextTerm: 24 */
    struct r05_node *p[35] = { 0 };
    /* s.Pos (e.Indent) (e.Expr) t.NextTerm (e.OutLine) (e.TextualTerm) (e.NewOutLine) False */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_False))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[0], p[3]))
      continue;
    if (! r05_brackets_right(p+7, p[0], p[5]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    r05_close_evar(p+11, p[5], p[6]);
    r05_close_evar(p+13, p[3], p[4]);
    if (! r05_svar_left(p+15, p[0], p[7]))
      continue;
    if (! r05_brackets_left(p+16, p[15], p[7]))
      continue;
    if (! r05_brackets_left(p+18, p[17], p[7]))
      continue;
    r05_close_evar(p+20, p[16], p[17]);
    r05_close_evar(p+22, p[18], p[19]);
    if (! r05_tvar_left(p+24, p[19], p[7]))
      continue;
    if (! r05_empty_hole(p[25], p[7]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_DoExpression);
    r05_alloc_function(&r05f_NEXT);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_call(p+34);
    r05_push_stack(p[34]);
    r05_push_stack(p[26]);
    r05_correct_evar(p+22);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+20);
    r05_splice_evar(p[28], p+20);
    r05_splice_evar(p[31], p+13);
    r05_splice_evar(p[33], p+22);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoExpression1, "DoExpression1") {
  r05_this_is_generated_function();

  do {
    /* e.OutLine: 13 */
    /* e.NewOutLine: 15 */
    /* e.Indent: 17 */
    /* e.TextualTerm: 19 */
    /* e.OutLineTerm: 21 */
    /* s.Pos: 23 */
    /* e.Expr: 26 */
    /* t.NextTerm: 28 */
    struct r05_node *p[51] = { 0 };
    /* s.Pos (e.Expr) t.NextTerm (e.OutLine) (e.NewOutLine) (e.Indent) (e.TextualTerm) (e.OutLineTerm) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[0], p[3]))
      continue;
    if (! r05_brackets_right(p+7, p[0], p[5]))
      continue;
    if (! r05_brackets_right(p+9, p[0], p[7]))
      continue;
    if (! r05_brackets_right(p+11, p[0], p[9]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[7], p[8]);
    r05_close_evar(p+19, p[5], p[6]);
    r05_close_evar(p+21, p[3], p[4]);
    if (! r05_svar_left(p+23, p[0], p[11]))
      continue;
    if (! r05_brackets_left(p+24, p[23], p[11]))
      continue;
    r05_close_evar(p+26, p[24], p[25]);
    if (! r05_tvar_left(p+28, p[25], p[11]))
      continue;
    if (! r05_empty_hole(p[29], p[11]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_DoExpression1u_check);
    r05_alloc_svar(p+23);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_open_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_bracket(p+40);
    r05_alloc_open_bracket(p+41);
    r05_alloc_insert_pos(p+42);
    r05_alloc_close_bracket(p+43);
    r05_alloc_open_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_open_bracket(p+47);
    r05_alloc_insert_pos(p+48);
    r05_alloc_close_bracket(p+49);
    r05_alloc_evar(p+26);
    r05_alloc_close_call(p+50);
    r05_push_stack(p[50]);
    r05_push_stack(p[30]);
    r05_link_brackets(p[47], p[49]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[44], p[46]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[41], p[43]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[38], p[40]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+26);
    r05_splice_evar(p[32], p+26);
    r05_splice_tvar(p[34], p+28);
    r05_splice_evar(p[36], p+13);
    r05_splice_evar(p[39], p+15);
    r05_splice_evar(p[42], p+17);
    r05_splice_evar(p[45], p+19);
    r05_splice_evar(p[48], p+21);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DoExpression1u_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoExpression1u_check, "DoExpression1_check") {
  r05_this_is_generated_function();

  do {
    /* e.OutLine: 13 */
    /* e.NewOutLine: 15 */
    /* e.Indent: 17 */
    /* e.TextualTerm: 19 */
    /* e.OutLineTerm: 21 */
    /* s.Pos: 23 */
    /* e.Expr: 26 */
    /* t.NextTerm: 28 */
    struct r05_node *p[38] = { 0 };
    /* s.Pos (e.Expr) t.NextTerm (e.OutLine) (e.NewOutLine) (e.Indent) (e.TextualTerm) (e.OutLineTerm) ';' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], ';'))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[0], p[3]))
      continue;
    if (! r05_brackets_right(p+7, p[0], p[5]))
      continue;
    if (! r05_brackets_right(p+9, p[0], p[7]))
      continue;
    if (! r05_brackets_right(p+11, p[0], p[9]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[7], p[8]);
    r05_close_evar(p+19, p[5], p[6]);
    r05_close_evar(p+21, p[3], p[4]);
    if (! r05_svar_left(p+23, p[0], p[11]))
      continue;
    if (! r05_brackets_left(p+24, p[23], p[11]))
      continue;
    r05_close_evar(p+26, p[24], p[25]);
    if (! r05_tvar_left(p+28, p[25], p[11]))
      continue;
    if (! r05_empty_hole(p[29], p[11]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_MultilineTerm);
    r05_alloc_svar(p+23);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_char(';');
    r05_alloc_close_bracket(p+36);
    r05_alloc_close_call(p+37);
    r05_push_stack(p[37]);
    r05_push_stack(p[30]);
    r05_link_brackets(p[35], p[36]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+13);
    r05_splice_evar(p[32], p+13);
    r05_splice_evar(p[34], p+17);
    r05_splice_tvar(p[34], p+28);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Pos: 2 */
    /* e.Expr: 5 */
    /* t.NextTerm: 7 */
    /* e.OutLine: 19 */
    /* e.NewOutLine: 21 */
    /* e.Indent: 23 */
    /* e.TextualTerm: 25 */
    /* e.OutLineTerm: 27 */
    /* e.Other: 29 */
    struct r05_node *p[52] = { 0 };
    /* s.Pos (e.Expr) t.NextTerm (e.OutLine) (e.NewOutLine) (e.Indent) (e.TextualTerm) (e.OutLineTerm) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_tvar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    r05_close_evar(p+19, p[9], p[10]);
    r05_close_evar(p+21, p[11], p[12]);
    r05_close_evar(p+23, p[13], p[14]);
    r05_close_evar(p+25, p[15], p[16]);
    r05_close_evar(p+27, p[17], p[18]);
    r05_close_evar(p+29, p[18], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_DoExpression1u_cont);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_open_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_close_bracket(p+50);
    r05_alloc_function(&r05f_True);
    r05_alloc_close_call(p+51);
    r05_push_stack(p[51]);
    r05_push_stack(p[31]);
    r05_link_brackets(p[48], p[50]);
    r05_correct_evar(p+27);
    r05_link_brackets(p[45], p[47]);
    r05_correct_evar(p+25);
    r05_link_brackets(p[42], p[44]);
    r05_correct_evar(p+23);
    r05_link_brackets(p[39], p[41]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[33], p+5);
    r05_splice_tvar(p[35], p+7);
    r05_splice_evar(p[37], p+19);
    r05_splice_evar(p[40], p+21);
    r05_splice_evar(p[43], p+23);
    r05_splice_evar(p[46], p+25);
    r05_splice_evar(p[49], p+27);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoExpression1u_cont, "DoExpression1_cont") {
  r05_this_is_generated_function();

  do {
    /* e.OutLine: 13 */
    /* e.NewOutLine: 15 */
    /* e.Indent: 17 */
    /* e.TextualTerm: 19 */
    /* e.OutLineTerm: 21 */
    /* s.Pos: 23 */
    /* e.Expr: 26 */
    /* t.NextTerm: 28 */
    struct r05_node *p[51] = { 0 };
    /* s.Pos (e.Expr) t.NextTerm (e.OutLine) (e.NewOutLine) (e.Indent) (e.TextualTerm) (e.OutLineTerm) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[0], p[3]))
      continue;
    if (! r05_brackets_right(p+7, p[0], p[5]))
      continue;
    if (! r05_brackets_right(p+9, p[0], p[7]))
      continue;
    if (! r05_brackets_right(p+11, p[0], p[9]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[7], p[8]);
    r05_close_evar(p+19, p[5], p[6]);
    r05_close_evar(p+21, p[3], p[4]);
    if (! r05_svar_left(p+23, p[0], p[11]))
      continue;
    if (! r05_brackets_left(p+24, p[23], p[11]))
      continue;
    r05_close_evar(p+26, p[24], p[25]);
    if (! r05_tvar_left(p+28, p[25], p[11]))
      continue;
    if (! r05_empty_hole(p[29], p[11]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_DoExpression1u_check0);
    r05_alloc_svar(p+23);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_open_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_bracket(p+40);
    r05_alloc_open_bracket(p+41);
    r05_alloc_insert_pos(p+42);
    r05_alloc_close_bracket(p+43);
    r05_alloc_open_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_open_bracket(p+47);
    r05_alloc_insert_pos(p+48);
    r05_alloc_close_bracket(p+49);
    r05_alloc_evar(p+26);
    r05_alloc_close_call(p+50);
    r05_push_stack(p[50]);
    r05_push_stack(p[30]);
    r05_link_brackets(p[47], p[49]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[44], p[46]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[41], p[43]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[38], p[40]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+26);
    r05_splice_evar(p[32], p+26);
    r05_splice_tvar(p[34], p+28);
    r05_splice_evar(p[36], p+13);
    r05_splice_evar(p[39], p+15);
    r05_splice_evar(p[42], p+17);
    r05_splice_evar(p[45], p+19);
    r05_splice_evar(p[48], p+21);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DoExpression1u_cont0);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoExpression1u_check0, "DoExpression1_check0") {
  r05_this_is_generated_function();

  do {
    /* e.OutLine: 12 */
    /* e.NewOutLine: 14 */
    /* e.Indent: 16 */
    /* e.TextualTerm: 18 */
    /* e.OutLineTerm: 20 */
    /* s.Pos: 22 */
    /* e.Expr: 25 */
    /* t.NextTerm: 27 */
    struct r05_node *p[37] = { 0 };
    /* s.Pos (e.Expr) t.NextTerm (e.OutLine) (e.NewOutLine) (e.Indent) (e.TextualTerm) (e.OutLineTerm) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+6, p[0], p[4]))
      continue;
    if (! r05_brackets_right(p+8, p[0], p[6]))
      continue;
    if (! r05_brackets_right(p+10, p[0], p[8]))
      continue;
    r05_close_evar(p+12, p[10], p[11]);
    r05_close_evar(p+14, p[8], p[9]);
    r05_close_evar(p+16, p[6], p[7]);
    r05_close_evar(p+18, p[4], p[5]);
    r05_close_evar(p+20, p[2], p[3]);
    if (! r05_svar_left(p+22, p[0], p[10]))
      continue;
    if (! r05_brackets_left(p+23, p[22], p[10]))
      continue;
    r05_close_evar(p+25, p[23], p[24]);
    if (! r05_tvar_left(p+27, p[24], p[10]))
      continue;
    if (! r05_empty_hole(p[28], p[10]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_MultilineTerm);
    r05_alloc_svar(p+22);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_close_call(p+36);
    r05_push_stack(p[36]);
    r05_push_stack(p[29]);
    r05_link_brackets(p[34], p[35]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[31], p+12);
    r05_splice_evar(p[33], p+16);
    r05_splice_tvar(p[33], p+27);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Pos: 2 */
    /* e.Expr: 5 */
    /* t.NextTerm: 7 */
    /* e.OutLine: 19 */
    /* e.NewOutLine: 21 */
    /* e.Indent: 23 */
    /* e.TextualTerm: 25 */
    /* e.OutLineTerm: 27 */
    /* e.Other: 29 */
    struct r05_node *p[52] = { 0 };
    /* s.Pos (e.Expr) t.NextTerm (e.OutLine) (e.NewOutLine) (e.Indent) (e.TextualTerm) (e.OutLineTerm) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_tvar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    r05_close_evar(p+19, p[9], p[10]);
    r05_close_evar(p+21, p[11], p[12]);
    r05_close_evar(p+23, p[13], p[14]);
    r05_close_evar(p+25, p[15], p[16]);
    r05_close_evar(p+27, p[17], p[18]);
    r05_close_evar(p+29, p[18], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_DoExpression1u_cont0);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_open_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_close_bracket(p+50);
    r05_alloc_function(&r05f_True);
    r05_alloc_close_call(p+51);
    r05_push_stack(p[51]);
    r05_push_stack(p[31]);
    r05_link_brackets(p[48], p[50]);
    r05_correct_evar(p+27);
    r05_link_brackets(p[45], p[47]);
    r05_correct_evar(p+25);
    r05_link_brackets(p[42], p[44]);
    r05_correct_evar(p+23);
    r05_link_brackets(p[39], p[41]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[33], p+5);
    r05_splice_tvar(p[35], p+7);
    r05_splice_evar(p[37], p+19);
    r05_splice_evar(p[40], p+21);
    r05_splice_evar(p[43], p+23);
    r05_splice_evar(p[46], p+25);
    r05_splice_evar(p[49], p+27);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoExpression1u_cont0, "DoExpression1_cont0") {
  r05_this_is_generated_function();

  do {
    /* e.OutLine: 13 */
    /* e.NewOutLine: 15 */
    /* e.Indent: 17 */
    /* e.TextualTerm: 19 */
    /* e.OutLineTerm: 21 */
    /* s.Pos: 23 */
    /* e.Expr: 26 */
    /* t.NextTerm: 28 */
    struct r05_node *p[45] = { 0 };
    /* s.Pos (e.Expr) t.NextTerm (e.OutLine) (e.NewOutLine) (e.Indent) (e.TextualTerm) (e.OutLineTerm) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[0], p[3]))
      continue;
    if (! r05_brackets_right(p+7, p[0], p[5]))
      continue;
    if (! r05_brackets_right(p+9, p[0], p[7]))
      continue;
    if (! r05_brackets_right(p+11, p[0], p[9]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[7], p[8]);
    r05_close_evar(p+19, p[5], p[6]);
    r05_close_evar(p+21, p[3], p[4]);
    if (! r05_svar_left(p+23, p[0], p[11]))
      continue;
    if (! r05_brackets_left(p+24, p[23], p[11]))
      continue;
    r05_close_evar(p+26, p[24], p[25]);
    if (! r05_tvar_left(p+28, p[25], p[11]))
      continue;
    if (! r05_empty_hole(p[29], p[11]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_MultilineTerm);
    r05_alloc_svar(p+23);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_close_call(p+37);
    r05_alloc_open_call(p+38);
    r05_alloc_function(&r05f_DoExpression);
    r05_alloc_function(&r05f_NEXT);
    r05_alloc_open_bracket(p+39);
    r05_alloc_evar(p+17);
    r05_alloc_close_bracket(p+40);
    r05_alloc_open_bracket(p+41);
    r05_alloc_evar(p+17);
    r05_alloc_close_bracket(p+42);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_call(p+44);
    r05_push_stack(p[44]);
    r05_push_stack(p[38]);
    r05_correct_evar(p+26);
    r05_link_brackets(p[41], p[42]);
    r05_link_brackets(p[39], p[40]);
    r05_push_stack(p[37]);
    r05_push_stack(p[30]);
    r05_link_brackets(p[35], p[36]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+13);
    r05_splice_evar(p[32], p+13);
    r05_splice_evar(p[34], p+17);
    r05_splice_tvar(p[34], p+28);
    r05_splice_evar(p[43], p+26);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.OutLine: 13 */
    /* e.NewOutLine: 15 */
    /* e.Indent: 17 */
    /* e.TextualTerm: 19 */
    /* e.OutLineTerm: 21 */
    /* s.Pos: 23 */
    /* e.Expr: 26 */
    /* t.NextTerm: 28 */
    struct r05_node *p[42] = { 0 };
    /* s.Pos (e.Expr) t.NextTerm (e.OutLine) (e.NewOutLine) (e.Indent) (e.TextualTerm) (e.OutLineTerm) False */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_False))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[0], p[3]))
      continue;
    if (! r05_brackets_right(p+7, p[0], p[5]))
      continue;
    if (! r05_brackets_right(p+9, p[0], p[7]))
      continue;
    if (! r05_brackets_right(p+11, p[0], p[9]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[7], p[8]);
    r05_close_evar(p+19, p[5], p[6]);
    r05_close_evar(p+21, p[3], p[4]);
    if (! r05_svar_left(p+23, p[0], p[11]))
      continue;
    if (! r05_brackets_left(p+24, p[23], p[11]))
      continue;
    r05_close_evar(p+26, p[24], p[25]);
    if (! r05_tvar_left(p+28, p[25], p[11]))
      continue;
    if (! r05_empty_hole(p[29], p[11]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_DoExpression);
    r05_alloc_function(&r05f_NEXT);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_call(p+41);
    r05_push_stack(p[41]);
    r05_push_stack(p[33]);
    r05_correct_evar(p+26);
    r05_link_brackets(p[37], p[39]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+13);
    r05_splice_evar(p[31], p+13);
    r05_splice_evar(p[35], p+17);
    r05_splice_evar(p[38], p+21);
    r05_splice_evar(p[40], p+26);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AppendTerm, "AppendTerm") {
  r05_this_is_generated_function();

  do {
    /* e.String: 6 */
    /* e.Term: 8 */
    struct r05_node *p[11] = { 0 };
    /* e.String '\'' ('\'' e.Term) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '\''))
      continue;
    if (! r05_char_right(p+5, p[0], p[2], '\''))
      continue;
    r05_close_evar(p+6, p[0], p[5]);
    r05_close_evar(p+8, p[4], p[3]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+10);
    r05_correct_evar(p+8);
    r05_correct_evar(p+6);
    r05_splice_evar(p[10], p+6);
    r05_splice_evar(p[10], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.String: 5 */
    /* e.Term: 7 */
    struct r05_node *p[11] = { 0 };
    /* e.String ' ' (e.Term) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_char_right(p+4, p[0], p[2], ' '))
      continue;
    r05_close_evar(p+5, p[0], p[4]);
    r05_close_evar(p+7, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+9);
    r05_alloc_char(' ');
    r05_alloc_insert_pos(p+10);
    r05_correct_evar(p+7);
    r05_correct_evar(p+5);
    r05_splice_evar(p[9], p+5);
    r05_splice_evar(p[10], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.String: 4 */
    /* e.Term: 6 */
    struct r05_node *p[10] = { 0 };
    /* e.String (e.Term) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[0], p[2]);
    r05_close_evar(p+6, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+8);
    r05_alloc_char(' ');
    r05_alloc_insert_pos(p+9);
    r05_correct_evar(p+6);
    r05_correct_evar(p+4);
    r05_splice_evar(p[8], p+4);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(InlineTerm, "InlineTerm") {
  r05_this_is_generated_function();

  do {
    /* s.Type: 4 */
    /* e.Value: 5 */
    struct r05_node *p[10] = { 0 };
    /* (s.Type e.Value) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[2], p[3]))
      continue;
    r05_close_evar(p+5, p[4], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_PlainTerm);
    r05_alloc_svar(p+4);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[8], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* ';' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], ';'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char(';');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(MultilineTerm, "MultilineTerm") {
  r05_this_is_generated_function();

  do {
    /* e.Prefix: 7 */
    /* e.Suffix: 9 */
    /* t.Term: 11 */
    /* e.Indent: 13 */
    struct r05_node *p[24] = { 0 };
    /* FIRST (e.Prefix) e.Indent t.Term (e.Suffix) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_FIRST))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_tvar_right(p+11, p[4], p[5]))
      continue;
    r05_close_evar(p+13, p[4], p[11]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_MultilineTermm_Prefix);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+9);
    r05_correct_evar(p+13);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[17], p+7);
    r05_splice_evar(p[19], p+13);
    r05_splice_tvar(p[19], p+11);
    r05_splice_evar(p[21], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Prefix: 7 */
    /* e.Suffix: 9 */
    /* t.Term: 11 */
    /* e.Indent: 13 */
    struct r05_node *p[27] = { 0 };
    /* NEXT (e.Prefix) e.Indent t.Term (e.Suffix) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_NEXT))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_tvar_right(p+11, p[4], p[5]))
      continue;
    r05_close_evar(p+13, p[4], p[11]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_MultilineTermm_Prefix);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_evar(p+13);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[16], p+7);
    r05_splice_evar(p[20], p+13);
    r05_splice_tvar(p[22], p+11);
    r05_splice_evar(p[24], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(MultilineTermm_Prefix, "MultilineTerm-Prefix") {
  r05_this_is_generated_function();

  do {
    /* e.Prefix: 6 */
    /* e.Suffix: 8 */
    /* t.Term: 10 */
    /* e.Indent: 12 */
    struct r05_node *p[26] = { 0 };
    /* (e.Prefix) e.Indent t.Term (e.Suffix) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    if (! r05_tvar_right(p+10, p[3], p[4]))
      continue;
    r05_close_evar(p+12, p[3], p[10]);

    r05_reset_allocator();
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_MultilineTermm_Prefix0);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_tvar(p+10);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[14]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[16], p+6);
    r05_splice_evar(p[19], p+12);
    r05_splice_tvar(p[21], p+10);
    r05_splice_evar(p[23], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(MultilineTermm_Prefix0, "MultilineTerm-Prefix0") {
  r05_this_is_generated_function();

  do {
    /* e.Prefix: 11 */
    /* e.Indent: 13 */
    /* e.Suffix: 15 */
    /* e.Expr: 17 */
    /* t.Term: 19 */
    struct r05_node *p[35] = { 0 };
    /* (e.Prefix) (e.Indent) t.Term (e.Suffix) (Brackets e.Expr) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_right(p+6, p[5], p[1]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_Brackets))
      continue;
    if (! r05_brackets_right(p+9, p[5], p[6]))
      continue;
    r05_close_evar(p+11, p[2], p[3]);
    r05_close_evar(p+13, p[4], p[5]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[8], p[7]);
    if (! r05_tvar_left(p+19, p[5], p[9]))
      continue;
    if (! r05_empty_hole(p[20], p[9]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_char('(');
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_chars("  ", 2);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_evar(p+13);
    r05_alloc_chars("  ", 2);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_call(p+31);
    r05_alloc_open_bracket(p+32);
    r05_alloc_evar(p+13);
    r05_alloc_char(')');
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+15);
    r05_push_stack(p[31]);
    r05_push_stack(p[24]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[28], p[29]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+11);
    r05_splice_evar(p[22], p+11);
    r05_splice_evar(p[26], p+13);
    r05_splice_evar(p[30], p+17);
    r05_splice_evar(p[33], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Prefix: 11 */
    /* e.Indent: 13 */
    /* e.Suffix: 15 */
    /* t.Term: 17 */
    /* t.SrcPos: 19 */
    /* e.Function: 23 */
    /* e.Expr: 25 */
    struct r05_node *p[42] = { 0 };
    /* (e.Prefix) (e.Indent) t.Term (e.Suffix) (Call t.SrcPos (e.Function) e.Expr) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_right(p+6, p[5], p[1]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_Call))
      continue;
    if (! r05_brackets_right(p+9, p[5], p[6]))
      continue;
    r05_close_evar(p+11, p[2], p[3]);
    r05_close_evar(p+13, p[4], p[5]);
    r05_close_evar(p+15, p[9], p[10]);
    if (! r05_tvar_left(p+17, p[5], p[9]))
      continue;
    if (! r05_empty_hole(p[18], p[9]))
      continue;
    if (! r05_tvar_left(p+19, p[8], p[7]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[7]))
      continue;
    r05_close_evar(p+23, p[21], p[22]);
    r05_close_evar(p+25, p[22], p[7]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_char('<');
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_chars("  ", 2);
    r05_alloc_close_bracket(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_evar(p+13);
    r05_alloc_chars("  ", 2);
    r05_alloc_close_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_call(p+38);
    r05_alloc_open_bracket(p+39);
    r05_alloc_evar(p+13);
    r05_alloc_char('>');
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_link_brackets(p[39], p[41]);
    r05_correct_evar(p+15);
    r05_push_stack(p[38]);
    r05_push_stack(p[31]);
    r05_correct_evar(p+25);
    r05_link_brackets(p[35], p[36]);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[27], p[30]);
    r05_correct_evar(p+23);
    r05_correct_evar(p+11);
    r05_splice_evar(p[28], p+11);
    r05_splice_evar(p[29], p+23);
    r05_splice_evar(p[33], p+13);
    r05_splice_evar(p[37], p+25);
    r05_splice_evar(p[40], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Prefix: 10 */
    /* e.Indent: 12 */
    /* e.Suffix: 14 */
    /* s.Type: 16 */
    /* e.Value: 17 */
    /* t.Term: 19 */
    struct r05_node *p[28] = { 0 };
    /* (e.Prefix) (e.Indent) t.Term (e.Suffix) (s.Type e.Value) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_right(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_right(p+8, p[5], p[6]))
      continue;
    r05_close_evar(p+10, p[2], p[3]);
    r05_close_evar(p+12, p[4], p[5]);
    r05_close_evar(p+14, p[8], p[9]);
    if (! r05_svar_left(p+16, p[6], p[7]))
      continue;
    r05_close_evar(p+17, p[16], p[7]);
    if (! r05_tvar_left(p+19, p[5], p[8]))
      continue;
    if (! r05_empty_hole(p[20], p[8]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_PlainTerm);
    r05_alloc_svar(p+16);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_link_brackets(p[21], p[27]);
    r05_correct_evar(p+14);
    r05_push_stack(p[25]);
    r05_push_stack(p[23]);
    r05_correct_evar(p+17);
    r05_correct_evar(p+10);
    r05_splice_evar(p[22], p+10);
    r05_splice_evar(p[24], p+17);
    r05_splice_evar(p[26], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainTerm, "PlainTerm") {
  r05_this_is_generated_function();

  do {
    /* e.Chars: 4 */
    struct r05_node *p[9] = { 0 };
    /* Symbol Word e.Chars */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Symbol))
      continue;
    if (! r05_function_left(p+3, p[2], p[1], &r05f_Word))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_PlainCompound);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Number: 4 */
    struct r05_node *p[7] = { 0 };
    /* Symbol Number s.Number */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Symbol))
      continue;
    if (! r05_function_left(p+3, p[2], p[1], &r05f_Number))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_PlainNumber);
    r05_alloc_svar(p+4);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Char: 4 */
    struct r05_node *p[7] = { 0 };
    /* Symbol Char s.Char */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Symbol))
      continue;
    if (! r05_function_left(p+3, p[2], p[1], &r05f_Char))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_PlainChar);
    r05_alloc_svar(p+4);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.SrcPos: 3 */
    /* s.Type: 5 */
    /* e.Index: 6 */
    struct r05_node *p[12] = { 0 };
    /* Variable t.SrcPos s.Type e.Index */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Variable))
      continue;
    if (! r05_tvar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_PlainVariable);
    r05_alloc_insert_pos(p+9);
    r05_alloc_svar(p+5);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+6);
    r05_splice_tvar(p[9], p+3);
    r05_splice_evar(p[10], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.SrcPos: 3 */
    /* e.Function: 7 */
    /* e.Arg: 9 */
    struct r05_node *p[18] = { 0 };
    /* Call t.SrcPos (e.Function) e.Arg */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Call))
      continue;
    if (! r05_tvar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_PlainCall);
    r05_alloc_insert_pos(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+7);
    r05_splice_tvar(p[12], p+3);
    r05_splice_evar(p[14], p+7);
    r05_splice_evar(p[16], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Expr: 3 */
    struct r05_node *p[8] = { 0 };
    /* Brackets e.Expr */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Brackets))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_PlainBrackets);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainCompound, "PlainCompound") {
  r05_this_is_generated_function();

  do {
    /* e.Chars: 2 */
    struct r05_node *p[11] = { 0 };
    /* e.Chars */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_PlainCompoundu_check);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_IsIdent);
    r05_alloc_evar(p+2);
    r05_alloc_close_call(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[4]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_PlainCompoundu_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(PlainCompoundu_check, "PlainCompound_check") {
  r05_this_is_generated_function();

  do {
    /* e.Chars: 5 */
    /* e.Textual: 7 */
    struct r05_node *p[10] = { 0 };
    /* (e.Chars) True e.Textual */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[3], p[1], &r05f_True))
      continue;
    r05_close_evar(p+5, p[2], p[3]);
    r05_close_evar(p+7, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+9);
    r05_correct_evar(p+7);
    r05_splice_evar(p[9], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Chars: 4 */
    /* e.Other: 6 */
    struct r05_node *p[11] = { 0 };
    /* (e.Chars) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_PlainCompoundu_cont);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainCompoundu_cont, "PlainCompound_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Chars: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Chars */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_char('\"');
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DoCompound);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_alloc_char('\"');
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoCompound, "DoCompound") {
  r05_this_is_generated_function();

  do {
    /* s.Char: 2 */
    /* e.Chars: 3 */
    struct r05_node *p[10] = { 0 };
    /* s.Char e.Chars */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_CharRep);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+6);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_DoCompound);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_correct_evar(p+3);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_splice_evar(p[8], p+3);
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

R05_DEFINE_LOCAL_FUNCTION(IsIdent, "IsIdent") {
  r05_this_is_generated_function();

  do {
    /* s.Initial: 2 */
    /* e.Tail: 3 */
    struct r05_node *p[12] = { 0 };
    /* s.Initial e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_IsIdentu_check);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+6);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_bracket(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Type);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[5]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_link_brackets(p[6], p[8]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[7], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_IsIdentu_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(IsIdentu_check, "IsIdent_check") {
  r05_this_is_generated_function();

  do {
    /* s.Initial: 2, 6 */
    /* e.Tail: 7 */
    /* s.SubType: 9 */
    struct r05_node *p[15] = { 0 };
    /* s.Initial (e.Tail) 'L' s.SubType s.Initial */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    if (! r05_char_left(p+5, p[4], p[1], 'L'))
      continue;
    if (! r05_repeated_svar_right(p+6, p[5], p[1], p+2))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    if (! r05_svar_left(p+9, p[5], p[6]))
      continue;
    if (! r05_empty_hole(p[9], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_DoIsIdent);
    r05_alloc_open_bracket(p+11);
    r05_alloc_svar(p+2);
    r05_alloc_close_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[11], p[12]);
    r05_splice_evar(p[13], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Initial: 2 */
    /* e.Tail: 5 */
    /* e.Other: 7 */
    struct r05_node *p[12] = { 0 };
    /* s.Initial (e.Tail) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_IsIdentu_cont);
    r05_alloc_svar(p+2);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[10], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(IsIdentu_cont, "IsIdent_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Other: 2 */
    struct r05_node *p[4] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_False);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoIsIdent, "DoIsIdent") {
  r05_this_is_generated_function();

  do {
    /* e.Valid: 5 */
    /* e.Tail: 7 */
    struct r05_node *p[15] = { 0 };
    /* (e.Valid) '-' e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[3], p[1], '-'))
      continue;
    r05_close_evar(p+5, p[2], p[3]);
    r05_close_evar(p+7, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_DoIsIdent);
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_char('-');
    r05_alloc_close_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[11], p+5);
    r05_splice_evar(p[13], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Valid: 5 */
    /* e.Tail: 7 */
    struct r05_node *p[15] = { 0 };
    /* (e.Valid) '_' e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[3], p[1], '_'))
      continue;
    r05_close_evar(p+5, p[2], p[3]);
    r05_close_evar(p+7, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_DoIsIdent);
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_char('_');
    r05_alloc_close_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[11], p+5);
    r05_splice_evar(p[13], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Valid: 4 */
    /* s.Next: 6 */
    /* e.Tail: 7 */
    struct r05_node *p[19] = { 0 };
    /* (e.Valid) s.Next e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    r05_close_evar(p+7, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_DoIsIdentu_check);
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_svar(p+6);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Type);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[9]);
    r05_push_stack(p[17]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[11], p+4);
    r05_splice_evar(p[14], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DoIsIdentu_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoIsIdentu_check, "DoIsIdent_check") {
  r05_this_is_generated_function();

  do {
    /* e.Valid: 4 */
    /* s.Next: 6, 10 */
    /* e.Tail: 11 */
    /* s.Subtype: 13 */
    struct r05_node *p[20] = { 0 };
    /* (e.Valid) s.Next (e.Tail) 'L' s.Subtype s.Next */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_char_left(p+9, p[8], p[1], 'L'))
      continue;
    if (! r05_repeated_svar_right(p+10, p[9], p[1], p+6))
      continue;
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_svar_left(p+13, p[9], p[10]))
      continue;
    if (! r05_empty_hole(p[13], p[10]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_DoIsIdent);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_svar(p+6);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[16], p+4);
    r05_splice_evar(p[18], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Valid: 4 */
    /* s.Next: 6 */
    /* e.Tail: 9 */
    /* e.Other: 11 */
    struct r05_node *p[19] = { 0 };
    /* (e.Valid) s.Next (e.Tail) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    r05_close_evar(p+11, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_DoIsIdentu_cont);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_svar(p+6);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[15], p+4);
    r05_splice_evar(p[17], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoIsIdentu_cont, "DoIsIdent_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Valid: 4 */
    /* s.Next: 6 */
    /* e.Tail: 7 */
    struct r05_node *p[19] = { 0 };
    /* (e.Valid) s.Next e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    r05_close_evar(p+7, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_DoIsIdentu_check0);
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_svar(p+6);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Type);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[9]);
    r05_push_stack(p[17]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[11], p+4);
    r05_splice_evar(p[14], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DoIsIdentu_cont0);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoIsIdentu_check0, "DoIsIdent_check0") {
  r05_this_is_generated_function();

  do {
    /* e.Valid: 4 */
    /* s.Next: 6, 11 */
    /* e.Tail: 12 */
    struct r05_node *p[20] = { 0 };
    /* (e.Valid) s.Next (e.Tail) 'D0' s.Next */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_char_left(p+9, p[8], p[1], 'D'))
      continue;
    if (! r05_char_left(p+10, p[9], p[1], '0'))
      continue;
    if (! r05_repeated_svar_left(p+11, p[10], p[1], p+6))
      continue;
    if (! r05_empty_hole(p[11], p[1]))
      continue;
    r05_close_evar(p+12, p[7], p[8]);

    r05_reset_allocator();
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_DoIsIdent);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_svar(p+6);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[16], p+4);
    r05_splice_evar(p[18], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Valid: 4 */
    /* s.Next: 6 */
    /* e.Tail: 9 */
    /* e.Other: 11 */
    struct r05_node *p[19] = { 0 };
    /* (e.Valid) s.Next (e.Tail) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    r05_close_evar(p+11, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_DoIsIdentu_cont0);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_svar(p+6);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[15], p+4);
    r05_splice_evar(p[17], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoIsIdentu_cont0, "DoIsIdent_cont0") {
  r05_this_is_generated_function();

  do {
    /* e.Valid: 4 */
    struct r05_node *p[7] = { 0 };
    /* (e.Valid) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_True);
    r05_alloc_insert_pos(p+6);
    r05_correct_evar(p+4);
    r05_splice_evar(p[6], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Valid: 4 */
    /* s.Other: 6 */
    /* e.Tail: 7 */
    struct r05_node *p[9] = { 0 };
    /* (e.Valid) s.Other e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    r05_close_evar(p+7, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_False);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainNumber, "PlainNumber") {
  r05_this_is_generated_function();

  do {
    /* s.Number: 2 */
    struct r05_node *p[5] = { 0 };
    /* s.Number */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+4);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainChar, "PlainChar") {
  r05_this_is_generated_function();

  do {
    /* s.Char: 2 */
    struct r05_node *p[5] = { 0 };
    /* s.Char */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('\'');
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_CharRep);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+4);
    r05_alloc_char('\'');
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CharRep, "CharRep") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[3] = { 0 };
    /* '\'' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '\''))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\\\'", 2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* '\"' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '\"'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\\\"", 2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* '\\' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '\\'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\\\\", 2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* '\n' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '\n'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\\n", 2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* '\r' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '\r'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\\r", 2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* '\t' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '\t'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\\t", 2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Char: 2 */
    struct r05_node *p[7] = { 0 };
    /* s.Char */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_CharRepu_check);
    r05_alloc_svar(p+2);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[3]);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CharRepu_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(CharRepu_check, "CharRep_check") {
  r05_this_is_generated_function();

  do {
    /* s.Char: 2 */
    /* s.Ord: 3 */
    struct r05_node *p[8] = { 0 };
    /* s.Char s.Ord */
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
    r05_alloc_function(&r05f_CharRepu_check0);
    r05_alloc_svar(p+2);
    r05_alloc_svar(p+3);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Compare);
    r05_alloc_svar(p+3);
    r05_alloc_number(32UL);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[4]);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CharRepu_cont0);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(CharRepu_cont, "CharRep_cont") {
  r05_this_is_generated_function();

  do {
    /* s.Char: 2 */
    struct r05_node *p[3] = { 0 };
    /* s.Char */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_svar(p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CharRepu_check0, "CharRep_check0") {
  r05_this_is_generated_function();

  do {
    /* s.Char: 3 */
    /* s.Ord: 4 */
    struct r05_node *p[13] = { 0 };
    /* s.Char s.Ord '-' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], '-'))
      continue;
    if (! r05_svar_left(p+3, p[0], p[2]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\\x", 2);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_HexDigit);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_k2F_);
    r05_alloc_svar(p+4);
    r05_alloc_number(16UL);
    r05_alloc_close_call(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_HexDigit);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_k25_);
    r05_alloc_svar(p+4);
    r05_alloc_number(16UL);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[9]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_push_stack(p[5]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Char: 2 */
    /* s.Ord: 3 */
    /* e.Other: 4 */
    struct r05_node *p[8] = { 0 };
    /* s.Char s.Ord e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_CharRepu_cont0);
    r05_alloc_svar(p+2);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CharRepu_cont0, "CharRep_cont0") {
  r05_this_is_generated_function();

  do {
    /* s.Char: 2 */
    /* e.Other: 3 */
    struct r05_node *p[7] = { 0 };
    /* s.Char e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_CharRepu_cont);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(HexDigit, "HexDigit") {
  r05_this_is_generated_function();

  do {
    /* s.Number: 2 */
    struct r05_node *p[7] = { 0 };
    /* s.Number */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_HexDigitu_check);
    r05_alloc_svar(p+2);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_First);
    r05_alloc_svar(p+2);
    r05_alloc_chars("0123456789abcdef", 16);
    r05_alloc_close_call(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[3]);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(HexDigitu_check, "HexDigit_check") {
  r05_this_is_generated_function();

  do {
    /* s.Number: 2 */
    /* e.1: 5 */
    /* s.Digit: 7 */
    /* e.2: 8 */
    struct r05_node *p[10] = { 0 };
    /* s.Number (e.1) s.Digit e.2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    r05_close_evar(p+8, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_svar(p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainVariable, "PlainVariable") {
  r05_this_is_generated_function();

  do {
    /* t.SrcPos: 2 */
    /* s.Type: 4 */
    /* e.Index: 5 */
    struct r05_node *p[8] = { 0 };
    /* t.SrcPos s.Type e.Index */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_svar(p+4);
    r05_alloc_char('.');
    r05_alloc_insert_pos(p+7);
    r05_correct_evar(p+5);
    r05_splice_evar(p[7], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainBrackets, "PlainBrackets") {
  r05_this_is_generated_function();

  do {
    /* e.Expr: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Expr */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_char('(');
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_InlineExpr);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_alloc_char(')');
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(PlainCall, "PlainCall") {
  r05_this_is_generated_function();

  do {
    /* e.Function: 4 */
    /* t.SrcPos: 6 */
    struct r05_node *p[9] = { 0 };
    /* t.SrcPos (e.Function) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[7], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('<');
    r05_alloc_insert_pos(p+8);
    r05_alloc_char('>');
    r05_correct_evar(p+4);
    r05_splice_evar(p[8], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.SrcPos: 2 */
    /* e.Function: 6 */
    /* e.Expr: 8 */
    struct r05_node *p[14] = { 0 };
    /* t.SrcPos (e.Function) e.Expr */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    r05_close_evar(p+8, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_char('<');
    r05_alloc_insert_pos(p+10);
    r05_alloc_char(' ');
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_InlineExpr);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_char('>');
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+6);
    r05_splice_evar(p[10], p+6);
    r05_splice_evar(p[12], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(InlineExpr, "InlineExpr") {
  r05_this_is_generated_function();

  do {
    /* t.Term: 2 */
    /* e.Expr: 4 */
    struct r05_node *p[14] = { 0 };
    /* t.Term e.Expr */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_DoInlineExpr);
    r05_alloc_open_bracket(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_InlineTerm);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[6]);
    r05_correct_evar(p+4);
    r05_link_brackets(p[7], p[11]);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_splice_tvar(p[9], p+2);
    r05_splice_evar(p[12], p+4);
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

R05_DEFINE_LOCAL_FUNCTION(DoInlineExpr, "DoInlineExpr") {
  r05_this_is_generated_function();

  do {
    /* e.Text: 4 */
    /* t.NextTerm: 6 */
    /* e.Expr: 8 */
    struct r05_node *p[23] = { 0 };
    /* (e.Text) t.NextTerm e.Expr */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[3], p[1]))
      continue;
    r05_close_evar(p+8, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_DoInlineExpr);
    r05_alloc_open_bracket(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_AppendTerm);
    r05_alloc_insert_pos(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_InlineTerm);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[11], p[20]);
    r05_push_stack(p[19]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[14], p[18]);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[13], p+4);
    r05_splice_tvar(p[16], p+6);
    r05_splice_evar(p[21], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Text: 4 */
    struct r05_node *p[7] = { 0 };
    /* (e.Text) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+6);
    r05_correct_evar(p+4);
    r05_splice_evar(p[6], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */

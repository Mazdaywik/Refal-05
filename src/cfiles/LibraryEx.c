/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Apply)
R05_DECLARE_ENTRY_FUNCTION(Map)
R05_DECLARE_ENTRY_FUNCTION(Reduce)
R05_DECLARE_ENTRY_FUNCTION(MapAccum)
R05_DECLARE_LOCAL_FUNCTION(DoMapAccum)
R05_DECLARE_LOCAL_FUNCTION(MapAccumm_AddScanned)
R05_DECLARE_ENTRY_FUNCTION(DelAccumulator)
R05_DECLARE_LOCAL_FUNCTION(LOADm_SAVEm_HANDLE)
R05_DECLARE_ENTRY_FUNCTION(LoadFile)
R05_DECLARE_LOCAL_FUNCTION(DoLoadFile)
R05_DECLARE_ENTRY_FUNCTION(SaveFile)
R05_DECLARE_LOCAL_FUNCTION(SaveFilem_WriteBracketLine)
R05_DECLARE_ENTRY_FUNCTION(Inc)
R05_DECLARE_ENTRY_FUNCTION(Dec)
R05_DECLARE_ENTRY_FUNCTION(ArgList)
R05_DECLARE_LOCAL_FUNCTION(DoArgList)
R05_DECLARE_LOCAL_FUNCTION(SwDoArgList)
R05_DECLARE_ENTRY_FUNCTION(Trim)
R05_DECLARE_ENTRY_FUNCTION(Trimm_L)
R05_DECLARE_ENTRY_FUNCTION(Trimm_R)
R05_DECLARE_ENTRY_FUNCTION(OneOf)
R05_DECLARE_ENTRY_FUNCTION(Unique)
R05_DECLARE_ENTRY_FUNCTION(TryLoadExpr)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Prepare)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_PrepareLine)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parse)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parseu_check)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parseu_cont)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parseu_check0)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parseu_cont0)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parseu_check1)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parseu_cont1)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Ident)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Number)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Number0)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_MakeError)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_MakeErroru_check)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Quote)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Quote0)
R05_DECLARE_LOCAL_FUNCTION(SkipSpace)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Hex)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Hexu_check)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Hexu_cont)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Hexu_check0)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Hexu_cont0)
R05_DECLARE_LOCAL_FUNCTION(Hex)
R05_DECLARE_LOCAL_FUNCTION(Hexu_check)
R05_DECLARE_LOCAL_FUNCTION(Hexu_cont)
R05_DECLARE_LOCAL_FUNCTION(Hexu_check0)
R05_DECLARE_LOCAL_FUNCTION(Hexu_cont0)
R05_DECLARE_LOCAL_FUNCTION(Hexu_check1)
R05_DECLARE_LOCAL_FUNCTION(Hexu_cont1)
R05_DECLARE_LOCAL_FUNCTION(First2)
R05_DECLARE_ENTRY_FUNCTION(LoadExpr)
R05_DECLARE_LOCAL_FUNCTION(LoadExpr0)
R05_DEFINE_METAFUNCTION(Mu, "Mu")
R05_DEFINE_METAFUNCTION(Up, "Up")
R05_DEFINE_METAFUNCTION(Evm_met, "Ev-met")
R05_DEFINE_METAFUNCTION(Residue, "Residue")
R05_DEFINE_METAFUNCTION(k3F_, "?")
R05_DECLARE_ENTRY_FUNCTION(Open)
R05_DECLARE_ENTRY_FUNCTION(Get)
R05_DECLARE_ENTRY_FUNCTION(Close)
R05_DECLARE_ENTRY_FUNCTION(Add)
R05_DECLARE_ENTRY_FUNCTION(Sub)
R05_DECLARE_ENTRY_FUNCTION(Putout)
R05_DECLARE_ENTRY_FUNCTION(Symb)
R05_DECLARE_ENTRY_FUNCTION(Exit)
R05_DECLARE_ENTRY_FUNCTION(Arg)
R05_DECLARE_ENTRY_FUNCTION(Implode)
R05_DECLARE_ENTRY_FUNCTION(Type)
R05_DECLARE_ENTRY_FUNCTION(Lenw)
R05_DECLARE_ENTRY_FUNCTION(Numb)
R05_DECLARE_ENTRY_FUNCTION(m_)
R05_DECLARE_ENTRY_FUNCTION(Implodeu_Ext)
R05_DECLARE_ENTRY_FUNCTION(Chr)
R05_DECLARE_ENTRY_FUNCTION(k2B_)
R05_DECLARE_ENTRY_FUNCTION(k2A_)
R05_DECLARE_ENTRY_FUNCTION(Upper)
R05_DEFINE_LOCAL_ENUM(True, "True")
R05_DEFINE_LOCAL_ENUM(False, "False")
R05_DEFINE_LOCAL_ENUM(Success, "Success")
R05_DEFINE_LOCAL_ENUM(Fails, "Fails")

R05_DEFINE_ENTRY_FUNCTION(Apply, "Apply") {
  r05_this_is_generated_function();

  do {
    /* s.Fn: 2 */
    /* e.Argument: 3 */
    struct r05_node *p[8] = { 0 };
    /* s.Fn e.Argument */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Mu);
    r05_alloc_svar(p+2);
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
    /* e.Argument: 4 */
    /* t.Closure: 6 */
    /* e.Bounded: 8 */
    struct r05_node *p[13] = { 0 };
    /* (t.Closure e.Bounded) e.Argument */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);
    if (! r05_tvar_left(p+6, p[2], p[3]))
      continue;
    r05_close_evar(p+8, p[7], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Apply);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+4);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[11], p+6);
    r05_splice_evar(p[11], p+8);
    r05_splice_evar(p[11], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Map, "Map") {
  r05_this_is_generated_function();

  do {
    /* t.Fn: 2 */
    /* t.Next: 4 */
    /* e.Tail: 6 */
    struct r05_node *p[14] = { 0 };
    /* t.Fn t.Next e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Apply);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Map);
    r05_alloc_tvar(p+2);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+6);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_splice_tvar(p[9], p+2);
    r05_splice_tvar(p[9], p+4);
    r05_splice_evar(p[12], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Fn: 2 */
    struct r05_node *p[4] = { 0 };
    /* t.Fn */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Reduce, "Reduce") {
  r05_this_is_generated_function();

  do {
    /* t.Fn: 2 */
    /* t.Acc: 4 */
    /* t.Next: 6 */
    /* e.Tail: 8 */
    struct r05_node *p[17] = { 0 };
    /* t.Fn t.Acc t.Next e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_tvar_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Reduce);
    r05_alloc_insert_pos(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Apply);
    r05_alloc_tvar(p+2);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_push_stack(p[16]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+8);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_splice_tvar(p[11], p+2);
    r05_splice_tvar(p[13], p+4);
    r05_splice_tvar(p[13], p+6);
    r05_splice_evar(p[15], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Fn: 2 */
    /* t.Acc: 4 */
    struct r05_node *p[7] = { 0 };
    /* t.Fn t.Acc */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+6);
    r05_splice_tvar(p[6], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(MapAccum, "MapAccum") {
  r05_this_is_generated_function();

  do {
    /* t.Fn: 2 */
    /* t.Acc: 4 */
    /* e.Tail: 6 */
    struct r05_node *p[14] = { 0 };
    /* t.Fn t.Acc e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_DoMapAccum);
    r05_alloc_insert_pos(p+9);
    r05_alloc_open_bracket(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[10], p[11]);
    r05_splice_tvar(p[9], p+2);
    r05_splice_tvar(p[9], p+4);
    r05_splice_evar(p[12], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoMapAccum, "DoMapAccum") {
  r05_this_is_generated_function();

  do {
    /* t.Fn: 2 */
    /* t.Acc: 4 */
    /* e.Scanned: 8 */
    /* t.Next: 10 */
    /* e.Tail: 12 */
    struct r05_node *p[26] = { 0 };
    /* t.Fn t.Acc (e.Scanned) t.Next e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_tvar_left(p+10, p[7], p[1]))
      continue;
    r05_close_evar(p+12, p[11], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_DoMapAccum);
    r05_alloc_insert_pos(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_MapAccumm_AddScanned);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Apply);
    r05_alloc_tvar(p+2);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_call(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+12);
    r05_push_stack(p[23]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+8);
    r05_push_stack(p[19]);
    r05_push_stack(p[17]);
    r05_splice_tvar(p[15], p+2);
    r05_splice_tvar(p[18], p+4);
    r05_splice_tvar(p[18], p+10);
    r05_splice_evar(p[21], p+8);
    r05_splice_evar(p[24], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 4 */
    /* t.Fn: 6 */
    /* t.Acc: 8 */
    struct r05_node *p[11] = { 0 };
    /* t.Fn t.Acc (e.Scanned) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[0], p[2]))
      continue;
    if (! r05_tvar_left(p+8, p[7], p[2]))
      continue;
    if (! r05_empty_hole(p[9], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+10);
    r05_correct_evar(p+4);
    r05_splice_tvar(p[10], p+8);
    r05_splice_evar(p[10], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(MapAccumm_AddScanned, "MapAccum-AddScanned") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 4 */
    /* t.Acc: 6 */
    /* e.StepScanned: 8 */
    struct r05_node *p[14] = { 0 };
    /* t.Acc e.StepScanned (e.Scanned) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[0], p[2]))
      continue;
    r05_close_evar(p+8, p[7], p[2]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+10);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+4);
    r05_splice_tvar(p[10], p+6);
    r05_splice_evar(p[12], p+4);
    r05_splice_evar(p[12], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(DelAccumulator, "DelAccumulator") {
  r05_this_is_generated_function();

  do {
    /* t.Acc: 2 */
    /* e.Tail: 4 */
    struct r05_node *p[7] = { 0 };
    /* t.Acc e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

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

R05_DEFINE_LOCAL_FUNCTION(LOADm_SAVEm_HANDLE, "LOAD-SAVE-HANDLE") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_number(39UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(LoadFile, "LoadFile") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 2 */
    struct r05_node *p[19] = { 0 };
    /* e.FileName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Open);
    r05_alloc_char('r');
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+6);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_DoLoadFile);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Get);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Close);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[15]);
    r05_push_stack(p[17]);
    r05_push_stack(p[16]);
    r05_push_stack(p[14]);
    r05_push_stack(p[9]);
    r05_push_stack(p[13]);
    r05_push_stack(p[10]);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
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

R05_DEFINE_LOCAL_FUNCTION(DoLoadFile, "DoLoadFile") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[3] = { 0 };
    /* 0 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_left(p+2, p[0], p[1], 0UL))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Line: 3 */
    struct r05_node *p[8] = { 0 };
    /* e.Line 0 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_right(p+2, p[0], p[1], 0UL))
      continue;
    r05_close_evar(p+3, p[0], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Line: 2 */
    struct r05_node *p[13] = { 0 };
    /* e.Line */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+4);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_bracket(p+6);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_DoLoadFile);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Get);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[7]);
    r05_push_stack(p[11]);
    r05_push_stack(p[8]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_link_brackets(p[4], p[6]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(SaveFile, "SaveFile") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 4 */
    /* e.Lines: 6 */
    struct r05_node *p[20] = { 0 };
    /* (e.FileName) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Open);
    r05_alloc_char('w');
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_SaveFilem_WriteBracketLine);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Close);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[16]);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+6);
    r05_push_stack(p[12]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+4);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_splice_evar(p[11], p+4);
    r05_splice_evar(p[14], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SaveFilem_WriteBracketLine, "SaveFile-WriteBracketLine") {
  r05_this_is_generated_function();

  do {
    /* e.Line: 4 */
    struct r05_node *p[11] = { 0 };
    /* (e.Line) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Putout);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[6]);
    r05_correct_evar(p+4);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_splice_evar(p[9], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Inc, "Inc") {
  r05_this_is_generated_function();

  do {
    /* e.Num: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Num */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Add);
    r05_alloc_number(1UL);
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

R05_DEFINE_ENTRY_FUNCTION(Dec, "Dec") {
  r05_this_is_generated_function();

  do {
    /* s.Num: 2 */
    struct r05_node *p[5] = { 0 };
    /* s.Num */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_Sub);
    r05_alloc_svar(p+2);
    r05_alloc_number(1UL);
    r05_alloc_close_call(p+4);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Num: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.Num */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Sub);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_number(1UL);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(ArgList, "ArgList") {
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
    r05_alloc_function(&r05f_DoArgList);
    r05_alloc_number(0UL);
    r05_alloc_close_call(p+3);
    r05_push_stack(p[3]);
    r05_push_stack(p[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoArgList, "DoArgList") {
  r05_this_is_generated_function();

  do {
    /* s.Next: 2 */
    struct r05_node *p[9] = { 0 };
    /* s.Next */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_SwDoArgList);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Arg);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[3]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SwDoArgList, "SwDoArgList") {
  r05_this_is_generated_function();

  do {
    /* s.Next: 2 */
    struct r05_node *p[3] = { 0 };
    /* s.Next */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Next: 2 */
    /* e.Arg: 3 */
    struct r05_node *p[10] = { 0 };
    /* s.Next e.Arg */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_DoArgList);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Trim, "Trim") {
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
    r05_alloc_function(&r05f_Trimm_L);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Trimm_R);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(Trimm_L, "Trim-L") {
  r05_this_is_generated_function();

  do {
    /* e.Line: 3 */
    struct r05_node *p[8] = { 0 };
    /* ' ' e.Line */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], ' '))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Trimm_L);
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
    /* e.Line: 3 */
    struct r05_node *p[8] = { 0 };
    /* '\t' e.Line */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '\t'))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Trimm_L);
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
    /* e.Line: 3 */
    struct r05_node *p[8] = { 0 };
    /* '\r' e.Line */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '\r'))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Trimm_L);
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
    /* e.Line: 3 */
    struct r05_node *p[8] = { 0 };
    /* '\n' e.Line */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '\n'))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Trimm_L);
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

R05_DEFINE_ENTRY_FUNCTION(Trimm_R, "Trim-R") {
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
    /* e.Line: 3 */
    struct r05_node *p[8] = { 0 };
    /* e.Line '\t' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], '\t'))
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
    /* e.Line: 3 */
    struct r05_node *p[8] = { 0 };
    /* e.Line '\r' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], '\r'))
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
    /* e.Line: 3 */
    struct r05_node *p[8] = { 0 };
    /* e.Line '\n' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], '\n'))
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

R05_DEFINE_ENTRY_FUNCTION(OneOf, "OneOf") {
  r05_this_is_generated_function();

  do {
    /* t.Sample: 2, 6 */
    /* e.Items-B: 4 */
    /* e.Items-E: 8 */
    struct r05_node *p[10] = { 0 };
    /* t.Sample e.Items-B t.Sample e.Items-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    p[4] = p[3]->next;
    p[5] = p[3];
    r05_start_e_loop();
    do {
      if (! r05_repeated_tvar_left(p+6, p[5], p[1], p+2))
        continue;
      r05_close_evar(p+8, p[7], p[1]);

      r05_reset_allocator();
      r05_alloc_function(&r05f_True);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+4, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* t.Sample: 2 */
    /* e.Items: 4 */
    struct r05_node *p[6] = { 0 };
    /* t.Sample e.Items */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_False);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Unique, "Unique") {
  r05_this_is_generated_function();

  do {
    /* e.Uniques: 2 */
    /* t.Repeated: 4, 8 */
    /* e.Items-B: 6 */
    /* e.Items-E: 10 */
    struct r05_node *p[16] = { 0 };
    /* e.Uniques t.Repeated e.Items-B t.Repeated e.Items-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_tvar_left(p+4, p[3], p[1]))
        continue;
      p[6] = p[5]->next;
      p[7] = p[5];
      r05_start_e_loop();
      do {
        if (! r05_repeated_tvar_left(p+8, p[7], p[1], p+4))
          continue;
        r05_close_evar(p+10, p[9], p[1]);

        r05_reset_allocator();
        r05_alloc_insert_pos(p+12);
        r05_alloc_open_call(p+13);
        r05_alloc_function(&r05f_Unique);
        r05_alloc_insert_pos(p+14);
        r05_alloc_close_call(p+15);
        r05_push_stack(p[15]);
        r05_push_stack(p[13]);
        r05_correct_evar(p+10);
        r05_correct_evar(p+6);
        r05_correct_evar(p+2);
        r05_splice_evar(p[12], p+2);
        r05_splice_evar(p[14], p+6);
        r05_splice_tvar(p[14], p+4);
        r05_splice_evar(p[14], p+10);
        r05_splice_from_freelist(arg_begin);
        r05_splice_to_freelist(arg_begin, arg_end);
        return;
      } while (r05_open_evar_advance(p+6, p[1]));
      r05_stop_e_loop();
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Uniques: 2 */
    struct r05_node *p[5] = { 0 };
    /* e.Uniques */
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

R05_DEFINE_ENTRY_FUNCTION(TryLoadExpr, "TryLoadExpr") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 2 */
    struct r05_node *p[13] = { 0 };
    /* e.FileName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_TryLoadExprm_Parse);
    r05_alloc_open_bracket(p+5);
    r05_alloc_char('$');
    r05_alloc_close_bracket(p+6);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_TryLoadExprm_Prepare);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_LoadFile);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[4]);
    r05_push_stack(p[11]);
    r05_push_stack(p[7]);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+2);
    r05_link_brackets(p[5], p[6]);
    r05_splice_evar(p[9], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Prepare, "TryLoadExpr-Prepare") {
  r05_this_is_generated_function();

  do {
    /* e.Lines: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DelAccumulator);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_function(&r05f_TryLoadExprm_PrepareLine);
    r05_alloc_number(1UL);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_PrepareLine, "TryLoadExpr-PrepareLine") {
  r05_this_is_generated_function();

  do {
    /* e.Line: 5 */
    /* s.LineNo: 7 */
    struct r05_node *p[10] = { 0 };
    /* s.LineNo ('*' e.Line) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '*'))
      continue;
    r05_close_evar(p+5, p[4], p[3]);
    if (! r05_svar_left(p+7, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[7], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+7);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Line: 4 */
    /* s.LineNo: 6 */
    struct r05_node *p[14] = { 0 };
    /* s.LineNo (e.Line) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+8);
    r05_alloc_open_bracket(p+9);
    r05_alloc_svar(p+6);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Lenw);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_close_bracket(p+13);
    r05_link_brackets(p[9], p[13]);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+4);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_splice_evar(p[11], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parse, "TryLoadExpr-Parse") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 6 */
    /* e.Lines: 8 */
    /* s.LineNo: 10 */
    /* s.LineLen: 11 */
    /* s.Letter: 12 */
    /* e.Line: 13 */
    struct r05_node *p[28] = { 0 };
    /* (e.Scanned) (s.LineNo s.LineLen s.Letter e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[5], p[1]);
    if (! r05_svar_left(p+10, p[4], p[5]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[5]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_TryLoadExprm_Parseu_check);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_svar(p+10);
    r05_alloc_svar(p+11);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_Type);
    r05_alloc_svar(p+12);
    r05_alloc_close_call(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[15]);
    r05_push_stack(p[26]);
    r05_push_stack(p[25]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[17], p+6);
    r05_splice_evar(p[20], p+13);
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
    r05_alloc_function(&r05f_TryLoadExprm_Parseu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parseu_check, "TryLoadExpr-Parse_check") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 4 */
    /* s.LineNo: 6 */
    /* s.LineLen: 7 */
    /* s.Letter: 8 */
    /* e.Line: 14 */
    /* e.Lines: 16 */
    /* e.1: 18 */
    struct r05_node *p[31] = { 0 };
    /* (e.Scanned) s.LineNo s.LineLen s.Letter (e.Line) (e.Lines) 'L' e.1 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[1]))
      continue;
    if (! r05_svar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_char_left(p+13, p[12], p[1], 'L'))
      continue;
    r05_close_evar(p+14, p[9], p[10]);
    r05_close_evar(p+16, p[11], p[12]);
    r05_close_evar(p+18, p[13], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Ident);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_svar(p+6);
    r05_alloc_svar(p+7);
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_Implode);
    r05_alloc_svar(p+8);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[24], p[28]);
    r05_push_stack(p[27]);
    r05_push_stack(p[25]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[22], p+4);
    r05_splice_evar(p[26], p+14);
    r05_splice_evar(p[29], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 4 */
    /* s.LineNo: 6 */
    /* s.LineLen: 7 */
    /* s.Letter: 8 */
    /* e.Line: 13 */
    /* e.Lines: 15 */
    /* e.Other: 17 */
    struct r05_node *p[28] = { 0 };
    /* (e.Scanned) s.LineNo s.LineLen s.Letter (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[1]))
      continue;
    if (! r05_svar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    r05_close_evar(p+13, p[9], p[10]);
    r05_close_evar(p+15, p[11], p[12]);
    r05_close_evar(p+17, p[12], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_TryLoadExprm_Parseu_cont);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_svar(p+6);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+8);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[21], p+4);
    r05_splice_evar(p[24], p+13);
    r05_splice_evar(p[26], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parseu_cont, "TryLoadExpr-Parse_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 6 */
    /* e.Lines: 8 */
    /* s.LineNo: 10 */
    /* s.LineLen: 11 */
    /* s.Digit: 12 */
    /* e.Line: 13 */
    struct r05_node *p[28] = { 0 };
    /* (e.Scanned) (s.LineNo s.LineLen s.Digit e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[5], p[1]);
    if (! r05_svar_left(p+10, p[4], p[5]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[5]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_TryLoadExprm_Parseu_check0);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_svar(p+10);
    r05_alloc_svar(p+11);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_Type);
    r05_alloc_svar(p+12);
    r05_alloc_close_call(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[15]);
    r05_push_stack(p[26]);
    r05_push_stack(p[25]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[17], p+6);
    r05_splice_evar(p[20], p+13);
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
    r05_alloc_function(&r05f_TryLoadExprm_Parseu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parseu_check0, "TryLoadExpr-Parse_check0") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 4 */
    /* s.LineNo: 6 */
    /* s.LineLen: 7 */
    /* s.Digit: 8 */
    /* e.Line: 14 */
    /* e.Lines: 16 */
    /* e.1: 18 */
    struct r05_node *p[33] = { 0 };
    /* (e.Scanned) s.LineNo s.LineLen s.Digit (e.Line) (e.Lines) 'D' e.1 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[1]))
      continue;
    if (! r05_svar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_char_left(p+13, p[12], p[1], 'D'))
      continue;
    r05_close_evar(p+14, p[9], p[10]);
    r05_close_evar(p+16, p[11], p[12]);
    r05_close_evar(p+18, p[13], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Number);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_svar(p+8);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_svar(p+6);
    r05_alloc_svar(p+7);
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_Type);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_call(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[26], p[30]);
    r05_push_stack(p[29]);
    r05_push_stack(p[27]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[24], p[25]);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[22], p+4);
    r05_splice_evar(p[28], p+14);
    r05_splice_evar(p[31], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 4 */
    /* s.LineNo: 6 */
    /* s.LineLen: 7 */
    /* s.Digit: 8 */
    /* e.Line: 13 */
    /* e.Lines: 15 */
    /* e.Other: 17 */
    struct r05_node *p[28] = { 0 };
    /* (e.Scanned) s.LineNo s.LineLen s.Digit (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[1]))
      continue;
    if (! r05_svar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    r05_close_evar(p+13, p[9], p[10]);
    r05_close_evar(p+15, p[11], p[12]);
    r05_close_evar(p+17, p[12], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_TryLoadExprm_Parseu_cont0);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_svar(p+6);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+8);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[21], p+4);
    r05_splice_evar(p[24], p+13);
    r05_splice_evar(p[26], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parseu_cont0, "TryLoadExpr-Parse_cont0") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 6 */
    /* e.Lines: 8 */
    /* s.LineNo: 10 */
    /* s.LineLen: 11 */
    /* s.Quote: 12 */
    /* e.Line: 13 */
    struct r05_node *p[26] = { 0 };
    /* (e.Scanned) (s.LineNo s.LineLen s.Quote e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[5], p[1]);
    if (! r05_svar_left(p+10, p[4], p[5]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[5]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_TryLoadExprm_Parseu_check1);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_svar(p+10);
    r05_alloc_svar(p+11);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_chars("\'\"", 2);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[17], p+6);
    r05_splice_evar(p[20], p+13);
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
    r05_alloc_function(&r05f_TryLoadExprm_Parseu_cont1);
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

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parseu_check1, "TryLoadExpr-Parse_check1") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 4 */
    /* s.LineNo: 6 */
    /* s.LineLen: 7 */
    /* s.Quote: 8, 19 */
    /* e.Line: 13 */
    /* e.Lines: 15 */
    /* e.1: 17 */
    /* e.2: 20 */
    struct r05_node *p[33] = { 0 };
    /* (e.Scanned) s.LineNo s.LineLen s.Quote (e.Line) (e.Lines) e.1 s.Quote e.2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[1]))
      continue;
    if (! r05_svar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    r05_close_evar(p+13, p[9], p[10]);
    r05_close_evar(p+15, p[11], p[12]);
    p[17] = p[12]->next;
    p[18] = p[12];
    r05_start_e_loop();
    do {
      if (! r05_repeated_svar_left(p+19, p[18], p[1], p+8))
        continue;
      r05_close_evar(p+20, p[19], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+22);
      r05_alloc_function(&r05f_TryLoadExprm_Parsem_Quote);
      r05_alloc_open_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_open_bracket(p+26);
      r05_alloc_svar(p+8);
      r05_alloc_close_bracket(p+27);
      r05_alloc_open_bracket(p+28);
      r05_alloc_svar(p+6);
      r05_alloc_svar(p+7);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_call(p+32);
      r05_push_stack(p[32]);
      r05_push_stack(p[22]);
      r05_correct_evar(p+15);
      r05_link_brackets(p[28], p[30]);
      r05_correct_evar(p+13);
      r05_link_brackets(p[26], p[27]);
      r05_link_brackets(p[23], p[25]);
      r05_correct_evar(p+4);
      r05_splice_evar(p[24], p+4);
      r05_splice_evar(p[29], p+13);
      r05_splice_evar(p[31], p+15);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+17, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Scanned: 4 */
    /* s.LineNo: 6 */
    /* s.LineLen: 7 */
    /* s.Quote: 8 */
    /* e.Line: 13 */
    /* e.Lines: 15 */
    /* e.Other: 17 */
    struct r05_node *p[28] = { 0 };
    /* (e.Scanned) s.LineNo s.LineLen s.Quote (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[1]))
      continue;
    if (! r05_svar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    r05_close_evar(p+13, p[9], p[10]);
    r05_close_evar(p+15, p[11], p[12]);
    r05_close_evar(p+17, p[12], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_TryLoadExprm_Parseu_cont1);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_svar(p+6);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+8);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[21], p+4);
    r05_splice_evar(p[24], p+13);
    r05_splice_evar(p[26], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parseu_cont1, "TryLoadExpr-Parse_cont1") {
  r05_this_is_generated_function();

  do {
    /* e.Lines: 6 */
    /* s.LineNo: 8 */
    /* s.LineLen: 9 */
    /* e.Line: 11 */
    /* t.Stack: 13 */
    /* e.Scanned: 15 */
    struct r05_node *p[30] = { 0 };
    /* (t.Stack e.Scanned) (s.LineNo s.LineLen '(' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);
    if (! r05_svar_left(p+8, p[4], p[5]))
      continue;
    if (! r05_svar_left(p+9, p[8], p[5]))
      continue;
    if (! r05_char_left(p+10, p[9], p[5], '('))
      continue;
    r05_close_evar(p+11, p[10], p[5]);
    if (! r05_tvar_left(p+13, p[2], p[3]))
      continue;
    r05_close_evar(p+15, p[14], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_TryLoadExprm_Parse);
    r05_alloc_open_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_svar(p+8);
    r05_alloc_svar(p+9);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_svar(p+8);
    r05_alloc_svar(p+9);
    r05_alloc_evar(p+11);
    r05_alloc_close_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[26], p[27]);
    r05_link_brackets(p[18], p[25]);
    r05_link_brackets(p[19], p[24]);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+15);
    r05_splice_tvar(p[20], p+13);
    r05_splice_evar(p[20], p+15);
    r05_splice_evar(p[22], p+11);
    r05_splice_evar(p[28], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Bracketed: 8 */
    /* e.Lines: 10 */
    /* s.LineNo: 12 */
    /* s.LineLen: 13 */
    /* e.Line: 15 */
    /* t.Stack: 17 */
    /* t.PosInfo: 19 */
    /* e.Scanned: 21 */
    struct r05_node *p[35] = { 0 };
    /* ((t.Stack e.Scanned t.PosInfo) e.Bracketed) (s.LineNo s.LineLen ')' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_brackets_left(p+6, p[3], p[1]))
      continue;
    r05_close_evar(p+8, p[5], p[3]);
    r05_close_evar(p+10, p[7], p[1]);
    if (! r05_svar_left(p+12, p[6], p[7]))
      continue;
    if (! r05_svar_left(p+13, p[12], p[7]))
      continue;
    if (! r05_char_left(p+14, p[13], p[7], ')'))
      continue;
    r05_close_evar(p+15, p[14], p[7]);
    if (! r05_tvar_left(p+17, p[4], p[5]))
      continue;
    if (! r05_tvar_right(p+19, p[18], p[5]))
      continue;
    r05_close_evar(p+21, p[18], p[19]);

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_TryLoadExprm_Parse);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_svar(p+12);
    r05_alloc_svar(p+13);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_call(p+34);
    r05_push_stack(p[34]);
    r05_push_stack(p[23]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[24], p[29]);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+21);
    r05_splice_tvar(p[25], p+17);
    r05_splice_evar(p[25], p+21);
    r05_splice_evar(p[27], p+8);
    r05_splice_evar(p[31], p+15);
    r05_splice_evar(p[33], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 7 */
    /* e.Lines: 9 */
    /* s.LineNo: 11 */
    /* s.LineLen: 12 */
    /* e.Line: 14 */
    struct r05_node *p[21] = { 0 };
    /* ('$' e.Scanned) (s.LineNo s.LineLen ')' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '$'))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    r05_close_evar(p+7, p[4], p[3]);
    r05_close_evar(p+9, p[6], p[1]);
    if (! r05_svar_left(p+11, p[5], p[6]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[6]))
      continue;
    if (! r05_char_left(p+13, p[12], p[6], ')'))
      continue;
    r05_close_evar(p+14, p[13], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_TryLoadExprm_MakeError);
    r05_alloc_svar(p+11);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_chars("Unbalanced bracket \')\'", 22);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+14);
    r05_splice_evar(p[18], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 6 */
    /* e.Lines: 8 */
    /* s.LineNo: 10 */
    /* s.LineLen: 11 */
    /* s.Char: 12 */
    /* e.Line: 13 */
    struct r05_node *p[26] = { 0 };
    /* (e.Scanned) (s.LineNo s.LineLen s.Char e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[5], p[1]);
    if (! r05_svar_left(p+10, p[4], p[5]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[5]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_TryLoadExprm_Parse);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_SkipSpace);
    r05_alloc_svar(p+12);
    r05_alloc_close_call(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_svar(p+10);
    r05_alloc_svar(p+11);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[16], p[20]);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[17], p+6);
    r05_splice_evar(p[22], p+13);
    r05_splice_evar(p[24], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 6 */
    /* e.Lines: 8 */
    /* s.LineNo: 10 */
    /* s.LineLen: 11 */
    struct r05_node *p[18] = { 0 };
    /* (e.Scanned) (s.LineNo s.LineLen) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[5], p[1]);
    if (! r05_svar_left(p+10, p[4], p[5]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[5]))
      continue;
    if (! r05_empty_hole(p[11], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_TryLoadExprm_Parse);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[14], p+6);
    r05_splice_evar(p[16], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 5 */
    struct r05_node *p[8] = { 0 };
    /* ('$' e.Scanned) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '$'))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[3]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_Success);
    r05_alloc_insert_pos(p+7);
    r05_correct_evar(p+5);
    r05_splice_evar(p[7], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Bracketed: 8 */
    /* s.LineNo: 10 */
    /* s.LineLen: 11 */
    /* e.Line: 12 */
    /* t.Stack: 14 */
    /* e.Scanned: 16 */
    struct r05_node *p[23] = { 0 };
    /* ((t.Stack e.Scanned (s.LineNo s.LineLen e.Line)) e.Bracketed) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_brackets_right(p+6, p[4], p[5]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+8, p[5], p[3]);
    if (! r05_svar_left(p+10, p[6], p[7]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[7]))
      continue;
    r05_close_evar(p+12, p[11], p[7]);
    if (! r05_tvar_left(p+14, p[4], p[6]))
      continue;
    r05_close_evar(p+16, p[15], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_TryLoadExprm_MakeError);
    r05_alloc_svar(p+10);
    r05_alloc_svar(p+11);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_chars("Unbalanced bracket \'(\'", 22);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[20], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Ident, "TryLoadExpr-Parse-Ident") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 6 */
    /* e.Lines: 8 */
    /* s.LineNo: 10 */
    /* s.LineLen: 11 */
    /* s.Word: 12 */
    /* e.Line: 13 */
    struct r05_node *p[24] = { 0 };
    /* (e.Scanned) (s.LineNo s.LineLen s.Word e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[5], p[1]);
    if (! r05_svar_left(p+10, p[4], p[5]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[5]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_TryLoadExprm_Parse);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_svar(p+12);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_svar(p+10);
    r05_alloc_svar(p+11);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[17], p+6);
    r05_splice_evar(p[20], p+13);
    r05_splice_evar(p[22], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Number, "TryLoadExpr-Parse-Number") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 8 */
    /* e.Number: 10 */
    /* e.Lines: 12 */
    /* s.LineNo: 14 */
    /* s.LineLen: 15 */
    /* s.1: 17 */
    /* s.Digit: 18 */
    /* e.Line: 19 */
    struct r05_node *p[35] = { 0 };
    /* (e.Scanned) (e.Number) (s.LineNo s.LineLen 'D' s.1 s.Digit e.Line) e.Lines */
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
    r05_close_evar(p+12, p[7], p[1]);
    if (! r05_svar_left(p+14, p[6], p[7]))
      continue;
    if (! r05_svar_left(p+15, p[14], p[7]))
      continue;
    if (! r05_char_left(p+16, p[15], p[7], 'D'))
      continue;
    if (! r05_svar_left(p+17, p[16], p[7]))
      continue;
    if (! r05_svar_left(p+18, p[17], p[7]))
      continue;
    r05_close_evar(p+19, p[18], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Number);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_svar(p+18);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_svar(p+14);
    r05_alloc_svar(p+15);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_Type);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_call(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_call(p+34);
    r05_push_stack(p[34]);
    r05_push_stack(p[21]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[28], p[32]);
    r05_push_stack(p[31]);
    r05_push_stack(p[29]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[23], p+8);
    r05_splice_evar(p[26], p+10);
    r05_splice_evar(p[30], p+19);
    r05_splice_evar(p[33], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 8 */
    /* e.Number: 10 */
    /* e.Lines: 12 */
    /* s.LineNo: 14 */
    /* s.LineLen: 15 */
    /* s.1: 16 */
    /* s.2: 17 */
    /* e.Line: 18 */
    struct r05_node *p[36] = { 0 };
    /* (e.Scanned) (e.Number) (s.LineNo s.LineLen s.1 s.2 e.Line) e.Lines */
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
    r05_close_evar(p+12, p[7], p[1]);
    if (! r05_svar_left(p+14, p[6], p[7]))
      continue;
    if (! r05_svar_left(p+15, p[14], p[7]))
      continue;
    if (! r05_svar_left(p+16, p[15], p[7]))
      continue;
    if (! r05_svar_left(p+17, p[16], p[7]))
      continue;
    r05_close_evar(p+18, p[17], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Number0);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_svar(p+14);
    r05_alloc_svar(p+15);
    r05_alloc_svar(p+16);
    r05_alloc_svar(p+17);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_evar(p+10);
    r05_alloc_close_call(p+34);
    r05_alloc_close_call(p+35);
    r05_push_stack(p[35]);
    r05_push_stack(p[20]);
    r05_push_stack(p[34]);
    r05_push_stack(p[33]);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[22], p+8);
    r05_splice_evar(p[25], p+10);
    r05_splice_evar(p[28], p+18);
    r05_splice_evar(p[31], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Number0, "TryLoadExpr-Parse-Number0") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 6 */
    /* e.Number: 8 */
    /* s.LineNo: 10 */
    /* s.LineLen: 11 */
    /* s.1: 12 */
    /* s.2: 13 */
    /* e.Line: 18 */
    /* e.Lines: 20 */
    /* s.OneNumber: 22 */
    struct r05_node *p[32] = { 0 };
    /* (e.Scanned) (e.Number) s.LineNo s.LineLen s.1 s.2 (e.Line) (e.Lines) s.OneNumber */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    if (! r05_svar_left(p+10, p[5], p[1]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[1]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[1]))
      continue;
    if (! r05_svar_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+16, p[15], p[1]))
      continue;
    r05_close_evar(p+18, p[14], p[15]);
    r05_close_evar(p+20, p[16], p[17]);
    if (! r05_svar_left(p+22, p[17], p[1]))
      continue;
    if (! r05_empty_hole(p[22], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_TryLoadExprm_Parse);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_svar(p+22);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_svar(p+10);
    r05_alloc_svar(p+11);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[23]);
    r05_correct_evar(p+20);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[25], p+6);
    r05_splice_evar(p[28], p+18);
    r05_splice_evar(p[30], p+20);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 6 */
    /* e.Number: 8 */
    /* s.LineNo: 10 */
    /* s.LineLen: 11 */
    /* s.1: 12 */
    /* s.2: 13 */
    /* e.Line: 18 */
    /* e.Lines: 20 */
    /* e.SomeNumbers: 22 */
    struct r05_node *p[30] = { 0 };
    /* (e.Scanned) (e.Number) s.LineNo s.LineLen s.1 s.2 (e.Line) (e.Lines) e.SomeNumbers */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    if (! r05_svar_left(p+10, p[5], p[1]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[1]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[1]))
      continue;
    if (! r05_svar_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+16, p[15], p[1]))
      continue;
    r05_close_evar(p+18, p[14], p[15]);
    r05_close_evar(p+20, p[16], p[17]);
    r05_close_evar(p+22, p[17], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_TryLoadExprm_MakeError);
    r05_alloc_svar(p+10);
    r05_alloc_svar(p+11);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_chars("Very long number literal ", 25);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+18);
    r05_splice_evar(p[26], p+18);
    r05_splice_evar(p[28], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_MakeError, "TryLoadExpr-MakeError") {
  r05_this_is_generated_function();

  do {
    /* s.LineNo: 2 */
    /* s.LineLen: 3 */
    /* e.Rest: 6 */
    /* e.Message: 8 */
    struct r05_node *p[20] = { 0 };
    /* s.LineNo s.LineLen (e.Rest) e.Message */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    r05_close_evar(p+8, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_TryLoadExprm_MakeErroru_check);
    r05_alloc_svar(p+2);
    r05_alloc_svar(p+3);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Lenw);
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

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_MakeErroru_check, "TryLoadExpr-MakeError_check") {
  r05_this_is_generated_function();

  do {
    /* s.LineNo: 2 */
    /* s.LineLen: 3 */
    /* e.Rest: 8 */
    /* e.Message: 10 */
    /* s.RestLen: 12 */
    /* e.1: 13 */
    struct r05_node *p[22] = { 0 };
    /* s.LineNo s.LineLen (e.Rest) (e.Message) s.RestLen e.1 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_svar_left(p+12, p[7], p[1]))
      continue;
    r05_close_evar(p+13, p[12], p[1]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_Fails);
    r05_alloc_open_bracket(p+15);
    r05_alloc_svar(p+2);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_m_);
    r05_alloc_svar(p+3);
    r05_alloc_svar(p+12);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_correct_evar(p+10);
    r05_link_brackets(p[15], p[20]);
    r05_push_stack(p[19]);
    r05_push_stack(p[16]);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_splice_evar(p[21], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Quote, "TryLoadExpr-Parse-Quote") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 9 */
    /* e.Text: 11 */
    /* e.Lines: 13 */
    /* s.LineNo: 15 */
    /* s.LineLen: 16 */
    /* e.Line: 18 */
    struct r05_node *p[29] = { 0 };
    /* (e.Scanned) ('\'' e.Text) (s.LineNo s.LineLen '\'' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '\''))
      continue;
    if (! r05_brackets_left(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[6], p[5]);
    r05_close_evar(p+13, p[8], p[1]);
    if (! r05_svar_left(p+15, p[7], p[8]))
      continue;
    if (! r05_svar_left(p+16, p[15], p[8]))
      continue;
    if (! r05_char_left(p+17, p[16], p[8], '\''))
      continue;
    r05_close_evar(p+18, p[17], p[8]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_TryLoadExprm_Parse);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_svar(p+15);
    r05_alloc_svar(p+16);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_splice_evar(p[22], p+9);
    r05_splice_evar(p[22], p+11);
    r05_splice_evar(p[25], p+18);
    r05_splice_evar(p[27], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 9 */
    /* e.Text: 11 */
    /* e.Lines: 13 */
    /* s.LineNo: 15 */
    /* s.LineLen: 16 */
    /* e.Line: 18 */
    struct r05_node *p[32] = { 0 };
    /* (e.Scanned) ('\"' e.Text) (s.LineNo s.LineLen '\"' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '\"'))
      continue;
    if (! r05_brackets_left(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[6], p[5]);
    r05_close_evar(p+13, p[8], p[1]);
    if (! r05_svar_left(p+15, p[7], p[8]))
      continue;
    if (! r05_svar_left(p+16, p[15], p[8]))
      continue;
    if (! r05_char_left(p+17, p[16], p[8], '\"'))
      continue;
    r05_close_evar(p+18, p[17], p[8]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_TryLoadExprm_Parse);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Implodeu_Ext);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_svar(p+15);
    r05_alloc_svar(p+16);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[21], p[26]);
    r05_push_stack(p[25]);
    r05_push_stack(p[23]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_splice_evar(p[22], p+9);
    r05_splice_evar(p[24], p+11);
    r05_splice_evar(p[28], p+18);
    r05_splice_evar(p[30], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 8 */
    /* e.Lines: 10 */
    /* s.Quote: 12 */
    /* e.Text: 13 */
    /* s.LineNo: 15 */
    /* s.LineLen: 16 */
    /* e.Line: 19 */
    struct r05_node *p[33] = { 0 };
    /* (e.Scanned) (s.Quote e.Text) (s.LineNo s.LineLen '\\x' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[7], p[1]);
    if (! r05_svar_left(p+12, p[4], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);
    if (! r05_svar_left(p+15, p[6], p[7]))
      continue;
    if (! r05_svar_left(p+16, p[15], p[7]))
      continue;
    if (! r05_char_left(p+17, p[16], p[7], '\\'))
      continue;
    if (! r05_char_left(p+18, p[17], p[7], 'x'))
      continue;
    r05_close_evar(p+19, p[18], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Hex);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_svar(p+12);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_svar(p+15);
    r05_alloc_svar(p+16);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[21]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[23], p+8);
    r05_splice_evar(p[26], p+13);
    r05_splice_evar(p[29], p+19);
    r05_splice_evar(p[31], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 8 */
    /* e.Lines: 10 */
    /* s.Quote: 12 */
    /* e.Text: 13 */
    /* s.LineNo: 15 */
    /* s.LineLen: 16 */
    /* s.Escaped: 18 */
    /* e.Line: 19 */
    struct r05_node *p[55] = { 0 };
    /* (e.Scanned) (s.Quote e.Text) (s.LineNo s.LineLen '\\' s.Escaped e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[7], p[1]);
    if (! r05_svar_left(p+12, p[4], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);
    if (! r05_svar_left(p+15, p[6], p[7]))
      continue;
    if (! r05_svar_left(p+16, p[15], p[7]))
      continue;
    if (! r05_char_left(p+17, p[16], p[7], '\\'))
      continue;
    if (! r05_svar_left(p+18, p[17], p[7]))
      continue;
    r05_close_evar(p+19, p[18], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Quote0);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_svar(p+15);
    r05_alloc_svar(p+16);
    r05_alloc_svar(p+18);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_chars("\'\'", 2);
    r05_alloc_close_bracket(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_chars("\"\"", 2);
    r05_alloc_close_bracket(p+37);
    r05_alloc_open_bracket(p+38);
    r05_alloc_chars("\\\\", 2);
    r05_alloc_close_bracket(p+39);
    r05_alloc_open_bracket(p+40);
    r05_alloc_chars("n\n", 2);
    r05_alloc_close_bracket(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_chars("r\r", 2);
    r05_alloc_close_bracket(p+43);
    r05_alloc_open_bracket(p+44);
    r05_alloc_chars("t\t", 2);
    r05_alloc_close_bracket(p+45);
    r05_alloc_open_bracket(p+46);
    r05_alloc_chars("<<", 2);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_chars(">>", 2);
    r05_alloc_close_bracket(p+49);
    r05_alloc_open_bracket(p+50);
    r05_alloc_chars("((", 2);
    r05_alloc_close_bracket(p+51);
    r05_alloc_open_bracket(p+52);
    r05_alloc_chars("))", 2);
    r05_alloc_close_bracket(p+53);
    r05_alloc_close_call(p+54);
    r05_push_stack(p[54]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[52], p[53]);
    r05_link_brackets(p[50], p[51]);
    r05_link_brackets(p[48], p[49]);
    r05_link_brackets(p[46], p[47]);
    r05_link_brackets(p[44], p[45]);
    r05_link_brackets(p[42], p[43]);
    r05_link_brackets(p[40], p[41]);
    r05_link_brackets(p[38], p[39]);
    r05_link_brackets(p[36], p[37]);
    r05_link_brackets(p[34], p[35]);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[23], p+8);
    r05_splice_evar(p[26], p+13);
    r05_splice_evar(p[29], p+19);
    r05_splice_evar(p[32], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 8 */
    /* e.Lines: 10 */
    /* s.Quote: 12 */
    /* e.Text: 13 */
    /* s.LineNo: 15 */
    /* s.LineLen: 16 */
    /* s.Char: 17 */
    /* e.Line: 18 */
    struct r05_node *p[32] = { 0 };
    /* (e.Scanned) (s.Quote e.Text) (s.LineNo s.LineLen s.Char e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[7], p[1]);
    if (! r05_svar_left(p+12, p[4], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);
    if (! r05_svar_left(p+15, p[6], p[7]))
      continue;
    if (! r05_svar_left(p+16, p[15], p[7]))
      continue;
    if (! r05_svar_left(p+17, p[16], p[7]))
      continue;
    r05_close_evar(p+18, p[17], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Quote);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_svar(p+12);
    r05_alloc_insert_pos(p+25);
    r05_alloc_svar(p+17);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_svar(p+15);
    r05_alloc_svar(p+16);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[22], p+8);
    r05_splice_evar(p[25], p+13);
    r05_splice_evar(p[28], p+18);
    r05_splice_evar(p[30], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 8 */
    /* e.Lines: 10 */
    /* s.Quote: 12 */
    /* e.Text: 13 */
    /* s.LineNo: 15 */
    /* s.LineLen: 16 */
    struct r05_node *p[21] = { 0 };
    /* (e.Scanned) (s.Quote e.Text) (s.LineNo s.LineLen) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[7], p[1]);
    if (! r05_svar_left(p+12, p[4], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);
    if (! r05_svar_left(p+15, p[6], p[7]))
      continue;
    if (! r05_svar_left(p+16, p[15], p[7]))
      continue;
    if (! r05_empty_hole(p[16], p[7]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_TryLoadExprm_MakeError);
    r05_alloc_svar(p+15);
    r05_alloc_svar(p+16);
    r05_alloc_open_bracket(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_chars("Unclosed quote ", 15);
    r05_alloc_svar(p+12);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[18], p[19]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Quote0, "TryLoadExpr-Parse-Quote0") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 4 */
    /* s.Quote: 6 */
    /* e.Text: 9 */
    /* s.LineNo: 11 */
    /* s.LineLen: 12 */
    /* s.Escaped: 13, 26 */
    /* e.Line: 18 */
    /* e.Lines: 20 */
    /* e.Escapes-B: 22 */
    /* e.Escapes-E: 27 */
    /* s.Char: 29 */
    struct r05_node *p[42] = { 0 };
    /* (e.Scanned) s.Quote (e.Text) s.LineNo s.LineLen s.Escaped (e.Line) (e.Lines) e.Escapes-B (s.Escaped s.Char) e.Escapes-E */
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
    if (! r05_svar_left(p+11, p[8], p[1]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[1]))
      continue;
    if (! r05_svar_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+16, p[15], p[1]))
      continue;
    r05_close_evar(p+18, p[14], p[15]);
    r05_close_evar(p+20, p[16], p[17]);
    p[22] = p[17]->next;
    p[23] = p[17];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+24, p[23], p[1]))
        continue;
      if (! r05_repeated_svar_left(p+26, p[24], p[25], p+13))
        continue;
      r05_close_evar(p+27, p[25], p[1]);
      if (! r05_svar_left(p+29, p[26], p[25]))
        continue;
      if (! r05_empty_hole(p[29], p[25]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+30);
      r05_alloc_function(&r05f_TryLoadExprm_Parsem_Quote);
      r05_alloc_open_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_open_bracket(p+34);
      r05_alloc_svar(p+6);
      r05_alloc_insert_pos(p+35);
      r05_alloc_svar(p+29);
      r05_alloc_close_bracket(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_svar(p+11);
      r05_alloc_svar(p+12);
      r05_alloc_insert_pos(p+38);
      r05_alloc_close_bracket(p+39);
      r05_alloc_insert_pos(p+40);
      r05_alloc_close_call(p+41);
      r05_push_stack(p[41]);
      r05_push_stack(p[30]);
      r05_correct_evar(p+20);
      r05_link_brackets(p[37], p[39]);
      r05_correct_evar(p+18);
      r05_link_brackets(p[34], p[36]);
      r05_correct_evar(p+9);
      r05_link_brackets(p[31], p[33]);
      r05_correct_evar(p+4);
      r05_splice_evar(p[32], p+4);
      r05_splice_evar(p[35], p+9);
      r05_splice_evar(p[38], p+18);
      r05_splice_evar(p[40], p+20);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+22, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Scanned: 4 */
    /* s.Quote: 6 */
    /* e.Text: 9 */
    /* s.LineNo: 11 */
    /* s.LineLen: 12 */
    /* s.Escaped: 13 */
    /* e.Line: 18 */
    /* e.Lines: 20 */
    /* e.Escapes: 22 */
    struct r05_node *p[29] = { 0 };
    /* (e.Scanned) s.Quote (e.Text) s.LineNo s.LineLen s.Escaped (e.Line) (e.Lines) e.Escapes */
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
    if (! r05_svar_left(p+11, p[8], p[1]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[1]))
      continue;
    if (! r05_svar_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+16, p[15], p[1]))
      continue;
    r05_close_evar(p+18, p[14], p[15]);
    r05_close_evar(p+20, p[16], p[17]);
    r05_close_evar(p+22, p[17], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_TryLoadExprm_MakeError);
    r05_alloc_svar(p+11);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_chars("Bad escape sequence \\", 21);
    r05_alloc_svar(p+13);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[24]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+18);
    r05_splice_evar(p[26], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SkipSpace, "SkipSpace") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[3] = { 0 };
    /* ' ' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], ' '))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
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
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

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

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Hex, "TryLoadExpr-Parse-Hex") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 8 */
    /* e.Lines: 10 */
    /* s.Quote: 12 */
    /* e.Text: 13 */
    /* s.LineNo: 15 */
    /* s.LineLen: 16 */
    /* s.H1: 17 */
    /* s.H2: 18 */
    /* e.Line: 19 */
    struct r05_node *p[37] = { 0 };
    /* (e.Scanned) (s.Quote e.Text) (s.LineNo s.LineLen s.H1 s.H2 e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[7], p[1]);
    if (! r05_svar_left(p+12, p[4], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);
    if (! r05_svar_left(p+15, p[6], p[7]))
      continue;
    if (! r05_svar_left(p+16, p[15], p[7]))
      continue;
    if (! r05_svar_left(p+17, p[16], p[7]))
      continue;
    if (! r05_svar_left(p+18, p[17], p[7]))
      continue;
    r05_close_evar(p+19, p[18], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Hexu_check);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_svar(p+15);
    r05_alloc_svar(p+16);
    r05_alloc_svar(p+17);
    r05_alloc_svar(p+18);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_open_call(p+34);
    r05_alloc_function(&r05f_Hex);
    r05_alloc_svar(p+17);
    r05_alloc_close_call(p+35);
    r05_alloc_close_call(p+36);
    r05_push_stack(p[36]);
    r05_push_stack(p[21]);
    r05_push_stack(p[35]);
    r05_push_stack(p[34]);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[23], p+8);
    r05_splice_evar(p[26], p+13);
    r05_splice_evar(p[29], p+19);
    r05_splice_evar(p[32], p+10);
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
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Hexu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Hexu_check, "TryLoadExpr-Parse-Hex_check") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 4 */
    /* s.Quote: 6 */
    /* e.Text: 9 */
    /* s.LineNo: 11 */
    /* s.LineLen: 12 */
    /* s.H1: 13 */
    /* s.H2: 14 */
    /* e.Line: 19 */
    /* e.Lines: 21 */
    /* s.Val1: 23 */
    struct r05_node *p[40] = { 0 };
    /* (e.Scanned) s.Quote (e.Text) s.LineNo s.LineLen s.H1 s.H2 (e.Line) (e.Lines) s.Val1 */
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
    if (! r05_svar_left(p+11, p[8], p[1]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[1]))
      continue;
    if (! r05_svar_left(p+13, p[12], p[1]))
      continue;
    if (! r05_svar_left(p+14, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    r05_close_evar(p+19, p[15], p[16]);
    r05_close_evar(p+21, p[17], p[18]);
    if (! r05_svar_left(p+23, p[18], p[1]))
      continue;
    if (! r05_empty_hole(p[23], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Hexu_check0);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_svar(p+6);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_svar(p+11);
    r05_alloc_svar(p+12);
    r05_alloc_svar(p+13);
    r05_alloc_svar(p+14);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_svar(p+23);
    r05_alloc_open_call(p+37);
    r05_alloc_function(&r05f_Hex);
    r05_alloc_svar(p+14);
    r05_alloc_close_call(p+38);
    r05_alloc_close_call(p+39);
    r05_push_stack(p[39]);
    r05_push_stack(p[24]);
    r05_push_stack(p[38]);
    r05_push_stack(p[37]);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[26], p+4);
    r05_splice_evar(p[29], p+9);
    r05_splice_evar(p[32], p+19);
    r05_splice_evar(p[35], p+21);
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
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Hexu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Hexu_cont, "TryLoadExpr-Parse-Hex_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 8 */
    /* e.Lines: 10 */
    /* s.Qoute: 12 */
    /* e.Text: 13 */
    /* s.LineNo: 15 */
    /* s.LineLen: 16 */
    /* e.Line: 17 */
    struct r05_node *p[26] = { 0 };
    /* (e.Scanned) (s.Qoute e.Text) (s.LineNo s.LineLen e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[7], p[1]);
    if (! r05_svar_left(p+12, p[4], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);
    if (! r05_svar_left(p+15, p[6], p[7]))
      continue;
    if (! r05_svar_left(p+16, p[15], p[7]))
      continue;
    r05_close_evar(p+17, p[16], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_TryLoadExprm_MakeError);
    r05_alloc_svar(p+15);
    r05_alloc_svar(p+16);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_chars("Bad hex escape sequence \\x", 26);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_First2);
    r05_alloc_evar(p+17);
    r05_alloc_close_call(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[19]);
    r05_push_stack(p[24]);
    r05_push_stack(p[23]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+17);
    r05_splice_evar(p[21], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Hexu_check0, "TryLoadExpr-Parse-Hex_check0") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 4 */
    /* s.Quote: 6 */
    /* e.Text: 9 */
    /* s.LineNo: 11 */
    /* s.LineLen: 12 */
    /* s.H1: 13 */
    /* s.H2: 14 */
    /* e.Line: 19 */
    /* e.Lines: 21 */
    /* s.Val1: 23 */
    /* s.Val2: 24 */
    struct r05_node *p[43] = { 0 };
    /* (e.Scanned) s.Quote (e.Text) s.LineNo s.LineLen s.H1 s.H2 (e.Line) (e.Lines) s.Val1 s.Val2 */
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
    if (! r05_svar_left(p+11, p[8], p[1]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[1]))
      continue;
    if (! r05_svar_left(p+13, p[12], p[1]))
      continue;
    if (! r05_svar_left(p+14, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    r05_close_evar(p+19, p[15], p[16]);
    r05_close_evar(p+21, p[17], p[18]);
    if (! r05_svar_left(p+23, p[18], p[1]))
      continue;
    if (! r05_svar_left(p+24, p[23], p[1]))
      continue;
    if (! r05_empty_hole(p[24], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Quote);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_svar(p+6);
    r05_alloc_insert_pos(p+30);
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_k2B_);
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_k2A_);
    r05_alloc_svar(p+23);
    r05_alloc_number(16UL);
    r05_alloc_close_call(p+34);
    r05_alloc_svar(p+24);
    r05_alloc_close_call(p+35);
    r05_alloc_close_call(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_open_bracket(p+38);
    r05_alloc_svar(p+11);
    r05_alloc_svar(p+12);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_close_call(p+42);
    r05_push_stack(p[42]);
    r05_push_stack(p[25]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[38], p[40]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[29], p[37]);
    r05_push_stack(p[36]);
    r05_push_stack(p[31]);
    r05_push_stack(p[35]);
    r05_push_stack(p[32]);
    r05_push_stack(p[34]);
    r05_push_stack(p[33]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[27], p+4);
    r05_splice_evar(p[30], p+9);
    r05_splice_evar(p[39], p+19);
    r05_splice_evar(p[41], p+21);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 4 */
    /* s.Quote: 6 */
    /* e.Text: 9 */
    /* s.LineNo: 11 */
    /* s.LineLen: 12 */
    /* s.H1: 13 */
    /* s.H2: 14 */
    /* e.Line: 19 */
    /* e.Lines: 21 */
    /* s.Val1: 23 */
    /* e.Other: 24 */
    struct r05_node *p[40] = { 0 };
    /* (e.Scanned) s.Quote (e.Text) s.LineNo s.LineLen s.H1 s.H2 (e.Line) (e.Lines) s.Val1 e.Other */
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
    if (! r05_svar_left(p+11, p[8], p[1]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[1]))
      continue;
    if (! r05_svar_left(p+13, p[12], p[1]))
      continue;
    if (! r05_svar_left(p+14, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    r05_close_evar(p+19, p[15], p[16]);
    r05_close_evar(p+21, p[17], p[18]);
    if (! r05_svar_left(p+23, p[18], p[1]))
      continue;
    r05_close_evar(p+24, p[23], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Hexu_cont0);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_svar(p+6);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_svar(p+11);
    r05_alloc_svar(p+12);
    r05_alloc_svar(p+13);
    r05_alloc_svar(p+14);
    r05_alloc_open_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_svar(p+23);
    r05_alloc_close_call(p+39);
    r05_push_stack(p[39]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[33], p[35]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[28], p+4);
    r05_splice_evar(p[31], p+9);
    r05_splice_evar(p[34], p+19);
    r05_splice_evar(p[37], p+21);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Hexu_cont0, "TryLoadExpr-Parse-Hex_cont0") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 4 */
    /* s.Quote: 6 */
    /* e.Text: 9 */
    /* s.LineNo: 11 */
    /* s.LineLen: 12 */
    /* s.H1: 13 */
    /* s.H2: 14 */
    /* e.Line: 19 */
    /* e.Lines: 21 */
    /* e.Other: 23 */
    struct r05_node *p[37] = { 0 };
    /* (e.Scanned) s.Quote (e.Text) s.LineNo s.LineLen s.H1 s.H2 (e.Line) (e.Lines) e.Other */
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
    if (! r05_svar_left(p+11, p[8], p[1]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[1]))
      continue;
    if (! r05_svar_left(p+13, p[12], p[1]))
      continue;
    if (! r05_svar_left(p+14, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    r05_close_evar(p+19, p[15], p[16]);
    r05_close_evar(p+21, p[17], p[18]);
    r05_close_evar(p+23, p[18], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_TryLoadExprm_Parsem_Hexu_cont);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_svar(p+6);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_open_bracket(p+32);
    r05_alloc_svar(p+11);
    r05_alloc_svar(p+12);
    r05_alloc_svar(p+13);
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_call(p+36);
    r05_push_stack(p[36]);
    r05_push_stack(p[25]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[27], p+4);
    r05_splice_evar(p[30], p+9);
    r05_splice_evar(p[33], p+19);
    r05_splice_evar(p[35], p+21);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Hex, "Hex") {
  r05_this_is_generated_function();

  do {
    /* s.Digit: 2 */
    struct r05_node *p[7] = { 0 };
    /* s.Digit */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_Hexu_check);
    r05_alloc_svar(p+2);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Type);
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
    r05_alloc_function(&r05f_Hexu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(Hexu_check, "Hex_check") {
  r05_this_is_generated_function();

  do {
    /* s.Digit: 2 */
    /* e.1: 4 */
    struct r05_node *p[8] = { 0 };
    /* s.Digit 'D' e.1 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+3, p[2], p[1], 'D'))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Digit: 2 */
    /* e.Other: 3 */
    struct r05_node *p[7] = { 0 };
    /* s.Digit e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Hexu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(Hexu_cont, "Hex_cont") {
  r05_this_is_generated_function();

  do {
    /* s.Hex: 2 */
    struct r05_node *p[7] = { 0 };
    /* s.Hex */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_Hexu_check0);
    r05_alloc_svar(p+2);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Upper);
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
    r05_alloc_function(&r05f_Hexu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(Hexu_check0, "Hex_check0") {
  r05_this_is_generated_function();

  do {
    /* s.Hex: 2 */
    /* s.UHex: 3 */
    struct r05_node *p[18] = { 0 };
    /* s.Hex s.UHex */
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
    r05_alloc_function(&r05f_Hexu_check1);
    r05_alloc_svar(p+2);
    r05_alloc_svar(p+3);
    r05_alloc_open_bracket(p+5);
    r05_alloc_char('A');
    r05_alloc_number(10UL);
    r05_alloc_close_bracket(p+6);
    r05_alloc_open_bracket(p+7);
    r05_alloc_char('B');
    r05_alloc_number(11UL);
    r05_alloc_close_bracket(p+8);
    r05_alloc_open_bracket(p+9);
    r05_alloc_char('C');
    r05_alloc_number(12UL);
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_bracket(p+11);
    r05_alloc_char('D');
    r05_alloc_number(13UL);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_char('E');
    r05_alloc_number(14UL);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_char('F');
    r05_alloc_number(15UL);
    r05_alloc_close_bracket(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[4]);
    r05_link_brackets(p[15], p[16]);
    r05_link_brackets(p[13], p[14]);
    r05_link_brackets(p[11], p[12]);
    r05_link_brackets(p[9], p[10]);
    r05_link_brackets(p[7], p[8]);
    r05_link_brackets(p[5], p[6]);
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
    r05_alloc_function(&r05f_Hexu_cont1);
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

R05_DEFINE_LOCAL_FUNCTION(Hexu_cont0, "Hex_cont0") {
  r05_this_is_generated_function();

  do {
    /* s.Other: 2 */
    struct r05_node *p[3] = { 0 };
    /* s.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
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

R05_DEFINE_LOCAL_FUNCTION(Hexu_check1, "Hex_check1") {
  r05_this_is_generated_function();

  do {
    /* s.Hex: 2 */
    /* s.UHex: 3, 8 */
    /* e.Hex-B: 4 */
    /* e.Hex-E: 9 */
    /* s.Value: 11 */
    struct r05_node *p[12] = { 0 };
    /* s.Hex s.UHex e.Hex-B (s.UHex s.Value) e.Hex-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    p[4] = p[3]->next;
    p[5] = p[3];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+6, p[5], p[1]))
        continue;
      if (! r05_repeated_svar_left(p+8, p[6], p[7], p+3))
        continue;
      r05_close_evar(p+9, p[7], p[1]);
      if (! r05_svar_left(p+11, p[8], p[7]))
        continue;
      if (! r05_empty_hole(p[11], p[7]))
        continue;

      r05_reset_allocator();
      r05_alloc_svar(p+11);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+4, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* s.Hex: 2 */
    /* s.UHex: 3 */
    /* e.Other: 4 */
    struct r05_node *p[8] = { 0 };
    /* s.Hex s.UHex e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Hexu_cont1);
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

R05_DEFINE_LOCAL_FUNCTION(Hexu_cont1, "Hex_cont1") {
  r05_this_is_generated_function();

  do {
    /* s.Hex: 2 */
    /* e.Other: 3 */
    struct r05_node *p[7] = { 0 };
    /* s.Hex e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Hexu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(First2, "First2") {
  r05_this_is_generated_function();

  do {
    /* s.1: 2 */
    /* s.2: 3 */
    /* e.Line: 4 */
    struct r05_node *p[6] = { 0 };
    /* s.1 s.2 e.Line */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_svar(p+2);
    r05_alloc_svar(p+3);
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

R05_DEFINE_ENTRY_FUNCTION(LoadExpr, "LoadExpr") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 2 */
    struct r05_node *p[11] = { 0 };
    /* e.FileName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_LoadExpr0);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_TryLoadExpr);
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
}

R05_DEFINE_LOCAL_FUNCTION(LoadExpr0, "LoadExpr0") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 5 */
    /* e.Expr: 7 */
    struct r05_node *p[10] = { 0 };
    /* (e.FileName) Success e.Expr */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[3], p[1], &r05f_Success))
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
    /* e.FileName: 7 */
    /* e.Message: 9 */
    /* s.Line: 11 */
    /* s.Col: 12 */
    struct r05_node *p[23] = { 0 };
    /* (e.FileName) Fails (s.Line s.Col) e.Message */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[3], p[1], &r05f_Fails))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[6], p[1]);
    if (! r05_svar_left(p+11, p[5], p[6]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[6]))
      continue;
    if (! r05_empty_hole(p[12], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Putout);
    r05_alloc_number(0UL);
    r05_alloc_insert_pos(p+14);
    r05_alloc_char(':');
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+11);
    r05_alloc_close_call(p+16);
    r05_alloc_char(':');
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+12);
    r05_alloc_close_call(p+18);
    r05_alloc_char(':');
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_call(p+20);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_Exit);
    r05_alloc_number(1UL);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[21]);
    r05_push_stack(p[20]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+9);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[14], p+7);
    r05_splice_evar(p[19], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

static struct r05_function *metatable_entries[] = {
  &r05f_Apply,
  &r05f_Map,
  &r05f_Reduce,
  &r05f_MapAccum,
  &r05f_DoMapAccum,
  &r05f_MapAccumm_AddScanned,
  &r05f_DelAccumulator,
  &r05f_LOADm_SAVEm_HANDLE,
  &r05f_LoadFile,
  &r05f_DoLoadFile,
  &r05f_SaveFile,
  &r05f_SaveFilem_WriteBracketLine,
  &r05f_Inc,
  &r05f_Dec,
  &r05f_ArgList,
  &r05f_DoArgList,
  &r05f_SwDoArgList,
  &r05f_Trim,
  &r05f_Trimm_L,
  &r05f_Trimm_R,
  &r05f_OneOf,
  &r05f_Unique,
  &r05f_TryLoadExpr,
  &r05f_TryLoadExprm_Prepare,
  &r05f_TryLoadExprm_PrepareLine,
  &r05f_TryLoadExprm_Parse,
  &r05f_TryLoadExprm_Parsem_Ident,
  &r05f_TryLoadExprm_Parsem_Number,
  &r05f_TryLoadExprm_MakeError,
  &r05f_TryLoadExprm_Parsem_Quote,
  &r05f_SkipSpace,
  &r05f_TryLoadExprm_Parsem_Hex,
  &r05f_Hex,
  &r05f_First2,
  &r05f_LoadExpr,
  &r05f_Mu,
  &r05f_Up,
  &r05f_Evm_met,
  &r05f_Residue,
  &r05f_k3F_,
};

static struct r05_metatable metatable = {
  sizeof(metatable_entries) / sizeof(metatable_entries[0]),
  metatable_entries
};


/* End of file */

/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(MapAccum)
R05_DECLARE_ENTRY_FUNCTION(Map)
R05_DECLARE_ENTRY_FUNCTION(Unique)
R05_DECLARE_ENTRY_FUNCTION(Parse)
R05_DECLARE_ENTRY_FUNCTION(Scan)
R05_DECLARE_ENTRY_FUNCTION(R05m_PrepareAST)
R05_DECLARE_LOCAL_FUNCTION(CheckAST)
R05_DECLARE_LOCAL_FUNCTION(CheckASTm_ExternsArePlained)
R05_DECLARE_LOCAL_FUNCTION(CheckASTm_UnusedsAreFound)
R05_DECLARE_LOCAL_FUNCTION(CheckASTm_UnusedsAreFound0)
R05_DECLARE_LOCAL_FUNCTION(PlainExterns)
R05_DECLARE_ENTRY_FUNCTION(r05m_parseru_PlainExterns)
R05_DECLARE_ENTRY_FUNCTION(r05m_parseru_PlainExternsm_Name)
R05_DECLARE_LOCAL_FUNCTION(FindUnused)
R05_DECLARE_ENTRY_FUNCTION(r05m_parseru_FindUnusedm_InitialUsage)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loop)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loopu_check)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loopu_cont)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loopu_check0)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loopu_forward)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loopu_next)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loopu_cont0)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loopu_check1)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loopu_cont1)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loopu_check2)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loopu_forward0)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loopu_next0)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loopu_cont2)
R05_DECLARE_LOCAL_FUNCTION(ListOfBuiltinm_WithSugar)
R05_DECLARE_LOCAL_FUNCTION(AddMetatable)
R05_DECLARE_ENTRY_FUNCTION(r05m_parseru_AddMetatablem_AddFunction)
R05_DECLARE_ENTRY_FUNCTION(r05m_parseru_AddMetatablem_MakeMetafunction)
R05_DECLARE_LOCAL_FUNCTION(AddMetatablem_Aux)
R05_DECLARE_ENTRY_FUNCTION(r05m_parseru_AddHowCall)
R05_DECLARE_ENTRY_FUNCTION(r05m_parseru_MakeEnum)
R05_DECLARE_ENTRY_FUNCTION(r05m_parseru_FindUnusedm_Loopm_UnusedErrors)
R05_DECLARE_LOCAL_FUNCTION(UnusedMessage)
R05_DECLARE_LOCAL_FUNCTION(CastAST)
R05_DECLARE_ENTRY_FUNCTION(r05m_parseru_CastASTm_Item)
R05_DECLARE_LOCAL_FUNCTION(CastASTm_JoinExterns)
R05_DECLARE_LOCAL_FUNCTION(ExtractReferences)
R05_DECLARE_ENTRY_FUNCTION(r05m_parseru_ExtractReferencesm_Sentence)
R05_DECLARE_LOCAL_FUNCTION(ExtractReferencesm_Tail)
R05_DECLARE_LOCAL_FUNCTION(ExtractReferencesm_Expr)
R05_DECLARE_ENTRY_FUNCTION(r05m_parseru_ExtractReferencesm_Term)
R05_DECLARE_ENTRY_FUNCTION(R05m_Parsem_File)
R05_DECLARE_LOCAL_FUNCTION(R05m_Parsem_File0)
R05_DECLARE_LOCAL_FUNCTION(R05m_Parsem_File1)
R05_DECLARE_LOCAL_FUNCTION(SortErrors)
R05_DECLARE_LOCAL_FUNCTION(DoSortErrors)
R05_DECLARE_LOCAL_FUNCTION(SortErrorsm_Insert)
R05_DECLARE_LOCAL_FUNCTION(SortErrorsm_Insertm_Compare)
R05_DECLARE_LOCAL_FUNCTION(CompareError)
R05_DECLARE_LOCAL_FUNCTION(ELm_Create)
R05_DECLARE_LOCAL_FUNCTION(ELm_AddErrorAt)
R05_DECLARE_LOCAL_FUNCTION(ELm_Destroy)
R05_DECLARE_ENTRY_FUNCTION(Explode)
R05_DECLARE_ENTRY_FUNCTION(Compare)
R05_DECLARE_ENTRY_FUNCTION(ListOfBuiltin)
R05_DECLARE_ENTRY_FUNCTION(k25_)
R05_DECLARE_ENTRY_FUNCTION(k2A_)
R05_DECLARE_ENTRY_FUNCTION(k2B_)
R05_DECLARE_ENTRY_FUNCTION(m_)
R05_DECLARE_ENTRY_FUNCTION(k2F_)
R05_DEFINE_LOCAL_ENUM(Extern, "Extern")
R05_DEFINE_LOCAL_ENUM(Function, "Function")
R05_DEFINE_LOCAL_ENUM(SpecialComment, "SpecialComment")
R05_DEFINE_LOCAL_ENUM(Call, "Call")
R05_DEFINE_LOCAL_ENUM(Entry, "Entry")
R05_DEFINE_LOCAL_ENUM(Unused, "Unused")
R05_DEFINE_LOCAL_ENUM(Used, "Used")
R05_DEFINE_LOCAL_ENUM(NOm_POS, "NO-POS")
R05_DEFINE_LOCAL_ENUM(Local, "Local")
R05_DEFINE_LOCAL_ENUM(special, "special")
R05_DEFINE_LOCAL_ENUM(Meta, "Meta")
R05_DEFINE_LOCAL_ENUM(Metatable, "Metatable")
R05_DEFINE_LOCAL_ENUM(Symbol, "Symbol")
R05_DEFINE_LOCAL_ENUM(Word, "Word")
R05_DEFINE_LOCAL_ENUM(Ident, "Ident")
R05_DEFINE_LOCAL_ENUM(Brackets, "Brackets")
R05_DEFINE_LOCAL_ENUM(Success, "Success")
R05_DEFINE_LOCAL_ENUM(Fails, "Fails")
R05_DEFINE_LOCAL_ENUM(ErrorList, "ErrorList")
R05_DEFINE_LOCAL_ENUM(Condition, "Condition")
R05_DEFINE_LOCAL_ENUM(RETURN, "RETURN")
R05_DEFINE_LOCAL_ENUM(CALLm_BLOCK, "CALL-BLOCK")
R05_DEFINE_LOCAL_ENUM(regular, "regular")
R05_DEFINE_LOCAL_ENUM(k3F_, "?")

/*
*$FROM LibraryEx
*/
/*
*$FROM R5FW-Parser
*/
R05_DEFINE_ENTRY_FUNCTION(R05m_PrepareAST, "R05-PrepareAST") {
  r05_this_is_generated_function();

  do {
    /* e.AST: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CheckAST);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_ELm_Create);
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

R05_DEFINE_LOCAL_FUNCTION(CheckAST, "CheckAST") {
  r05_this_is_generated_function();

  do {
    /* t.ErrorList: 2 */
    /* e.AST: 4 */
    struct r05_node *p[12] = { 0 };
    /* t.ErrorList e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_CheckASTm_ExternsArePlained);
    r05_alloc_insert_pos(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_PlainExterns);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[6]);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+4);
    r05_splice_tvar(p[7], p+2);
    r05_splice_evar(p[9], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckASTm_ExternsArePlained, "CheckAST-ExternsArePlained") {
  r05_this_is_generated_function();

  do {
    /* t.ErrorList: 2 */
    /* e.AST: 4 */
    struct r05_node *p[11] = { 0 };
    /* t.ErrorList e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_CheckASTm_UnusedsAreFound);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_FindUnused);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[6]);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_correct_evar(p+4);
    r05_splice_tvar(p[8], p+2);
    r05_splice_evar(p[8], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckASTm_UnusedsAreFound, "CheckAST-UnusedsAreFound") {
  r05_this_is_generated_function();

  do {
    /* t.ErrorList: 2 */
    /* e.AST: 4 */
    struct r05_node *p[14] = { 0 };
    /* t.ErrorList e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_CheckASTm_UnusedsAreFound0);
    r05_alloc_insert_pos(p+7);
    r05_alloc_open_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_ELm_Destroy);
    r05_alloc_tvar(p+2);
    r05_alloc_close_call(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[6]);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_link_brackets(p[8], p[10]);
    r05_correct_evar(p+4);
    r05_splice_tvar(p[7], p+2);
    r05_splice_evar(p[9], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckASTm_UnusedsAreFound0, "CheckAST-UnusedsAreFound0") {
  r05_this_is_generated_function();

  do {
    /* e.AST: 4 */
    /* t.ErrorList: 6 */
    struct r05_node *p[11] = { 0 };
    /* t.ErrorList (e.AST) */
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
    r05_alloc_function(&r05f_Success);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_CastAST);
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

  do {
    /* t.ErrorList: 2 */
    /* e.AST: 6 */
    /* e.Errors: 8 */
    struct r05_node *p[11] = { 0 };
    /* t.ErrorList (e.AST) e.Errors */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    r05_close_evar(p+8, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_Fails);
    r05_alloc_insert_pos(p+10);
    r05_correct_evar(p+8);
    r05_splice_evar(p[10], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainExterns, "PlainExterns") {
  r05_this_is_generated_function();

  do {
    /* e.AST: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r05m_parseru_PlainExterns);
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

R05_DEFINE_ENTRY_FUNCTION(r05m_parseru_PlainExterns, "r05-parser_PlainExterns") {
  r05_this_is_generated_function();

  do {
    /* e.Names: 5 */
    struct r05_node *p[10] = { 0 };
    /* (Extern e.Names) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Extern))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r05m_parseru_PlainExternsm_Name);
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
    /* t.Pos: 5 */
    /* e.Name: 9 */
    /* s.Scope: 11 */
    /* e.Body: 12 */
    struct r05_node *p[21] = { 0 };
    /* (Function t.Pos (e.Name) s.Scope e.Body) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Function))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[3]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[3]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    if (! r05_svar_left(p+11, p[8], p[3]))
      continue;
    r05_close_evar(p+12, p[11], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_Function);
    r05_alloc_insert_pos(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_svar(p+11);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_link_brackets(p[14], p[20]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[15], p+5);
    r05_splice_evar(p[17], p+9);
    r05_splice_evar(p[19], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 5 */
    /* e.Text: 7 */
    struct r05_node *p[12] = { 0 };
    /* (SpecialComment t.Pos e.Text) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_SpecialComment))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[3]))
      continue;
    r05_close_evar(p+7, p[6], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_function(&r05f_SpecialComment);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+7);
    r05_splice_tvar(p[10], p+5);
    r05_splice_evar(p[10], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r05m_parseru_PlainExternsm_Name, "r05-parser_PlainExterns-Name") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 4 */
    /* e.Name: 6 */
    struct r05_node *p[14] = { 0 };
    /* (t.Pos e.Name) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[5], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_function(&r05f_Function);
    r05_alloc_insert_pos(p+9);
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_close_bracket(p+13);
    r05_link_brackets(p[8], p[13]);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+6);
    r05_splice_tvar(p[9], p+4);
    r05_splice_evar(p[11], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindUnused, "FindUnused") {
  r05_this_is_generated_function();

  do {
    /* t.ErrorList: 2 */
    /* e.AST: 4 */
    struct r05_node *p[18] = { 0 };
    /* t.ErrorList e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_function(&r05f_r05m_parseru_FindUnusedm_Loopm_UnusedErrors);
    r05_alloc_insert_pos(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_FindUnusedm_Loop);
    r05_alloc_open_bracket(p+9);
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_function(&r05f_r05m_parseru_FindUnusedm_InitialUsage);
    r05_alloc_open_bracket(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_close_call(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[6]);
    r05_push_stack(p[16]);
    r05_push_stack(p[8]);
    r05_push_stack(p[15]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+4);
    r05_link_brackets(p[12], p[13]);
    r05_link_brackets(p[9], p[10]);
    r05_splice_tvar(p[7], p+2);
    r05_splice_evar(p[14], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r05m_parseru_FindUnusedm_InitialUsage, "r05-parser_FindUnused-InitialUsage") {
  r05_this_is_generated_function();

  do {
    /* e.Entries: 7 */
    /* t.Pos: 9 */
    /* e.Name: 14 */
    /* e.Body: 16 */
    struct r05_node *p[30] = { 0 };
    /* (e.Entries) (Function t.Pos (e.Name) Entry e.Body) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Function))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    if (! r05_tvar_left(p+9, p[6], p[5]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[5]))
      continue;
    if (! r05_function_left(p+13, p[12], p[5], &r05f_Entry))
      continue;
    r05_close_evar(p+14, p[11], p[12]);
    r05_close_evar(p+16, p[13], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_Call);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_function(&r05f_Function);
    r05_alloc_function(&r05f_Unused);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_evar(p+14);
    r05_alloc_close_bracket(p+27);
    r05_alloc_function(&r05f_Entry);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_link_brackets(p[24], p[29]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[26], p[27]);
    r05_link_brackets(p[18], p[23]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+7);
    r05_splice_evar(p[19], p+7);
    r05_splice_evar(p[21], p+14);
    r05_splice_tvar(p[25], p+9);
    r05_splice_evar(p[28], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Entries: 7 */
    /* t.Pos: 9 */
    /* e.Name: 13 */
    /* s.Scope: 15 */
    /* e.Body: 16 */
    struct r05_node *p[28] = { 0 };
    /* (e.Entries) (Function t.Pos (e.Name) s.Scope e.Body) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Function))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    if (! r05_tvar_left(p+9, p[6], p[5]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[5]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    if (! r05_svar_left(p+15, p[12], p[5]))
      continue;
    r05_close_evar(p+16, p[15], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_function(&r05f_Function);
    r05_alloc_function(&r05f_Unused);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_svar(p+15);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_link_brackets(p[21], p[27]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[19], p+7);
    r05_splice_tvar(p[22], p+9);
    r05_splice_evar(p[24], p+13);
    r05_splice_evar(p[26], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Entries: 7 */
    /* t.Pos: 9 */
    /* e.Comment: 11 */
    struct r05_node *p[19] = { 0 };
    /* (e.Entries) (SpecialComment t.Pos e.Comment) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_SpecialComment))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    if (! r05_tvar_left(p+9, p[6], p[5]))
      continue;
    r05_close_evar(p+11, p[10], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_SpecialComment);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[14], p+7);
    r05_splice_tvar(p[17], p+9);
    r05_splice_evar(p[17], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loop, "FindUnused-Loop") {
  r05_this_is_generated_function();

  do {
    /* e.Enums: 8 */
    /* e.References: 10 */
    /* s.How: 12 */
    /* e.Name: 13, 24 */
    /* e.AST-B: 15 */
    /* e.AST-E: 26 */
    /* t.Pos: 28 */
    struct r05_node *p[46] = { 0 };
    /* (e.Enums) ((s.How e.Name) e.References) e.AST-B (Function Unused t.Pos (e.Name) Extern) e.AST-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[7], p[5]);
    if (! r05_svar_left(p+12, p[6], p[7]))
      continue;
    r05_close_evar(p+13, p[12], p[7]);
    p[15] = p[5]->next;
    p[16] = p[5];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+17, p[16], p[1]))
        continue;
      if (! r05_function_left(p+19, p[17], p[18], &r05f_Function))
        continue;
      if (! r05_function_left(p+20, p[19], p[18], &r05f_Unused))
        continue;
      if (! r05_function_right(p+21, p[20], p[18], &r05f_Extern))
        continue;
      if (! r05_brackets_right(p+22, p[20], p[21]))
        continue;
      if (! r05_repeated_evar_left(p+24, p[22], p[23], p+13))
        continue;
      if (! r05_empty_hole(p[25], p[23]))
        continue;
      r05_close_evar(p+26, p[18], p[1]);
      if (! r05_tvar_left(p+28, p[20], p[22]))
        continue;
      if (! r05_empty_hole(p[29], p[22]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+30);
      r05_alloc_function(&r05f_FindUnusedm_Loop);
      r05_alloc_open_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_open_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_insert_pos(p+37);
      r05_alloc_open_bracket(p+38);
      r05_alloc_function(&r05f_Function);
      r05_alloc_function(&r05f_Used);
      r05_alloc_insert_pos(p+39);
      r05_alloc_open_bracket(p+40);
      r05_alloc_insert_pos(p+41);
      r05_alloc_close_bracket(p+42);
      r05_alloc_function(&r05f_Extern);
      r05_alloc_close_bracket(p+43);
      r05_alloc_insert_pos(p+44);
      r05_alloc_close_call(p+45);
      r05_push_stack(p[45]);
      r05_push_stack(p[30]);
      r05_correct_evar(p+26);
      r05_link_brackets(p[38], p[43]);
      r05_link_brackets(p[40], p[42]);
      r05_correct_evar(p+13);
      r05_correct_evar(p+15);
      r05_link_brackets(p[34], p[36]);
      r05_correct_evar(p+10);
      r05_link_brackets(p[31], p[33]);
      r05_correct_evar(p+8);
      r05_splice_evar(p[32], p+8);
      r05_splice_evar(p[35], p+10);
      r05_splice_evar(p[37], p+15);
      r05_splice_tvar(p[39], p+28);
      r05_splice_evar(p[41], p+13);
      r05_splice_evar(p[44], p+26);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+15, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Enums: 9 */
    /* e.Name: 11, 27 */
    /* e.References: 13 */
    /* e.AST-B: 15 */
    /* e.AST-E: 21 */
    /* t.Pos: 23 */
    /* s.Scope: 29 */
    /* e.Body: 30 */
    struct r05_node *p[51] = { 0 };
    /* (e.Enums) ((Call e.Name) e.References) e.AST-B (Function Unused t.Pos (e.Name) s.Scope e.Body) e.AST-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_Call))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[8], p[7]);
    r05_close_evar(p+13, p[7], p[5]);
    p[15] = p[5]->next;
    p[16] = p[5];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+17, p[16], p[1]))
        continue;
      if (! r05_function_left(p+19, p[17], p[18], &r05f_Function))
        continue;
      if (! r05_function_left(p+20, p[19], p[18], &r05f_Unused))
        continue;
      r05_close_evar(p+21, p[18], p[1]);
      if (! r05_tvar_left(p+23, p[20], p[18]))
        continue;
      if (! r05_brackets_left(p+25, p[24], p[18]))
        continue;
      if (! r05_repeated_evar_left(p+27, p[25], p[26], p+11))
        continue;
      if (! r05_empty_hole(p[28], p[26]))
        continue;
      if (! r05_svar_left(p+29, p[26], p[18]))
        continue;
      r05_close_evar(p+30, p[29], p[18]);

      r05_reset_allocator();
      r05_alloc_open_call(p+32);
      r05_alloc_function(&r05f_FindUnusedm_Loop);
      r05_alloc_open_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_close_bracket(p+35);
      r05_alloc_open_bracket(p+36);
      r05_alloc_insert_pos(p+37);
      r05_alloc_open_call(p+38);
      r05_alloc_function(&r05f_ExtractReferences);
      r05_alloc_insert_pos(p+39);
      r05_alloc_close_call(p+40);
      r05_alloc_close_bracket(p+41);
      r05_alloc_insert_pos(p+42);
      r05_alloc_open_bracket(p+43);
      r05_alloc_function(&r05f_Function);
      r05_alloc_function(&r05f_Used);
      r05_alloc_insert_pos(p+44);
      r05_alloc_open_bracket(p+45);
      r05_alloc_insert_pos(p+46);
      r05_alloc_close_bracket(p+47);
      r05_alloc_svar(p+29);
      r05_alloc_evar(p+30);
      r05_alloc_close_bracket(p+48);
      r05_alloc_insert_pos(p+49);
      r05_alloc_close_call(p+50);
      r05_push_stack(p[50]);
      r05_push_stack(p[32]);
      r05_correct_evar(p+21);
      r05_link_brackets(p[43], p[48]);
      r05_link_brackets(p[45], p[47]);
      r05_correct_evar(p+11);
      r05_correct_evar(p+15);
      r05_link_brackets(p[36], p[41]);
      r05_push_stack(p[40]);
      r05_push_stack(p[38]);
      r05_correct_evar(p+30);
      r05_correct_evar(p+13);
      r05_link_brackets(p[33], p[35]);
      r05_correct_evar(p+9);
      r05_splice_evar(p[34], p+9);
      r05_splice_evar(p[37], p+13);
      r05_splice_evar(p[39], p+30);
      r05_splice_evar(p[42], p+15);
      r05_splice_tvar(p[44], p+23);
      r05_splice_evar(p[46], p+11);
      r05_splice_evar(p[49], p+21);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+15, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Enums: 8 */
    /* e.References: 10 */
    /* s.How: 12 */
    /* e.Name: 13, 27 */
    /* e.AST-B: 15 */
    /* e.AST-E: 20 */
    /* s.Used: 22 */
    /* t.Pos: 23 */
    /* s.Scope: 29 */
    /* e.Body: 30 */
    struct r05_node *p[49] = { 0 };
    /* (e.Enums) ((s.How e.Name) e.References) e.AST-B (Function s.Used t.Pos (e.Name) s.Scope e.Body) e.AST-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[7], p[5]);
    if (! r05_svar_left(p+12, p[6], p[7]))
      continue;
    r05_close_evar(p+13, p[12], p[7]);
    p[15] = p[5]->next;
    p[16] = p[5];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+17, p[16], p[1]))
        continue;
      if (! r05_function_left(p+19, p[17], p[18], &r05f_Function))
        continue;
      r05_close_evar(p+20, p[18], p[1]);
      if (! r05_svar_left(p+22, p[19], p[18]))
        continue;
      if (! r05_tvar_left(p+23, p[22], p[18]))
        continue;
      if (! r05_brackets_left(p+25, p[24], p[18]))
        continue;
      if (! r05_repeated_evar_left(p+27, p[25], p[26], p+13))
        continue;
      if (! r05_empty_hole(p[28], p[26]))
        continue;
      if (! r05_svar_left(p+29, p[26], p[18]))
        continue;
      r05_close_evar(p+30, p[29], p[18]);

      r05_reset_allocator();
      r05_alloc_open_call(p+32);
      r05_alloc_function(&r05f_FindUnusedm_Loop);
      r05_alloc_open_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_close_bracket(p+35);
      r05_alloc_open_bracket(p+36);
      r05_alloc_insert_pos(p+37);
      r05_alloc_close_bracket(p+38);
      r05_alloc_insert_pos(p+39);
      r05_alloc_open_bracket(p+40);
      r05_alloc_function(&r05f_Function);
      r05_alloc_svar(p+22);
      r05_alloc_insert_pos(p+41);
      r05_alloc_open_bracket(p+42);
      r05_alloc_insert_pos(p+43);
      r05_alloc_close_bracket(p+44);
      r05_alloc_svar(p+29);
      r05_alloc_insert_pos(p+45);
      r05_alloc_close_bracket(p+46);
      r05_alloc_insert_pos(p+47);
      r05_alloc_close_call(p+48);
      r05_push_stack(p[48]);
      r05_push_stack(p[32]);
      r05_correct_evar(p+20);
      r05_link_brackets(p[40], p[46]);
      r05_correct_evar(p+30);
      r05_link_brackets(p[42], p[44]);
      r05_correct_evar(p+13);
      r05_correct_evar(p+15);
      r05_link_brackets(p[36], p[38]);
      r05_correct_evar(p+10);
      r05_link_brackets(p[33], p[35]);
      r05_correct_evar(p+8);
      r05_splice_evar(p[34], p+8);
      r05_splice_evar(p[37], p+10);
      r05_splice_evar(p[39], p+15);
      r05_splice_tvar(p[41], p+23);
      r05_splice_evar(p[43], p+13);
      r05_splice_evar(p[45], p+30);
      r05_splice_evar(p[47], p+20);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+15, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Enums: 8 */
    /* e.References: 10 */
    /* e.AST: 12 */
    /* s.How: 14 */
    /* e.BuiltinName: 15 */
    struct r05_node *p[33] = { 0 };
    /* (e.Enums) ((s.How e.BuiltinName) e.References) e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[7], p[5]);
    r05_close_evar(p+12, p[5], p[1]);
    if (! r05_svar_left(p+14, p[6], p[7]))
      continue;
    r05_close_evar(p+15, p[14], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_FindUnusedm_Loopu_check);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_svar(p+14);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_ListOfBuiltinm_WithSugar);
    r05_alloc_close_call(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[17]);
    r05_push_stack(p[31]);
    r05_push_stack(p[30]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[19], p+8);
    r05_splice_evar(p[22], p+15);
    r05_splice_evar(p[25], p+10);
    r05_splice_evar(p[28], p+12);
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
    r05_alloc_function(&r05f_FindUnusedm_Loopu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loopu_check, "FindUnused-Loop_check") {
  r05_this_is_generated_function();

  do {
    /* e.Enums: 4 */
    /* s.How: 6 */
    /* e.BuiltinName: 13 */
    /* e.References: 15 */
    /* e.AST: 17 */
    /* e.1: 19 */
    /* e.2: 24 */
    /* s.No: 26 */
    /* s.FuncName: 27 */
    struct r05_node *p[50] = { 0 };
    /* (e.Enums) s.How (e.BuiltinName) (e.References) (e.AST) e.1 (s.No s.FuncName regular) e.2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    r05_close_evar(p+13, p[7], p[8]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[11], p[12]);
    p[19] = p[12]->next;
    p[20] = p[12];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+21, p[20], p[1]))
        continue;
      if (! r05_function_right(p+23, p[21], p[22], &r05f_regular))
        continue;
      r05_close_evar(p+24, p[22], p[1]);
      if (! r05_svar_left(p+26, p[21], p[23]))
        continue;
      if (! r05_svar_left(p+27, p[26], p[23]))
        continue;
      if (! r05_empty_hole(p[27], p[23]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+28);
      r05_alloc_function(&r05f_FindUnusedm_Loopu_check0);
      r05_alloc_open_bracket(p+29);
      r05_alloc_insert_pos(p+30);
      r05_alloc_close_bracket(p+31);
      r05_alloc_svar(p+6);
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
      r05_alloc_svar(p+26);
      r05_alloc_svar(p+27);
      r05_alloc_open_bracket(p+44);
      r05_alloc_insert_pos(p+45);
      r05_alloc_close_bracket(p+46);
      r05_alloc_open_call(p+47);
      r05_alloc_function(&r05f_Explode);
      r05_alloc_svar(p+27);
      r05_alloc_close_call(p+48);
      r05_alloc_close_call(p+49);
      r05_push_stack(p[49]);
      r05_push_stack(p[28]);
      r05_push_stack(p[48]);
      r05_push_stack(p[47]);
      r05_link_brackets(p[44], p[46]);
      r05_correct_evar(p+24);
      r05_link_brackets(p[41], p[43]);
      r05_correct_evar(p+19);
      r05_link_brackets(p[38], p[40]);
      r05_correct_evar(p+17);
      r05_link_brackets(p[35], p[37]);
      r05_correct_evar(p+15);
      r05_link_brackets(p[32], p[34]);
      r05_correct_evar(p+13);
      r05_link_brackets(p[29], p[31]);
      r05_correct_evar(p+4);
      r05_splice_evar(p[30], p+4);
      r05_splice_evar(p[33], p+13);
      r05_splice_evar(p[36], p+15);
      r05_splice_evar(p[39], p+17);
      r05_splice_evar(p[42], p+19);
      r05_splice_evar(p[45], p+24);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+19, p[1]));
    r05_stop_e_loop();
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
    r05_alloc_function(&r05f_FindUnusedm_Loopu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loopu_cont, "FindUnused-Loop_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Enums: 9 */
    /* e.BuiltinName: 11 */
    /* e.References: 13 */
    /* e.AST: 15 */
    struct r05_node *p[33] = { 0 };
    /* (e.Enums) ((Call e.BuiltinName) e.References) e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_Call))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[8], p[7]);
    r05_close_evar(p+13, p[7], p[5]);
    r05_close_evar(p+15, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_FindUnusedm_Loopu_check1);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_ListOfBuiltinm_WithSugar);
    r05_alloc_close_call(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[17]);
    r05_push_stack(p[31]);
    r05_push_stack(p[30]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[19], p+9);
    r05_splice_evar(p[22], p+11);
    r05_splice_evar(p[25], p+13);
    r05_splice_evar(p[28], p+15);
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
    r05_alloc_function(&r05f_FindUnusedm_Loopu_cont1);
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

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loopu_check0, "FindUnused-Loop_check0") {
  r05_this_is_generated_function();

  do {
    /* e.Enums: 4 */
    /* s.How: 6 */
    /* e.BuiltinName: 15, 17 */
    /* e.References: 21 */
    /* e.AST: 23 */
    /* e.1: 25 */
    /* e.2: 27 */
    /* s.No: 29 */
    /* s.FuncName: 30 */
    struct r05_node *p[45] = { 0 };
    /* (e.Enums) s.How (e.BuiltinName) (e.References) (e.AST) (e.1) s.No s.FuncName (e.2) e.BuiltinName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[7], p[8]);
    if (! r05_repeated_evar_right(p+17, p[14], p[1], p+15))
      continue;
    if (! r05_brackets_right(p+19, p[14], p[17]))
      continue;
    r05_close_evar(p+21, p[9], p[10]);
    r05_close_evar(p+23, p[11], p[12]);
    r05_close_evar(p+25, p[13], p[14]);
    r05_close_evar(p+27, p[19], p[20]);
    if (! r05_svar_left(p+29, p[14], p[19]))
      continue;
    if (! r05_svar_left(p+30, p[29], p[19]))
      continue;
    if (! r05_empty_hole(p[30], p[19]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_FindUnusedm_Loop);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_open_bracket(p+39);
    r05_alloc_function(&r05f_Function);
    r05_alloc_function(&r05f_Used);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_open_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_close_bracket(p+42);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_close_bracket(p+43);
    r05_alloc_close_call(p+44);
    r05_push_stack(p[44]);
    r05_push_stack(p[31]);
    r05_link_brackets(p[39], p[43]);
    r05_link_brackets(p[40], p[42]);
    r05_correct_evar(p+15);
    r05_correct_evar(p+23);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[33], p+4);
    r05_splice_evar(p[36], p+21);
    r05_splice_evar(p[38], p+23);
    r05_splice_evar(p[41], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Enums: 4 */
    /* s.How: 6 */
    /* e.BuiltinName: 15 */
    /* e.References: 17 */
    /* e.AST: 19 */
    /* e.1: 21 */
    /* s.No: 23 */
    /* s.FuncName: 24 */
    /* e.2: 27 */
    /* e.Other: 29 */
    struct r05_node *p[51] = { 0 };
    /* (e.Enums) s.How (e.BuiltinName) (e.References) (e.AST) (e.1) s.No s.FuncName (e.2) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[7], p[8]);
    r05_close_evar(p+17, p[9], p[10]);
    r05_close_evar(p+19, p[11], p[12]);
    r05_close_evar(p+21, p[13], p[14]);
    if (! r05_svar_left(p+23, p[14], p[1]))
      continue;
    if (! r05_svar_left(p+24, p[23], p[1]))
      continue;
    if (! r05_brackets_left(p+25, p[24], p[1]))
      continue;
    r05_close_evar(p+27, p[25], p[26]);
    r05_close_evar(p+29, p[26], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_FindUnusedm_Loopu_forward);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_svar(p+6);
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
    r05_alloc_svar(p+23);
    r05_alloc_svar(p+24);
    r05_alloc_function(&r05f_regular);
    r05_alloc_close_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_close_call(p+50);
    r05_push_stack(p[50]);
    r05_push_stack(p[31]);
    r05_correct_evar(p+27);
    r05_link_brackets(p[47], p[48]);
    r05_link_brackets(p[44], p[46]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[41], p[43]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[38], p[40]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[33], p+4);
    r05_splice_evar(p[36], p+15);
    r05_splice_evar(p[39], p+17);
    r05_splice_evar(p[42], p+19);
    r05_splice_evar(p[45], p+21);
    r05_splice_evar(p[49], p+27);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loopu_forward, "FindUnused-Loop_forward") {
  r05_this_is_generated_function();

  do {
    /* e.Enums: 4 */
    /* s.How: 6 */
    /* e.BuiltinName: 15 */
    /* e.References: 17 */
    /* e.AST: 19 */
    /* e.1_fix: 21 */
    /* t.1_next: 23 */
    /* e.1_rest: 25 */
    struct r05_node *p[45] = { 0 };
    /* (e.Enums) s.How (e.BuiltinName) (e.References) (e.AST) (e.1_fix) t.1_next e.1_rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[7], p[8]);
    r05_close_evar(p+17, p[9], p[10]);
    r05_close_evar(p+19, p[11], p[12]);
    r05_close_evar(p+21, p[13], p[14]);
    if (! r05_tvar_left(p+23, p[14], p[1]))
      continue;
    r05_close_evar(p+25, p[24], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_FindUnusedm_Loopu_next);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_svar(p+6);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_open_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_close_bracket(p+42);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_call(p+44);
    r05_push_stack(p[44]);
    r05_push_stack(p[27]);
    r05_correct_evar(p+25);
    r05_link_brackets(p[40], p[42]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[37], p[39]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[29], p+4);
    r05_splice_evar(p[32], p+15);
    r05_splice_evar(p[35], p+17);
    r05_splice_evar(p[38], p+19);
    r05_splice_evar(p[41], p+21);
    r05_splice_tvar(p[41], p+23);
    r05_splice_evar(p[43], p+25);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Enums: 12 */
    /* e.BuiltinName: 14 */
    /* e.References: 16 */
    /* e.AST: 18 */
    /* e.1_fix: 20 */
    /* s.How: 22 */
    struct r05_node *p[38] = { 0 };
    /* (e.Enums) s.How (e.BuiltinName) (e.References) (e.AST) (e.1_fix) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_right(p+6, p[3], p[4]))
      continue;
    if (! r05_brackets_right(p+8, p[3], p[6]))
      continue;
    if (! r05_brackets_right(p+10, p[3], p[8]))
      continue;
    r05_close_evar(p+12, p[2], p[3]);
    r05_close_evar(p+14, p[10], p[11]);
    r05_close_evar(p+16, p[8], p[9]);
    r05_close_evar(p+18, p[6], p[7]);
    r05_close_evar(p+20, p[4], p[5]);
    if (! r05_svar_left(p+22, p[3], p[10]))
      continue;
    if (! r05_empty_hole(p[22], p[10]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_FindUnusedm_Loopu_cont0);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_svar(p+22);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_open_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_call(p+37);
    r05_push_stack(p[37]);
    r05_push_stack(p[23]);
    r05_correct_evar(p+20);
    r05_link_brackets(p[33], p[35]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[25], p+12);
    r05_splice_evar(p[28], p+14);
    r05_splice_evar(p[31], p+16);
    r05_splice_evar(p[34], p+18);
    r05_splice_evar(p[36], p+20);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loopu_next, "FindUnused-Loop_next") {
  r05_this_is_generated_function();

  do {
    /* e.Enums: 4 */
    /* s.How: 6 */
    /* e.BuiltinName: 15 */
    /* e.References: 17 */
    /* e.AST: 19 */
    /* e.1_fix: 21 */
    /* e.1_var: 23 */
    /* e.2: 28 */
    /* s.No: 30 */
    /* s.FuncName: 31 */
    struct r05_node *p[54] = { 0 };
    /* (e.Enums) s.How (e.BuiltinName) (e.References) (e.AST) (e.1_fix) e.1_var (s.No s.FuncName regular) e.2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[7], p[8]);
    r05_close_evar(p+17, p[9], p[10]);
    r05_close_evar(p+19, p[11], p[12]);
    r05_close_evar(p+21, p[13], p[14]);
    p[23] = p[14]->next;
    p[24] = p[14];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+25, p[24], p[1]))
        continue;
      if (! r05_function_right(p+27, p[25], p[26], &r05f_regular))
        continue;
      r05_close_evar(p+28, p[26], p[1]);
      if (! r05_svar_left(p+30, p[25], p[27]))
        continue;
      if (! r05_svar_left(p+31, p[30], p[27]))
        continue;
      if (! r05_empty_hole(p[31], p[27]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+32);
      r05_alloc_function(&r05f_FindUnusedm_Loopu_check0);
      r05_alloc_open_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_close_bracket(p+35);
      r05_alloc_svar(p+6);
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
      r05_alloc_svar(p+30);
      r05_alloc_svar(p+31);
      r05_alloc_open_bracket(p+48);
      r05_alloc_insert_pos(p+49);
      r05_alloc_close_bracket(p+50);
      r05_alloc_open_call(p+51);
      r05_alloc_function(&r05f_Explode);
      r05_alloc_svar(p+31);
      r05_alloc_close_call(p+52);
      r05_alloc_close_call(p+53);
      r05_push_stack(p[53]);
      r05_push_stack(p[32]);
      r05_push_stack(p[52]);
      r05_push_stack(p[51]);
      r05_link_brackets(p[48], p[50]);
      r05_correct_evar(p+28);
      r05_link_brackets(p[45], p[47]);
      r05_correct_evar(p+23);
      r05_correct_evar(p+21);
      r05_link_brackets(p[42], p[44]);
      r05_correct_evar(p+19);
      r05_link_brackets(p[39], p[41]);
      r05_correct_evar(p+17);
      r05_link_brackets(p[36], p[38]);
      r05_correct_evar(p+15);
      r05_link_brackets(p[33], p[35]);
      r05_correct_evar(p+4);
      r05_splice_evar(p[34], p+4);
      r05_splice_evar(p[37], p+15);
      r05_splice_evar(p[40], p+17);
      r05_splice_evar(p[43], p+19);
      r05_splice_evar(p[46], p+21);
      r05_splice_evar(p[46], p+23);
      r05_splice_evar(p[49], p+28);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+23, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Enums: 4 */
    /* s.How: 6 */
    /* e.BuiltinName: 15 */
    /* e.References: 17 */
    /* e.AST: 19 */
    /* e.1_fix: 21 */
    /* e.1_rest: 23 */
    struct r05_node *p[40] = { 0 };
    /* (e.Enums) s.How (e.BuiltinName) (e.References) (e.AST) (e.1_fix) e.1_rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[7], p[8]);
    r05_close_evar(p+17, p[9], p[10]);
    r05_close_evar(p+19, p[11], p[12]);
    r05_close_evar(p+21, p[13], p[14]);
    r05_close_evar(p+23, p[14], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_FindUnusedm_Loopu_cont0);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_svar(p+6);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_call(p+39);
    r05_push_stack(p[39]);
    r05_push_stack(p[25]);
    r05_correct_evar(p+23);
    r05_correct_evar(p+21);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[27], p+4);
    r05_splice_evar(p[30], p+15);
    r05_splice_evar(p[33], p+17);
    r05_splice_evar(p[36], p+19);
    r05_splice_evar(p[38], p+21);
    r05_splice_evar(p[38], p+23);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loopu_cont0, "FindUnused-Loop_cont0") {
  r05_this_is_generated_function();

  do {
    /* e.Enums: 4 */
    /* s.How: 6 */
    /* e.BuiltinName: 13 */
    /* e.References: 15 */
    /* e.AST: 17 */
    /* e.Other: 19 */
    struct r05_node *p[33] = { 0 };
    /* (e.Enums) s.How (e.BuiltinName) (e.References) (e.AST) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    r05_close_evar(p+13, p[7], p[8]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[11], p[12]);
    r05_close_evar(p+19, p[12], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_FindUnusedm_Loopu_cont);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_svar(p+6);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[21]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[25], p[30]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[23], p+4);
    r05_splice_evar(p[27], p+13);
    r05_splice_evar(p[29], p+15);
    r05_splice_evar(p[31], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loopu_check1, "FindUnused-Loop_check1") {
  r05_this_is_generated_function();

  do {
    /* e.Enums: 10 */
    /* e.BuiltinName: 12 */
    /* e.References: 14 */
    /* e.AST: 16 */
    /* e.1: 18 */
    /* e.2: 23 */
    /* s.No: 25 */
    /* s.FuncName: 26 */
    struct r05_node *p[49] = { 0 };
    /* (e.Enums) (e.BuiltinName) (e.References) (e.AST) e.1 (s.No s.FuncName special) e.2 */
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
    p[18] = p[9]->next;
    p[19] = p[9];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+20, p[19], p[1]))
        continue;
      if (! r05_function_right(p+22, p[20], p[21], &r05f_special))
        continue;
      r05_close_evar(p+23, p[21], p[1]);
      if (! r05_svar_left(p+25, p[20], p[22]))
        continue;
      if (! r05_svar_left(p+26, p[25], p[22]))
        continue;
      if (! r05_empty_hole(p[26], p[22]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+27);
      r05_alloc_function(&r05f_FindUnusedm_Loopu_check2);
      r05_alloc_open_bracket(p+28);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_open_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_insert_pos(p+38);
      r05_alloc_close_bracket(p+39);
      r05_alloc_open_bracket(p+40);
      r05_alloc_insert_pos(p+41);
      r05_alloc_close_bracket(p+42);
      r05_alloc_svar(p+25);
      r05_alloc_svar(p+26);
      r05_alloc_open_bracket(p+43);
      r05_alloc_insert_pos(p+44);
      r05_alloc_close_bracket(p+45);
      r05_alloc_open_call(p+46);
      r05_alloc_function(&r05f_Explode);
      r05_alloc_svar(p+26);
      r05_alloc_close_call(p+47);
      r05_alloc_close_call(p+48);
      r05_push_stack(p[48]);
      r05_push_stack(p[27]);
      r05_push_stack(p[47]);
      r05_push_stack(p[46]);
      r05_link_brackets(p[43], p[45]);
      r05_correct_evar(p+23);
      r05_link_brackets(p[40], p[42]);
      r05_correct_evar(p+18);
      r05_link_brackets(p[37], p[39]);
      r05_correct_evar(p+16);
      r05_link_brackets(p[34], p[36]);
      r05_correct_evar(p+14);
      r05_link_brackets(p[31], p[33]);
      r05_correct_evar(p+12);
      r05_link_brackets(p[28], p[30]);
      r05_correct_evar(p+10);
      r05_splice_evar(p[29], p+10);
      r05_splice_evar(p[32], p+12);
      r05_splice_evar(p[35], p+14);
      r05_splice_evar(p[38], p+16);
      r05_splice_evar(p[41], p+18);
      r05_splice_evar(p[44], p+23);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+18, p[1]));
    r05_stop_e_loop();
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
    r05_alloc_function(&r05f_FindUnusedm_Loopu_cont2);
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

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loopu_cont1, "FindUnused-Loop_cont1") {
  r05_this_is_generated_function();

  do {
    /* e.References: 8 */
    /* e.AST: 10 */
    /* s.How: 12 */
    /* e.Name: 13, 19 */
    /* e.Enums-B: 15 */
    /* e.Enums-E: 21 */
    struct r05_node *p[36] = { 0 };
    /* (e.Enums-B (e.Name) e.Enums-E) ((s.How e.Name) e.References) e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    r05_close_evar(p+8, p[7], p[5]);
    r05_close_evar(p+10, p[5], p[1]);
    if (! r05_svar_left(p+12, p[6], p[7]))
      continue;
    r05_close_evar(p+13, p[12], p[7]);
    p[15] = p[2]->next;
    p[16] = p[2];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+17, p[16], p[3]))
        continue;
      if (! r05_repeated_evar_left(p+19, p[17], p[18], p+13))
        continue;
      if (! r05_empty_hole(p[20], p[18]))
        continue;
      r05_close_evar(p+21, p[18], p[3]);

      r05_reset_allocator();
      r05_alloc_open_call(p+23);
      r05_alloc_function(&r05f_FindUnusedm_Loop);
      r05_alloc_open_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_open_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_close_bracket(p+28);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_close_call(p+35);
      r05_push_stack(p[35]);
      r05_push_stack(p[23]);
      r05_correct_evar(p+10);
      r05_link_brackets(p[31], p[33]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[24], p[30]);
      r05_correct_evar(p+21);
      r05_link_brackets(p[26], p[28]);
      r05_correct_evar(p+13);
      r05_correct_evar(p+15);
      r05_splice_evar(p[25], p+15);
      r05_splice_evar(p[27], p+13);
      r05_splice_evar(p[29], p+21);
      r05_splice_evar(p[32], p+8);
      r05_splice_evar(p[34], p+10);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+15, p[3]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Enums: 8 */
    /* e.References: 10 */
    /* e.AST: 12 */
    /* s.How: 14 */
    /* e.Name: 15 */
    struct r05_node *p[29] = { 0 };
    /* (e.Enums) ((s.How e.Name) e.References) e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[7], p[5]);
    r05_close_evar(p+12, p[5], p[1]);
    if (! r05_svar_left(p+14, p[6], p[7]))
      continue;
    r05_close_evar(p+15, p[14], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_FindUnusedm_Loop);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[18], p[23]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+15);
    r05_correct_evar(p+8);
    r05_splice_evar(p[19], p+8);
    r05_splice_evar(p[21], p+15);
    r05_splice_evar(p[25], p+10);
    r05_splice_evar(p[27], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Enums-B: 6 */
    /* e.Meta: 10, 24 */
    /* e.Enums-E: 12 */
    /* e.AST-B: 14 */
    /* e.AST-E: 26 */
    struct r05_node *p[42] = { 0 };
    /* (e.Enums-B (e.Meta) e.Enums-E) () e.AST-B (Function Used NO-POS (e.Meta) Meta) e.AST-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[5]))
      continue;
    p[6] = p[2]->next;
    p[7] = p[2];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+8, p[7], p[3]))
        continue;
      r05_close_evar(p+10, p[8], p[9]);
      r05_close_evar(p+12, p[9], p[3]);
      p[14] = p[5]->next;
      p[15] = p[5];
      r05_start_e_loop();
      do {
        if (! r05_brackets_left(p+16, p[15], p[1]))
          continue;
        if (! r05_function_left(p+18, p[16], p[17], &r05f_Function))
          continue;
        if (! r05_function_left(p+19, p[18], p[17], &r05f_Used))
          continue;
        if (! r05_function_left(p+20, p[19], p[17], &r05f_NOm_POS))
          continue;
        if (! r05_function_right(p+21, p[20], p[17], &r05f_Meta))
          continue;
        if (! r05_brackets_left(p+22, p[20], p[21]))
          continue;
        if (! r05_empty_hole(p[23], p[21]))
          continue;
        if (! r05_repeated_evar_left(p+24, p[22], p[23], p+10))
          continue;
        if (! r05_empty_hole(p[25], p[23]))
          continue;
        r05_close_evar(p+26, p[17], p[1]);

        r05_reset_allocator();
        r05_alloc_open_call(p+28);
        r05_alloc_function(&r05f_FindUnusedm_Loop);
        r05_alloc_open_bracket(p+29);
        r05_alloc_insert_pos(p+30);
        r05_alloc_close_bracket(p+31);
        r05_alloc_open_bracket(p+32);
        r05_alloc_close_bracket(p+33);
        r05_alloc_insert_pos(p+34);
        r05_alloc_open_bracket(p+35);
        r05_alloc_function(&r05f_Function);
        r05_alloc_function(&r05f_Used);
        r05_alloc_function(&r05f_NOm_POS);
        r05_alloc_open_bracket(p+36);
        r05_alloc_insert_pos(p+37);
        r05_alloc_close_bracket(p+38);
        r05_alloc_function(&r05f_Meta);
        r05_alloc_close_bracket(p+39);
        r05_alloc_insert_pos(p+40);
        r05_alloc_close_call(p+41);
        r05_push_stack(p[41]);
        r05_push_stack(p[28]);
        r05_correct_evar(p+26);
        r05_link_brackets(p[35], p[39]);
        r05_link_brackets(p[36], p[38]);
        r05_correct_evar(p+10);
        r05_correct_evar(p+14);
        r05_link_brackets(p[32], p[33]);
        r05_link_brackets(p[29], p[31]);
        r05_correct_evar(p+12);
        r05_correct_evar(p+6);
        r05_splice_evar(p[30], p+6);
        r05_splice_evar(p[30], p+12);
        r05_splice_evar(p[34], p+14);
        r05_splice_evar(p[37], p+10);
        r05_splice_evar(p[40], p+26);
        r05_splice_from_freelist(arg_begin);
        r05_splice_to_freelist(arg_begin, arg_end);
        return;
      } while (r05_open_evar_advance(p+14, p[1]));
      r05_stop_e_loop();
    } while (r05_open_evar_advance(p+6, p[3]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Enums: 6 */
    /* e.AST: 8 */
    struct r05_node *p[14] = { 0 };
    /* (e.Enums) () e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[5]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r05m_parseru_MakeEnum);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+8);
    r05_splice_evar(p[10], p+8);
    r05_splice_evar(p[12], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loopu_check2, "FindUnused-Loop_check2") {
  r05_this_is_generated_function();

  do {
    /* e.Enums: 12 */
    /* e.BuiltinName: 14, 16 */
    /* e.References: 20 */
    /* e.AST: 22 */
    /* e.1: 24 */
    /* e.2: 26 */
    /* s.No: 28 */
    /* s.FuncName: 29 */
    struct r05_node *p[41] = { 0 };
    /* (e.Enums) (e.BuiltinName) (e.References) (e.AST) (e.1) s.No s.FuncName (e.2) e.BuiltinName */
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
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[2], p[3]);
    r05_close_evar(p+14, p[4], p[5]);
    if (! r05_repeated_evar_right(p+16, p[11], p[1], p+14))
      continue;
    if (! r05_brackets_right(p+18, p[11], p[16]))
      continue;
    r05_close_evar(p+20, p[6], p[7]);
    r05_close_evar(p+22, p[8], p[9]);
    r05_close_evar(p+24, p[10], p[11]);
    r05_close_evar(p+26, p[18], p[19]);
    if (! r05_svar_left(p+28, p[11], p[18]))
      continue;
    if (! r05_svar_left(p+29, p[28], p[18]))
      continue;
    if (! r05_empty_hole(p[29], p[18]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_FindUnusedm_Loop);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_open_call(p+34);
    r05_alloc_function(&r05f_AddMetatable);
    r05_alloc_open_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_call(p+39);
    r05_alloc_close_call(p+40);
    r05_push_stack(p[40]);
    r05_push_stack(p[30]);
    r05_push_stack(p[39]);
    r05_push_stack(p[34]);
    r05_correct_evar(p+22);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+20);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[32], p+12);
    r05_splice_evar(p[36], p+20);
    r05_splice_evar(p[38], p+22);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Enums: 12 */
    /* e.BuiltinName: 14 */
    /* e.References: 16 */
    /* e.AST: 18 */
    /* e.1: 20 */
    /* s.No: 22 */
    /* s.FuncName: 23 */
    /* e.2: 26 */
    /* e.Other: 28 */
    struct r05_node *p[50] = { 0 };
    /* (e.Enums) (e.BuiltinName) (e.References) (e.AST) (e.1) s.No s.FuncName (e.2) e.Other */
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
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[2], p[3]);
    r05_close_evar(p+14, p[4], p[5]);
    r05_close_evar(p+16, p[6], p[7]);
    r05_close_evar(p+18, p[8], p[9]);
    r05_close_evar(p+20, p[10], p[11]);
    if (! r05_svar_left(p+22, p[11], p[1]))
      continue;
    if (! r05_svar_left(p+23, p[22], p[1]))
      continue;
    if (! r05_brackets_left(p+24, p[23], p[1]))
      continue;
    r05_close_evar(p+26, p[24], p[25]);
    r05_close_evar(p+28, p[25], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_FindUnusedm_Loopu_forward0);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_open_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_close_bracket(p+42);
    r05_alloc_open_bracket(p+43);
    r05_alloc_insert_pos(p+44);
    r05_alloc_close_bracket(p+45);
    r05_alloc_open_bracket(p+46);
    r05_alloc_svar(p+22);
    r05_alloc_svar(p+23);
    r05_alloc_function(&r05f_special);
    r05_alloc_close_bracket(p+47);
    r05_alloc_insert_pos(p+48);
    r05_alloc_close_call(p+49);
    r05_push_stack(p[49]);
    r05_push_stack(p[30]);
    r05_correct_evar(p+26);
    r05_link_brackets(p[46], p[47]);
    r05_link_brackets(p[43], p[45]);
    r05_correct_evar(p+20);
    r05_link_brackets(p[40], p[42]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[37], p[39]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[32], p+12);
    r05_splice_evar(p[35], p+14);
    r05_splice_evar(p[38], p+16);
    r05_splice_evar(p[41], p+18);
    r05_splice_evar(p[44], p+20);
    r05_splice_evar(p[48], p+26);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loopu_forward0, "FindUnused-Loop_forward0") {
  r05_this_is_generated_function();

  do {
    /* e.Enums: 12 */
    /* e.BuiltinName: 14 */
    /* e.References: 16 */
    /* e.AST: 18 */
    /* e.1_fix: 20 */
    /* t.1_next: 22 */
    /* e.1_rest: 24 */
    struct r05_node *p[44] = { 0 };
    /* (e.Enums) (e.BuiltinName) (e.References) (e.AST) (e.1_fix) t.1_next e.1_rest */
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
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[2], p[3]);
    r05_close_evar(p+14, p[4], p[5]);
    r05_close_evar(p+16, p[6], p[7]);
    r05_close_evar(p+18, p[8], p[9]);
    r05_close_evar(p+20, p[10], p[11]);
    if (! r05_tvar_left(p+22, p[11], p[1]))
      continue;
    r05_close_evar(p+24, p[23], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_FindUnusedm_Loopu_next0);
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
    r05_alloc_open_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_insert_pos(p+42);
    r05_alloc_close_call(p+43);
    r05_push_stack(p[43]);
    r05_push_stack(p[26]);
    r05_correct_evar(p+24);
    r05_link_brackets(p[39], p[41]);
    r05_correct_evar(p+20);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[33], p[35]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[28], p+12);
    r05_splice_evar(p[31], p+14);
    r05_splice_evar(p[34], p+16);
    r05_splice_evar(p[37], p+18);
    r05_splice_evar(p[40], p+20);
    r05_splice_tvar(p[40], p+22);
    r05_splice_evar(p[42], p+24);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Enums: 12 */
    /* e.BuiltinName: 14 */
    /* e.References: 16 */
    /* e.AST: 18 */
    /* e.1_fix: 20 */
    struct r05_node *p[37] = { 0 };
    /* (e.Enums) (e.BuiltinName) (e.References) (e.AST) (e.1_fix) */
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
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    if (! r05_empty_hole(p[11], p[1]))
      continue;
    r05_close_evar(p+12, p[2], p[3]);
    r05_close_evar(p+14, p[4], p[5]);
    r05_close_evar(p+16, p[6], p[7]);
    r05_close_evar(p+18, p[8], p[9]);
    r05_close_evar(p+20, p[10], p[11]);

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_FindUnusedm_Loopu_cont2);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_call(p+36);
    r05_push_stack(p[36]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+20);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[24], p+12);
    r05_splice_evar(p[27], p+14);
    r05_splice_evar(p[30], p+16);
    r05_splice_evar(p[33], p+18);
    r05_splice_evar(p[35], p+20);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loopu_next0, "FindUnused-Loop_next0") {
  r05_this_is_generated_function();

  do {
    /* e.Enums: 12 */
    /* e.BuiltinName: 14 */
    /* e.References: 16 */
    /* e.AST: 18 */
    /* e.1_fix: 20 */
    /* e.1_var: 22 */
    /* e.2: 27 */
    /* s.No: 29 */
    /* s.FuncName: 30 */
    struct r05_node *p[53] = { 0 };
    /* (e.Enums) (e.BuiltinName) (e.References) (e.AST) (e.1_fix) e.1_var (s.No s.FuncName special) e.2 */
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
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[2], p[3]);
    r05_close_evar(p+14, p[4], p[5]);
    r05_close_evar(p+16, p[6], p[7]);
    r05_close_evar(p+18, p[8], p[9]);
    r05_close_evar(p+20, p[10], p[11]);
    p[22] = p[11]->next;
    p[23] = p[11];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+24, p[23], p[1]))
        continue;
      if (! r05_function_right(p+26, p[24], p[25], &r05f_special))
        continue;
      r05_close_evar(p+27, p[25], p[1]);
      if (! r05_svar_left(p+29, p[24], p[26]))
        continue;
      if (! r05_svar_left(p+30, p[29], p[26]))
        continue;
      if (! r05_empty_hole(p[30], p[26]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+31);
      r05_alloc_function(&r05f_FindUnusedm_Loopu_check2);
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
      r05_alloc_svar(p+29);
      r05_alloc_svar(p+30);
      r05_alloc_open_bracket(p+47);
      r05_alloc_insert_pos(p+48);
      r05_alloc_close_bracket(p+49);
      r05_alloc_open_call(p+50);
      r05_alloc_function(&r05f_Explode);
      r05_alloc_svar(p+30);
      r05_alloc_close_call(p+51);
      r05_alloc_close_call(p+52);
      r05_push_stack(p[52]);
      r05_push_stack(p[31]);
      r05_push_stack(p[51]);
      r05_push_stack(p[50]);
      r05_link_brackets(p[47], p[49]);
      r05_correct_evar(p+27);
      r05_link_brackets(p[44], p[46]);
      r05_correct_evar(p+22);
      r05_correct_evar(p+20);
      r05_link_brackets(p[41], p[43]);
      r05_correct_evar(p+18);
      r05_link_brackets(p[38], p[40]);
      r05_correct_evar(p+16);
      r05_link_brackets(p[35], p[37]);
      r05_correct_evar(p+14);
      r05_link_brackets(p[32], p[34]);
      r05_correct_evar(p+12);
      r05_splice_evar(p[33], p+12);
      r05_splice_evar(p[36], p+14);
      r05_splice_evar(p[39], p+16);
      r05_splice_evar(p[42], p+18);
      r05_splice_evar(p[45], p+20);
      r05_splice_evar(p[45], p+22);
      r05_splice_evar(p[48], p+27);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+22, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Enums: 12 */
    /* e.BuiltinName: 14 */
    /* e.References: 16 */
    /* e.AST: 18 */
    /* e.1_fix: 20 */
    /* e.1_rest: 22 */
    struct r05_node *p[39] = { 0 };
    /* (e.Enums) (e.BuiltinName) (e.References) (e.AST) (e.1_fix) e.1_rest */
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
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[2], p[3]);
    r05_close_evar(p+14, p[4], p[5]);
    r05_close_evar(p+16, p[6], p[7]);
    r05_close_evar(p+18, p[8], p[9]);
    r05_close_evar(p+20, p[10], p[11]);
    r05_close_evar(p+22, p[11], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_FindUnusedm_Loopu_cont2);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_call(p+38);
    r05_push_stack(p[38]);
    r05_push_stack(p[24]);
    r05_correct_evar(p+22);
    r05_correct_evar(p+20);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[26], p+12);
    r05_splice_evar(p[29], p+14);
    r05_splice_evar(p[32], p+16);
    r05_splice_evar(p[35], p+18);
    r05_splice_evar(p[37], p+20);
    r05_splice_evar(p[37], p+22);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loopu_cont2, "FindUnused-Loop_cont2") {
  r05_this_is_generated_function();

  do {
    /* e.Enums: 10 */
    /* e.BuiltinName: 12 */
    /* e.References: 14 */
    /* e.AST: 16 */
    /* e.Other: 18 */
    struct r05_node *p[32] = { 0 };
    /* (e.Enums) (e.BuiltinName) (e.References) (e.AST) e.Other */
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
    r05_alloc_function(&r05f_FindUnusedm_Loopu_cont1);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_function(&r05f_Call);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[24], p[29]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+10);
    r05_splice_evar(p[22], p+10);
    r05_splice_evar(p[26], p+12);
    r05_splice_evar(p[28], p+14);
    r05_splice_evar(p[30], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ListOfBuiltinm_WithSugar, "ListOfBuiltin-WithSugar") {
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
    r05_alloc_function(&r05f_ListOfBuiltin);
    r05_alloc_close_call(p+3);
    r05_alloc_open_bracket(p+4);
    r05_alloc_number(0UL);
    r05_alloc_function(&r05f_k25_);
    r05_alloc_function(&r05f_regular);
    r05_alloc_close_bracket(p+5);
    r05_alloc_open_bracket(p+6);
    r05_alloc_number(0UL);
    r05_alloc_function(&r05f_k2A_);
    r05_alloc_function(&r05f_regular);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_bracket(p+8);
    r05_alloc_number(0UL);
    r05_alloc_function(&r05f_k2B_);
    r05_alloc_function(&r05f_regular);
    r05_alloc_close_bracket(p+9);
    r05_alloc_open_bracket(p+10);
    r05_alloc_number(0UL);
    r05_alloc_function(&r05f_m_);
    r05_alloc_function(&r05f_regular);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_number(0UL);
    r05_alloc_function(&r05f_k2F_);
    r05_alloc_function(&r05f_regular);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_number(0UL);
    r05_alloc_function(&r05f_k3F_);
    r05_alloc_function(&r05f_special);
    r05_alloc_close_bracket(p+15);
    r05_link_brackets(p[14], p[15]);
    r05_link_brackets(p[12], p[13]);
    r05_link_brackets(p[10], p[11]);
    r05_link_brackets(p[8], p[9]);
    r05_link_brackets(p[6], p[7]);
    r05_link_brackets(p[4], p[5]);
    r05_push_stack(p[3]);
    r05_push_stack(p[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AddMetatable, "AddMetatable") {
  r05_this_is_generated_function();

  do {
    /* e.References: 4 */
    /* e.AST: 6 */
    struct r05_node *p[22] = { 0 };
    /* (e.References) e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_AddMetatablem_Aux);
    r05_alloc_open_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_function(&r05f_r05m_parseru_AddMetatablem_AddFunction);
    r05_alloc_open_bracket(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r05m_parseru_AddMetatablem_MakeMetafunction);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_ListOfBuiltinm_WithSugar);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[8]);
    r05_push_stack(p[20]);
    r05_push_stack(p[12]);
    r05_push_stack(p[19]);
    r05_push_stack(p[16]);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[13], p[14]);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[10], p+4);
    r05_splice_evar(p[15], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r05m_parseru_AddMetatablem_AddFunction, "r05-parser_AddMetatable-AddFunction") {
  r05_this_is_generated_function();

  do {
    /* e.AllFunctions: 11 */
    /* e.Builtin: 13 */
    /* s.Used: 15 */
    struct r05_node *p[24] = { 0 };
    /* (e.AllFunctions) (Function s.Used NO-POS (e.Builtin) Extern) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Function))
      continue;
    if (! r05_function_right(p+7, p[6], p[5], &r05f_Extern))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[7]))
      continue;
    if (! r05_function_right(p+10, p[6], p[8], &r05f_NOm_POS))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+11, p[2], p[3]);
    r05_close_evar(p+13, p[8], p[9]);
    if (! r05_svar_left(p+15, p[6], p[10]))
      continue;
    if (! r05_empty_hole(p[15], p[10]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_Function);
    r05_alloc_svar(p+15);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_close_bracket(p+23);
    r05_link_brackets(p[19], p[23]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+11);
    r05_splice_evar(p[17], p+11);
    r05_splice_evar(p[21], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.AllFunctions: 10 */
    /* e.Name: 12 */
    /* s.Used: 14 */
    /* t.Pos: 15 */
    struct r05_node *p[28] = { 0 };
    /* (e.AllFunctions) (Function s.Used t.Pos (e.Name) Extern) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Function))
      continue;
    if (! r05_function_right(p+7, p[6], p[5], &r05f_Extern))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[7]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+10, p[2], p[3]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_svar_left(p+14, p[6], p[8]))
      continue;
    if (! r05_tvar_left(p+15, p[14], p[8]))
      continue;
    if (! r05_empty_hole(p[16], p[8]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_function(&r05f_Function);
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_evar(p+12);
    r05_alloc_close_bracket(p+26);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_close_bracket(p+27);
    r05_link_brackets(p[23], p[27]);
    r05_link_brackets(p[25], p[26]);
    r05_link_brackets(p[17], p[22]);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+10);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[20], p+12);
    r05_splice_tvar(p[24], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.AllFunctions: 12 */
    /* e.Ident: 14 */
    struct r05_node *p[24] = { 0 };
    /* (e.AllFunctions) (Function Used NO-POS (e.Ident) Local) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Function))
      continue;
    if (! r05_function_left(p+7, p[6], p[5], &r05f_Used))
      continue;
    if (! r05_function_left(p+8, p[7], p[5], &r05f_NOm_POS))
      continue;
    if (! r05_function_right(p+9, p[8], p[5], &r05f_Local))
      continue;
    if (! r05_brackets_left(p+10, p[8], p[9]))
      continue;
    if (! r05_empty_hole(p[11], p[9]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+12, p[2], p[3]);
    r05_close_evar(p+14, p[10], p[11]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_Function);
    r05_alloc_function(&r05f_Used);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_function(&r05f_Local);
    r05_alloc_close_bracket(p+23);
    r05_link_brackets(p[19], p[23]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[17], p+12);
    r05_splice_evar(p[21], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.AllFunctions: 7 */
    /* s.Used: 9 */
    /* t.Pos: 10 */
    /* e.Name: 14 */
    /* s.Scope: 16 */
    /* e.Body: 17 */
    struct r05_node *p[31] = { 0 };
    /* (e.AllFunctions) (Function s.Used t.Pos (e.Name) s.Scope e.Body) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Function))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    if (! r05_svar_left(p+9, p[6], p[5]))
      continue;
    if (! r05_tvar_left(p+10, p[9], p[5]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[5]))
      continue;
    r05_close_evar(p+14, p[12], p[13]);
    if (! r05_svar_left(p+16, p[13], p[5]))
      continue;
    r05_close_evar(p+17, p[16], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_function(&r05f_Function);
    r05_alloc_svar(p+9);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_evar(p+14);
    r05_alloc_close_bracket(p+28);
    r05_alloc_svar(p+16);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_link_brackets(p[25], p[30]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[27], p[28]);
    r05_link_brackets(p[19], p[24]);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+7);
    r05_splice_evar(p[20], p+7);
    r05_splice_evar(p[22], p+14);
    r05_splice_tvar(p[26], p+10);
    r05_splice_evar(p[29], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.AllFunctions: 7 */
    /* t.Pos: 9 */
    /* e.Comment: 11 */
    struct r05_node *p[19] = { 0 };
    /* (e.AllFunctions) (SpecialComment t.Pos e.Comment) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_SpecialComment))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    if (! r05_tvar_left(p+9, p[6], p[5]))
      continue;
    r05_close_evar(p+11, p[10], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_SpecialComment);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[14], p+7);
    r05_splice_tvar(p[17], p+9);
    r05_splice_evar(p[17], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r05m_parseru_AddMetatablem_MakeMetafunction, "r05-parser_AddMetatable-MakeMetafunction") {
  r05_this_is_generated_function();

  do {
    /* s.No: 5 */
    /* s.Name: 6 */
    struct r05_node *p[13] = { 0 };
    /* (s.No s.Name special) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_right(p+4, p[2], p[3], &r05f_special))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_svar_left(p+5, p[2], p[4]))
      continue;
    if (! r05_svar_left(p+6, p[5], p[4]))
      continue;
    if (! r05_empty_hole(p[6], p[4]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+7);
    r05_alloc_function(&r05f_Function);
    r05_alloc_function(&r05f_Used);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_open_bracket(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Explode);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_function(&r05f_Meta);
    r05_alloc_close_bracket(p+12);
    r05_link_brackets(p[7], p[12]);
    r05_link_brackets(p[8], p[11]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Regular: 2 */
    struct r05_node *p[4] = { 0 };
    /* t.Regular */
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

R05_DEFINE_LOCAL_FUNCTION(AddMetatablem_Aux, "AddMetatable-Aux") {
  r05_this_is_generated_function();

  do {
    /* e.References: 6 */
    /* e.AllFunctions: 8 */
    /* e.AST: 10 */
    struct r05_node *p[21] = { 0 };
    /* (e.References) (e.AllFunctions) e.AST */
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
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r05m_parseru_AddHowCall);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_Metatable);
    r05_alloc_evar(p+8);
    r05_alloc_close_bracket(p+20);
    r05_link_brackets(p[19], p[20]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[12], p[17]);
    r05_push_stack(p[16]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+6);
    r05_splice_evar(p[13], p+6);
    r05_splice_evar(p[15], p+8);
    r05_splice_evar(p[18], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r05m_parseru_AddHowCall, "r05-parser_AddHowCall") {
  r05_this_is_generated_function();

  do {
    /* e.Name: 4 */
    struct r05_node *p[9] = { 0 };
    /* (e.Name) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_function(&r05f_Call);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_bracket(p+8);
    r05_link_brackets(p[6], p[8]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r05m_parseru_MakeEnum, "r05-parser_MakeEnum") {
  r05_this_is_generated_function();

  do {
    /* e.Name: 4 */
    struct r05_node *p[11] = { 0 };
    /* (e.Name) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_function(&r05f_Function);
    r05_alloc_function(&r05f_Used);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_open_bracket(p+7);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_bracket(p+9);
    r05_alloc_function(&r05f_Local);
    r05_alloc_close_bracket(p+10);
    r05_link_brackets(p[6], p[10]);
    r05_link_brackets(p[7], p[9]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[8], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r05m_parseru_FindUnusedm_Loopm_UnusedErrors, "r05-parser_FindUnused-Loop-UnusedErrors") {
  r05_this_is_generated_function();

  do {
    /* t.ErrorList: 6 */
    /* t.Pos: 8 */
    /* e.Name: 12 */
    /* s.Scope: 14 */
    /* e.Body: 15 */
    struct r05_node *p[23] = { 0 };
    /* t.ErrorList (Function Unused t.Pos (e.Name) s.Scope e.Body) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Function))
      continue;
    if (! r05_function_left(p+5, p[4], p[3], &r05f_Unused))
      continue;
    if (! r05_tvar_left(p+6, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[7], p[2]))
      continue;
    if (! r05_tvar_left(p+8, p[5], p[3]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[3]))
      continue;
    r05_close_evar(p+12, p[10], p[11]);
    if (! r05_svar_left(p+14, p[11], p[3]))
      continue;
    r05_close_evar(p+15, p[14], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_ELm_AddErrorAt);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_UnusedMessage);
    r05_alloc_svar(p+14);
    r05_alloc_close_call(p+20);
    r05_alloc_char(' ');
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+12);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_splice_tvar(p[18], p+6);
    r05_splice_tvar(p[18], p+8);
    r05_splice_evar(p[21], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.ErrorList: 2 */
    /* t.Other: 4 */
    struct r05_node *p[7] = { 0 };
    /* t.ErrorList t.Other */
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
    r05_splice_tvar(p[6], p+2);
    r05_splice_tvar(p[6], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(UnusedMessage, "UnusedMessage") {
  r05_this_is_generated_function();

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
    r05_alloc_chars("Unused local function", 21);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* Extern */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Extern))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("Unused external declaration", 27);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CastAST, "CastAST") {
  r05_this_is_generated_function();

  do {
    /* e.AST: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CastASTm_JoinExterns);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r05m_parseru_CastASTm_Item);
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

R05_DEFINE_ENTRY_FUNCTION(r05m_parseru_CastASTm_Item, "r05-parser_CastAST-Item") {
  r05_this_is_generated_function();

  do {
    /* e.Name: 9 */
    /* t.Pos: 11 */
    struct r05_node *p[18] = { 0 };
    /* (Function Used t.Pos (e.Name) Extern) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Function))
      continue;
    if (! r05_function_left(p+5, p[4], p[3], &r05f_Used))
      continue;
    if (! r05_function_right(p+6, p[5], p[3], &r05f_Extern))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[6]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    if (! r05_tvar_left(p+11, p[5], p[7]))
      continue;
    if (! r05_empty_hole(p[12], p[7]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_close_bracket(p+17);
    r05_link_brackets(p[13], p[17]);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[15], p+11);
    r05_splice_evar(p[15], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 6 */
    /* e.Name: 10 */
    /* s.Scope: 12 */
    /* e.Body: 13 */
    struct r05_node *p[22] = { 0 };
    /* (Function Used t.Pos (e.Name) s.Scope e.Body) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Function))
      continue;
    if (! r05_function_left(p+5, p[4], p[3], &r05f_Used))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_tvar_left(p+6, p[5], p[3]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[3]))
      continue;
    r05_close_evar(p+10, p[8], p[9]);
    if (! r05_svar_left(p+12, p[9], p[3]))
      continue;
    r05_close_evar(p+13, p[12], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_Function);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_svar(p+12);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_link_brackets(p[15], p[21]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[16], p+6);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[20], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 5 */
    /* e.Comment: 7 */
    struct r05_node *p[12] = { 0 };
    /* (SpecialComment t.Pos e.Comment) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_SpecialComment))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[3]))
      continue;
    r05_close_evar(p+7, p[6], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_function(&r05f_SpecialComment);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+7);
    r05_splice_tvar(p[10], p+5);
    r05_splice_evar(p[10], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Functions: 5 */
    struct r05_node *p[10] = { 0 };
    /* (Metatable e.Functions) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Metatable))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+7);
    r05_alloc_function(&r05f_Metatable);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_bracket(p+9);
    r05_link_brackets(p[7], p[9]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[8], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CastASTm_JoinExterns, "CastAST-JoinExterns") {
  r05_this_is_generated_function();

  do {
    /* e.AST-B: 2 */
    /* e.Externs1: 10 */
    /* e.Externs2: 12 */
    /* e.AST-E: 14 */
    struct r05_node *p[23] = { 0 };
    /* e.AST-B (Extern e.Externs1) (Extern e.Externs2) e.AST-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+4, p[3], p[1]))
        continue;
      if (! r05_function_left(p+6, p[4], p[5], &r05f_Extern))
        continue;
      if (! r05_brackets_left(p+7, p[5], p[1]))
        continue;
      if (! r05_function_left(p+9, p[7], p[8], &r05f_Extern))
        continue;
      r05_close_evar(p+10, p[6], p[5]);
      r05_close_evar(p+12, p[9], p[8]);
      r05_close_evar(p+14, p[8], p[1]);

      r05_reset_allocator();
      r05_alloc_insert_pos(p+16);
      r05_alloc_open_call(p+17);
      r05_alloc_function(&r05f_CastASTm_JoinExterns);
      r05_alloc_open_bracket(p+18);
      r05_alloc_function(&r05f_Extern);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_close_call(p+22);
      r05_push_stack(p[22]);
      r05_push_stack(p[17]);
      r05_correct_evar(p+14);
      r05_link_brackets(p[18], p[20]);
      r05_correct_evar(p+12);
      r05_correct_evar(p+10);
      r05_correct_evar(p+2);
      r05_splice_evar(p[16], p+2);
      r05_splice_evar(p[19], p+10);
      r05_splice_evar(p[19], p+12);
      r05_splice_evar(p[21], p+14);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.AST: 2 */
    struct r05_node *p[5] = { 0 };
    /* e.AST */
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

R05_DEFINE_LOCAL_FUNCTION(ExtractReferences, "ExtractReferences") {
  r05_this_is_generated_function();

  do {
    /* e.Sentences: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.Sentences */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Unique);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r05m_parseru_ExtractReferencesm_Sentence);
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

R05_DEFINE_ENTRY_FUNCTION(r05m_parseru_ExtractReferencesm_Sentence, "r05-parser_ExtractReferences-Sentence") {
  r05_this_is_generated_function();

  do {
    /* e.Pattern: 6 */
    /* e.Tail: 8 */
    struct r05_node *p[16] = { 0 };
    /* ((e.Pattern) e.Tail) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    r05_close_evar(p+8, p[5], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_ExtractReferencesm_Tail);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+8);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[11], p+6);
    r05_splice_evar(p[14], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ExtractReferencesm_Tail, "ExtractReferences-Tail") {
  r05_this_is_generated_function();

  do {
    /* e.Result: 9 */
    /* e.Pattern: 11 */
    /* e.Tail: 13 */
    struct r05_node *p[24] = { 0 };
    /* (Condition (e.Result) (e.Pattern)) e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Condition))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[3]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_call(p+20);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_ExtractReferencesm_Tail);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[21]);
    r05_correct_evar(p+13);
    r05_push_stack(p[20]);
    r05_push_stack(p[18]);
    r05_correct_evar(p+11);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[16], p+9);
    r05_splice_evar(p[19], p+11);
    r05_splice_evar(p[22], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Result: 5 */
    struct r05_node *p[10] = { 0 };
    /* RETURN (e.Result) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_RETURN))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
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
    /* e.Result: 5 */
    /* e.Sentences: 7 */
    struct r05_node *p[15] = { 0 };
    /* CALL-BLOCK (e.Result) e.Sentences */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_CALLm_BLOCK))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_ExtractReferences);
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

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ExtractReferencesm_Expr, "ExtractReferences-Expr") {
  r05_this_is_generated_function();

  do {
    /* e.Expr: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Expr */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r05m_parseru_ExtractReferencesm_Term);
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

R05_DEFINE_ENTRY_FUNCTION(r05m_parseru_ExtractReferencesm_Term, "r05-parser_ExtractReferences-Term") {
  r05_this_is_generated_function();

  do {
    /* e.Name: 6 */
    struct r05_node *p[11] = { 0 };
    /* (Symbol Word e.Name) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Symbol))
      continue;
    if (! r05_function_left(p+5, p[4], p[3], &r05f_Word))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_function(&r05f_Ident);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_bracket(p+10);
    r05_link_brackets(p[8], p[10]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Expr: 5 */
    struct r05_node *p[10] = { 0 };
    /* (Brackets e.Expr) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Brackets))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
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
    /* t.SrcPos: 5 */
    /* e.Name: 9 */
    /* e.Expr: 11 */
    struct r05_node *p[19] = { 0 };
    /* (Call t.SrcPos (e.Name) e.Expr) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Call))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[3]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[3]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    r05_close_evar(p+11, p[8], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_function(&r05f_Call);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[16]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[14], p+9);
    r05_splice_evar(p[17], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Other: 2 */
    struct r05_node *p[4] = { 0 };
    /* t.Other */
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

R05_DEFINE_ENTRY_FUNCTION(R05m_Parsem_File, "R05-Parse-File") {
  r05_this_is_generated_function();

  do {
    /* e.SourceFile: 2 */
    struct r05_node *p[13] = { 0 };
    /* e.SourceFile */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_R05m_Parsem_File0);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Parse);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Scan);
    r05_alloc_evar(p+2);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[4]);
    r05_push_stack(p[11]);
    r05_push_stack(p[8]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(R05m_Parsem_File0, "R05-Parse-File0") {
  r05_this_is_generated_function();

  do {
    /* e.SourceFile: 5 */
    /* e.AST: 7 */
    struct r05_node *p[19] = { 0 };
    /* (e.SourceFile) Success e.AST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[3], p[1], &r05f_Success))
      continue;
    r05_close_evar(p+5, p[2], p[3]);
    r05_close_evar(p+7, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_R05m_Parsem_File1);
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_R05m_PrepareAST);
    r05_alloc_evar(p+7);
    r05_alloc_close_call(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[9]);
    r05_push_stack(p[17]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[11], p+5);
    r05_splice_evar(p[14], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.SourceFile: 5 */
    /* e.ParserErrors: 7 */
    struct r05_node *p[12] = { 0 };
    /* (e.SourceFile) Fails e.ParserErrors */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[3], p[1], &r05f_Fails))
      continue;
    r05_close_evar(p+5, p[2], p[3]);
    r05_close_evar(p+7, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_Fails);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_SortErrors);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[10], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(R05m_Parsem_File1, "R05-Parse-File1") {
  r05_this_is_generated_function();

  do {
    /* e.SourceFile: 7 */
    /* e.AST: 9 */
    /* e.PreparedAST: 11 */
    struct r05_node *p[14] = { 0 };
    /* (e.SourceFile) (e.AST) Success e.PreparedAST */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[5], p[1], &r05f_Success))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[4], p[5]);
    r05_close_evar(p+11, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_Success);
    r05_alloc_insert_pos(p+13);
    r05_correct_evar(p+11);
    r05_splice_evar(p[13], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.SourceFile: 7 */
    /* e.AST: 9 */
    /* e.SemanticErrors: 11 */
    struct r05_node *p[16] = { 0 };
    /* (e.SourceFile) (e.AST) Fails e.SemanticErrors */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[5], p[1], &r05f_Fails))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[4], p[5]);
    r05_close_evar(p+11, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_Fails);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_SortErrors);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+11);
    r05_splice_evar(p[14], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SortErrors, "SortErrors") {
  r05_this_is_generated_function();

  do {
    /* e.Errors: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.Errors */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DoSortErrors);
    r05_alloc_open_bracket(p+5);
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

R05_DEFINE_LOCAL_FUNCTION(DoSortErrors, "DoSortErrors") {
  r05_this_is_generated_function();

  do {
    /* e.Sorted: 4 */
    struct r05_node *p[7] = { 0 };
    /* (e.Sorted) */
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

  do {
    /* e.Sorted: 4 */
    /* t.Next: 6 */
    /* e.Unsorted: 8 */
    struct r05_node *p[18] = { 0 };
    /* (e.Sorted) t.Next e.Unsorted */
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
    r05_alloc_function(&r05f_DoSortErrors);
    r05_alloc_open_bracket(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_SortErrorsm_Insert);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[11], p[15]);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[13], p+4);
    r05_splice_tvar(p[13], p+6);
    r05_splice_evar(p[16], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SortErrorsm_Insert, "SortErrors-Insert") {
  r05_this_is_generated_function();

  do {
    /* t.Next: 2 */
    struct r05_node *p[5] = { 0 };
    /* t.Next */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+4);
    r05_splice_tvar(p[4], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Next: 2 */
    /* t.Great: 4 */
    /* e.Sorted: 6 */
    struct r05_node *p[13] = { 0 };
    /* e.Sorted t.Great t.Next */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_right(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_right(p+4, p[0], p[2]))
      continue;
    r05_close_evar(p+6, p[0], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_SortErrorsm_Insertm_Compare);
    r05_alloc_insert_pos(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_CompareError);
    r05_alloc_tvar(p+4);
    r05_alloc_tvar(p+2);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[8]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[9], p+6);
    r05_splice_tvar(p[9], p+4);
    r05_splice_tvar(p[9], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SortErrorsm_Insertm_Compare, "SortErrors-Insert-Compare") {
  r05_this_is_generated_function();

  do {
    /* t.Next: 3 */
    /* t.Great: 5 */
    /* e.Sorted: 7 */
    struct r05_node *p[13] = { 0 };
    /* e.Sorted t.Great t.Next '+' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], '+'))
      continue;
    if (! r05_tvar_right(p+3, p[0], p[2]))
      continue;
    if (! r05_tvar_right(p+5, p[0], p[3]))
      continue;
    r05_close_evar(p+7, p[0], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_SortErrorsm_Insert);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_insert_pos(p+12);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[10], p+7);
    r05_splice_tvar(p[10], p+3);
    r05_splice_tvar(p[12], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Other: 2 */
    /* t.Next: 3 */
    /* t.Great: 5 */
    /* e.Sorted: 7 */
    struct r05_node *p[10] = { 0 };
    /* e.Sorted t.Great t.Next s.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_right(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_right(p+3, p[0], p[2]))
      continue;
    if (! r05_tvar_right(p+5, p[0], p[3]))
      continue;
    r05_close_evar(p+7, p[0], p[5]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+9);
    r05_correct_evar(p+7);
    r05_splice_evar(p[9], p+7);
    r05_splice_tvar(p[9], p+5);
    r05_splice_tvar(p[9], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CompareError, "CompareError") {
  r05_this_is_generated_function();

  do {
    /* e.Message1: 10 */
    /* e.Message2: 12 */
    /* s.Row: 14, 15 */
    /* s.Col1: 16 */
    /* e.File1: 17 */
    /* s.Col2: 19 */
    /* e.File2: 20 */
    struct r05_node *p[24] = { 0 };
    /* ((s.Row s.Col1 e.File1) e.Message1) ((s.Row s.Col2 e.File2) e.Message2) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_brackets_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[6], p[7]))
      continue;
    if (! r05_empty_hole(p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[5], p[3]);
    r05_close_evar(p+12, p[9], p[7]);
    if (! r05_svar_left(p+14, p[4], p[5]))
      continue;
    if (! r05_repeated_svar_left(p+15, p[8], p[9], p+14))
      continue;
    if (! r05_svar_left(p+16, p[14], p[5]))
      continue;
    r05_close_evar(p+17, p[16], p[5]);
    if (! r05_svar_left(p+19, p[15], p[9]))
      continue;
    r05_close_evar(p+20, p[19], p[9]);

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_Compare);
    r05_alloc_svar(p+16);
    r05_alloc_svar(p+19);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[22]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Message1: 10 */
    /* e.Message2: 12 */
    /* s.Row1: 14 */
    /* s.Col1: 15 */
    /* e.File1: 16 */
    /* s.Row2: 18 */
    /* s.Col2: 19 */
    /* e.File2: 20 */
    struct r05_node *p[24] = { 0 };
    /* ((s.Row1 s.Col1 e.File1) e.Message1) ((s.Row2 s.Col2 e.File2) e.Message2) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_brackets_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[6], p[7]))
      continue;
    if (! r05_empty_hole(p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[5], p[3]);
    r05_close_evar(p+12, p[9], p[7]);
    if (! r05_svar_left(p+14, p[4], p[5]))
      continue;
    if (! r05_svar_left(p+15, p[14], p[5]))
      continue;
    r05_close_evar(p+16, p[15], p[5]);
    if (! r05_svar_left(p+18, p[8], p[9]))
      continue;
    if (! r05_svar_left(p+19, p[18], p[9]))
      continue;
    r05_close_evar(p+20, p[19], p[9]);

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_Compare);
    r05_alloc_svar(p+14);
    r05_alloc_svar(p+18);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[22]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ELm_Create, "EL-Create") {
  r05_this_is_generated_function();

  do {
    /* e.Errors: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Errors */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+4);
    r05_alloc_function(&r05f_ErrorList);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_bracket(p+6);
    r05_link_brackets(p[4], p[6]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(ELm_AddErrorAt, "EL-AddErrorAt") {
  r05_this_is_generated_function();

  do {
    /* e.Errors: 5 */
    /* t.SrcPos: 7 */
    /* e.Message: 9 */
    struct r05_node *p[17] = { 0 };
    /* (ErrorList e.Errors) t.SrcPos e.Message */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_ErrorList))
      continue;
    r05_close_evar(p+5, p[4], p[3]);
    if (! r05_tvar_left(p+7, p[3], p[1]))
      continue;
    r05_close_evar(p+9, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_ErrorList);
    r05_alloc_insert_pos(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_close_bracket(p+16);
    r05_link_brackets(p[11], p[16]);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+9);
    r05_correct_evar(p+5);
    r05_splice_evar(p[12], p+5);
    r05_splice_tvar(p[14], p+7);
    r05_splice_evar(p[14], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ELm_Destroy, "EL-Destroy") {
  r05_this_is_generated_function();

  do {
    /* e.Errors: 5 */
    struct r05_node *p[8] = { 0 };
    /* (ErrorList e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_ErrorList))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[3]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+7);
    r05_correct_evar(p+5);
    r05_splice_evar(p[7], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */

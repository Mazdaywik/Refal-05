/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(SaveFile)
R05_DECLARE_ENTRY_FUNCTION(MapAccum)
R05_DECLARE_ENTRY_FUNCTION(Map)
R05_DECLARE_ENTRY_FUNCTION(Inc)
R05_DECLARE_ENTRY_FUNCTION(InlineExpr)
R05_DECLARE_ENTRY_FUNCTION(Transform)
R05_DECLARE_ENTRY_FUNCTION(R05m_Generatem_ToFile)
R05_DECLARE_ENTRY_FUNCTION(R05m_Generatem_ToLines)
R05_DECLARE_LOCAL_FUNCTION(R05m_Generatem_Aux)
R05_DECLARE_ENTRY_FUNCTION(generatoru_GenTreeItem)
R05_DECLARE_LOCAL_FUNCTION(SafeSpecialComment)
R05_DECLARE_ENTRY_FUNCTION(r05m_generatoru_MetatableName)
R05_DECLARE_ENTRY_FUNCTION(r05m_generatoru_GenExtern)
R05_DECLARE_LOCAL_FUNCTION(Scope)
R05_DECLARE_LOCAL_FUNCTION(GenEmptyDefinition)
R05_DECLARE_LOCAL_FUNCTION(GenDeclaration)
R05_DECLARE_LOCAL_FUNCTION(GenFunction)
R05_DECLARE_LOCAL_FUNCTION(AssertOneOf)
R05_DECLARE_LOCAL_FUNCTION(DefName)
R05_DECLARE_LOCAL_FUNCTION(EscapeName)
R05_DECLARE_ENTRY_FUNCTION(r05m_generatoru_EscapeNameChar)
R05_DECLARE_LOCAL_FUNCTION(r05m_generatoru_EscapeNameChar0)
R05_DECLARE_LOCAL_FUNCTION(EscapeNameCharm_Code)
R05_DECLARE_LOCAL_FUNCTION(EscapeNameCharm_Codeu_check)
R05_DECLARE_LOCAL_FUNCTION(EscapeNamem_GlueCodes)
R05_DECLARE_LOCAL_FUNCTION(Hex)
R05_DECLARE_LOCAL_FUNCTION(AddFailCommand)
R05_DECLARE_ENTRY_FUNCTION(generatoru_GenSentence)
R05_DECLARE_LOCAL_FUNCTION(SkipIndentAccum)
R05_DECLARE_LOCAL_FUNCTION(SafeComment)
R05_DECLARE_ENTRY_FUNCTION(generatoru_GenCommand)
R05_DECLARE_LOCAL_FUNCTION(CmdComment)
R05_DECLARE_LOCAL_FUNCTION(CmdAllocStack)
R05_DECLARE_LOCAL_FUNCTION(CmdInitHole0)
R05_DECLARE_LOCAL_FUNCTION(CmdMatch)
R05_DECLARE_LOCAL_FUNCTION(CmdMatchu_check)
R05_DECLARE_LOCAL_FUNCTION(CmdMatchu_check0)
R05_DECLARE_LOCAL_FUNCTION(MatchFunc)
R05_DECLARE_LOCAL_FUNCTION(SymbolFunc)
R05_DECLARE_LOCAL_FUNCTION(StrFromDir)
R05_DECLARE_LOCAL_FUNCTION(MatchArgs)
R05_DECLARE_LOCAL_FUNCTION(SymbolTextRep)
R05_DECLARE_LOCAL_FUNCTION(CmdEmpty)
R05_DECLARE_LOCAL_FUNCTION(CmdClosedE)
R05_DECLARE_LOCAL_FUNCTION(CmdOpenedEm_Start)
R05_DECLARE_LOCAL_FUNCTION(CmdOpenedEm_End)
R05_DECLARE_LOCAL_FUNCTION(CmdEmptyResult)
R05_DECLARE_LOCAL_FUNCTION(CmdAllocateElem)
R05_DECLARE_LOCAL_FUNCTION(ElSymbol)
R05_DECLARE_LOCAL_FUNCTION(ElString)
R05_DECLARE_LOCAL_FUNCTION(ElOpenBracket)
R05_DECLARE_LOCAL_FUNCTION(ElCloseBracket)
R05_DECLARE_LOCAL_FUNCTION(ElOpenCall)
R05_DECLARE_LOCAL_FUNCTION(ElCloseCall)
R05_DECLARE_LOCAL_FUNCTION(ElSavePos)
R05_DECLARE_LOCAL_FUNCTION(ElVariable)
R05_DECLARE_LOCAL_FUNCTION(CmdLinkBrackets)
R05_DECLARE_LOCAL_FUNCTION(CmdPushStack)
R05_DECLARE_LOCAL_FUNCTION(CmdCorrectVar)
R05_DECLARE_LOCAL_FUNCTION(CmdInsertVar)
R05_DECLARE_LOCAL_FUNCTION(CmdReturnResult)
R05_DECLARE_LOCAL_FUNCTION(EscapeString)
R05_DECLARE_ENTRY_FUNCTION(r05m_generatoru_EscapeChar)
R05_DECLARE_LOCAL_FUNCTION(EscapeCharm_Aux)
R05_DECLARE_LOCAL_FUNCTION(EscapeCharm_SwCompare)
R05_DECLARE_LOCAL_FUNCTION(Elem)
R05_DECLARE_LOCAL_FUNCTION(ElemPtr)
R05_DECLARE_LOCAL_FUNCTION(ElemLR)
R05_DECLARE_LOCAL_FUNCTION(CompileSentence)
R05_DECLARE_LOCAL_FUNCTION(CompileSentenceu_check)
R05_DECLARE_LOCAL_FUNCTION(CompileSentenceu_check0)
R05_DECLARE_ENTRY_FUNCTION(generatoru_MakeDeclaration)
R05_DECLARE_ENTRY_FUNCTION(r05m_generatorm_SymbInst)
R05_DECLARE_LOCAL_FUNCTION(CompileSentencem_OpenELoops)
R05_DECLARE_LOCAL_FUNCTION(GenPattern)
R05_DECLARE_LOCAL_FUNCTION(Inc2)
R05_DECLARE_LOCAL_FUNCTION(VarSize)
R05_DECLARE_LOCAL_FUNCTION(IncMode)
R05_DECLARE_LOCAL_FUNCTION(VarRightSide)
R05_DECLARE_LOCAL_FUNCTION(DoGenPattern)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_check)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_forward)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_next)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_cont)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_check0)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_cont0)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_check1)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_forward0)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_next0)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_cont1)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_check2)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_cont2)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_check3)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_forward1)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_next1)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_forward2)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_next2)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_cont3)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_check4)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_forward3)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_next3)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_forward4)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_next4)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_cont4)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_check5)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_forward5)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_next5)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_cont5)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_check6)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_forward6)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_next6)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_cont6)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_check7)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_forward7)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_next7)
R05_DECLARE_LOCAL_FUNCTION(DoGenPatternu_cont7)
R05_DECLARE_LOCAL_FUNCTION(GenResult)
R05_DECLARE_LOCAL_FUNCTION(DoGenResult)
R05_DECLARE_ENTRY_FUNCTION(Type)
R05_DEFINE_METAFUNCTION(Mu, "Mu")
R05_DEFINE_METAFUNCTION(Up, "Up")
R05_DEFINE_METAFUNCTION(Evm_met, "Ev-met")
R05_DEFINE_METAFUNCTION(Residue, "Residue")
R05_DEFINE_METAFUNCTION(k3F_, "?")
R05_DECLARE_ENTRY_FUNCTION(Ord)
R05_DECLARE_ENTRY_FUNCTION(Symb)
R05_DECLARE_ENTRY_FUNCTION(k2F_)
R05_DECLARE_ENTRY_FUNCTION(k25_)
R05_DECLARE_ENTRY_FUNCTION(Compare)
R05_DECLARE_ENTRY_FUNCTION(Div)
R05_DECLARE_ENTRY_FUNCTION(Mod)
R05_DECLARE_ENTRY_FUNCTION(k2B_)
R05_DEFINE_LOCAL_ENUM(Metatable, "Metatable")
R05_DEFINE_LOCAL_ENUM(Extern, "Extern")
R05_DEFINE_LOCAL_ENUM(in, "in")
R05_DEFINE_LOCAL_ENUM(Local, "Local")
R05_DEFINE_LOCAL_ENUM(Meta, "Meta")
R05_DEFINE_LOCAL_ENUM(Function, "Function")
R05_DEFINE_LOCAL_ENUM(SpecialComment, "SpecialComment")
R05_DEFINE_LOCAL_ENUM(Entry, "Entry")
R05_DEFINE_LOCAL_ENUM(e, "e")
R05_DEFINE_LOCAL_ENUM(c, "c")
R05_DEFINE_LOCAL_ENUM(k, "k")
R05_DEFINE_LOCAL_ENUM(RETURN, "RETURN")
R05_DEFINE_LOCAL_ENUM(ReturnRecognitionImpossible, "ReturnRecognitionImpossible")
R05_DEFINE_LOCAL_ENUM(Variable, "Variable")
R05_DEFINE_LOCAL_ENUM(CmdOpenedE, "CmdOpenedE")
R05_DEFINE_LOCAL_ENUM(Symbol, "Symbol")
R05_DEFINE_LOCAL_ENUM(Brackets, "Brackets")
R05_DEFINE_LOCAL_ENUM(Repeated, "Repeated")
R05_DEFINE_LOCAL_ENUM(Char, "Char")
R05_DEFINE_LOCAL_ENUM(Number, "Number")
R05_DEFINE_LOCAL_ENUM(Word, "Word")
R05_DEFINE_LOCAL_ENUM(LEFT, "LEFT")
R05_DEFINE_LOCAL_ENUM(RIGHT, "RIGHT")
R05_DEFINE_LOCAL_ENUM(TkString, "TkString")
R05_DEFINE_LOCAL_ENUM(Call, "Call")
R05_DEFINE_LOCAL_ENUM(TkCloseBracket, "TkCloseBracket")
R05_DEFINE_LOCAL_ENUM(TkCloseCall, "TkCloseCall")

/*
*$FROM LibraryEx
*/
/*
*$FROM R5FW-Plainer
*/
/*
*$FROM R5FW-Transformer
*/
R05_DEFINE_ENTRY_FUNCTION(R05m_Generatem_ToFile, "R05-Generate-ToFile") {
  r05_this_is_generated_function();

  do {
    /* e.OutputFile: 4 */
    /* e.Tree: 6 */
    struct r05_node *p[16] = { 0 };
    /* (e.OutputFile) e.Tree */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_SaveFile);
    r05_alloc_open_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_R05m_Generatem_ToLines);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[8]);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[10], p+4);
    r05_splice_evar(p[13], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(R05m_Generatem_ToLines, "R05-Generate-ToLines") {
  r05_this_is_generated_function();

  do {
    /* e.Tree-B: 2 */
    /* e.Functions: 7 */
    /* e.Tree-E: 9 */
    struct r05_node *p[23] = { 0 };
    /* e.Tree-B (Metatable e.Functions) e.Tree-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+4, p[3], p[1]))
        continue;
      if (! r05_function_left(p+6, p[4], p[5], &r05f_Metatable))
        continue;
      r05_close_evar(p+7, p[6], p[5]);
      r05_close_evar(p+9, p[5], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_R05m_Generatem_Aux);
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_MapAccum);
      r05_alloc_function(&r05f_generatoru_GenTreeItem);
      r05_alloc_open_bracket(p+13);
      r05_alloc_close_bracket(p+14);
      r05_alloc_open_call(p+15);
      r05_alloc_function(&r05f_Transform);
      r05_alloc_insert_pos(p+16);
      r05_alloc_close_call(p+17);
      r05_alloc_open_bracket(p+18);
      r05_alloc_function(&r05f_Metatable);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_close_call(p+21);
      r05_alloc_close_call(p+22);
      r05_push_stack(p[22]);
      r05_push_stack(p[11]);
      r05_push_stack(p[21]);
      r05_push_stack(p[12]);
      r05_link_brackets(p[18], p[20]);
      r05_correct_evar(p+7);
      r05_push_stack(p[17]);
      r05_push_stack(p[15]);
      r05_correct_evar(p+9);
      r05_correct_evar(p+2);
      r05_link_brackets(p[13], p[14]);
      r05_splice_evar(p[16], p+2);
      r05_splice_evar(p[16], p+9);
      r05_splice_evar(p[19], p+7);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Tree: 2 */
    struct r05_node *p[13] = { 0 };
    /* e.Tree */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_R05m_Generatem_Aux);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_function(&r05f_generatoru_GenTreeItem);
    r05_alloc_open_bracket(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Transform);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[4]);
    r05_push_stack(p[11]);
    r05_push_stack(p[5]);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+2);
    r05_link_brackets(p[6], p[7]);
    r05_splice_evar(p[9], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(R05m_Generatem_Aux, "R05-Generate-Aux") {
  r05_this_is_generated_function();

  do {
    /* e.Declarations: 4 */
    /* e.Definitions: 6 */
    struct r05_node *p[24] = { 0 };
    /* (e.Declarations) e.Definitions */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_chars("/* Automatically generated file. Don\'t edit! */", 47);
    r05_alloc_close_bracket(p+9);
    r05_alloc_open_bracket(p+10);
    r05_alloc_chars("#include \"refal05rts.h\"", 23);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_chars("/* End of file */", 17);
    r05_alloc_close_bracket(p+23);
    r05_link_brackets(p[22], p[23]);
    r05_link_brackets(p[20], p[21]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[17], p[18]);
    r05_correct_evar(p+4);
    r05_link_brackets(p[14], p[15]);
    r05_link_brackets(p[12], p[13]);
    r05_link_brackets(p[10], p[11]);
    r05_link_brackets(p[8], p[9]);
    r05_splice_evar(p[16], p+4);
    r05_splice_evar(p[19], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(generatoru_GenTreeItem, "generator_GenTreeItem") {
  r05_this_is_generated_function();

  do {
    /* e.Declarations: 7 */
    /* e.Names: 9 */
    struct r05_node *p[17] = { 0 };
    /* (e.Declarations) (Extern e.Names) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Extern))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[6], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r05m_generatoru_GenExtern);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_close_bracket(p+16);
    r05_link_brackets(p[11], p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+9);
    r05_correct_evar(p+7);
    r05_splice_evar(p[12], p+7);
    r05_splice_evar(p[14], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Declarations: 7 */
    /* t.SrcPos: 9 */
    /* e.Name: 13 */
    /* s.ScopeClass: 15 */
    struct r05_node *p[26] = { 0 };
    /* (e.Declarations) (Function t.SrcPos (e.Name) s.ScopeClass) */
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
    if (! r05_empty_hole(p[15], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_GenEmptyDefinition);
    r05_alloc_insert_pos(p+19);
    r05_alloc_svar(p+15);
    r05_alloc_close_call(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_AssertOneOf);
    r05_alloc_svar(p+15);
    r05_alloc_function(&r05f_in);
    r05_alloc_open_bracket(p+23);
    r05_alloc_function(&r05f_Local);
    r05_alloc_function(&r05f_Meta);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[22]);
    r05_link_brackets(p[23], p[24]);
    r05_link_brackets(p[16], p[21]);
    r05_push_stack(p[20]);
    r05_push_stack(p[18]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+7);
    r05_splice_evar(p[17], p+7);
    r05_splice_evar(p[19], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Declarations: 7 */
    /* t.SrcPos: 9 */
    /* e.Name: 13 */
    /* s.ScopeClass: 15 */
    /* e.Body: 16 */
    struct r05_node *p[29] = { 0 };
    /* (e.Declarations) (Function t.SrcPos (e.Name) s.ScopeClass e.Body) */
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
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_GenDeclaration);
    r05_alloc_svar(p+15);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_call(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_GenFunction);
    r05_alloc_svar(p+15);
    r05_alloc_open_bracket(p+25);
    r05_alloc_evar(p+13);
    r05_alloc_close_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[24]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[25], p[26]);
    r05_link_brackets(p[18], p[23]);
    r05_push_stack(p[22]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+7);
    r05_splice_evar(p[19], p+7);
    r05_splice_evar(p[21], p+13);
    r05_splice_evar(p[27], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Declarations: 7 */
    /* t.SrcPos: 9 */
    /* e.Text: 11 */
    struct r05_node *p[25] = { 0 };
    /* (e.Declarations) (SpecialComment t.SrcPos e.Text) */
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
    r05_alloc_chars("/*", 2);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_SafeSpecialComment);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_chars("*/", 2);
    r05_alloc_close_bracket(p+24);
    r05_link_brackets(p[23], p[24]);
    r05_link_brackets(p[18], p[22]);
    r05_push_stack(p[21]);
    r05_push_stack(p[19]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[16], p[17]);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[14], p+7);
    r05_splice_evar(p[20], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Declarations: 7 */
    /* e.Names: 9 */
    struct r05_node *p[33] = { 0 };
    /* (e.Declarations) (Metatable e.Names) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Metatable))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[6], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_chars("static struct r05_function *metatable_entries[] = {", 51);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r05m_generatoru_MetatableName);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_chars("};", 2);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_chars("static struct r05_metatable metatable = {", 41);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_chars("  sizeof(metatable_entries) / sizeof(metatable_entries[0]),", 59);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_chars("  metatable_entries", 19);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_chars("};", 2);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_close_bracket(p+32);
    r05_link_brackets(p[31], p[32]);
    r05_link_brackets(p[29], p[30]);
    r05_link_brackets(p[27], p[28]);
    r05_link_brackets(p[25], p[26]);
    r05_link_brackets(p[23], p[24]);
    r05_link_brackets(p[21], p[22]);
    r05_link_brackets(p[19], p[20]);
    r05_push_stack(p[18]);
    r05_push_stack(p[16]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[14], p[15]);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[12], p+7);
    r05_splice_evar(p[17], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SafeSpecialComment, "SafeSpecialComment") {
  r05_this_is_generated_function();

  do {
    /* e.Comment: 3 */
    struct r05_node *p[8] = { 0 };
    /* '!' e.Comment */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '!'))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_chars("!!", 2);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_SafeSpecialComment);
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
    /* e.Comment: 4 */
    struct r05_node *p[9] = { 0 };
    /* '/' '*' e.Comment */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '/'))
      continue;
    if (! r05_char_left(p+3, p[2], p[1], '*'))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_chars("/!*", 3);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_SafeSpecialComment);
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
    /* e.Comment: 4 */
    struct r05_node *p[9] = { 0 };
    /* '*' '/' e.Comment */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '*'))
      continue;
    if (! r05_char_left(p+3, p[2], p[1], '/'))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_chars("*!/", 3);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_SafeSpecialComment);
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
    /* s.Other: 2 */
    /* e.Comment: 3 */
    struct r05_node *p[8] = { 0 };
    /* s.Other e.Comment */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_svar(p+2);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_SafeSpecialComment);
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

R05_DEFINE_ENTRY_FUNCTION(r05m_generatoru_MetatableName, "r05-generator_MetatableName") {
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
    r05_alloc_chars("  &r05f_", 8);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_EscapeName);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_char(',');
    r05_alloc_close_bracket(p+10);
    r05_link_brackets(p[6], p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[8], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r05m_generatoru_GenExtern, "r05-generator_GenExtern") {
  r05_this_is_generated_function();

  do {
    /* t.SrcPos: 4 */
    /* e.Name: 6 */
    struct r05_node *p[11] = { 0 };
    /* (t.SrcPos e.Name) */
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
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_GenDeclaration);
    r05_alloc_function(&r05f_Entry);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Scope, "Scope") {
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
    r05_alloc_chars("ENTRY", 5);
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
    r05_alloc_chars("LOCAL", 5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(GenEmptyDefinition, "GenEmptyDefinition") {
  r05_this_is_generated_function();

  do {
    /* s.ScopeClass: 2 */
    struct r05_node *p[5] = { 0 };
    /* s.ScopeClass */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+3);
    r05_alloc_chars("static struct r05_function r05f_ = { r05_enum_function_code, \"\" };", 66);
    r05_alloc_close_bracket(p+4);
    r05_link_brackets(p[3], p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Name: 3 */
    struct r05_node *p[10] = { 0 };
    /* e.Name Meta */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_Meta))
      continue;
    r05_close_evar(p+3, p[0], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+5);
    r05_alloc_chars("R05_DEFINE_METAFUNCTION(", 24);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_DefName);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_char(')');
    r05_alloc_close_bracket(p+9);
    r05_link_brackets(p[5], p[9]);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[7], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.ScopeClass: 2 */
    /* e.Name: 3 */
    struct r05_node *p[12] = { 0 };
    /* e.Name s.ScopeClass */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[0], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+5);
    r05_alloc_chars("R05_DEFINE_", 11);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Scope);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+7);
    r05_alloc_chars("_ENUM(", 6);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_DefName);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_alloc_char(')');
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[5], p[11]);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+3);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[9], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(GenDeclaration, "GenDeclaration") {
  r05_this_is_generated_function();

  do {
    /* s.ScopeClass: 2 */
    struct r05_node *p[9] = { 0 };
    /* s.ScopeClass */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_AssertOneOf);
    r05_alloc_svar(p+2);
    r05_alloc_function(&r05f_in);
    r05_alloc_open_bracket(p+4);
    r05_alloc_function(&r05f_Entry);
    r05_alloc_close_bracket(p+5);
    r05_alloc_close_call(p+6);
    r05_alloc_open_bracket(p+7);
    r05_alloc_chars("extern struct r05_function r05f_;", 33);
    r05_alloc_close_bracket(p+8);
    r05_link_brackets(p[7], p[8]);
    r05_push_stack(p[6]);
    r05_push_stack(p[3]);
    r05_link_brackets(p[4], p[5]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.ScopeClass: 2 */
    /* e.Name: 3 */
    struct r05_node *p[12] = { 0 };
    /* s.ScopeClass e.Name */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+5);
    r05_alloc_chars("R05_DECLARE_", 12);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Scope);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+7);
    r05_alloc_chars("_FUNCTION(", 10);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_EscapeName);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_alloc_char(')');
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[5], p[11]);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+3);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[9], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(GenFunction, "GenFunction") {
  r05_this_is_generated_function();

  do {
    /* s.ScopeClass: 2 */
    /* e.Name: 5 */
    /* e.Sentences: 7 */
    struct r05_node *p[27] = { 0 };
    /* s.ScopeClass (e.Name) e.Sentences */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_chars("R05_DEFINE_", 11);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Scope);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+11);
    r05_alloc_chars("_FUNCTION(", 10);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_DefName);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_chars(") {", 3);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_chars("  r05_this_is_generated_function();", 35);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_generatoru_GenSentence);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_AddFailCommand);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_close_call(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_char('}');
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_close_bracket(p+26);
    r05_link_brackets(p[25], p[26]);
    r05_link_brackets(p[23], p[24]);
    r05_push_stack(p[22]);
    r05_push_stack(p[18]);
    r05_push_stack(p[21]);
    r05_push_stack(p[19]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[16], p[17]);
    r05_link_brackets(p[9], p[15]);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+5);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_splice_evar(p[13], p+5);
    r05_splice_evar(p[20], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AssertOneOf, "AssertOneOf") {
  r05_this_is_generated_function();

  do {
    /* s.One: 5, 8 */
    /* e.Variants-B: 6 */
    /* e.Variants-E: 9 */
    struct r05_node *p[11] = { 0 };
    /* s.One in (e.Variants-B s.One e.Variants-E) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_function_right(p+4, p[0], p[2], &r05f_in))
      continue;
    if (! r05_svar_left(p+5, p[0], p[4]))
      continue;
    if (! r05_empty_hole(p[5], p[4]))
      continue;
    p[6] = p[2]->next;
    p[7] = p[2];
    r05_start_e_loop();
    do {
      if (! r05_repeated_svar_left(p+8, p[7], p[3], p+5))
        continue;
      r05_close_evar(p+9, p[8], p[3]);

      r05_reset_allocator();
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+6, p[3]));
    r05_stop_e_loop();
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DefName, "DefName") {
  r05_this_is_generated_function();

  do {
    /* e.Name: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.Name */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_EscapeName);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_alloc_chars(", \"", 3);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_EscapeString);
    r05_alloc_evar(p+2);
    r05_alloc_close_call(p+8);
    r05_alloc_char('\"');
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(EscapeName, "EscapeName") {
  r05_this_is_generated_function();

  do {
    /* e.Name: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.Name */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_EscapeNamem_GlueCodes);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r05m_generatoru_EscapeNameChar);
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

R05_DEFINE_ENTRY_FUNCTION(r05m_generatoru_EscapeNameChar, "r05-generator_EscapeNameChar") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[5] = { 0 };
    /* '_' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '_'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+3);
    r05_alloc_function(&r05f_e);
    r05_alloc_chars("u_", 2);
    r05_alloc_close_bracket(p+4);
    r05_link_brackets(p[3], p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[5] = { 0 };
    /* '-' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '-'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+3);
    r05_alloc_function(&r05f_e);
    r05_alloc_chars("m-", 2);
    r05_alloc_close_bracket(p+4);
    r05_link_brackets(p[3], p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[5] = { 0 };
    /* '$' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '$'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+3);
    r05_alloc_function(&r05f_e);
    r05_alloc_chars("d$", 2);
    r05_alloc_close_bracket(p+4);
    r05_link_brackets(p[3], p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* s.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_r05m_generatoru_EscapeNameChar0);
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

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(r05m_generatoru_EscapeNameChar0, "r05-generator_EscapeNameChar0") {
  r05_this_is_generated_function();

  do {
    /* s.Other: 2 */
    /* s.st_: 4 */
    /* s.Letter: 5 */
    struct r05_node *p[8] = { 0 };
    /* s.Other 'L' s.st_ s.Letter */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+3, p[2], p[1], 'L'))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_function(&r05f_c);
    r05_alloc_svar(p+5);
    r05_alloc_close_bracket(p+7);
    r05_link_brackets(p[6], p[7]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Other: 2 */
    /* s.st_: 4 */
    /* s.Digit: 5 */
    struct r05_node *p[8] = { 0 };
    /* s.Other 'D' s.st_ s.Digit */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+3, p[2], p[1], 'D'))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_function(&r05f_c);
    r05_alloc_svar(p+5);
    r05_alloc_close_bracket(p+7);
    r05_link_brackets(p[6], p[7]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Other: 2 */
    /* s.t_: 3 */
    /* s.st_: 4 */
    /* s.Encoded: 5 */
    struct r05_node *p[10] = { 0 };
    /* s.Other s.t_ s.st_ s.Encoded */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_function(&r05f_k);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_EscapeNameCharm_Code);
    r05_alloc_svar(p+5);
    r05_alloc_close_call(p+8);
    r05_alloc_close_bracket(p+9);
    r05_link_brackets(p[6], p[9]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(EscapeNameCharm_Code, "EscapeNameChar-Code") {
  r05_this_is_generated_function();

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
    r05_alloc_function(&r05f_EscapeNameCharm_Codeu_check);
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

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(EscapeNameCharm_Codeu_check, "EscapeNameChar-Code_check") {
  r05_this_is_generated_function();

  do {
    /* s.Char: 2 */
    /* s.Code: 3 */
    struct r05_node *p[12] = { 0 };
    /* s.Char s.Code */
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
    r05_alloc_function(&r05f_Hex);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_k2F_);
    r05_alloc_svar(p+3);
    r05_alloc_number(16UL);
    r05_alloc_close_call(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Hex);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_k25_);
    r05_alloc_svar(p+3);
    r05_alloc_number(16UL);
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
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(EscapeNamem_GlueCodes, "EscapeName-GlueCodes") {
  r05_this_is_generated_function();

  do {
    /* e.Code1: 8 */
    /* e.Code2: 10 */
    /* e.Name: 12 */
    struct r05_node *p[20] = { 0 };
    /* (k e.Code1) (k e.Code2) e.Name */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_k))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_k))
      continue;
    r05_close_evar(p+8, p[4], p[3]);
    r05_close_evar(p+10, p[7], p[6]);
    r05_close_evar(p+12, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_EscapeNamem_GlueCodes);
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_k);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_splice_evar(p[16], p+8);
    r05_splice_evar(p[16], p+10);
    r05_splice_evar(p[18], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Code1: 11 */
    /* e.Code2: 13 */
    /* e.Name: 15 */
    /* s.Char: 17 */
    struct r05_node *p[27] = { 0 };
    /* (k e.Code1) (c s.Char) (k e.Code2) e.Name */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_k))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_c))
      continue;
    if (! r05_brackets_left(p+8, p[6], p[1]))
      continue;
    if (! r05_function_left(p+10, p[8], p[9], &r05f_k))
      continue;
    r05_close_evar(p+11, p[4], p[3]);
    r05_close_evar(p+13, p[10], p[9]);
    r05_close_evar(p+15, p[9], p[1]);
    if (! r05_svar_left(p+17, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[17], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_EscapeNamem_GlueCodes);
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_k);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_EscapeNameCharm_Code);
    r05_alloc_svar(p+17);
    r05_alloc_close_call(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[18]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[19], p[24]);
    r05_correct_evar(p+13);
    r05_push_stack(p[22]);
    r05_push_stack(p[21]);
    r05_correct_evar(p+11);
    r05_splice_evar(p[20], p+11);
    r05_splice_evar(p[23], p+13);
    r05_splice_evar(p[25], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Code1: 11 */
    /* e.Code2: 13 */
    /* e.Name: 15 */
    /* s.Escape_: 17 */
    /* s.Char: 18 */
    struct r05_node *p[28] = { 0 };
    /* (k e.Code1) (e s.Escape_ s.Char) (k e.Code2) e.Name */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_k))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_e))
      continue;
    if (! r05_brackets_left(p+8, p[6], p[1]))
      continue;
    if (! r05_function_left(p+10, p[8], p[9], &r05f_k))
      continue;
    r05_close_evar(p+11, p[4], p[3]);
    r05_close_evar(p+13, p[10], p[9]);
    r05_close_evar(p+15, p[9], p[1]);
    if (! r05_svar_left(p+17, p[7], p[6]))
      continue;
    if (! r05_svar_left(p+18, p[17], p[6]))
      continue;
    if (! r05_empty_hole(p[18], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_EscapeNamem_GlueCodes);
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_k);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_EscapeNameCharm_Code);
    r05_alloc_svar(p+18);
    r05_alloc_close_call(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[20], p[25]);
    r05_correct_evar(p+13);
    r05_push_stack(p[23]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+11);
    r05_splice_evar(p[21], p+11);
    r05_splice_evar(p[24], p+13);
    r05_splice_evar(p[26], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Code: 5 */
    /* e.Name: 7 */
    struct r05_node *p[13] = { 0 };
    /* (k e.Code) e.Name */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_k))
      continue;
    r05_close_evar(p+5, p[4], p[3]);
    r05_close_evar(p+7, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_char('k');
    r05_alloc_insert_pos(p+9);
    r05_alloc_char('_');
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_EscapeNamem_GlueCodes);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+7);
    r05_correct_evar(p+5);
    r05_splice_evar(p[9], p+5);
    r05_splice_evar(p[11], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Name: 5 */
    /* s.Escape: 7 */
    /* s.Char_: 8 */
    struct r05_node *p[12] = { 0 };
    /* (e s.Escape s.Char_) e.Name */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_e))
      continue;
    r05_close_evar(p+5, p[3], p[1]);
    if (! r05_svar_left(p+7, p[4], p[3]))
      continue;
    if (! r05_svar_left(p+8, p[7], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_svar(p+7);
    r05_alloc_char('_');
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_EscapeNamem_GlueCodes);
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

  do {
    /* e.Name: 5 */
    /* s.Char: 7 */
    struct r05_node *p[11] = { 0 };
    /* (c s.Char) e.Name */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_c))
      continue;
    r05_close_evar(p+5, p[3], p[1]);
    if (! r05_svar_left(p+7, p[4], p[3]))
      continue;
    if (! r05_empty_hole(p[7], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_svar(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_EscapeNamem_GlueCodes);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[9], p+5);
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

R05_DEFINE_LOCAL_FUNCTION(Hex, "Hex") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[3] = { 0 };
    /* 10 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_left(p+2, p[0], p[1], 10UL))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('A');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* 11 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_left(p+2, p[0], p[1], 11UL))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('B');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* 12 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_left(p+2, p[0], p[1], 12UL))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('C');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* 13 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_left(p+2, p[0], p[1], 13UL))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('D');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* 14 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_left(p+2, p[0], p[1], 14UL))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('E');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* 15 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_left(p+2, p[0], p[1], 15UL))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('F');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Dec: 2 */
    struct r05_node *p[5] = { 0 };
    /* s.Dec */
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

R05_DEFINE_LOCAL_FUNCTION(AddFailCommand, "AddFailCommand") {
  r05_this_is_generated_function();

  do {
    /* e.Sentences: 12 */
    /* e.Result: 14 */
    /* t.SrcPos: 16 */
    /* e.Index: 19 */
    struct r05_node *p[33] = { 0 };
    /* e.Sentences (((Variable t.SrcPos 'e' e.Index)) RETURN (e.Result)) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_function_left(p+6, p[5], p[3], &r05f_RETURN))
      continue;
    if (! r05_brackets_left(p+7, p[4], p[5]))
      continue;
    if (! r05_function_left(p+9, p[7], p[8], &r05f_Variable))
      continue;
    if (! r05_brackets_left(p+10, p[6], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[5]))
      continue;
    if (! r05_empty_hole(p[11], p[3]))
      continue;
    r05_close_evar(p+12, p[0], p[2]);
    r05_close_evar(p+14, p[10], p[11]);
    if (! r05_tvar_left(p+16, p[9], p[8]))
      continue;
    if (! r05_char_left(p+18, p[17], p[8], 'e'))
      continue;
    r05_close_evar(p+19, p[18], p[8]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+25);
    r05_alloc_char('e');
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_function(&r05f_RETURN);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_close_bracket(p+32);
    r05_link_brackets(p[22], p[32]);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[23], p[28]);
    r05_link_brackets(p[24], p[27]);
    r05_correct_evar(p+19);
    r05_correct_evar(p+12);
    r05_splice_evar(p[21], p+12);
    r05_splice_tvar(p[25], p+16);
    r05_splice_evar(p[26], p+19);
    r05_splice_evar(p[30], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Sentences: 2 */
    struct r05_node *p[5] = { 0 };
    /* e.Sentences */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+4);
    r05_alloc_function(&r05f_ReturnRecognitionImpossible);
    r05_correct_evar(p+2);
    r05_splice_evar(p[4], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(generatoru_GenSentence, "generator_GenSentence") {
  r05_this_is_generated_function();

  do {
    /* e.Pattern: 9 */
    /* e.Result: 11 */
    struct r05_node *p[33] = { 0 };
    /* ((e.Pattern) RETURN (e.Result)) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_function_left(p+6, p[5], p[3], &r05f_RETURN))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[3]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+9, p[4], p[5]);
    r05_close_evar(p+11, p[7], p[8]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_chars("  do {", 6);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_SkipIndentAccum);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_function(&r05f_generatoru_GenCommand);
    r05_alloc_open_bracket(p+19);
    r05_alloc_chars("    ", 4);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_CompileSentence);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_alloc_close_call(p+29);
    r05_alloc_close_call(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_chars("  } while (0);", 14);
    r05_alloc_close_bracket(p+32);
    r05_link_brackets(p[31], p[32]);
    r05_push_stack(p[30]);
    r05_push_stack(p[17]);
    r05_push_stack(p[29]);
    r05_push_stack(p[18]);
    r05_push_stack(p[28]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[19], p[20]);
    r05_link_brackets(p[15], p[16]);
    r05_link_brackets(p[13], p[14]);
    r05_splice_evar(p[23], p+9);
    r05_splice_evar(p[26], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[7] = { 0 };
    /* ReturnRecognitionImpossible */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_ReturnRecognitionImpossible))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+3);
    r05_alloc_close_bracket(p+4);
    r05_alloc_open_bracket(p+5);
    r05_alloc_chars("  r05_recognition_impossible();", 31);
    r05_alloc_close_bracket(p+6);
    r05_link_brackets(p[5], p[6]);
    r05_link_brackets(p[3], p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SkipIndentAccum, "SkipIndentAccum") {
  r05_this_is_generated_function();

  do {
    /* e.Generated: 8 */
    struct r05_node *p[11] = { 0 };
    /* ('    ') e.Generated */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], ' '))
      continue;
    if (! r05_char_left(p+5, p[4], p[3], ' '))
      continue;
    if (! r05_char_left(p+6, p[5], p[3], ' '))
      continue;
    if (! r05_char_left(p+7, p[6], p[3], ' '))
      continue;
    if (! r05_empty_hole(p[7], p[3]))
      continue;
    r05_close_evar(p+8, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+10);
    r05_correct_evar(p+8);
    r05_splice_evar(p[10], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SafeComment, "SafeComment") {
  r05_this_is_generated_function();

  do {
    /* e.Comment-B: 2 */
    /* e.Comment-E: 6 */
    struct r05_node *p[12] = { 0 };
    /* e.Comment-B '/' '*' e.Comment-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_char_left(p+4, p[3], p[1], '/'))
        continue;
      if (! r05_char_left(p+5, p[4], p[1], '*'))
        continue;
      r05_close_evar(p+6, p[5], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+8);
      r05_alloc_function(&r05f_SafeComment);
      r05_alloc_insert_pos(p+9);
      r05_alloc_chars("/\' \'*", 5);
      r05_alloc_insert_pos(p+10);
      r05_alloc_close_call(p+11);
      r05_push_stack(p[11]);
      r05_push_stack(p[8]);
      r05_correct_evar(p+6);
      r05_correct_evar(p+2);
      r05_splice_evar(p[9], p+2);
      r05_splice_evar(p[10], p+6);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Comment-B: 2 */
    /* e.Comment-E: 6 */
    struct r05_node *p[12] = { 0 };
    /* e.Comment-B '*' '/' e.Comment-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_char_left(p+4, p[3], p[1], '*'))
        continue;
      if (! r05_char_left(p+5, p[4], p[1], '/'))
        continue;
      r05_close_evar(p+6, p[5], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+8);
      r05_alloc_function(&r05f_SafeComment);
      r05_alloc_insert_pos(p+9);
      r05_alloc_chars("*\' \'/", 5);
      r05_alloc_insert_pos(p+10);
      r05_alloc_close_call(p+11);
      r05_push_stack(p[11]);
      r05_push_stack(p[8]);
      r05_correct_evar(p+6);
      r05_correct_evar(p+2);
      r05_splice_evar(p[9], p+2);
      r05_splice_evar(p[10], p+6);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Comment: 2 */
    struct r05_node *p[5] = { 0 };
    /* e.Comment */
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

R05_DEFINE_ENTRY_FUNCTION(generatoru_GenCommand, "generator_GenCommand") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 7 */
    /* s.L: 9 */
    /* s.R: 10 */
    /* e.Index: 12 */
    struct r05_node *p[22] = { 0 };
    /* (e.Indent) (CmdOpenedE-Start s.L s.R 'e' e.Index) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_CmdOpenedEm_Start))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    if (! r05_svar_left(p+9, p[6], p[5]))
      continue;
    if (! r05_svar_left(p+10, p[9], p[5]))
      continue;
    if (! r05_char_left(p+11, p[10], p[5], 'e'))
      continue;
    r05_close_evar(p+12, p[11], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_chars("  ", 2);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_CmdOpenedEm_Start);
    r05_alloc_open_bracket(p+18);
    r05_alloc_evar(p+7);
    r05_alloc_close_bracket(p+19);
    r05_alloc_svar(p+9);
    r05_alloc_svar(p+10);
    r05_alloc_char('e');
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[18], p[19]);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[15], p+7);
    r05_splice_evar(p[20], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Indent: 9 */
    /* s.L: 11 */
    /* s.R: 12 */
    /* e.Index: 14 */
    struct r05_node *p[24] = { 0 };
    /* (e.Indent '  ') (CmdOpenedE-End s.L s.R 'e' e.Index) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_right(p+4, p[2], p[3], ' '))
      continue;
    if (! r05_char_right(p+5, p[2], p[4], ' '))
      continue;
    if (! r05_brackets_left(p+6, p[3], p[1]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_CmdOpenedEm_End))
      continue;
    if (! r05_empty_hole(p[7], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[5]);
    if (! r05_svar_left(p+11, p[8], p[7]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[7]))
      continue;
    if (! r05_char_left(p+13, p[12], p[7], 'e'))
      continue;
    r05_close_evar(p+14, p[13], p[7]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_CmdOpenedEm_End);
    r05_alloc_open_bracket(p+20);
    r05_alloc_evar(p+9);
    r05_alloc_close_bracket(p+21);
    r05_alloc_svar(p+11);
    r05_alloc_svar(p+12);
    r05_alloc_char('e');
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[19]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[20], p[21]);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[17], p+9);
    r05_splice_evar(p[22], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Indent: 6 */
    /* s.Command: 8 */
    /* e.Args: 9 */
    struct r05_node *p[19] = { 0 };
    /* (e.Indent) (s.Command e.Args) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    if (! r05_svar_left(p+8, p[4], p[5]))
      continue;
    r05_close_evar(p+9, p[8], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Mu);
    r05_alloc_svar(p+8);
    r05_alloc_open_bracket(p+15);
    r05_alloc_evar(p+6);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[15], p[16]);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[12], p+6);
    r05_splice_evar(p[17], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdComment, "CmdComment") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    /* e.Text: 6 */
    struct r05_node *p[14] = { 0 };
    /* (e.Indent) e.Text */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_chars("/* ", 3);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_SafeComment);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_chars(" */", 3);
    r05_alloc_close_bracket(p+13);
    r05_link_brackets(p[8], p[13]);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_evar(p[11], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdAllocStack, "CmdAllocStack") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 5 */
    struct r05_node *p[7] = { 0 };
    /* (e.Indent) 0 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_right(p+2, p[0], p[1], 0UL))
      continue;
    if (! r05_brackets_left(p+3, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Indent: 4 */
    /* s.Size: 6 */
    struct r05_node *p[12] = { 0 };
    /* (e.Indent) s.Size */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[6], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+7);
    r05_alloc_insert_pos(p+8);
    r05_alloc_chars("struct r05_node *p[", 19);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+10);
    r05_alloc_chars("] = { 0 };", 10);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[7], p[11]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[8], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdInitHole0, "CmdInitHole0") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    struct r05_node *p[15] = { 0 };
    /* (e.Indent) */
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
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Elem);
    r05_alloc_number(0UL);
    r05_alloc_close_call(p+9);
    r05_alloc_chars(" = arg_begin->next;", 19);
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_bracket(p+11);
    r05_alloc_evar(p+4);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Elem);
    r05_alloc_number(1UL);
    r05_alloc_close_call(p+13);
    r05_alloc_chars(" = arg_end;", 11);
    r05_alloc_close_bracket(p+14);
    r05_link_brackets(p[11], p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[6], p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdMatch, "CmdMatch") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    /* s.Dir: 6 */
    /* s.L: 7 */
    /* s.R: 8 */
    /* s.Stack: 9 */
    /* s.Type: 10 */
    /* e.Value: 11 */
    struct r05_node *p[25] = { 0 };
    /* (e.Indent) s.Dir s.L s.R s.Stack s.Type e.Value */
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
    if (! r05_svar_left(p+9, p[8], p[1]))
      continue;
    if (! r05_svar_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+11, p[10], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_CmdMatchu_check);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_svar(p+6);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+8);
    r05_alloc_svar(p+9);
    r05_alloc_svar(p+10);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_chars("r05_", 4);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_MatchFunc);
    r05_alloc_svar(p+10);
    r05_alloc_evar(p+11);
    r05_alloc_close_call(p+21);
    r05_alloc_char('_');
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_StrFromDir);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[13]);
    r05_push_stack(p[23]);
    r05_push_stack(p[22]);
    r05_push_stack(p[21]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[15], p+4);
    r05_splice_evar(p[18], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdMatchu_check, "CmdMatch_check") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    /* s.Dir: 6 */
    /* s.L: 7 */
    /* s.R: 8 */
    /* s.Stack: 9 */
    /* s.Type: 10 */
    /* e.Value: 13 */
    /* e.Func: 15 */
    struct r05_node *p[34] = { 0 };
    /* (e.Indent) s.Dir s.L s.R s.Stack s.Type (e.Value) e.Func */
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
    if (! r05_svar_left(p+9, p[8], p[1]))
      continue;
    if (! r05_svar_left(p+10, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[12], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_CmdMatchu_check0);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_svar(p+6);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+8);
    r05_alloc_svar(p+9);
    r05_alloc_svar(p+10);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_ElemPtr);
    r05_alloc_svar(p+9);
    r05_alloc_close_call(p+28);
    r05_alloc_chars(", ", 2);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_ElemLR);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+8);
    r05_alloc_close_call(p+30);
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_MatchArgs);
    r05_alloc_svar(p+10);
    r05_alloc_evar(p+13);
    r05_alloc_close_call(p+32);
    r05_alloc_close_call(p+33);
    r05_push_stack(p[33]);
    r05_push_stack(p[17]);
    r05_push_stack(p[32]);
    r05_push_stack(p[31]);
    r05_push_stack(p[30]);
    r05_push_stack(p[29]);
    r05_push_stack(p[28]);
    r05_push_stack(p[27]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[19], p+4);
    r05_splice_evar(p[22], p+13);
    r05_splice_evar(p[25], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdMatchu_check0, "CmdMatch_check0") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    /* s.Dir: 6 */
    /* s.L: 7 */
    /* s.R: 8 */
    /* s.Stack: 9 */
    /* s.Type: 10 */
    /* e.Value: 15 */
    /* e.Func: 17 */
    /* e.Args: 19 */
    struct r05_node *p[28] = { 0 };
    /* (e.Indent) s.Dir s.L s.R s.Stack s.Type (e.Value) (e.Func) e.Args */
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
    if (! r05_svar_left(p+9, p[8], p[1]))
      continue;
    if (! r05_svar_left(p+10, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[11], p[12]);
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[14], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_chars("if (! ", 6);
    r05_alloc_insert_pos(p+23);
    r05_alloc_char('(');
    r05_alloc_insert_pos(p+24);
    r05_alloc_chars("))", 2);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_evar(p+4);
    r05_alloc_chars("  continue;", 11);
    r05_alloc_close_bracket(p+27);
    r05_link_brackets(p[26], p[27]);
    r05_link_brackets(p[21], p[25]);
    r05_correct_evar(p+19);
    r05_correct_evar(p+17);
    r05_correct_evar(p+4);
    r05_splice_evar(p[22], p+4);
    r05_splice_evar(p[23], p+17);
    r05_splice_evar(p[24], p+19);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(MatchFunc, "MatchFunc") {
  r05_this_is_generated_function();

  do {
    /* s.Type: 3 */
    /* e.Value: 4 */
    struct r05_node *p[8] = { 0 };
    /* Symbol s.Type e.Value */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Symbol))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_SymbolFunc);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* Brackets */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Brackets))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("brackets", 8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Mode: 3 */
    /* s.SampleOffset: 4 */
    struct r05_node *p[5] = { 0 };
    /* Repeated s.Mode s.SampleOffset */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Repeated))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("repeated_", 9);
    r05_alloc_svar(p+3);
    r05_alloc_chars("var", 3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[4] = { 0 };
    /* Variable 's' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Variable))
      continue;
    if (! r05_char_left(p+3, p[2], p[1], 's'))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("svar", 4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[4] = { 0 };
    /* Variable 't' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Variable))
      continue;
    if (! r05_char_left(p+3, p[2], p[1], 't'))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("tvar", 4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SymbolFunc, "SymbolFunc") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[3] = { 0 };
    /* Char */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Char))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("char", 4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* Number */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Number))
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
    /* Word */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Word))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("function", 8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(StrFromDir, "StrFromDir") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[3] = { 0 };
    /* LEFT */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_LEFT))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("left", 4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* RIGHT */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_RIGHT))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("right", 5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(MatchArgs, "MatchArgs") {
  r05_this_is_generated_function();

  do {
    /* s.Type: 3 */
    /* e.Value: 4 */
    struct r05_node *p[9] = { 0 };
    /* Symbol s.Type e.Value */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Symbol))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_chars(", ", 2);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_SymbolTextRep);
    r05_alloc_svar(p+3);
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
    struct r05_node *p[3] = { 0 };
    /* Brackets */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Brackets))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Mode: 3 */
    /* s.SampleOffset: 4 */
    struct r05_node *p[7] = { 0 };
    /* Repeated s.Mode s.SampleOffset */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Repeated))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars(", ", 2);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_ElemPtr);
    r05_alloc_svar(p+4);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Mode: 3 */
    struct r05_node *p[4] = { 0 };
    /* Variable s.Mode */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Variable))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
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

R05_DEFINE_LOCAL_FUNCTION(SymbolTextRep, "SymbolTextRep") {
  r05_this_is_generated_function();

  do {
    /* s.Char: 3 */
    struct r05_node *p[6] = { 0 };
    /* Char s.Char */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Char))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('\'');
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_r05m_generatoru_EscapeChar);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+5);
    r05_alloc_char('\'');
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Number: 3 */
    struct r05_node *p[6] = { 0 };
    /* Number s.Number */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Number))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+5);
    r05_alloc_chars("UL", 2);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Name: 3 */
    struct r05_node *p[8] = { 0 };
    /* Word e.Name */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Word))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_chars("&r05f_", 6);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_EscapeName);
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

R05_DEFINE_LOCAL_FUNCTION(CmdEmpty, "CmdEmpty") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    /* s.L: 6 */
    /* s.R: 7 */
    struct r05_node *p[15] = { 0 };
    /* (e.Indent) s.L s.R */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[1]))
      continue;
    if (! r05_empty_hole(p[7], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_chars("if (! r05_empty_hole(", 21);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_ElemLR);
    r05_alloc_svar(p+6);
    r05_alloc_svar(p+7);
    r05_alloc_close_call(p+11);
    r05_alloc_chars("))", 2);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_evar(p+4);
    r05_alloc_chars("  continue;", 11);
    r05_alloc_close_bracket(p+14);
    r05_link_brackets(p[13], p[14]);
    r05_link_brackets(p[8], p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdClosedE, "CmdClosedE") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    /* s.L: 6 */
    /* s.R: 7 */
    /* s.Offset: 9 */
    struct r05_node *p[17] = { 0 };
    /* (e.Indent) s.L s.R 'e' s.Offset */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[1]))
      continue;
    if (! r05_char_left(p+8, p[7], p[1], 'e'))
      continue;
    if (! r05_svar_left(p+9, p[8], p[1]))
      continue;
    if (! r05_empty_hole(p[9], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_chars("r05_close_evar(", 15);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_ElemPtr);
    r05_alloc_svar(p+9);
    r05_alloc_close_call(p+13);
    r05_alloc_chars(", ", 2);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_ElemLR);
    r05_alloc_svar(p+6);
    r05_alloc_svar(p+7);
    r05_alloc_close_call(p+15);
    r05_alloc_chars(");", 2);
    r05_alloc_close_bracket(p+16);
    r05_link_brackets(p[10], p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[11], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdOpenedEm_Start, "CmdOpenedE-Start") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    /* s.L: 6 */
    /* s.R: 7 */
    /* s.Offset: 9 */
    struct r05_node *p[29] = { 0 };
    /* (e.Indent) s.L s.R 'e' s.Offset */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[1]))
      continue;
    if (! r05_char_left(p+8, p[7], p[1], 'e'))
      continue;
    if (! r05_svar_left(p+9, p[8], p[1]))
      continue;
    if (! r05_empty_hole(p[9], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Elem);
    r05_alloc_svar(p+9);
    r05_alloc_close_call(p+13);
    r05_alloc_chars(" = ", 3);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Elem);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+15);
    r05_alloc_chars("->next;", 7);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_evar(p+4);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Elem);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+9);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_chars(" = ", 3);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_Elem);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+23);
    r05_alloc_char(';');
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_evar(p+4);
    r05_alloc_chars("r05_start_e_loop();", 19);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_evar(p+4);
    r05_alloc_chars("do {", 4);
    r05_alloc_close_bracket(p+28);
    r05_link_brackets(p[27], p[28]);
    r05_link_brackets(p[25], p[26]);
    r05_link_brackets(p[17], p[24]);
    r05_push_stack(p[23]);
    r05_push_stack(p[22]);
    r05_push_stack(p[21]);
    r05_push_stack(p[18]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[10], p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[11], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdOpenedEm_End, "CmdOpenedE-End") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    /* s.L: 6 */
    /* s.R: 7 */
    /* s.Offset: 9 */
    struct r05_node *p[19] = { 0 };
    /* (e.Indent) s.L s.R 'e' s.Offset */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[1]))
      continue;
    if (! r05_char_left(p+8, p[7], p[1], 'e'))
      continue;
    if (! r05_svar_left(p+9, p[8], p[1]))
      continue;
    if (! r05_empty_hole(p[9], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_chars("} while (r05_open_evar_advance(", 31);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_ElemPtr);
    r05_alloc_svar(p+9);
    r05_alloc_close_call(p+13);
    r05_alloc_chars(", ", 2);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Elem);
    r05_alloc_svar(p+7);
    r05_alloc_close_call(p+15);
    r05_alloc_chars("));", 3);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_evar(p+4);
    r05_alloc_chars("r05_stop_e_loop();", 18);
    r05_alloc_close_bracket(p+18);
    r05_link_brackets(p[17], p[18]);
    r05_link_brackets(p[10], p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[11], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdEmptyResult, "CmdEmptyResult") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    struct r05_node *p[11] = { 0 };
    /* (e.Indent) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_chars("r05_reset_allocator();", 22);
    r05_alloc_close_bracket(p+10);
    r05_link_brackets(p[8], p[10]);
    r05_correct_evar(p+4);
    r05_link_brackets(p[6], p[7]);
    r05_splice_evar(p[9], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdAllocateElem, "CmdAllocateElem") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    /* s.ElementType: 6 */
    /* e.Info: 7 */
    struct r05_node *p[15] = { 0 };
    /* (e.Indent) s.ElementType e.Info */
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
    r05_alloc_insert_pos(p+10);
    r05_alloc_chars("r05_alloc_", 10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Mu);
    r05_alloc_svar(p+6);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_close_bracket(p+14);
    r05_link_brackets(p[9], p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+7);
    r05_correct_evar(p+4);
    r05_splice_evar(p[10], p+4);
    r05_splice_evar(p[12], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ElSymbol, "ElSymbol") {
  r05_this_is_generated_function();

  do {
    /* s.Type: 2 */
    /* e.Value: 3 */
    struct r05_node *p[10] = { 0 };
    /* s.Type e.Value */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_SymbolFunc);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+6);
    r05_alloc_char('(');
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_SymbolTextRep);
    r05_alloc_svar(p+2);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_chars(");", 2);
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

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ElString, "ElString") {
  r05_this_is_generated_function();

  do {
    /* s.Len: 2 */
    /* e.String: 3 */
    struct r05_node *p[10] = { 0 };
    /* s.Len e.String */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_chars("chars(\"", 7);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_EscapeString);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_chars("\", ", 3);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+9);
    r05_alloc_chars(");", 2);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
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

R05_DEFINE_LOCAL_FUNCTION(ElOpenBracket, "ElOpenBracket") {
  r05_this_is_generated_function();

  do {
    /* s.Pos: 2 */
    struct r05_node *p[5] = { 0 };
    /* s.Pos */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("open_bracket(", 13);
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_ElemPtr);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+4);
    r05_alloc_chars(");", 2);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ElCloseBracket, "ElCloseBracket") {
  r05_this_is_generated_function();

  do {
    /* s.Pos: 2 */
    struct r05_node *p[5] = { 0 };
    /* s.Pos */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("close_bracket(", 14);
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_ElemPtr);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+4);
    r05_alloc_chars(");", 2);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ElOpenCall, "ElOpenCall") {
  r05_this_is_generated_function();

  do {
    /* s.Pos: 2 */
    struct r05_node *p[5] = { 0 };
    /* s.Pos */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("open_call(", 10);
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_ElemPtr);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+4);
    r05_alloc_chars(");", 2);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ElCloseCall, "ElCloseCall") {
  r05_this_is_generated_function();

  do {
    /* s.Pos: 2 */
    struct r05_node *p[5] = { 0 };
    /* s.Pos */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("close_call(", 11);
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_ElemPtr);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+4);
    r05_alloc_chars(");", 2);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ElSavePos, "ElSavePos") {
  r05_this_is_generated_function();

  do {
    /* s.Pos: 2 */
    struct r05_node *p[5] = { 0 };
    /* s.Pos */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("insert_pos(", 11);
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_ElemPtr);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+4);
    r05_alloc_chars(");", 2);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ElVariable, "ElVariable") {
  r05_this_is_generated_function();

  do {
    /* s.Mode: 2 */
    /* s.Offset: 3 */
    struct r05_node *p[6] = { 0 };
    /* s.Mode s.Offset */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_svar(p+2);
    r05_alloc_chars("var(", 4);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_ElemPtr);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+5);
    r05_alloc_chars(");", 2);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdLinkBrackets, "CmdLinkBrackets") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    /* s.Left: 6 */
    /* s.Right: 7 */
    struct r05_node *p[15] = { 0 };
    /* (e.Indent) s.Left s.Right */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[1]))
      continue;
    if (! r05_empty_hole(p[7], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_chars("r05_link_brackets(", 18);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Elem);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+11);
    r05_alloc_chars(", ", 2);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Elem);
    r05_alloc_svar(p+7);
    r05_alloc_close_call(p+13);
    r05_alloc_chars(");", 2);
    r05_alloc_close_bracket(p+14);
    r05_link_brackets(p[8], p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdPushStack, "CmdPushStack") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    /* s.ElemNumber: 6 */
    struct r05_node *p[12] = { 0 };
    /* (e.Indent) s.ElemNumber */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[6], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+7);
    r05_alloc_insert_pos(p+8);
    r05_alloc_chars("r05_push_stack(", 15);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Elem);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+10);
    r05_alloc_chars(");", 2);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[7], p[11]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[8], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdCorrectVar, "CmdCorrectVar") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 5 */
    /* s.Offset: 7 */
    struct r05_node *p[13] = { 0 };
    /* (e.Indent) 'e' s.Offset */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[3], p[1], 'e'))
      continue;
    r05_close_evar(p+5, p[2], p[3]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_empty_hole(p[7], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_chars("r05_correct_evar(", 17);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_ElemPtr);
    r05_alloc_svar(p+7);
    r05_alloc_close_call(p+11);
    r05_alloc_chars(");", 2);
    r05_alloc_close_bracket(p+12);
    r05_link_brackets(p[8], p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[9], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Indent: 4 */
    /* s.Mode: 6 */
    /* s.Offset: 7 */
    struct r05_node *p[8] = { 0 };
    /* (e.Indent) s.Mode s.Offset */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[1]))
      continue;
    if (! r05_empty_hole(p[7], p[1]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdInsertVar, "CmdInsertVar") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    /* s.Pos: 6 */
    /* s.Mode: 7 */
    /* s.Offset: 8 */
    struct r05_node *p[16] = { 0 };
    /* (e.Indent) s.Pos s.Mode s.Offset */
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
    if (! r05_empty_hole(p[8], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_chars("r05_splice_", 11);
    r05_alloc_svar(p+7);
    r05_alloc_chars("var(", 4);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Elem);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+12);
    r05_alloc_chars(", ", 2);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_ElemPtr);
    r05_alloc_svar(p+8);
    r05_alloc_close_call(p+14);
    r05_alloc_chars(");", 2);
    r05_alloc_close_bracket(p+15);
    r05_link_brackets(p[9], p[15]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[10], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CmdReturnResult, "CmdReturnResult") {
  r05_this_is_generated_function();

  do {
    /* e.Indent: 4 */
    struct r05_node *p[13] = { 0 };
    /* (e.Indent) */
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
    r05_alloc_chars("r05_splice_from_freelist(arg_begin);", 36);
    r05_alloc_close_bracket(p+8);
    r05_alloc_open_bracket(p+9);
    r05_alloc_evar(p+4);
    r05_alloc_chars("r05_splice_to_freelist(arg_begin, arg_end);", 43);
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_bracket(p+11);
    r05_alloc_evar(p+4);
    r05_alloc_chars("return;", 7);
    r05_alloc_close_bracket(p+12);
    r05_link_brackets(p[11], p[12]);
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

R05_DEFINE_LOCAL_FUNCTION(EscapeString, "EscapeString") {
  r05_this_is_generated_function();

  do {
    /* e.String: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.String */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r05m_generatoru_EscapeChar);
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

R05_DEFINE_ENTRY_FUNCTION(r05m_generatoru_EscapeChar, "r05-generator_EscapeChar") {
  r05_this_is_generated_function();

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
    /* s.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* s.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_EscapeCharm_Aux);
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

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(EscapeCharm_Aux, "EscapeChar-Aux") {
  r05_this_is_generated_function();

  do {
    /* s.Other: 2 */
    /* s.Code: 3 */
    struct r05_node *p[10] = { 0 };
    /* s.Other s.Code */
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
    r05_alloc_function(&r05f_EscapeCharm_SwCompare);
    r05_alloc_svar(p+2);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Compare);
    r05_alloc_number(31UL);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+6);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Compare);
    r05_alloc_svar(p+3);
    r05_alloc_number(128UL);
    r05_alloc_close_call(p+8);
    r05_alloc_svar(p+3);
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

R05_DEFINE_LOCAL_FUNCTION(EscapeCharm_SwCompare, "EscapeChar-SwCompare") {
  r05_this_is_generated_function();

  do {
    /* s.Other: 2 */
    /* s.Code: 5 */
    struct r05_node *p[6] = { 0 };
    /* s.Other '--' s.Code */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+3, p[2], p[1], '-'))
      continue;
    if (! r05_char_left(p+4, p[3], p[1], '-'))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_svar(p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Other: 2 */
    /* s.Compare1: 3 */
    /* s.Compare2: 4 */
    /* s.Code: 5 */
    struct r05_node *p[20] = { 0 };
    /* s.Other s.Compare1 s.Compare2 s.Code */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('\\');
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Div);
    r05_alloc_svar(p+5);
    r05_alloc_number(64UL);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Mod);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Div);
    r05_alloc_svar(p+5);
    r05_alloc_number(8UL);
    r05_alloc_close_call(p+13);
    r05_alloc_number(8UL);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Mod);
    r05_alloc_svar(p+5);
    r05_alloc_number(8UL);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[16]);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_push_stack(p[10]);
    r05_push_stack(p[14]);
    r05_push_stack(p[11]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_push_stack(p[9]);
    r05_push_stack(p[6]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Elem, "Elem") {
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
    r05_alloc_chars("p[", 2);
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+4);
    r05_alloc_char(']');
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ElemPtr, "ElemPtr") {
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
    r05_alloc_chars("p+", 2);
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

R05_DEFINE_LOCAL_FUNCTION(ElemLR, "ElemLR") {
  r05_this_is_generated_function();

  do {
    /* s.L: 2 */
    /* s.R: 3 */
    struct r05_node *p[8] = { 0 };
    /* s.L s.R */
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
    r05_alloc_function(&r05f_Elem);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+5);
    r05_alloc_chars(", ", 2);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Elem);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+7);
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

R05_DEFINE_LOCAL_FUNCTION(CompileSentence, "CompileSentence") {
  r05_this_is_generated_function();

  do {
    /* e.Pattern: 6 */
    /* e.Result: 8 */
    struct r05_node *p[20] = { 0 };
    /* (e.Pattern) (e.Result) */
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
    r05_alloc_function(&r05f_CompileSentenceu_check);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_GenPattern);
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

R05_DEFINE_LOCAL_FUNCTION(CompileSentenceu_check, "CompileSentence_check") {
  r05_this_is_generated_function();

  do {
    /* e.Pattern: 10 */
    /* e.Result: 12 */
    /* e.PatternVars: 14 */
    /* e.PatternCommands: 16 */
    /* s.PatStack: 18 */
    struct r05_node *p[37] = { 0 };
    /* (e.Pattern) (e.Result) s.PatStack (e.PatternVars) (e.PatternCommands) */
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
    r05_close_evar(p+16, p[6], p[7]);
    if (! r05_svar_left(p+18, p[5], p[8]))
      continue;
    if (! r05_empty_hole(p[18], p[8]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_CompileSentenceu_check0);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_svar(p+18);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_GenResult);
    r05_alloc_svar(p+18);
    r05_alloc_open_bracket(p+33);
    r05_alloc_evar(p+14);
    r05_alloc_close_bracket(p+34);
    r05_alloc_evar(p+12);
    r05_alloc_close_call(p+35);
    r05_alloc_close_call(p+36);
    r05_push_stack(p[36]);
    r05_push_stack(p[19]);
    r05_push_stack(p[35]);
    r05_push_stack(p[32]);
    r05_link_brackets(p[33], p[34]);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+10);
    r05_splice_evar(p[21], p+10);
    r05_splice_evar(p[24], p+12);
    r05_splice_evar(p[27], p+14);
    r05_splice_evar(p[30], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CompileSentenceu_check0, "CompileSentence_check0") {
  r05_this_is_generated_function();

  do {
    /* e.Pattern: 6 */
    /* e.Result: 8 */
    /* s.PatStack: 10 */
    /* e.PatternVars: 15 */
    /* e.PatternCommands: 17 */
    /* s.Stack: 19 */
    /* e.ResultCommands: 20 */
    struct r05_node *p[40] = { 0 };
    /* (e.Pattern) (e.Result) s.PatStack (e.PatternVars) (e.PatternCommands) s.Stack e.ResultCommands */
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
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[11], p[12]);
    r05_close_evar(p+17, p[13], p[14]);
    if (! r05_svar_left(p+19, p[14], p[1]))
      continue;
    r05_close_evar(p+20, p[19], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_CompileSentencem_OpenELoops);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_generatoru_MakeDeclaration);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_function(&r05f_CmdAllocStack);
    r05_alloc_svar(p+19);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_function(&r05f_CmdComment);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_InlineExpr);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_call(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_function(&r05f_CmdEmptyResult);
    r05_alloc_close_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_function(&r05f_CmdReturnResult);
    r05_alloc_close_bracket(p+38);
    r05_alloc_close_call(p+39);
    r05_push_stack(p[39]);
    r05_push_stack(p[22]);
    r05_link_brackets(p[37], p[38]);
    r05_correct_evar(p+20);
    r05_link_brackets(p[34], p[35]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[28], p[32]);
    r05_push_stack(p[31]);
    r05_push_stack(p[29]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[26], p[27]);
    r05_push_stack(p[25]);
    r05_push_stack(p[23]);
    r05_correct_evar(p+15);
    r05_splice_evar(p[24], p+15);
    r05_splice_evar(p[30], p+6);
    r05_splice_evar(p[33], p+17);
    r05_splice_evar(p[36], p+20);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(generatoru_MakeDeclaration, "generator_MakeDeclaration") {
  r05_this_is_generated_function();

  do {
    /* s.Mode: 6 */
    /* s.Inst: 7 */
    /* e.Insts: 8 */
    /* s.Sample: 10 */
    /* e.Index: 11 */
    struct r05_node *p[21] = { 0 };
    /* (s.Mode e.Index s.Sample (s.Inst e.Insts)) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[2], p[3]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_svar_left(p+6, p[2], p[4]))
      continue;
    if (! r05_svar_left(p+7, p[4], p[5]))
      continue;
    r05_close_evar(p+8, p[7], p[5]);
    if (! r05_svar_right(p+10, p[6], p[4]))
      continue;
    r05_close_evar(p+11, p[6], p[10]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_function(&r05f_CmdComment);
    r05_alloc_svar(p+6);
    r05_alloc_char('.');
    r05_alloc_insert_pos(p+14);
    r05_alloc_chars(": ", 2);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+7);
    r05_alloc_close_call(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r05m_generatorm_SymbInst);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_close_bracket(p+20);
    r05_link_brackets(p[13], p[20]);
    r05_push_stack(p[19]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+8);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+11);
    r05_splice_evar(p[14], p+11);
    r05_splice_evar(p[18], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r05m_generatorm_SymbInst, "r05-generator-SymbInst") {
  r05_this_is_generated_function();

  do {
    /* s.Inst: 2 */
    struct r05_node *p[5] = { 0 };
    /* s.Inst */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars(", ", 2);
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

R05_DEFINE_LOCAL_FUNCTION(CompileSentencem_OpenELoops, "CompileSentence-OpenELoops") {
  r05_this_is_generated_function();

  do {
    /* e.Commands-B: 2 */
    /* e.Commands-E: 7 */
    /* s.L: 9 */
    /* s.R: 10 */
    /* s.Stack: 12 */
    struct r05_node *p[21] = { 0 };
    /* e.Commands-B (CmdOpenedE s.L s.R 'e' s.Stack) e.Commands-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+4, p[3], p[1]))
        continue;
      if (! r05_function_left(p+6, p[4], p[5], &r05f_CmdOpenedE))
        continue;
      r05_close_evar(p+7, p[5], p[1]);
      if (! r05_svar_left(p+9, p[6], p[5]))
        continue;
      if (! r05_svar_left(p+10, p[9], p[5]))
        continue;
      if (! r05_char_left(p+11, p[10], p[5], 'e'))
        continue;
      if (! r05_svar_left(p+12, p[11], p[5]))
        continue;
      if (! r05_empty_hole(p[12], p[5]))
        continue;

      r05_reset_allocator();
      r05_alloc_insert_pos(p+13);
      r05_alloc_open_bracket(p+14);
      r05_alloc_function(&r05f_CmdOpenedEm_Start);
      r05_alloc_svar(p+9);
      r05_alloc_svar(p+10);
      r05_alloc_char('e');
      r05_alloc_svar(p+12);
      r05_alloc_close_bracket(p+15);
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_CompileSentencem_OpenELoops);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_call(p+18);
      r05_alloc_open_bracket(p+19);
      r05_alloc_function(&r05f_CmdOpenedEm_End);
      r05_alloc_svar(p+9);
      r05_alloc_svar(p+10);
      r05_alloc_char('e');
      r05_alloc_svar(p+12);
      r05_alloc_close_bracket(p+20);
      r05_link_brackets(p[19], p[20]);
      r05_push_stack(p[18]);
      r05_push_stack(p[16]);
      r05_correct_evar(p+7);
      r05_link_brackets(p[14], p[15]);
      r05_correct_evar(p+2);
      r05_splice_evar(p[13], p+2);
      r05_splice_evar(p[17], p+7);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Commands: 2 */
    struct r05_node *p[5] = { 0 };
    /* e.Commands */
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

R05_DEFINE_LOCAL_FUNCTION(GenPattern, "GenPattern") {
  r05_this_is_generated_function();

  do {
    /* e.Pattern: 2 */
    struct r05_node *p[15] = { 0 };
    /* e.Pattern */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DoGenPattern);
    r05_alloc_number(2UL);
    r05_alloc_open_bracket(p+5);
    r05_alloc_number(0UL);
    r05_alloc_insert_pos(p+6);
    r05_alloc_number(1UL);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_bracket(p+8);
    r05_alloc_close_bracket(p+9);
    r05_alloc_open_bracket(p+10);
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_CmdInitHole0);
    r05_alloc_close_bracket(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[4]);
    r05_link_brackets(p[10], p[13]);
    r05_link_brackets(p[11], p[12]);
    r05_link_brackets(p[8], p[9]);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(Inc2, "Inc2") {
  r05_this_is_generated_function();

  do {
    /* s.N: 2 */
    struct r05_node *p[5] = { 0 };
    /* s.N */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_k2B_);
    r05_alloc_svar(p+2);
    r05_alloc_number(2UL);
    r05_alloc_close_call(p+4);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(VarSize, "VarSize") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[3] = { 0 };
    /* 's' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], 's'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_number(1UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* 't' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], 't'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_number(2UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* 'e' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], 'e'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_number(2UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(IncMode, "IncMode") {
  r05_this_is_generated_function();

  do {
    /* s.N: 2 */
    /* s.Mode: 3 */
    struct r05_node *p[8] = { 0 };
    /* s.N s.Mode */
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
    r05_alloc_function(&r05f_k2B_);
    r05_alloc_svar(p+2);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_VarSize);
    r05_alloc_svar(p+3);
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

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(VarRightSide, "VarRightSide") {
  r05_this_is_generated_function();

  do {
    /* s.N: 3 */
    struct r05_node *p[4] = { 0 };
    /* s.N 's' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], 's'))
      continue;
    if (! r05_svar_left(p+3, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_svar(p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.N: 2 */
    /* s.TE: 3 */
    struct r05_node *p[6] = { 0 };
    /* s.N s.TE */
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
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+5);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPattern, "DoGenPattern") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B: 11 */
    /* e.Holes-E: 15 */
    /* s.L: 17 */
    /* s.Type: 21 */
    /* e.Value: 22 */
    /* s.R: 24 */
    /* e.Hole: 25 */
    struct r05_node *p[45] = { 0 };
    /* s.Stack e.Holes-B (s.L (Symbol s.Type e.Value) e.Hole s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    p[11] = p[10]->next;
    p[12] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+13, p[12], p[4]))
        continue;
      r05_close_evar(p+15, p[14], p[4]);
      if (! r05_svar_left(p+17, p[13], p[14]))
        continue;
      if (! r05_brackets_left(p+18, p[17], p[14]))
        continue;
      if (! r05_function_left(p+20, p[18], p[19], &r05f_Symbol))
        continue;
      if (! r05_svar_left(p+21, p[20], p[19]))
        continue;
      r05_close_evar(p+22, p[21], p[19]);
      if (! r05_svar_right(p+24, p[19], p[14]))
        continue;
      r05_close_evar(p+25, p[19], p[24]);

      r05_reset_allocator();
      r05_alloc_open_call(p+27);
      r05_alloc_function(&r05f_DoGenPattern);
      r05_alloc_open_call(p+28);
      r05_alloc_function(&r05f_Inc);
      r05_alloc_svar(p+10);
      r05_alloc_close_call(p+29);
      r05_alloc_insert_pos(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_svar(p+10);
      r05_alloc_insert_pos(p+32);
      r05_alloc_svar(p+24);
      r05_alloc_close_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_open_bracket(p+35);
      r05_alloc_insert_pos(p+36);
      r05_alloc_close_bracket(p+37);
      r05_alloc_open_bracket(p+38);
      r05_alloc_insert_pos(p+39);
      r05_alloc_open_bracket(p+40);
      r05_alloc_function(&r05f_CmdMatch);
      r05_alloc_function(&r05f_LEFT);
      r05_alloc_svar(p+17);
      r05_alloc_svar(p+24);
      r05_alloc_svar(p+10);
      r05_alloc_function(&r05f_Symbol);
      r05_alloc_svar(p+21);
      r05_alloc_insert_pos(p+41);
      r05_alloc_close_bracket(p+42);
      r05_alloc_close_bracket(p+43);
      r05_alloc_close_call(p+44);
      r05_push_stack(p[44]);
      r05_push_stack(p[27]);
      r05_link_brackets(p[38], p[43]);
      r05_link_brackets(p[40], p[42]);
      r05_correct_evar(p+22);
      r05_correct_evar(p+8);
      r05_link_brackets(p[35], p[37]);
      r05_correct_evar(p+6);
      r05_correct_evar(p+15);
      r05_link_brackets(p[31], p[33]);
      r05_correct_evar(p+25);
      r05_correct_evar(p+11);
      r05_push_stack(p[29]);
      r05_push_stack(p[28]);
      r05_splice_evar(p[30], p+11);
      r05_splice_evar(p[32], p+25);
      r05_splice_evar(p[34], p+15);
      r05_splice_evar(p[36], p+6);
      r05_splice_evar(p[39], p+8);
      r05_splice_evar(p[41], p+22);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+11, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B: 11 */
    /* e.Holes-E: 15 */
    /* s.L: 17 */
    /* s.R: 18 */
    /* e.Hole: 22 */
    /* s.Type: 24 */
    /* e.Value: 25 */
    struct r05_node *p[45] = { 0 };
    /* s.Stack e.Holes-B (s.L e.Hole (Symbol s.Type e.Value) s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    p[11] = p[10]->next;
    p[12] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+13, p[12], p[4]))
        continue;
      r05_close_evar(p+15, p[14], p[4]);
      if (! r05_svar_left(p+17, p[13], p[14]))
        continue;
      if (! r05_svar_right(p+18, p[17], p[14]))
        continue;
      if (! r05_brackets_right(p+19, p[17], p[18]))
        continue;
      if (! r05_function_left(p+21, p[19], p[20], &r05f_Symbol))
        continue;
      r05_close_evar(p+22, p[17], p[19]);
      if (! r05_svar_left(p+24, p[21], p[20]))
        continue;
      r05_close_evar(p+25, p[24], p[20]);

      r05_reset_allocator();
      r05_alloc_open_call(p+27);
      r05_alloc_function(&r05f_DoGenPattern);
      r05_alloc_open_call(p+28);
      r05_alloc_function(&r05f_Inc);
      r05_alloc_svar(p+10);
      r05_alloc_close_call(p+29);
      r05_alloc_insert_pos(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_svar(p+17);
      r05_alloc_insert_pos(p+32);
      r05_alloc_svar(p+10);
      r05_alloc_close_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_open_bracket(p+35);
      r05_alloc_insert_pos(p+36);
      r05_alloc_close_bracket(p+37);
      r05_alloc_open_bracket(p+38);
      r05_alloc_insert_pos(p+39);
      r05_alloc_open_bracket(p+40);
      r05_alloc_function(&r05f_CmdMatch);
      r05_alloc_function(&r05f_RIGHT);
      r05_alloc_svar(p+17);
      r05_alloc_svar(p+18);
      r05_alloc_svar(p+10);
      r05_alloc_function(&r05f_Symbol);
      r05_alloc_svar(p+24);
      r05_alloc_insert_pos(p+41);
      r05_alloc_close_bracket(p+42);
      r05_alloc_close_bracket(p+43);
      r05_alloc_close_call(p+44);
      r05_push_stack(p[44]);
      r05_push_stack(p[27]);
      r05_link_brackets(p[38], p[43]);
      r05_link_brackets(p[40], p[42]);
      r05_correct_evar(p+25);
      r05_correct_evar(p+8);
      r05_link_brackets(p[35], p[37]);
      r05_correct_evar(p+6);
      r05_correct_evar(p+15);
      r05_link_brackets(p[31], p[33]);
      r05_correct_evar(p+22);
      r05_correct_evar(p+11);
      r05_push_stack(p[29]);
      r05_push_stack(p[28]);
      r05_splice_evar(p[30], p+11);
      r05_splice_evar(p[32], p+22);
      r05_splice_evar(p[34], p+15);
      r05_splice_evar(p[36], p+6);
      r05_splice_evar(p[39], p+8);
      r05_splice_evar(p[41], p+25);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+11, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B: 11 */
    /* e.Holes-E: 15 */
    /* s.L: 17 */
    /* e.SubHole: 21 */
    /* s.R: 23 */
    /* e.Hole: 24 */
    struct r05_node *p[46] = { 0 };
    /* s.Stack e.Holes-B (s.L (Brackets e.SubHole) e.Hole s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    p[11] = p[10]->next;
    p[12] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+13, p[12], p[4]))
        continue;
      r05_close_evar(p+15, p[14], p[4]);
      if (! r05_svar_left(p+17, p[13], p[14]))
        continue;
      if (! r05_brackets_left(p+18, p[17], p[14]))
        continue;
      if (! r05_function_left(p+20, p[18], p[19], &r05f_Brackets))
        continue;
      r05_close_evar(p+21, p[20], p[19]);
      if (! r05_svar_right(p+23, p[19], p[14]))
        continue;
      r05_close_evar(p+24, p[19], p[23]);

      r05_reset_allocator();
      r05_alloc_open_call(p+26);
      r05_alloc_function(&r05f_DoGenPatternu_check);
      r05_alloc_svar(p+10);
      r05_alloc_open_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_bracket(p+29);
      r05_alloc_svar(p+17);
      r05_alloc_open_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_bracket(p+32);
      r05_alloc_open_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_close_bracket(p+35);
      r05_alloc_svar(p+23);
      r05_alloc_open_bracket(p+36);
      r05_alloc_insert_pos(p+37);
      r05_alloc_close_bracket(p+38);
      r05_alloc_open_bracket(p+39);
      r05_alloc_insert_pos(p+40);
      r05_alloc_close_bracket(p+41);
      r05_alloc_open_bracket(p+42);
      r05_alloc_insert_pos(p+43);
      r05_alloc_close_bracket(p+44);
      r05_alloc_svar(p+10);
      r05_alloc_close_call(p+45);
      r05_push_stack(p[45]);
      r05_push_stack(p[26]);
      r05_link_brackets(p[42], p[44]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[39], p[41]);
      r05_correct_evar(p+6);
      r05_link_brackets(p[36], p[38]);
      r05_correct_evar(p+15);
      r05_link_brackets(p[33], p[35]);
      r05_correct_evar(p+24);
      r05_link_brackets(p[30], p[32]);
      r05_correct_evar(p+21);
      r05_link_brackets(p[27], p[29]);
      r05_correct_evar(p+11);
      r05_splice_evar(p[28], p+11);
      r05_splice_evar(p[31], p+21);
      r05_splice_evar(p[34], p+24);
      r05_splice_evar(p[37], p+15);
      r05_splice_evar(p[40], p+6);
      r05_splice_evar(p[43], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+11, p[4]));
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
    r05_alloc_function(&r05f_DoGenPatternu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_check, "DoGenPattern_check") {
  r05_this_is_generated_function();

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* e.SubHole: 12 */
    /* e.Hole: 14 */
    /* s.R: 16 */
    /* e.Holes-E: 23 */
    /* e.Vars: 25 */
    /* e.Commands: 27 */
    /* s.LB: 29 */
    struct r05_node *p[52] = { 0 };
    /* s.Stack (e.Holes-B) s.L (e.SubHole) (e.Hole) s.R (e.Holes-E) (e.Vars) (e.Commands) s.LB */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[10], p[11]);
    if (! r05_svar_left(p+16, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    r05_close_evar(p+23, p[17], p[18]);
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    if (! r05_svar_left(p+29, p[22], p[1]))
      continue;
    if (! r05_empty_hole(p[29], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_DoGenPatternu_check0);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_svar(p+7);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_svar(p+16);
    r05_alloc_open_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_close_bracket(p+42);
    r05_alloc_open_bracket(p+43);
    r05_alloc_insert_pos(p+44);
    r05_alloc_close_bracket(p+45);
    r05_alloc_open_bracket(p+46);
    r05_alloc_insert_pos(p+47);
    r05_alloc_close_bracket(p+48);
    r05_alloc_svar(p+29);
    r05_alloc_open_call(p+49);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+50);
    r05_alloc_close_call(p+51);
    r05_push_stack(p[51]);
    r05_push_stack(p[30]);
    r05_push_stack(p[50]);
    r05_push_stack(p[49]);
    r05_link_brackets(p[46], p[48]);
    r05_correct_evar(p+27);
    r05_link_brackets(p[43], p[45]);
    r05_correct_evar(p+25);
    r05_link_brackets(p[40], p[42]);
    r05_correct_evar(p+23);
    r05_link_brackets(p[37], p[39]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[32], p+5);
    r05_splice_evar(p[35], p+12);
    r05_splice_evar(p[38], p+14);
    r05_splice_evar(p[41], p+23);
    r05_splice_evar(p[44], p+25);
    r05_splice_evar(p[47], p+27);
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
    r05_alloc_function(&r05f_DoGenPatternu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_forward, "DoGenPattern_forward") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* t.Holes-B_next: 15 */
    /* e.Holes-B_rest: 17 */
    struct r05_node *p[31] = { 0 };
    /* s.Stack (e.Holes-B_fix) t.Holes-B_next e.Holes-B_rest (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    if (! r05_tvar_left(p+15, p[12], p[4]))
      continue;
    r05_close_evar(p+17, p[16], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_DoGenPatternu_next);
    r05_alloc_svar(p+10);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+17);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_splice_evar(p[21], p+13);
    r05_splice_tvar(p[21], p+15);
    r05_splice_evar(p[23], p+17);
    r05_splice_evar(p[25], p+6);
    r05_splice_evar(p[28], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Holes-B_fix: 8 */
    /* e.Vars: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    struct r05_node *p[24] = { 0 };
    /* s.Stack (e.Holes-B_fix) (e.Vars) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+6, p[0], p[4]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[2], p[3]);
    if (! r05_svar_left(p+14, p[0], p[6]))
      continue;
    if (! r05_empty_hole(p[14], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoGenPatternu_cont);
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_splice_evar(p[16], p+8);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[21], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_next, "DoGenPattern_next") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* e.Holes-B_var: 15 */
    /* e.Holes-E: 19 */
    /* s.L: 21 */
    /* e.SubHole: 25 */
    /* s.R: 27 */
    /* e.Hole: 28 */
    struct r05_node *p[50] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_var (s.L (Brackets e.SubHole) e.Hole s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    p[15] = p[12]->next;
    p[16] = p[12];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+17, p[16], p[4]))
        continue;
      r05_close_evar(p+19, p[18], p[4]);
      if (! r05_svar_left(p+21, p[17], p[18]))
        continue;
      if (! r05_brackets_left(p+22, p[21], p[18]))
        continue;
      if (! r05_function_left(p+24, p[22], p[23], &r05f_Brackets))
        continue;
      r05_close_evar(p+25, p[24], p[23]);
      if (! r05_svar_right(p+27, p[23], p[18]))
        continue;
      r05_close_evar(p+28, p[23], p[27]);

      r05_reset_allocator();
      r05_alloc_open_call(p+30);
      r05_alloc_function(&r05f_DoGenPatternu_check);
      r05_alloc_svar(p+10);
      r05_alloc_open_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_svar(p+21);
      r05_alloc_open_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_insert_pos(p+38);
      r05_alloc_close_bracket(p+39);
      r05_alloc_svar(p+27);
      r05_alloc_open_bracket(p+40);
      r05_alloc_insert_pos(p+41);
      r05_alloc_close_bracket(p+42);
      r05_alloc_open_bracket(p+43);
      r05_alloc_insert_pos(p+44);
      r05_alloc_close_bracket(p+45);
      r05_alloc_open_bracket(p+46);
      r05_alloc_insert_pos(p+47);
      r05_alloc_close_bracket(p+48);
      r05_alloc_svar(p+10);
      r05_alloc_close_call(p+49);
      r05_push_stack(p[49]);
      r05_push_stack(p[30]);
      r05_link_brackets(p[46], p[48]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[43], p[45]);
      r05_correct_evar(p+6);
      r05_link_brackets(p[40], p[42]);
      r05_correct_evar(p+19);
      r05_link_brackets(p[37], p[39]);
      r05_correct_evar(p+28);
      r05_link_brackets(p[34], p[36]);
      r05_correct_evar(p+25);
      r05_link_brackets(p[31], p[33]);
      r05_correct_evar(p+15);
      r05_correct_evar(p+13);
      r05_splice_evar(p[32], p+13);
      r05_splice_evar(p[32], p+15);
      r05_splice_evar(p[35], p+25);
      r05_splice_evar(p[38], p+28);
      r05_splice_evar(p[41], p+19);
      r05_splice_evar(p[44], p+6);
      r05_splice_evar(p[47], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+15, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* e.Holes-B_rest: 15 */
    struct r05_node *p[26] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_rest (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[12], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoGenPatternu_cont);
    r05_alloc_svar(p+10);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+15);
    r05_correct_evar(p+13);
    r05_splice_evar(p[18], p+13);
    r05_splice_evar(p[18], p+15);
    r05_splice_evar(p[20], p+6);
    r05_splice_evar(p[23], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_cont, "DoGenPattern_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B: 11 */
    /* e.Holes-E: 15 */
    /* s.L: 17 */
    /* s.R: 18 */
    /* e.Hole: 22 */
    /* e.SubHole: 24 */
    struct r05_node *p[46] = { 0 };
    /* s.Stack e.Holes-B (s.L e.Hole (Brackets e.SubHole) s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    p[11] = p[10]->next;
    p[12] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+13, p[12], p[4]))
        continue;
      r05_close_evar(p+15, p[14], p[4]);
      if (! r05_svar_left(p+17, p[13], p[14]))
        continue;
      if (! r05_svar_right(p+18, p[17], p[14]))
        continue;
      if (! r05_brackets_right(p+19, p[17], p[18]))
        continue;
      if (! r05_function_left(p+21, p[19], p[20], &r05f_Brackets))
        continue;
      r05_close_evar(p+22, p[17], p[19]);
      r05_close_evar(p+24, p[21], p[20]);

      r05_reset_allocator();
      r05_alloc_open_call(p+26);
      r05_alloc_function(&r05f_DoGenPatternu_check1);
      r05_alloc_svar(p+10);
      r05_alloc_open_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_bracket(p+29);
      r05_alloc_svar(p+17);
      r05_alloc_open_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_bracket(p+32);
      r05_alloc_open_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_close_bracket(p+35);
      r05_alloc_svar(p+18);
      r05_alloc_open_bracket(p+36);
      r05_alloc_insert_pos(p+37);
      r05_alloc_close_bracket(p+38);
      r05_alloc_open_bracket(p+39);
      r05_alloc_insert_pos(p+40);
      r05_alloc_close_bracket(p+41);
      r05_alloc_open_bracket(p+42);
      r05_alloc_insert_pos(p+43);
      r05_alloc_close_bracket(p+44);
      r05_alloc_svar(p+10);
      r05_alloc_close_call(p+45);
      r05_push_stack(p[45]);
      r05_push_stack(p[26]);
      r05_link_brackets(p[42], p[44]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[39], p[41]);
      r05_correct_evar(p+6);
      r05_link_brackets(p[36], p[38]);
      r05_correct_evar(p+15);
      r05_link_brackets(p[33], p[35]);
      r05_correct_evar(p+24);
      r05_link_brackets(p[30], p[32]);
      r05_correct_evar(p+22);
      r05_link_brackets(p[27], p[29]);
      r05_correct_evar(p+11);
      r05_splice_evar(p[28], p+11);
      r05_splice_evar(p[31], p+22);
      r05_splice_evar(p[34], p+24);
      r05_splice_evar(p[37], p+15);
      r05_splice_evar(p[40], p+6);
      r05_splice_evar(p[43], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+11, p[4]));
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
    r05_alloc_function(&r05f_DoGenPatternu_cont1);
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

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_check0, "DoGenPattern_check0") {
  r05_this_is_generated_function();

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* e.SubHole: 12 */
    /* e.Hole: 14 */
    /* s.R: 16 */
    /* e.Holes-E: 23 */
    /* e.Vars: 25 */
    /* e.Commands: 27 */
    /* s.LB: 29 */
    /* s.RB: 30 */
    struct r05_node *p[51] = { 0 };
    /* s.Stack (e.Holes-B) s.L (e.SubHole) (e.Hole) s.R (e.Holes-E) (e.Vars) (e.Commands) s.LB s.RB */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[10], p[11]);
    if (! r05_svar_left(p+16, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    r05_close_evar(p+23, p[17], p[18]);
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    if (! r05_svar_left(p+29, p[22], p[1]))
      continue;
    if (! r05_svar_left(p+30, p[29], p[1]))
      continue;
    if (! r05_empty_hole(p[30], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_DoGenPattern);
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_Inc2);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_svar(p+29);
    r05_alloc_insert_pos(p+36);
    r05_alloc_svar(p+30);
    r05_alloc_close_bracket(p+37);
    r05_alloc_open_bracket(p+38);
    r05_alloc_svar(p+30);
    r05_alloc_insert_pos(p+39);
    r05_alloc_svar(p+16);
    r05_alloc_close_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_open_bracket(p+47);
    r05_alloc_function(&r05f_CmdMatch);
    r05_alloc_function(&r05f_LEFT);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+16);
    r05_alloc_svar(p+29);
    r05_alloc_function(&r05f_Brackets);
    r05_alloc_close_bracket(p+48);
    r05_alloc_close_bracket(p+49);
    r05_alloc_close_call(p+50);
    r05_push_stack(p[50]);
    r05_push_stack(p[31]);
    r05_link_brackets(p[45], p[49]);
    r05_link_brackets(p[47], p[48]);
    r05_correct_evar(p+27);
    r05_link_brackets(p[42], p[44]);
    r05_correct_evar(p+25);
    r05_correct_evar(p+23);
    r05_link_brackets(p[38], p[40]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+5);
    r05_push_stack(p[33]);
    r05_push_stack(p[32]);
    r05_splice_evar(p[34], p+5);
    r05_splice_evar(p[36], p+12);
    r05_splice_evar(p[39], p+14);
    r05_splice_evar(p[41], p+23);
    r05_splice_evar(p[43], p+25);
    r05_splice_evar(p[46], p+27);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* e.SubHole: 12 */
    /* e.Hole: 14 */
    /* s.R: 16 */
    /* e.Holes-E: 23 */
    /* e.Vars: 25 */
    /* e.Commands: 27 */
    /* s.LB: 29 */
    /* e.Other: 30 */
    struct r05_node *p[52] = { 0 };
    /* s.Stack (e.Holes-B) s.L (e.SubHole) (e.Hole) s.R (e.Holes-E) (e.Vars) (e.Commands) s.LB e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[10], p[11]);
    if (! r05_svar_left(p+16, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    r05_close_evar(p+23, p[17], p[18]);
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    if (! r05_svar_left(p+29, p[22], p[1]))
      continue;
    r05_close_evar(p+30, p[29], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_DoGenPatternu_cont0);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_svar(p+7);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_open_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_svar(p+16);
    r05_alloc_open_bracket(p+42);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_close_bracket(p+50);
    r05_alloc_svar(p+29);
    r05_alloc_close_call(p+51);
    r05_push_stack(p[51]);
    r05_push_stack(p[32]);
    r05_link_brackets(p[48], p[50]);
    r05_correct_evar(p+27);
    r05_link_brackets(p[45], p[47]);
    r05_correct_evar(p+25);
    r05_link_brackets(p[42], p[44]);
    r05_correct_evar(p+23);
    r05_link_brackets(p[39], p[41]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[33], p[35]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[34], p+5);
    r05_splice_evar(p[37], p+12);
    r05_splice_evar(p[40], p+14);
    r05_splice_evar(p[43], p+23);
    r05_splice_evar(p[46], p+25);
    r05_splice_evar(p[49], p+27);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_cont0, "DoGenPattern_cont0") {
  r05_this_is_generated_function();

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* e.SubHole: 12 */
    /* e.Hole: 14 */
    /* s.R: 16 */
    /* e.Holes-E: 23 */
    /* e.Vars: 25 */
    /* e.Commands: 27 */
    /* e.Other: 29 */
    struct r05_node *p[49] = { 0 };
    /* s.Stack (e.Holes-B) s.L (e.SubHole) (e.Hole) s.R (e.Holes-E) (e.Vars) (e.Commands) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[10], p[11]);
    if (! r05_svar_left(p+16, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    r05_close_evar(p+23, p[17], p[18]);
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    r05_close_evar(p+29, p[22], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_DoGenPatternu_forward);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_svar(p+7);
    r05_alloc_open_bracket(p+36);
    r05_alloc_function(&r05f_Brackets);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_svar(p+16);
    r05_alloc_close_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_close_call(p+48);
    r05_push_stack(p[48]);
    r05_push_stack(p[31]);
    r05_link_brackets(p[45], p[47]);
    r05_correct_evar(p+27);
    r05_link_brackets(p[42], p[44]);
    r05_correct_evar(p+25);
    r05_correct_evar(p+23);
    r05_link_brackets(p[35], p[40]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[33], p+5);
    r05_splice_evar(p[37], p+12);
    r05_splice_evar(p[39], p+14);
    r05_splice_evar(p[41], p+23);
    r05_splice_evar(p[43], p+25);
    r05_splice_evar(p[46], p+27);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_check1, "DoGenPattern_check1") {
  r05_this_is_generated_function();

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* e.Hole: 12 */
    /* e.SubHole: 14 */
    /* s.R: 16 */
    /* e.Holes-E: 23 */
    /* e.Vars: 25 */
    /* e.Commands: 27 */
    /* s.LB: 29 */
    struct r05_node *p[52] = { 0 };
    /* s.Stack (e.Holes-B) s.L (e.Hole) (e.SubHole) s.R (e.Holes-E) (e.Vars) (e.Commands) s.LB */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[10], p[11]);
    if (! r05_svar_left(p+16, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    r05_close_evar(p+23, p[17], p[18]);
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    if (! r05_svar_left(p+29, p[22], p[1]))
      continue;
    if (! r05_empty_hole(p[29], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_DoGenPatternu_check2);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_svar(p+7);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_svar(p+16);
    r05_alloc_open_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_close_bracket(p+42);
    r05_alloc_open_bracket(p+43);
    r05_alloc_insert_pos(p+44);
    r05_alloc_close_bracket(p+45);
    r05_alloc_open_bracket(p+46);
    r05_alloc_insert_pos(p+47);
    r05_alloc_close_bracket(p+48);
    r05_alloc_svar(p+29);
    r05_alloc_open_call(p+49);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+50);
    r05_alloc_close_call(p+51);
    r05_push_stack(p[51]);
    r05_push_stack(p[30]);
    r05_push_stack(p[50]);
    r05_push_stack(p[49]);
    r05_link_brackets(p[46], p[48]);
    r05_correct_evar(p+27);
    r05_link_brackets(p[43], p[45]);
    r05_correct_evar(p+25);
    r05_link_brackets(p[40], p[42]);
    r05_correct_evar(p+23);
    r05_link_brackets(p[37], p[39]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[32], p+5);
    r05_splice_evar(p[35], p+12);
    r05_splice_evar(p[38], p+14);
    r05_splice_evar(p[41], p+23);
    r05_splice_evar(p[44], p+25);
    r05_splice_evar(p[47], p+27);
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
    r05_alloc_function(&r05f_DoGenPatternu_cont2);
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

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_forward0, "DoGenPattern_forward0") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* t.Holes-B_next: 15 */
    /* e.Holes-B_rest: 17 */
    struct r05_node *p[31] = { 0 };
    /* s.Stack (e.Holes-B_fix) t.Holes-B_next e.Holes-B_rest (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    if (! r05_tvar_left(p+15, p[12], p[4]))
      continue;
    r05_close_evar(p+17, p[16], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_DoGenPatternu_next0);
    r05_alloc_svar(p+10);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+17);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_splice_evar(p[21], p+13);
    r05_splice_tvar(p[21], p+15);
    r05_splice_evar(p[23], p+17);
    r05_splice_evar(p[25], p+6);
    r05_splice_evar(p[28], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Holes-B_fix: 8 */
    /* e.Vars: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    struct r05_node *p[24] = { 0 };
    /* s.Stack (e.Holes-B_fix) (e.Vars) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+6, p[0], p[4]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[2], p[3]);
    if (! r05_svar_left(p+14, p[0], p[6]))
      continue;
    if (! r05_empty_hole(p[14], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoGenPatternu_cont1);
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_splice_evar(p[16], p+8);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[21], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_next0, "DoGenPattern_next0") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* e.Holes-B_var: 15 */
    /* e.Holes-E: 19 */
    /* s.L: 21 */
    /* s.R: 22 */
    /* e.Hole: 26 */
    /* e.SubHole: 28 */
    struct r05_node *p[50] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_var (s.L e.Hole (Brackets e.SubHole) s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    p[15] = p[12]->next;
    p[16] = p[12];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+17, p[16], p[4]))
        continue;
      r05_close_evar(p+19, p[18], p[4]);
      if (! r05_svar_left(p+21, p[17], p[18]))
        continue;
      if (! r05_svar_right(p+22, p[21], p[18]))
        continue;
      if (! r05_brackets_right(p+23, p[21], p[22]))
        continue;
      if (! r05_function_left(p+25, p[23], p[24], &r05f_Brackets))
        continue;
      r05_close_evar(p+26, p[21], p[23]);
      r05_close_evar(p+28, p[25], p[24]);

      r05_reset_allocator();
      r05_alloc_open_call(p+30);
      r05_alloc_function(&r05f_DoGenPatternu_check1);
      r05_alloc_svar(p+10);
      r05_alloc_open_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_svar(p+21);
      r05_alloc_open_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_insert_pos(p+38);
      r05_alloc_close_bracket(p+39);
      r05_alloc_svar(p+22);
      r05_alloc_open_bracket(p+40);
      r05_alloc_insert_pos(p+41);
      r05_alloc_close_bracket(p+42);
      r05_alloc_open_bracket(p+43);
      r05_alloc_insert_pos(p+44);
      r05_alloc_close_bracket(p+45);
      r05_alloc_open_bracket(p+46);
      r05_alloc_insert_pos(p+47);
      r05_alloc_close_bracket(p+48);
      r05_alloc_svar(p+10);
      r05_alloc_close_call(p+49);
      r05_push_stack(p[49]);
      r05_push_stack(p[30]);
      r05_link_brackets(p[46], p[48]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[43], p[45]);
      r05_correct_evar(p+6);
      r05_link_brackets(p[40], p[42]);
      r05_correct_evar(p+19);
      r05_link_brackets(p[37], p[39]);
      r05_correct_evar(p+28);
      r05_link_brackets(p[34], p[36]);
      r05_correct_evar(p+26);
      r05_link_brackets(p[31], p[33]);
      r05_correct_evar(p+15);
      r05_correct_evar(p+13);
      r05_splice_evar(p[32], p+13);
      r05_splice_evar(p[32], p+15);
      r05_splice_evar(p[35], p+26);
      r05_splice_evar(p[38], p+28);
      r05_splice_evar(p[41], p+19);
      r05_splice_evar(p[44], p+6);
      r05_splice_evar(p[47], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+15, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* e.Holes-B_rest: 15 */
    struct r05_node *p[26] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_rest (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[12], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoGenPatternu_cont1);
    r05_alloc_svar(p+10);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+15);
    r05_correct_evar(p+13);
    r05_splice_evar(p[18], p+13);
    r05_splice_evar(p[18], p+15);
    r05_splice_evar(p[20], p+6);
    r05_splice_evar(p[23], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_cont1, "DoGenPattern_cont1") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B: 11 */
    /* e.Holes-E: 15 */
    /* s.L: 17 */
    /* s.R: 18 */
    struct r05_node *p[30] = { 0 };
    /* s.Stack e.Holes-B (s.L s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    p[11] = p[10]->next;
    p[12] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+13, p[12], p[4]))
        continue;
      r05_close_evar(p+15, p[14], p[4]);
      if (! r05_svar_left(p+17, p[13], p[14]))
        continue;
      if (! r05_svar_left(p+18, p[17], p[14]))
        continue;
      if (! r05_empty_hole(p[18], p[14]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_DoGenPattern);
      r05_alloc_svar(p+10);
      r05_alloc_insert_pos(p+20);
      r05_alloc_open_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_open_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_open_bracket(p+26);
      r05_alloc_function(&r05f_CmdEmpty);
      r05_alloc_svar(p+17);
      r05_alloc_svar(p+18);
      r05_alloc_close_bracket(p+27);
      r05_alloc_close_bracket(p+28);
      r05_alloc_close_call(p+29);
      r05_push_stack(p[29]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[24], p[28]);
      r05_link_brackets(p[26], p[27]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[21], p[23]);
      r05_correct_evar(p+6);
      r05_correct_evar(p+15);
      r05_correct_evar(p+11);
      r05_splice_evar(p[20], p+11);
      r05_splice_evar(p[20], p+15);
      r05_splice_evar(p[22], p+6);
      r05_splice_evar(p[25], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+11, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Commands: 6 */
    /* s.Stack: 8 */
    /* e.Holes-B: 9 */
    /* e.Holes-E: 13 */
    /* s.L: 15 */
    /* t.SrcPos: 19 */
    /* s.Mode: 21, 33 */
    /* e.Index: 22, 34 */
    /* s.R: 24 */
    /* e.Hole: 25 */
    /* e.Vars-B: 27 */
    /* e.Insts: 36 */
    /* e.Vars-E: 38 */
    /* s.Sample: 40 */
    struct r05_node *p[70] = { 0 };
    /* s.Stack e.Holes-B (s.L (Variable t.SrcPos s.Mode e.Index) e.Hole s.R) e.Holes-E (e.Vars-B (s.Mode e.Index s.Sample (e.Insts)) e.Vars-E) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    if (! r05_svar_left(p+8, p[0], p[4]))
      continue;
    p[9] = p[8]->next;
    p[10] = p[8];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+11, p[10], p[4]))
        continue;
      r05_close_evar(p+13, p[12], p[4]);
      if (! r05_svar_left(p+15, p[11], p[12]))
        continue;
      if (! r05_brackets_left(p+16, p[15], p[12]))
        continue;
      if (! r05_function_left(p+18, p[16], p[17], &r05f_Variable))
        continue;
      if (! r05_tvar_left(p+19, p[18], p[17]))
        continue;
      if (! r05_svar_left(p+21, p[20], p[17]))
        continue;
      r05_close_evar(p+22, p[21], p[17]);
      if (! r05_svar_right(p+24, p[17], p[12]))
        continue;
      r05_close_evar(p+25, p[17], p[24]);
      p[27] = p[4]->next;
      p[28] = p[4];
      r05_start_e_loop();
      do {
        if (! r05_brackets_left(p+29, p[28], p[5]))
          continue;
        if (! r05_brackets_right(p+31, p[29], p[30]))
          continue;
        if (! r05_repeated_svar_left(p+33, p[29], p[31], p+21))
          continue;
        if (! r05_repeated_evar_left(p+34, p[33], p[31], p+22))
          continue;
        r05_close_evar(p+36, p[31], p[32]);
        r05_close_evar(p+38, p[30], p[5]);
        if (! r05_svar_left(p+40, p[35], p[31]))
          continue;
        if (! r05_empty_hole(p[40], p[31]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+41);
        r05_alloc_function(&r05f_DoGenPatternu_check3);
        r05_alloc_svar(p+8);
        r05_alloc_open_bracket(p+42);
        r05_alloc_insert_pos(p+43);
        r05_alloc_close_bracket(p+44);
        r05_alloc_svar(p+15);
        r05_alloc_insert_pos(p+45);
        r05_alloc_open_bracket(p+46);
        r05_alloc_insert_pos(p+47);
        r05_alloc_close_bracket(p+48);
        r05_alloc_svar(p+24);
        r05_alloc_open_bracket(p+49);
        r05_alloc_insert_pos(p+50);
        r05_alloc_close_bracket(p+51);
        r05_alloc_open_bracket(p+52);
        r05_alloc_insert_pos(p+53);
        r05_alloc_close_bracket(p+54);
        r05_alloc_svar(p+21);
        r05_alloc_open_bracket(p+55);
        r05_alloc_insert_pos(p+56);
        r05_alloc_close_bracket(p+57);
        r05_alloc_svar(p+40);
        r05_alloc_open_bracket(p+58);
        r05_alloc_insert_pos(p+59);
        r05_alloc_close_bracket(p+60);
        r05_alloc_open_bracket(p+61);
        r05_alloc_insert_pos(p+62);
        r05_alloc_close_bracket(p+63);
        r05_alloc_open_bracket(p+64);
        r05_alloc_insert_pos(p+65);
        r05_alloc_close_bracket(p+66);
        r05_alloc_open_call(p+67);
        r05_alloc_function(&r05f_VarRightSide);
        r05_alloc_svar(p+8);
        r05_alloc_svar(p+21);
        r05_alloc_close_call(p+68);
        r05_alloc_close_call(p+69);
        r05_push_stack(p[69]);
        r05_push_stack(p[41]);
        r05_push_stack(p[68]);
        r05_push_stack(p[67]);
        r05_link_brackets(p[64], p[66]);
        r05_correct_evar(p+6);
        r05_link_brackets(p[61], p[63]);
        r05_correct_evar(p+38);
        r05_link_brackets(p[58], p[60]);
        r05_correct_evar(p+36);
        r05_link_brackets(p[55], p[57]);
        r05_correct_evar(p+22);
        r05_link_brackets(p[52], p[54]);
        r05_correct_evar(p+27);
        r05_link_brackets(p[49], p[51]);
        r05_correct_evar(p+13);
        r05_link_brackets(p[46], p[48]);
        r05_correct_evar(p+25);
        r05_link_brackets(p[42], p[44]);
        r05_correct_evar(p+9);
        r05_splice_evar(p[43], p+9);
        r05_splice_tvar(p[45], p+19);
        r05_splice_evar(p[47], p+25);
        r05_splice_evar(p[50], p+13);
        r05_splice_evar(p[53], p+27);
        r05_splice_evar(p[56], p+22);
        r05_splice_evar(p[59], p+36);
        r05_splice_evar(p[62], p+38);
        r05_splice_evar(p[65], p+6);
        r05_splice_from_freelist(arg_begin);
        r05_splice_to_freelist(arg_begin, arg_end);
        return;
      } while (r05_open_evar_advance(p+27, p[5]));
      r05_stop_e_loop();
    } while (r05_open_evar_advance(p+9, p[4]));
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
    r05_alloc_function(&r05f_DoGenPatternu_cont3);
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

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_check2, "DoGenPattern_check2") {
  r05_this_is_generated_function();

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* e.Hole: 12 */
    /* e.SubHole: 14 */
    /* s.R: 16 */
    /* e.Holes-E: 23 */
    /* e.Vars: 25 */
    /* e.Commands: 27 */
    /* s.LB: 29 */
    /* s.RB: 30 */
    struct r05_node *p[51] = { 0 };
    /* s.Stack (e.Holes-B) s.L (e.Hole) (e.SubHole) s.R (e.Holes-E) (e.Vars) (e.Commands) s.LB s.RB */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[10], p[11]);
    if (! r05_svar_left(p+16, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    r05_close_evar(p+23, p[17], p[18]);
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    if (! r05_svar_left(p+29, p[22], p[1]))
      continue;
    if (! r05_svar_left(p+30, p[29], p[1]))
      continue;
    if (! r05_empty_hole(p[30], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_DoGenPattern);
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_Inc2);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_svar(p+7);
    r05_alloc_insert_pos(p+36);
    r05_alloc_svar(p+29);
    r05_alloc_close_bracket(p+37);
    r05_alloc_open_bracket(p+38);
    r05_alloc_svar(p+29);
    r05_alloc_insert_pos(p+39);
    r05_alloc_svar(p+30);
    r05_alloc_close_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_open_bracket(p+47);
    r05_alloc_function(&r05f_CmdMatch);
    r05_alloc_function(&r05f_RIGHT);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+16);
    r05_alloc_svar(p+29);
    r05_alloc_function(&r05f_Brackets);
    r05_alloc_close_bracket(p+48);
    r05_alloc_close_bracket(p+49);
    r05_alloc_close_call(p+50);
    r05_push_stack(p[50]);
    r05_push_stack(p[31]);
    r05_link_brackets(p[45], p[49]);
    r05_link_brackets(p[47], p[48]);
    r05_correct_evar(p+27);
    r05_link_brackets(p[42], p[44]);
    r05_correct_evar(p+25);
    r05_correct_evar(p+23);
    r05_link_brackets(p[38], p[40]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+5);
    r05_push_stack(p[33]);
    r05_push_stack(p[32]);
    r05_splice_evar(p[34], p+5);
    r05_splice_evar(p[36], p+12);
    r05_splice_evar(p[39], p+14);
    r05_splice_evar(p[41], p+23);
    r05_splice_evar(p[43], p+25);
    r05_splice_evar(p[46], p+27);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* e.Hole: 12 */
    /* e.SubHole: 14 */
    /* s.R: 16 */
    /* e.Holes-E: 23 */
    /* e.Vars: 25 */
    /* e.Commands: 27 */
    /* s.LB: 29 */
    /* e.Other: 30 */
    struct r05_node *p[52] = { 0 };
    /* s.Stack (e.Holes-B) s.L (e.Hole) (e.SubHole) s.R (e.Holes-E) (e.Vars) (e.Commands) s.LB e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[10], p[11]);
    if (! r05_svar_left(p+16, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    r05_close_evar(p+23, p[17], p[18]);
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    if (! r05_svar_left(p+29, p[22], p[1]))
      continue;
    r05_close_evar(p+30, p[29], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_DoGenPatternu_cont2);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_svar(p+7);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_open_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_svar(p+16);
    r05_alloc_open_bracket(p+42);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_close_bracket(p+50);
    r05_alloc_svar(p+29);
    r05_alloc_close_call(p+51);
    r05_push_stack(p[51]);
    r05_push_stack(p[32]);
    r05_link_brackets(p[48], p[50]);
    r05_correct_evar(p+27);
    r05_link_brackets(p[45], p[47]);
    r05_correct_evar(p+25);
    r05_link_brackets(p[42], p[44]);
    r05_correct_evar(p+23);
    r05_link_brackets(p[39], p[41]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[33], p[35]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[34], p+5);
    r05_splice_evar(p[37], p+12);
    r05_splice_evar(p[40], p+14);
    r05_splice_evar(p[43], p+23);
    r05_splice_evar(p[46], p+25);
    r05_splice_evar(p[49], p+27);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_cont2, "DoGenPattern_cont2") {
  r05_this_is_generated_function();

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* e.Hole: 12 */
    /* e.SubHole: 14 */
    /* s.R: 16 */
    /* e.Holes-E: 23 */
    /* e.Vars: 25 */
    /* e.Commands: 27 */
    /* e.Other: 29 */
    struct r05_node *p[49] = { 0 };
    /* s.Stack (e.Holes-B) s.L (e.Hole) (e.SubHole) s.R (e.Holes-E) (e.Vars) (e.Commands) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[10], p[11]);
    if (! r05_svar_left(p+16, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    r05_close_evar(p+23, p[17], p[18]);
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    r05_close_evar(p+29, p[22], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_DoGenPatternu_forward0);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_svar(p+7);
    r05_alloc_insert_pos(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_function(&r05f_Brackets);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_svar(p+16);
    r05_alloc_close_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_close_call(p+48);
    r05_push_stack(p[48]);
    r05_push_stack(p[31]);
    r05_link_brackets(p[45], p[47]);
    r05_correct_evar(p+27);
    r05_link_brackets(p[42], p[44]);
    r05_correct_evar(p+25);
    r05_correct_evar(p+23);
    r05_link_brackets(p[35], p[40]);
    r05_link_brackets(p[37], p[39]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+12);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[33], p+5);
    r05_splice_evar(p[36], p+12);
    r05_splice_evar(p[38], p+14);
    r05_splice_evar(p[41], p+23);
    r05_splice_evar(p[43], p+25);
    r05_splice_evar(p[46], p+27);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_check3, "DoGenPattern_check3") {
  r05_this_is_generated_function();

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* t.SrcPos: 8 */
    /* e.Hole: 12 */
    /* s.R: 14 */
    /* e.Holes-E: 19 */
    /* e.Vars-B: 21 */
    /* s.Mode: 23 */
    /* e.Index: 26 */
    /* s.Sample: 28 */
    /* e.Insts: 35 */
    /* e.Vars-E: 37 */
    /* e.Commands: 39 */
    /* s.VarRight: 41 */
    struct r05_node *p[66] = { 0 };
    /* s.Stack (e.Holes-B) s.L t.SrcPos (e.Hole) s.R (e.Holes-E) (e.Vars-B) s.Mode (e.Index) s.Sample (e.Insts) (e.Vars-E) (e.Commands) s.VarRight */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_tvar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[10], p[11]);
    if (! r05_svar_left(p+14, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    r05_close_evar(p+19, p[15], p[16]);
    r05_close_evar(p+21, p[17], p[18]);
    if (! r05_svar_left(p+23, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+24, p[23], p[1]))
      continue;
    r05_close_evar(p+26, p[24], p[25]);
    if (! r05_svar_left(p+28, p[25], p[1]))
      continue;
    if (! r05_brackets_left(p+29, p[28], p[1]))
      continue;
    if (! r05_brackets_left(p+31, p[30], p[1]))
      continue;
    if (! r05_brackets_left(p+33, p[32], p[1]))
      continue;
    r05_close_evar(p+35, p[29], p[30]);
    r05_close_evar(p+37, p[31], p[32]);
    r05_close_evar(p+39, p[33], p[34]);
    if (! r05_svar_left(p+41, p[34], p[1]))
      continue;
    if (! r05_empty_hole(p[41], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+42);
    r05_alloc_function(&r05f_DoGenPattern);
    r05_alloc_open_call(p+43);
    r05_alloc_function(&r05f_IncMode);
    r05_alloc_svar(p+2);
    r05_alloc_svar(p+23);
    r05_alloc_close_call(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_open_bracket(p+46);
    r05_alloc_svar(p+41);
    r05_alloc_insert_pos(p+47);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_open_bracket(p+50);
    r05_alloc_insert_pos(p+51);
    r05_alloc_open_bracket(p+52);
    r05_alloc_svar(p+23);
    r05_alloc_insert_pos(p+53);
    r05_alloc_svar(p+28);
    r05_alloc_open_bracket(p+54);
    r05_alloc_insert_pos(p+55);
    r05_alloc_svar(p+2);
    r05_alloc_close_bracket(p+56);
    r05_alloc_close_bracket(p+57);
    r05_alloc_insert_pos(p+58);
    r05_alloc_close_bracket(p+59);
    r05_alloc_open_bracket(p+60);
    r05_alloc_insert_pos(p+61);
    r05_alloc_open_bracket(p+62);
    r05_alloc_function(&r05f_CmdMatch);
    r05_alloc_function(&r05f_LEFT);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+14);
    r05_alloc_svar(p+2);
    r05_alloc_function(&r05f_Repeated);
    r05_alloc_svar(p+23);
    r05_alloc_svar(p+28);
    r05_alloc_close_bracket(p+63);
    r05_alloc_close_bracket(p+64);
    r05_alloc_close_call(p+65);
    r05_push_stack(p[65]);
    r05_push_stack(p[42]);
    r05_link_brackets(p[60], p[64]);
    r05_link_brackets(p[62], p[63]);
    r05_correct_evar(p+39);
    r05_link_brackets(p[50], p[59]);
    r05_correct_evar(p+37);
    r05_link_brackets(p[52], p[57]);
    r05_link_brackets(p[54], p[56]);
    r05_correct_evar(p+35);
    r05_correct_evar(p+26);
    r05_correct_evar(p+21);
    r05_correct_evar(p+19);
    r05_link_brackets(p[46], p[48]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+5);
    r05_push_stack(p[44]);
    r05_push_stack(p[43]);
    r05_splice_evar(p[45], p+5);
    r05_splice_evar(p[47], p+12);
    r05_splice_evar(p[49], p+19);
    r05_splice_evar(p[51], p+21);
    r05_splice_evar(p[53], p+26);
    r05_splice_evar(p[55], p+35);
    r05_splice_evar(p[58], p+37);
    r05_splice_evar(p[61], p+39);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* t.SrcPos: 8 */
    /* e.Hole: 12 */
    /* s.R: 14 */
    /* e.Holes-E: 19 */
    /* e.Vars-B: 21 */
    /* s.Mode: 23 */
    /* e.Index: 26 */
    /* s.Sample: 28 */
    /* e.Insts: 35 */
    /* e.Vars-E: 37 */
    /* e.Commands: 39 */
    /* e.Other: 41 */
    struct r05_node *p[70] = { 0 };
    /* s.Stack (e.Holes-B) s.L t.SrcPos (e.Hole) s.R (e.Holes-E) (e.Vars-B) s.Mode (e.Index) s.Sample (e.Insts) (e.Vars-E) (e.Commands) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_tvar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[10], p[11]);
    if (! r05_svar_left(p+14, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[1]))
      continue;
    r05_close_evar(p+19, p[15], p[16]);
    r05_close_evar(p+21, p[17], p[18]);
    if (! r05_svar_left(p+23, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+24, p[23], p[1]))
      continue;
    r05_close_evar(p+26, p[24], p[25]);
    if (! r05_svar_left(p+28, p[25], p[1]))
      continue;
    if (! r05_brackets_left(p+29, p[28], p[1]))
      continue;
    if (! r05_brackets_left(p+31, p[30], p[1]))
      continue;
    if (! r05_brackets_left(p+33, p[32], p[1]))
      continue;
    r05_close_evar(p+35, p[29], p[30]);
    r05_close_evar(p+37, p[31], p[32]);
    r05_close_evar(p+39, p[33], p[34]);
    r05_close_evar(p+41, p[34], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+43);
    r05_alloc_function(&r05f_DoGenPatternu_forward1);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_open_bracket(p+47);
    r05_alloc_svar(p+7);
    r05_alloc_open_bracket(p+48);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+49);
    r05_alloc_svar(p+23);
    r05_alloc_insert_pos(p+50);
    r05_alloc_close_bracket(p+51);
    r05_alloc_insert_pos(p+52);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+53);
    r05_alloc_insert_pos(p+54);
    r05_alloc_open_bracket(p+55);
    r05_alloc_open_bracket(p+56);
    r05_alloc_insert_pos(p+57);
    r05_alloc_close_bracket(p+58);
    r05_alloc_open_bracket(p+59);
    r05_alloc_svar(p+23);
    r05_alloc_evar(p+26);
    r05_alloc_svar(p+28);
    r05_alloc_open_bracket(p+60);
    r05_alloc_insert_pos(p+61);
    r05_alloc_close_bracket(p+62);
    r05_alloc_close_bracket(p+63);
    r05_alloc_insert_pos(p+64);
    r05_alloc_close_bracket(p+65);
    r05_alloc_open_bracket(p+66);
    r05_alloc_insert_pos(p+67);
    r05_alloc_close_bracket(p+68);
    r05_alloc_close_call(p+69);
    r05_push_stack(p[69]);
    r05_push_stack(p[43]);
    r05_link_brackets(p[66], p[68]);
    r05_correct_evar(p+39);
    r05_link_brackets(p[55], p[65]);
    r05_correct_evar(p+37);
    r05_link_brackets(p[59], p[63]);
    r05_link_brackets(p[60], p[62]);
    r05_correct_evar(p+35);
    r05_link_brackets(p[56], p[58]);
    r05_correct_evar(p+21);
    r05_correct_evar(p+19);
    r05_link_brackets(p[47], p[53]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[48], p[51]);
    r05_correct_evar(p+26);
    r05_link_brackets(p[44], p[46]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[45], p+5);
    r05_splice_tvar(p[49], p+8);
    r05_splice_evar(p[50], p+26);
    r05_splice_evar(p[52], p+12);
    r05_splice_evar(p[54], p+19);
    r05_splice_evar(p[57], p+21);
    r05_splice_evar(p[61], p+35);
    r05_splice_evar(p[64], p+37);
    r05_splice_evar(p[67], p+39);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_forward1, "DoGenPattern_forward1") {
  r05_this_is_generated_function();

  do {
    /* e.Vars-B_fix: 8 */
    /* e.Commands: 10 */
    /* s.Stack: 12 */
    /* e.Holes-B: 17 */
    /* e.Holes-E: 19 */
    /* s.L: 21 */
    /* t.SrcPos: 25 */
    /* s.Mode: 27 */
    /* e.Index: 28 */
    /* t.Vars-B_next: 30 */
    /* e.Vars-B_rest: 32 */
    /* s.R: 34 */
    /* e.Hole: 35 */
    struct r05_node *p[59] = { 0 };
    /* s.Stack (e.Holes-B) (s.L (Variable t.SrcPos s.Mode e.Index) e.Hole s.R) e.Holes-E ((e.Vars-B_fix) t.Vars-B_next e.Vars-B_rest) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[2], p[3]);
    if (! r05_svar_left(p+12, p[0], p[4]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[4]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[4]))
      continue;
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[16], p[4]);
    if (! r05_svar_left(p+21, p[15], p[16]))
      continue;
    if (! r05_brackets_left(p+22, p[21], p[16]))
      continue;
    if (! r05_function_left(p+24, p[22], p[23], &r05f_Variable))
      continue;
    if (! r05_tvar_left(p+25, p[24], p[23]))
      continue;
    if (! r05_svar_left(p+27, p[26], p[23]))
      continue;
    r05_close_evar(p+28, p[27], p[23]);
    if (! r05_tvar_left(p+30, p[7], p[5]))
      continue;
    r05_close_evar(p+32, p[31], p[5]);
    if (! r05_svar_right(p+34, p[23], p[16]))
      continue;
    r05_close_evar(p+35, p[23], p[34]);

    r05_reset_allocator();
    r05_alloc_open_call(p+37);
    r05_alloc_function(&r05f_DoGenPatternu_next1);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_bracket(p+40);
    r05_alloc_open_bracket(p+41);
    r05_alloc_svar(p+21);
    r05_alloc_open_bracket(p+42);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+43);
    r05_alloc_svar(p+27);
    r05_alloc_insert_pos(p+44);
    r05_alloc_close_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_svar(p+34);
    r05_alloc_close_bracket(p+47);
    r05_alloc_insert_pos(p+48);
    r05_alloc_open_bracket(p+49);
    r05_alloc_open_bracket(p+50);
    r05_alloc_insert_pos(p+51);
    r05_alloc_close_bracket(p+52);
    r05_alloc_insert_pos(p+53);
    r05_alloc_close_bracket(p+54);
    r05_alloc_open_bracket(p+55);
    r05_alloc_insert_pos(p+56);
    r05_alloc_close_bracket(p+57);
    r05_alloc_close_call(p+58);
    r05_push_stack(p[58]);
    r05_push_stack(p[37]);
    r05_link_brackets(p[55], p[57]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[49], p[54]);
    r05_correct_evar(p+32);
    r05_link_brackets(p[50], p[52]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+19);
    r05_link_brackets(p[41], p[47]);
    r05_correct_evar(p+35);
    r05_link_brackets(p[42], p[45]);
    r05_correct_evar(p+28);
    r05_link_brackets(p[38], p[40]);
    r05_correct_evar(p+17);
    r05_splice_evar(p[39], p+17);
    r05_splice_tvar(p[43], p+25);
    r05_splice_evar(p[44], p+28);
    r05_splice_evar(p[46], p+35);
    r05_splice_evar(p[48], p+19);
    r05_splice_evar(p[51], p+8);
    r05_splice_tvar(p[51], p+30);
    r05_splice_evar(p[53], p+32);
    r05_splice_evar(p[56], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Vars-B_fix: 8 */
    /* e.Commands: 10 */
    /* s.Stack: 12 */
    /* e.Holes-B: 17 */
    /* e.Holes-E: 19 */
    /* s.L: 21 */
    /* t.SrcPos: 25 */
    /* s.Mode: 27 */
    /* e.Index: 28 */
    /* s.R: 30 */
    /* e.Hole: 31 */
    struct r05_node *p[52] = { 0 };
    /* s.Stack (e.Holes-B) (s.L (Variable t.SrcPos s.Mode e.Index) e.Hole s.R) e.Holes-E ((e.Vars-B_fix)) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    if (! r05_empty_hole(p[7], p[5]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[2], p[3]);
    if (! r05_svar_left(p+12, p[0], p[4]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[4]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[4]))
      continue;
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[16], p[4]);
    if (! r05_svar_left(p+21, p[15], p[16]))
      continue;
    if (! r05_brackets_left(p+22, p[21], p[16]))
      continue;
    if (! r05_function_left(p+24, p[22], p[23], &r05f_Variable))
      continue;
    if (! r05_tvar_left(p+25, p[24], p[23]))
      continue;
    if (! r05_svar_left(p+27, p[26], p[23]))
      continue;
    r05_close_evar(p+28, p[27], p[23]);
    if (! r05_svar_right(p+30, p[23], p[16]))
      continue;
    r05_close_evar(p+31, p[23], p[30]);

    r05_reset_allocator();
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_DoGenPatternu_forward2);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_svar(p+21);
    r05_alloc_open_bracket(p+38);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+39);
    r05_alloc_svar(p+27);
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_insert_pos(p+42);
    r05_alloc_svar(p+30);
    r05_alloc_close_bracket(p+43);
    r05_alloc_insert_pos(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_close_bracket(p+50);
    r05_alloc_close_call(p+51);
    r05_push_stack(p[51]);
    r05_push_stack(p[33]);
    r05_link_brackets(p[48], p[50]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[45], p[47]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+19);
    r05_link_brackets(p[37], p[43]);
    r05_correct_evar(p+31);
    r05_link_brackets(p[38], p[41]);
    r05_correct_evar(p+28);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+17);
    r05_splice_evar(p[35], p+17);
    r05_splice_tvar(p[39], p+25);
    r05_splice_evar(p[40], p+28);
    r05_splice_evar(p[42], p+31);
    r05_splice_evar(p[44], p+19);
    r05_splice_evar(p[46], p+8);
    r05_splice_evar(p[49], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_next1, "DoGenPattern_next1") {
  r05_this_is_generated_function();

  do {
    /* e.Vars-B_fix: 8 */
    /* e.Commands: 10 */
    /* s.Stack: 12 */
    /* e.Holes-B: 17 */
    /* e.Holes-E: 19 */
    /* s.L: 21 */
    /* t.SrcPos: 25 */
    /* s.Mode: 27, 39 */
    /* e.Index: 28, 40 */
    /* s.R: 30 */
    /* e.Hole: 31 */
    /* e.Vars-B_var: 33 */
    /* e.Insts: 42 */
    /* e.Vars-E: 44 */
    /* s.Sample: 46 */
    struct r05_node *p[76] = { 0 };
    /* s.Stack (e.Holes-B) (s.L (Variable t.SrcPos s.Mode e.Index) e.Hole s.R) e.Holes-E ((e.Vars-B_fix) e.Vars-B_var (s.Mode e.Index s.Sample (e.Insts)) e.Vars-E) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[2], p[3]);
    if (! r05_svar_left(p+12, p[0], p[4]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[4]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[4]))
      continue;
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[16], p[4]);
    if (! r05_svar_left(p+21, p[15], p[16]))
      continue;
    if (! r05_brackets_left(p+22, p[21], p[16]))
      continue;
    if (! r05_function_left(p+24, p[22], p[23], &r05f_Variable))
      continue;
    if (! r05_tvar_left(p+25, p[24], p[23]))
      continue;
    if (! r05_svar_left(p+27, p[26], p[23]))
      continue;
    r05_close_evar(p+28, p[27], p[23]);
    if (! r05_svar_right(p+30, p[23], p[16]))
      continue;
    r05_close_evar(p+31, p[23], p[30]);
    p[33] = p[7]->next;
    p[34] = p[7];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+35, p[34], p[5]))
        continue;
      if (! r05_brackets_right(p+37, p[35], p[36]))
        continue;
      if (! r05_repeated_svar_left(p+39, p[35], p[37], p+27))
        continue;
      if (! r05_repeated_evar_left(p+40, p[39], p[37], p+28))
        continue;
      r05_close_evar(p+42, p[37], p[38]);
      r05_close_evar(p+44, p[36], p[5]);
      if (! r05_svar_left(p+46, p[41], p[37]))
        continue;
      if (! r05_empty_hole(p[46], p[37]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+47);
      r05_alloc_function(&r05f_DoGenPatternu_check3);
      r05_alloc_svar(p+12);
      r05_alloc_open_bracket(p+48);
      r05_alloc_insert_pos(p+49);
      r05_alloc_close_bracket(p+50);
      r05_alloc_svar(p+21);
      r05_alloc_insert_pos(p+51);
      r05_alloc_open_bracket(p+52);
      r05_alloc_insert_pos(p+53);
      r05_alloc_close_bracket(p+54);
      r05_alloc_svar(p+30);
      r05_alloc_open_bracket(p+55);
      r05_alloc_insert_pos(p+56);
      r05_alloc_close_bracket(p+57);
      r05_alloc_open_bracket(p+58);
      r05_alloc_insert_pos(p+59);
      r05_alloc_close_bracket(p+60);
      r05_alloc_svar(p+27);
      r05_alloc_open_bracket(p+61);
      r05_alloc_insert_pos(p+62);
      r05_alloc_close_bracket(p+63);
      r05_alloc_svar(p+46);
      r05_alloc_open_bracket(p+64);
      r05_alloc_insert_pos(p+65);
      r05_alloc_close_bracket(p+66);
      r05_alloc_open_bracket(p+67);
      r05_alloc_insert_pos(p+68);
      r05_alloc_close_bracket(p+69);
      r05_alloc_open_bracket(p+70);
      r05_alloc_insert_pos(p+71);
      r05_alloc_close_bracket(p+72);
      r05_alloc_open_call(p+73);
      r05_alloc_function(&r05f_VarRightSide);
      r05_alloc_svar(p+12);
      r05_alloc_svar(p+27);
      r05_alloc_close_call(p+74);
      r05_alloc_close_call(p+75);
      r05_push_stack(p[75]);
      r05_push_stack(p[47]);
      r05_push_stack(p[74]);
      r05_push_stack(p[73]);
      r05_link_brackets(p[70], p[72]);
      r05_correct_evar(p+10);
      r05_link_brackets(p[67], p[69]);
      r05_correct_evar(p+44);
      r05_link_brackets(p[64], p[66]);
      r05_correct_evar(p+42);
      r05_link_brackets(p[61], p[63]);
      r05_correct_evar(p+28);
      r05_link_brackets(p[58], p[60]);
      r05_correct_evar(p+33);
      r05_correct_evar(p+8);
      r05_link_brackets(p[55], p[57]);
      r05_correct_evar(p+19);
      r05_link_brackets(p[52], p[54]);
      r05_correct_evar(p+31);
      r05_link_brackets(p[48], p[50]);
      r05_correct_evar(p+17);
      r05_splice_evar(p[49], p+17);
      r05_splice_tvar(p[51], p+25);
      r05_splice_evar(p[53], p+31);
      r05_splice_evar(p[56], p+19);
      r05_splice_evar(p[59], p+8);
      r05_splice_evar(p[59], p+33);
      r05_splice_evar(p[62], p+28);
      r05_splice_evar(p[65], p+42);
      r05_splice_evar(p[68], p+44);
      r05_splice_evar(p[71], p+10);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+33, p[5]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars-B_fix: 8 */
    /* e.Vars-B_rest: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    /* e.Holes-B: 19 */
    /* e.Holes-E: 21 */
    /* s.L: 23 */
    /* t.SrcPos: 27 */
    /* s.Mode: 29 */
    /* e.Index: 30 */
    /* s.R: 32 */
    /* e.Hole: 33 */
    struct r05_node *p[54] = { 0 };
    /* s.Stack (e.Holes-B) (s.L (Variable t.SrcPos s.Mode e.Index) e.Hole s.R) e.Holes-E ((e.Vars-B_fix) e.Vars-B_rest) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[7], p[5]);
    r05_close_evar(p+12, p[2], p[3]);
    if (! r05_svar_left(p+14, p[0], p[4]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[4]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[4]))
      continue;
    r05_close_evar(p+19, p[15], p[16]);
    r05_close_evar(p+21, p[18], p[4]);
    if (! r05_svar_left(p+23, p[17], p[18]))
      continue;
    if (! r05_brackets_left(p+24, p[23], p[18]))
      continue;
    if (! r05_function_left(p+26, p[24], p[25], &r05f_Variable))
      continue;
    if (! r05_tvar_left(p+27, p[26], p[25]))
      continue;
    if (! r05_svar_left(p+29, p[28], p[25]))
      continue;
    r05_close_evar(p+30, p[29], p[25]);
    if (! r05_svar_right(p+32, p[25], p[18]))
      continue;
    r05_close_evar(p+33, p[25], p[32]);

    r05_reset_allocator();
    r05_alloc_open_call(p+35);
    r05_alloc_function(&r05f_DoGenPatternu_forward2);
    r05_alloc_svar(p+14);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_open_bracket(p+39);
    r05_alloc_svar(p+23);
    r05_alloc_open_bracket(p+40);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+41);
    r05_alloc_svar(p+29);
    r05_alloc_insert_pos(p+42);
    r05_alloc_close_bracket(p+43);
    r05_alloc_insert_pos(p+44);
    r05_alloc_svar(p+32);
    r05_alloc_close_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_open_bracket(p+47);
    r05_alloc_insert_pos(p+48);
    r05_alloc_close_bracket(p+49);
    r05_alloc_open_bracket(p+50);
    r05_alloc_insert_pos(p+51);
    r05_alloc_close_bracket(p+52);
    r05_alloc_close_call(p+53);
    r05_push_stack(p[53]);
    r05_push_stack(p[35]);
    r05_link_brackets(p[50], p[52]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[47], p[49]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_correct_evar(p+21);
    r05_link_brackets(p[39], p[45]);
    r05_correct_evar(p+33);
    r05_link_brackets(p[40], p[43]);
    r05_correct_evar(p+30);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+19);
    r05_splice_evar(p[37], p+19);
    r05_splice_tvar(p[41], p+27);
    r05_splice_evar(p[42], p+30);
    r05_splice_evar(p[44], p+33);
    r05_splice_evar(p[46], p+21);
    r05_splice_evar(p[48], p+8);
    r05_splice_evar(p[48], p+10);
    r05_splice_evar(p[51], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_forward2, "DoGenPattern_forward2") {
  r05_this_is_generated_function();

  do {
    /* e.Vars-B_rest: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* t.Holes-B_next: 15 */
    /* e.Holes-B_rest: 17 */
    struct r05_node *p[31] = { 0 };
    /* s.Stack (e.Holes-B_fix) t.Holes-B_next e.Holes-B_rest (e.Vars-B_rest) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    if (! r05_tvar_left(p+15, p[12], p[4]))
      continue;
    r05_close_evar(p+17, p[16], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_DoGenPatternu_next2);
    r05_alloc_svar(p+10);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+17);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_splice_evar(p[21], p+13);
    r05_splice_tvar(p[21], p+15);
    r05_splice_evar(p[23], p+17);
    r05_splice_evar(p[25], p+6);
    r05_splice_evar(p[28], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Holes-B_fix: 8 */
    /* e.Vars-B_rest: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    struct r05_node *p[24] = { 0 };
    /* s.Stack (e.Holes-B_fix) (e.Vars-B_rest) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+6, p[0], p[4]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[2], p[3]);
    if (! r05_svar_left(p+14, p[0], p[6]))
      continue;
    if (! r05_empty_hole(p[14], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoGenPatternu_cont3);
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_splice_evar(p[16], p+8);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[21], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_next2, "DoGenPattern_next2") {
  r05_this_is_generated_function();

  do {
    /* e.Commands: 6 */
    /* s.Stack: 8 */
    /* e.Holes-B_fix: 11 */
    /* e.Holes-B_var: 13 */
    /* e.Holes-E: 17 */
    /* s.L: 19 */
    /* t.SrcPos: 23 */
    /* s.Mode: 25, 37 */
    /* e.Index: 26, 38 */
    /* s.R: 28 */
    /* e.Hole: 29 */
    /* e.Vars-B: 31 */
    /* e.Insts: 40 */
    /* e.Vars-E: 42 */
    /* s.Sample: 44 */
    struct r05_node *p[74] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_var (s.L (Variable t.SrcPos s.Mode e.Index) e.Hole s.R) e.Holes-E (e.Vars-B (s.Mode e.Index s.Sample (e.Insts)) e.Vars-E) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    if (! r05_svar_left(p+8, p[0], p[4]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[4]))
      continue;
    r05_close_evar(p+11, p[9], p[10]);
    p[13] = p[10]->next;
    p[14] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+15, p[14], p[4]))
        continue;
      r05_close_evar(p+17, p[16], p[4]);
      if (! r05_svar_left(p+19, p[15], p[16]))
        continue;
      if (! r05_brackets_left(p+20, p[19], p[16]))
        continue;
      if (! r05_function_left(p+22, p[20], p[21], &r05f_Variable))
        continue;
      if (! r05_tvar_left(p+23, p[22], p[21]))
        continue;
      if (! r05_svar_left(p+25, p[24], p[21]))
        continue;
      r05_close_evar(p+26, p[25], p[21]);
      if (! r05_svar_right(p+28, p[21], p[16]))
        continue;
      r05_close_evar(p+29, p[21], p[28]);
      p[31] = p[4]->next;
      p[32] = p[4];
      r05_start_e_loop();
      do {
        if (! r05_brackets_left(p+33, p[32], p[5]))
          continue;
        if (! r05_brackets_right(p+35, p[33], p[34]))
          continue;
        if (! r05_repeated_svar_left(p+37, p[33], p[35], p+25))
          continue;
        if (! r05_repeated_evar_left(p+38, p[37], p[35], p+26))
          continue;
        r05_close_evar(p+40, p[35], p[36]);
        r05_close_evar(p+42, p[34], p[5]);
        if (! r05_svar_left(p+44, p[39], p[35]))
          continue;
        if (! r05_empty_hole(p[44], p[35]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+45);
        r05_alloc_function(&r05f_DoGenPatternu_check3);
        r05_alloc_svar(p+8);
        r05_alloc_open_bracket(p+46);
        r05_alloc_insert_pos(p+47);
        r05_alloc_close_bracket(p+48);
        r05_alloc_svar(p+19);
        r05_alloc_insert_pos(p+49);
        r05_alloc_open_bracket(p+50);
        r05_alloc_insert_pos(p+51);
        r05_alloc_close_bracket(p+52);
        r05_alloc_svar(p+28);
        r05_alloc_open_bracket(p+53);
        r05_alloc_insert_pos(p+54);
        r05_alloc_close_bracket(p+55);
        r05_alloc_open_bracket(p+56);
        r05_alloc_insert_pos(p+57);
        r05_alloc_close_bracket(p+58);
        r05_alloc_svar(p+25);
        r05_alloc_open_bracket(p+59);
        r05_alloc_insert_pos(p+60);
        r05_alloc_close_bracket(p+61);
        r05_alloc_svar(p+44);
        r05_alloc_open_bracket(p+62);
        r05_alloc_insert_pos(p+63);
        r05_alloc_close_bracket(p+64);
        r05_alloc_open_bracket(p+65);
        r05_alloc_insert_pos(p+66);
        r05_alloc_close_bracket(p+67);
        r05_alloc_open_bracket(p+68);
        r05_alloc_insert_pos(p+69);
        r05_alloc_close_bracket(p+70);
        r05_alloc_open_call(p+71);
        r05_alloc_function(&r05f_VarRightSide);
        r05_alloc_svar(p+8);
        r05_alloc_svar(p+25);
        r05_alloc_close_call(p+72);
        r05_alloc_close_call(p+73);
        r05_push_stack(p[73]);
        r05_push_stack(p[45]);
        r05_push_stack(p[72]);
        r05_push_stack(p[71]);
        r05_link_brackets(p[68], p[70]);
        r05_correct_evar(p+6);
        r05_link_brackets(p[65], p[67]);
        r05_correct_evar(p+42);
        r05_link_brackets(p[62], p[64]);
        r05_correct_evar(p+40);
        r05_link_brackets(p[59], p[61]);
        r05_correct_evar(p+26);
        r05_link_brackets(p[56], p[58]);
        r05_correct_evar(p+31);
        r05_link_brackets(p[53], p[55]);
        r05_correct_evar(p+17);
        r05_link_brackets(p[50], p[52]);
        r05_correct_evar(p+29);
        r05_link_brackets(p[46], p[48]);
        r05_correct_evar(p+13);
        r05_correct_evar(p+11);
        r05_splice_evar(p[47], p+11);
        r05_splice_evar(p[47], p+13);
        r05_splice_tvar(p[49], p+23);
        r05_splice_evar(p[51], p+29);
        r05_splice_evar(p[54], p+17);
        r05_splice_evar(p[57], p+31);
        r05_splice_evar(p[60], p+26);
        r05_splice_evar(p[63], p+40);
        r05_splice_evar(p[66], p+42);
        r05_splice_evar(p[69], p+6);
        r05_splice_from_freelist(arg_begin);
        r05_splice_to_freelist(arg_begin, arg_end);
        return;
      } while (r05_open_evar_advance(p+31, p[5]));
      r05_stop_e_loop();
    } while (r05_open_evar_advance(p+13, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars-B_rest: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* e.Holes-B_rest: 15 */
    struct r05_node *p[26] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_rest (e.Vars-B_rest) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[12], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoGenPatternu_cont3);
    r05_alloc_svar(p+10);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+15);
    r05_correct_evar(p+13);
    r05_splice_evar(p[18], p+13);
    r05_splice_evar(p[18], p+15);
    r05_splice_evar(p[20], p+6);
    r05_splice_evar(p[23], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_cont3, "DoGenPattern_cont3") {
  r05_this_is_generated_function();

  do {
    /* e.Commands: 6 */
    /* s.Stack: 8 */
    /* e.Holes-B: 9 */
    /* e.Holes-E: 13 */
    /* s.L: 15 */
    /* s.R: 16 */
    /* e.Hole: 20 */
    /* t.SrcPos: 22 */
    /* s.Mode: 24, 33 */
    /* e.Index: 25, 34 */
    /* e.Vars-B: 27 */
    /* e.Insts: 36 */
    /* e.Vars-E: 38 */
    /* s.Sample: 40 */
    struct r05_node *p[70] = { 0 };
    /* s.Stack e.Holes-B (s.L e.Hole (Variable t.SrcPos s.Mode e.Index) s.R) e.Holes-E (e.Vars-B (s.Mode e.Index s.Sample (e.Insts)) e.Vars-E) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    if (! r05_svar_left(p+8, p[0], p[4]))
      continue;
    p[9] = p[8]->next;
    p[10] = p[8];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+11, p[10], p[4]))
        continue;
      r05_close_evar(p+13, p[12], p[4]);
      if (! r05_svar_left(p+15, p[11], p[12]))
        continue;
      if (! r05_svar_right(p+16, p[15], p[12]))
        continue;
      if (! r05_brackets_right(p+17, p[15], p[16]))
        continue;
      if (! r05_function_left(p+19, p[17], p[18], &r05f_Variable))
        continue;
      r05_close_evar(p+20, p[15], p[17]);
      if (! r05_tvar_left(p+22, p[19], p[18]))
        continue;
      if (! r05_svar_left(p+24, p[23], p[18]))
        continue;
      r05_close_evar(p+25, p[24], p[18]);
      p[27] = p[4]->next;
      p[28] = p[4];
      r05_start_e_loop();
      do {
        if (! r05_brackets_left(p+29, p[28], p[5]))
          continue;
        if (! r05_brackets_right(p+31, p[29], p[30]))
          continue;
        if (! r05_repeated_svar_left(p+33, p[29], p[31], p+24))
          continue;
        if (! r05_repeated_evar_left(p+34, p[33], p[31], p+25))
          continue;
        r05_close_evar(p+36, p[31], p[32]);
        r05_close_evar(p+38, p[30], p[5]);
        if (! r05_svar_left(p+40, p[35], p[31]))
          continue;
        if (! r05_empty_hole(p[40], p[31]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+41);
        r05_alloc_function(&r05f_DoGenPatternu_check4);
        r05_alloc_svar(p+8);
        r05_alloc_open_bracket(p+42);
        r05_alloc_insert_pos(p+43);
        r05_alloc_close_bracket(p+44);
        r05_alloc_svar(p+15);
        r05_alloc_open_bracket(p+45);
        r05_alloc_insert_pos(p+46);
        r05_alloc_close_bracket(p+47);
        r05_alloc_insert_pos(p+48);
        r05_alloc_svar(p+16);
        r05_alloc_open_bracket(p+49);
        r05_alloc_insert_pos(p+50);
        r05_alloc_close_bracket(p+51);
        r05_alloc_open_bracket(p+52);
        r05_alloc_insert_pos(p+53);
        r05_alloc_close_bracket(p+54);
        r05_alloc_svar(p+24);
        r05_alloc_open_bracket(p+55);
        r05_alloc_insert_pos(p+56);
        r05_alloc_close_bracket(p+57);
        r05_alloc_svar(p+40);
        r05_alloc_open_bracket(p+58);
        r05_alloc_insert_pos(p+59);
        r05_alloc_close_bracket(p+60);
        r05_alloc_open_bracket(p+61);
        r05_alloc_insert_pos(p+62);
        r05_alloc_close_bracket(p+63);
        r05_alloc_open_bracket(p+64);
        r05_alloc_insert_pos(p+65);
        r05_alloc_close_bracket(p+66);
        r05_alloc_open_call(p+67);
        r05_alloc_function(&r05f_VarRightSide);
        r05_alloc_svar(p+8);
        r05_alloc_svar(p+24);
        r05_alloc_close_call(p+68);
        r05_alloc_close_call(p+69);
        r05_push_stack(p[69]);
        r05_push_stack(p[41]);
        r05_push_stack(p[68]);
        r05_push_stack(p[67]);
        r05_link_brackets(p[64], p[66]);
        r05_correct_evar(p+6);
        r05_link_brackets(p[61], p[63]);
        r05_correct_evar(p+38);
        r05_link_brackets(p[58], p[60]);
        r05_correct_evar(p+36);
        r05_link_brackets(p[55], p[57]);
        r05_correct_evar(p+25);
        r05_link_brackets(p[52], p[54]);
        r05_correct_evar(p+27);
        r05_link_brackets(p[49], p[51]);
        r05_correct_evar(p+13);
        r05_link_brackets(p[45], p[47]);
        r05_correct_evar(p+20);
        r05_link_brackets(p[42], p[44]);
        r05_correct_evar(p+9);
        r05_splice_evar(p[43], p+9);
        r05_splice_evar(p[46], p+20);
        r05_splice_tvar(p[48], p+22);
        r05_splice_evar(p[50], p+13);
        r05_splice_evar(p[53], p+27);
        r05_splice_evar(p[56], p+25);
        r05_splice_evar(p[59], p+36);
        r05_splice_evar(p[62], p+38);
        r05_splice_evar(p[65], p+6);
        r05_splice_from_freelist(arg_begin);
        r05_splice_to_freelist(arg_begin, arg_end);
        return;
      } while (r05_open_evar_advance(p+27, p[5]));
      r05_stop_e_loop();
    } while (r05_open_evar_advance(p+9, p[4]));
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
    r05_alloc_function(&r05f_DoGenPatternu_cont4);
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

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_check4, "DoGenPattern_check4") {
  r05_this_is_generated_function();

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* e.Hole: 10 */
    /* t.SrcPos: 12 */
    /* s.R: 14 */
    /* e.Holes-E: 19 */
    /* e.Vars-B: 21 */
    /* s.Mode: 23 */
    /* e.Index: 26 */
    /* s.Sample: 28 */
    /* e.Insts: 35 */
    /* e.Vars-E: 37 */
    /* e.Commands: 39 */
    /* s.VarRight: 41 */
    struct r05_node *p[66] = { 0 };
    /* s.Stack (e.Holes-B) s.L (e.Hole) t.SrcPos s.R (e.Holes-E) (e.Vars-B) s.Mode (e.Index) s.Sample (e.Insts) (e.Vars-E) (e.Commands) s.VarRight */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[8], p[9]);
    if (! r05_tvar_left(p+12, p[9], p[1]))
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
    if (! r05_brackets_left(p+24, p[23], p[1]))
      continue;
    r05_close_evar(p+26, p[24], p[25]);
    if (! r05_svar_left(p+28, p[25], p[1]))
      continue;
    if (! r05_brackets_left(p+29, p[28], p[1]))
      continue;
    if (! r05_brackets_left(p+31, p[30], p[1]))
      continue;
    if (! r05_brackets_left(p+33, p[32], p[1]))
      continue;
    r05_close_evar(p+35, p[29], p[30]);
    r05_close_evar(p+37, p[31], p[32]);
    r05_close_evar(p+39, p[33], p[34]);
    if (! r05_svar_left(p+41, p[34], p[1]))
      continue;
    if (! r05_empty_hole(p[41], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+42);
    r05_alloc_function(&r05f_DoGenPattern);
    r05_alloc_open_call(p+43);
    r05_alloc_function(&r05f_IncMode);
    r05_alloc_svar(p+2);
    r05_alloc_svar(p+23);
    r05_alloc_close_call(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_open_bracket(p+46);
    r05_alloc_svar(p+7);
    r05_alloc_insert_pos(p+47);
    r05_alloc_svar(p+2);
    r05_alloc_close_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_open_bracket(p+50);
    r05_alloc_insert_pos(p+51);
    r05_alloc_open_bracket(p+52);
    r05_alloc_svar(p+23);
    r05_alloc_insert_pos(p+53);
    r05_alloc_svar(p+28);
    r05_alloc_open_bracket(p+54);
    r05_alloc_insert_pos(p+55);
    r05_alloc_svar(p+2);
    r05_alloc_close_bracket(p+56);
    r05_alloc_close_bracket(p+57);
    r05_alloc_insert_pos(p+58);
    r05_alloc_close_bracket(p+59);
    r05_alloc_open_bracket(p+60);
    r05_alloc_insert_pos(p+61);
    r05_alloc_open_bracket(p+62);
    r05_alloc_function(&r05f_CmdMatch);
    r05_alloc_function(&r05f_RIGHT);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+14);
    r05_alloc_svar(p+2);
    r05_alloc_function(&r05f_Repeated);
    r05_alloc_svar(p+23);
    r05_alloc_svar(p+28);
    r05_alloc_close_bracket(p+63);
    r05_alloc_close_bracket(p+64);
    r05_alloc_close_call(p+65);
    r05_push_stack(p[65]);
    r05_push_stack(p[42]);
    r05_link_brackets(p[60], p[64]);
    r05_link_brackets(p[62], p[63]);
    r05_correct_evar(p+39);
    r05_link_brackets(p[50], p[59]);
    r05_correct_evar(p+37);
    r05_link_brackets(p[52], p[57]);
    r05_link_brackets(p[54], p[56]);
    r05_correct_evar(p+35);
    r05_correct_evar(p+26);
    r05_correct_evar(p+21);
    r05_correct_evar(p+19);
    r05_link_brackets(p[46], p[48]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+5);
    r05_push_stack(p[44]);
    r05_push_stack(p[43]);
    r05_splice_evar(p[45], p+5);
    r05_splice_evar(p[47], p+10);
    r05_splice_evar(p[49], p+19);
    r05_splice_evar(p[51], p+21);
    r05_splice_evar(p[53], p+26);
    r05_splice_evar(p[55], p+35);
    r05_splice_evar(p[58], p+37);
    r05_splice_evar(p[61], p+39);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* e.Hole: 10 */
    /* t.SrcPos: 12 */
    /* s.R: 14 */
    /* e.Holes-E: 19 */
    /* e.Vars-B: 21 */
    /* s.Mode: 23 */
    /* e.Index: 26 */
    /* s.Sample: 28 */
    /* e.Insts: 35 */
    /* e.Vars-E: 37 */
    /* e.Commands: 39 */
    /* e.Other: 41 */
    struct r05_node *p[70] = { 0 };
    /* s.Stack (e.Holes-B) s.L (e.Hole) t.SrcPos s.R (e.Holes-E) (e.Vars-B) s.Mode (e.Index) s.Sample (e.Insts) (e.Vars-E) (e.Commands) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[8], p[9]);
    if (! r05_tvar_left(p+12, p[9], p[1]))
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
    if (! r05_brackets_left(p+24, p[23], p[1]))
      continue;
    r05_close_evar(p+26, p[24], p[25]);
    if (! r05_svar_left(p+28, p[25], p[1]))
      continue;
    if (! r05_brackets_left(p+29, p[28], p[1]))
      continue;
    if (! r05_brackets_left(p+31, p[30], p[1]))
      continue;
    if (! r05_brackets_left(p+33, p[32], p[1]))
      continue;
    r05_close_evar(p+35, p[29], p[30]);
    r05_close_evar(p+37, p[31], p[32]);
    r05_close_evar(p+39, p[33], p[34]);
    r05_close_evar(p+41, p[34], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+43);
    r05_alloc_function(&r05f_DoGenPatternu_forward3);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_open_bracket(p+47);
    r05_alloc_svar(p+7);
    r05_alloc_insert_pos(p+48);
    r05_alloc_open_bracket(p+49);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+50);
    r05_alloc_svar(p+23);
    r05_alloc_insert_pos(p+51);
    r05_alloc_close_bracket(p+52);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+53);
    r05_alloc_insert_pos(p+54);
    r05_alloc_open_bracket(p+55);
    r05_alloc_open_bracket(p+56);
    r05_alloc_insert_pos(p+57);
    r05_alloc_close_bracket(p+58);
    r05_alloc_open_bracket(p+59);
    r05_alloc_svar(p+23);
    r05_alloc_evar(p+26);
    r05_alloc_svar(p+28);
    r05_alloc_open_bracket(p+60);
    r05_alloc_insert_pos(p+61);
    r05_alloc_close_bracket(p+62);
    r05_alloc_close_bracket(p+63);
    r05_alloc_insert_pos(p+64);
    r05_alloc_close_bracket(p+65);
    r05_alloc_open_bracket(p+66);
    r05_alloc_insert_pos(p+67);
    r05_alloc_close_bracket(p+68);
    r05_alloc_close_call(p+69);
    r05_push_stack(p[69]);
    r05_push_stack(p[43]);
    r05_link_brackets(p[66], p[68]);
    r05_correct_evar(p+39);
    r05_link_brackets(p[55], p[65]);
    r05_correct_evar(p+37);
    r05_link_brackets(p[59], p[63]);
    r05_link_brackets(p[60], p[62]);
    r05_correct_evar(p+35);
    r05_link_brackets(p[56], p[58]);
    r05_correct_evar(p+21);
    r05_correct_evar(p+19);
    r05_link_brackets(p[47], p[53]);
    r05_link_brackets(p[49], p[52]);
    r05_correct_evar(p+26);
    r05_correct_evar(p+10);
    r05_link_brackets(p[44], p[46]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[45], p+5);
    r05_splice_evar(p[48], p+10);
    r05_splice_tvar(p[50], p+12);
    r05_splice_evar(p[51], p+26);
    r05_splice_evar(p[54], p+19);
    r05_splice_evar(p[57], p+21);
    r05_splice_evar(p[61], p+35);
    r05_splice_evar(p[64], p+37);
    r05_splice_evar(p[67], p+39);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_forward3, "DoGenPattern_forward3") {
  r05_this_is_generated_function();

  do {
    /* e.Vars-B_fix: 8 */
    /* e.Commands: 10 */
    /* s.Stack: 12 */
    /* e.Holes-B: 17 */
    /* e.Holes-E: 19 */
    /* s.L: 21 */
    /* t.Vars-B_next: 22 */
    /* e.Vars-B_rest: 24 */
    /* s.R: 26 */
    /* e.Hole: 30 */
    /* t.SrcPos: 32 */
    /* s.Mode: 34 */
    /* e.Index: 35 */
    struct r05_node *p[59] = { 0 };
    /* s.Stack (e.Holes-B) (s.L e.Hole (Variable t.SrcPos s.Mode e.Index) s.R) e.Holes-E ((e.Vars-B_fix) t.Vars-B_next e.Vars-B_rest) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[2], p[3]);
    if (! r05_svar_left(p+12, p[0], p[4]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[4]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[4]))
      continue;
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[16], p[4]);
    if (! r05_svar_left(p+21, p[15], p[16]))
      continue;
    if (! r05_tvar_left(p+22, p[7], p[5]))
      continue;
    r05_close_evar(p+24, p[23], p[5]);
    if (! r05_svar_right(p+26, p[21], p[16]))
      continue;
    if (! r05_brackets_right(p+27, p[21], p[26]))
      continue;
    if (! r05_function_left(p+29, p[27], p[28], &r05f_Variable))
      continue;
    r05_close_evar(p+30, p[21], p[27]);
    if (! r05_tvar_left(p+32, p[29], p[28]))
      continue;
    if (! r05_svar_left(p+34, p[33], p[28]))
      continue;
    r05_close_evar(p+35, p[34], p[28]);

    r05_reset_allocator();
    r05_alloc_open_call(p+37);
    r05_alloc_function(&r05f_DoGenPatternu_next3);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_bracket(p+40);
    r05_alloc_open_bracket(p+41);
    r05_alloc_svar(p+21);
    r05_alloc_insert_pos(p+42);
    r05_alloc_open_bracket(p+43);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+44);
    r05_alloc_svar(p+34);
    r05_alloc_insert_pos(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_svar(p+26);
    r05_alloc_close_bracket(p+47);
    r05_alloc_insert_pos(p+48);
    r05_alloc_open_bracket(p+49);
    r05_alloc_open_bracket(p+50);
    r05_alloc_insert_pos(p+51);
    r05_alloc_close_bracket(p+52);
    r05_alloc_insert_pos(p+53);
    r05_alloc_close_bracket(p+54);
    r05_alloc_open_bracket(p+55);
    r05_alloc_insert_pos(p+56);
    r05_alloc_close_bracket(p+57);
    r05_alloc_close_call(p+58);
    r05_push_stack(p[58]);
    r05_push_stack(p[37]);
    r05_link_brackets(p[55], p[57]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[49], p[54]);
    r05_correct_evar(p+24);
    r05_link_brackets(p[50], p[52]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+19);
    r05_link_brackets(p[41], p[47]);
    r05_link_brackets(p[43], p[46]);
    r05_correct_evar(p+35);
    r05_correct_evar(p+30);
    r05_link_brackets(p[38], p[40]);
    r05_correct_evar(p+17);
    r05_splice_evar(p[39], p+17);
    r05_splice_evar(p[42], p+30);
    r05_splice_tvar(p[44], p+32);
    r05_splice_evar(p[45], p+35);
    r05_splice_evar(p[48], p+19);
    r05_splice_evar(p[51], p+8);
    r05_splice_tvar(p[51], p+22);
    r05_splice_evar(p[53], p+24);
    r05_splice_evar(p[56], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Vars-B_fix: 8 */
    /* e.Commands: 10 */
    /* s.Stack: 12 */
    /* e.Holes-B: 17 */
    /* e.Holes-E: 19 */
    /* s.L: 21 */
    /* s.R: 22 */
    /* e.Hole: 26 */
    /* t.SrcPos: 28 */
    /* s.Mode: 30 */
    /* e.Index: 31 */
    struct r05_node *p[52] = { 0 };
    /* s.Stack (e.Holes-B) (s.L e.Hole (Variable t.SrcPos s.Mode e.Index) s.R) e.Holes-E ((e.Vars-B_fix)) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    if (! r05_empty_hole(p[7], p[5]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[2], p[3]);
    if (! r05_svar_left(p+12, p[0], p[4]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[4]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[4]))
      continue;
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[16], p[4]);
    if (! r05_svar_left(p+21, p[15], p[16]))
      continue;
    if (! r05_svar_right(p+22, p[21], p[16]))
      continue;
    if (! r05_brackets_right(p+23, p[21], p[22]))
      continue;
    if (! r05_function_left(p+25, p[23], p[24], &r05f_Variable))
      continue;
    r05_close_evar(p+26, p[21], p[23]);
    if (! r05_tvar_left(p+28, p[25], p[24]))
      continue;
    if (! r05_svar_left(p+30, p[29], p[24]))
      continue;
    r05_close_evar(p+31, p[30], p[24]);

    r05_reset_allocator();
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_DoGenPatternu_forward4);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_svar(p+21);
    r05_alloc_insert_pos(p+38);
    r05_alloc_open_bracket(p+39);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+40);
    r05_alloc_svar(p+30);
    r05_alloc_insert_pos(p+41);
    r05_alloc_close_bracket(p+42);
    r05_alloc_svar(p+22);
    r05_alloc_close_bracket(p+43);
    r05_alloc_insert_pos(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_close_bracket(p+50);
    r05_alloc_close_call(p+51);
    r05_push_stack(p[51]);
    r05_push_stack(p[33]);
    r05_link_brackets(p[48], p[50]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[45], p[47]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+19);
    r05_link_brackets(p[37], p[43]);
    r05_link_brackets(p[39], p[42]);
    r05_correct_evar(p+31);
    r05_correct_evar(p+26);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+17);
    r05_splice_evar(p[35], p+17);
    r05_splice_evar(p[38], p+26);
    r05_splice_tvar(p[40], p+28);
    r05_splice_evar(p[41], p+31);
    r05_splice_evar(p[44], p+19);
    r05_splice_evar(p[46], p+8);
    r05_splice_evar(p[49], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_next3, "DoGenPattern_next3") {
  r05_this_is_generated_function();

  do {
    /* e.Vars-B_fix: 8 */
    /* e.Commands: 10 */
    /* s.Stack: 12 */
    /* e.Holes-B: 17 */
    /* e.Holes-E: 19 */
    /* s.L: 21 */
    /* s.R: 22 */
    /* e.Hole: 26 */
    /* t.SrcPos: 28 */
    /* s.Mode: 30, 39 */
    /* e.Index: 31, 40 */
    /* e.Vars-B_var: 33 */
    /* e.Insts: 42 */
    /* e.Vars-E: 44 */
    /* s.Sample: 46 */
    struct r05_node *p[76] = { 0 };
    /* s.Stack (e.Holes-B) (s.L e.Hole (Variable t.SrcPos s.Mode e.Index) s.R) e.Holes-E ((e.Vars-B_fix) e.Vars-B_var (s.Mode e.Index s.Sample (e.Insts)) e.Vars-E) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[2], p[3]);
    if (! r05_svar_left(p+12, p[0], p[4]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[4]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[4]))
      continue;
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[16], p[4]);
    if (! r05_svar_left(p+21, p[15], p[16]))
      continue;
    if (! r05_svar_right(p+22, p[21], p[16]))
      continue;
    if (! r05_brackets_right(p+23, p[21], p[22]))
      continue;
    if (! r05_function_left(p+25, p[23], p[24], &r05f_Variable))
      continue;
    r05_close_evar(p+26, p[21], p[23]);
    if (! r05_tvar_left(p+28, p[25], p[24]))
      continue;
    if (! r05_svar_left(p+30, p[29], p[24]))
      continue;
    r05_close_evar(p+31, p[30], p[24]);
    p[33] = p[7]->next;
    p[34] = p[7];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+35, p[34], p[5]))
        continue;
      if (! r05_brackets_right(p+37, p[35], p[36]))
        continue;
      if (! r05_repeated_svar_left(p+39, p[35], p[37], p+30))
        continue;
      if (! r05_repeated_evar_left(p+40, p[39], p[37], p+31))
        continue;
      r05_close_evar(p+42, p[37], p[38]);
      r05_close_evar(p+44, p[36], p[5]);
      if (! r05_svar_left(p+46, p[41], p[37]))
        continue;
      if (! r05_empty_hole(p[46], p[37]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+47);
      r05_alloc_function(&r05f_DoGenPatternu_check4);
      r05_alloc_svar(p+12);
      r05_alloc_open_bracket(p+48);
      r05_alloc_insert_pos(p+49);
      r05_alloc_close_bracket(p+50);
      r05_alloc_svar(p+21);
      r05_alloc_open_bracket(p+51);
      r05_alloc_insert_pos(p+52);
      r05_alloc_close_bracket(p+53);
      r05_alloc_insert_pos(p+54);
      r05_alloc_svar(p+22);
      r05_alloc_open_bracket(p+55);
      r05_alloc_insert_pos(p+56);
      r05_alloc_close_bracket(p+57);
      r05_alloc_open_bracket(p+58);
      r05_alloc_insert_pos(p+59);
      r05_alloc_close_bracket(p+60);
      r05_alloc_svar(p+30);
      r05_alloc_open_bracket(p+61);
      r05_alloc_insert_pos(p+62);
      r05_alloc_close_bracket(p+63);
      r05_alloc_svar(p+46);
      r05_alloc_open_bracket(p+64);
      r05_alloc_insert_pos(p+65);
      r05_alloc_close_bracket(p+66);
      r05_alloc_open_bracket(p+67);
      r05_alloc_insert_pos(p+68);
      r05_alloc_close_bracket(p+69);
      r05_alloc_open_bracket(p+70);
      r05_alloc_insert_pos(p+71);
      r05_alloc_close_bracket(p+72);
      r05_alloc_open_call(p+73);
      r05_alloc_function(&r05f_VarRightSide);
      r05_alloc_svar(p+12);
      r05_alloc_svar(p+30);
      r05_alloc_close_call(p+74);
      r05_alloc_close_call(p+75);
      r05_push_stack(p[75]);
      r05_push_stack(p[47]);
      r05_push_stack(p[74]);
      r05_push_stack(p[73]);
      r05_link_brackets(p[70], p[72]);
      r05_correct_evar(p+10);
      r05_link_brackets(p[67], p[69]);
      r05_correct_evar(p+44);
      r05_link_brackets(p[64], p[66]);
      r05_correct_evar(p+42);
      r05_link_brackets(p[61], p[63]);
      r05_correct_evar(p+31);
      r05_link_brackets(p[58], p[60]);
      r05_correct_evar(p+33);
      r05_correct_evar(p+8);
      r05_link_brackets(p[55], p[57]);
      r05_correct_evar(p+19);
      r05_link_brackets(p[51], p[53]);
      r05_correct_evar(p+26);
      r05_link_brackets(p[48], p[50]);
      r05_correct_evar(p+17);
      r05_splice_evar(p[49], p+17);
      r05_splice_evar(p[52], p+26);
      r05_splice_tvar(p[54], p+28);
      r05_splice_evar(p[56], p+19);
      r05_splice_evar(p[59], p+8);
      r05_splice_evar(p[59], p+33);
      r05_splice_evar(p[62], p+31);
      r05_splice_evar(p[65], p+42);
      r05_splice_evar(p[68], p+44);
      r05_splice_evar(p[71], p+10);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+33, p[5]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars-B_fix: 8 */
    /* e.Vars-B_rest: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    /* e.Holes-B: 19 */
    /* e.Holes-E: 21 */
    /* s.L: 23 */
    /* s.R: 24 */
    /* e.Hole: 28 */
    /* t.SrcPos: 30 */
    /* s.Mode: 32 */
    /* e.Index: 33 */
    struct r05_node *p[54] = { 0 };
    /* s.Stack (e.Holes-B) (s.L e.Hole (Variable t.SrcPos s.Mode e.Index) s.R) e.Holes-E ((e.Vars-B_fix) e.Vars-B_rest) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[5]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[7], p[5]);
    r05_close_evar(p+12, p[2], p[3]);
    if (! r05_svar_left(p+14, p[0], p[4]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[4]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[4]))
      continue;
    r05_close_evar(p+19, p[15], p[16]);
    r05_close_evar(p+21, p[18], p[4]);
    if (! r05_svar_left(p+23, p[17], p[18]))
      continue;
    if (! r05_svar_right(p+24, p[23], p[18]))
      continue;
    if (! r05_brackets_right(p+25, p[23], p[24]))
      continue;
    if (! r05_function_left(p+27, p[25], p[26], &r05f_Variable))
      continue;
    r05_close_evar(p+28, p[23], p[25]);
    if (! r05_tvar_left(p+30, p[27], p[26]))
      continue;
    if (! r05_svar_left(p+32, p[31], p[26]))
      continue;
    r05_close_evar(p+33, p[32], p[26]);

    r05_reset_allocator();
    r05_alloc_open_call(p+35);
    r05_alloc_function(&r05f_DoGenPatternu_forward4);
    r05_alloc_svar(p+14);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_open_bracket(p+39);
    r05_alloc_svar(p+23);
    r05_alloc_insert_pos(p+40);
    r05_alloc_open_bracket(p+41);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+42);
    r05_alloc_svar(p+32);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_svar(p+24);
    r05_alloc_close_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_open_bracket(p+47);
    r05_alloc_insert_pos(p+48);
    r05_alloc_close_bracket(p+49);
    r05_alloc_open_bracket(p+50);
    r05_alloc_insert_pos(p+51);
    r05_alloc_close_bracket(p+52);
    r05_alloc_close_call(p+53);
    r05_push_stack(p[53]);
    r05_push_stack(p[35]);
    r05_link_brackets(p[50], p[52]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[47], p[49]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_correct_evar(p+21);
    r05_link_brackets(p[39], p[45]);
    r05_link_brackets(p[41], p[44]);
    r05_correct_evar(p+33);
    r05_correct_evar(p+28);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+19);
    r05_splice_evar(p[37], p+19);
    r05_splice_evar(p[40], p+28);
    r05_splice_tvar(p[42], p+30);
    r05_splice_evar(p[43], p+33);
    r05_splice_evar(p[46], p+21);
    r05_splice_evar(p[48], p+8);
    r05_splice_evar(p[48], p+10);
    r05_splice_evar(p[51], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_forward4, "DoGenPattern_forward4") {
  r05_this_is_generated_function();

  do {
    /* e.Vars-B_rest: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* t.Holes-B_next: 15 */
    /* e.Holes-B_rest: 17 */
    struct r05_node *p[31] = { 0 };
    /* s.Stack (e.Holes-B_fix) t.Holes-B_next e.Holes-B_rest (e.Vars-B_rest) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    if (! r05_tvar_left(p+15, p[12], p[4]))
      continue;
    r05_close_evar(p+17, p[16], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_DoGenPatternu_next4);
    r05_alloc_svar(p+10);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+17);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_splice_evar(p[21], p+13);
    r05_splice_tvar(p[21], p+15);
    r05_splice_evar(p[23], p+17);
    r05_splice_evar(p[25], p+6);
    r05_splice_evar(p[28], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Holes-B_fix: 8 */
    /* e.Vars-B_rest: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    struct r05_node *p[24] = { 0 };
    /* s.Stack (e.Holes-B_fix) (e.Vars-B_rest) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+6, p[0], p[4]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[2], p[3]);
    if (! r05_svar_left(p+14, p[0], p[6]))
      continue;
    if (! r05_empty_hole(p[14], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoGenPatternu_cont4);
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_splice_evar(p[16], p+8);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[21], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_next4, "DoGenPattern_next4") {
  r05_this_is_generated_function();

  do {
    /* e.Commands: 6 */
    /* s.Stack: 8 */
    /* e.Holes-B_fix: 11 */
    /* e.Holes-B_var: 13 */
    /* e.Holes-E: 17 */
    /* s.L: 19 */
    /* s.R: 20 */
    /* e.Hole: 24 */
    /* t.SrcPos: 26 */
    /* s.Mode: 28, 37 */
    /* e.Index: 29, 38 */
    /* e.Vars-B: 31 */
    /* e.Insts: 40 */
    /* e.Vars-E: 42 */
    /* s.Sample: 44 */
    struct r05_node *p[74] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_var (s.L e.Hole (Variable t.SrcPos s.Mode e.Index) s.R) e.Holes-E (e.Vars-B (s.Mode e.Index s.Sample (e.Insts)) e.Vars-E) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    if (! r05_svar_left(p+8, p[0], p[4]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[4]))
      continue;
    r05_close_evar(p+11, p[9], p[10]);
    p[13] = p[10]->next;
    p[14] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+15, p[14], p[4]))
        continue;
      r05_close_evar(p+17, p[16], p[4]);
      if (! r05_svar_left(p+19, p[15], p[16]))
        continue;
      if (! r05_svar_right(p+20, p[19], p[16]))
        continue;
      if (! r05_brackets_right(p+21, p[19], p[20]))
        continue;
      if (! r05_function_left(p+23, p[21], p[22], &r05f_Variable))
        continue;
      r05_close_evar(p+24, p[19], p[21]);
      if (! r05_tvar_left(p+26, p[23], p[22]))
        continue;
      if (! r05_svar_left(p+28, p[27], p[22]))
        continue;
      r05_close_evar(p+29, p[28], p[22]);
      p[31] = p[4]->next;
      p[32] = p[4];
      r05_start_e_loop();
      do {
        if (! r05_brackets_left(p+33, p[32], p[5]))
          continue;
        if (! r05_brackets_right(p+35, p[33], p[34]))
          continue;
        if (! r05_repeated_svar_left(p+37, p[33], p[35], p+28))
          continue;
        if (! r05_repeated_evar_left(p+38, p[37], p[35], p+29))
          continue;
        r05_close_evar(p+40, p[35], p[36]);
        r05_close_evar(p+42, p[34], p[5]);
        if (! r05_svar_left(p+44, p[39], p[35]))
          continue;
        if (! r05_empty_hole(p[44], p[35]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+45);
        r05_alloc_function(&r05f_DoGenPatternu_check4);
        r05_alloc_svar(p+8);
        r05_alloc_open_bracket(p+46);
        r05_alloc_insert_pos(p+47);
        r05_alloc_close_bracket(p+48);
        r05_alloc_svar(p+19);
        r05_alloc_open_bracket(p+49);
        r05_alloc_insert_pos(p+50);
        r05_alloc_close_bracket(p+51);
        r05_alloc_insert_pos(p+52);
        r05_alloc_svar(p+20);
        r05_alloc_open_bracket(p+53);
        r05_alloc_insert_pos(p+54);
        r05_alloc_close_bracket(p+55);
        r05_alloc_open_bracket(p+56);
        r05_alloc_insert_pos(p+57);
        r05_alloc_close_bracket(p+58);
        r05_alloc_svar(p+28);
        r05_alloc_open_bracket(p+59);
        r05_alloc_insert_pos(p+60);
        r05_alloc_close_bracket(p+61);
        r05_alloc_svar(p+44);
        r05_alloc_open_bracket(p+62);
        r05_alloc_insert_pos(p+63);
        r05_alloc_close_bracket(p+64);
        r05_alloc_open_bracket(p+65);
        r05_alloc_insert_pos(p+66);
        r05_alloc_close_bracket(p+67);
        r05_alloc_open_bracket(p+68);
        r05_alloc_insert_pos(p+69);
        r05_alloc_close_bracket(p+70);
        r05_alloc_open_call(p+71);
        r05_alloc_function(&r05f_VarRightSide);
        r05_alloc_svar(p+8);
        r05_alloc_svar(p+28);
        r05_alloc_close_call(p+72);
        r05_alloc_close_call(p+73);
        r05_push_stack(p[73]);
        r05_push_stack(p[45]);
        r05_push_stack(p[72]);
        r05_push_stack(p[71]);
        r05_link_brackets(p[68], p[70]);
        r05_correct_evar(p+6);
        r05_link_brackets(p[65], p[67]);
        r05_correct_evar(p+42);
        r05_link_brackets(p[62], p[64]);
        r05_correct_evar(p+40);
        r05_link_brackets(p[59], p[61]);
        r05_correct_evar(p+29);
        r05_link_brackets(p[56], p[58]);
        r05_correct_evar(p+31);
        r05_link_brackets(p[53], p[55]);
        r05_correct_evar(p+17);
        r05_link_brackets(p[49], p[51]);
        r05_correct_evar(p+24);
        r05_link_brackets(p[46], p[48]);
        r05_correct_evar(p+13);
        r05_correct_evar(p+11);
        r05_splice_evar(p[47], p+11);
        r05_splice_evar(p[47], p+13);
        r05_splice_evar(p[50], p+24);
        r05_splice_tvar(p[52], p+26);
        r05_splice_evar(p[54], p+17);
        r05_splice_evar(p[57], p+31);
        r05_splice_evar(p[60], p+29);
        r05_splice_evar(p[63], p+40);
        r05_splice_evar(p[66], p+42);
        r05_splice_evar(p[69], p+6);
        r05_splice_from_freelist(arg_begin);
        r05_splice_to_freelist(arg_begin, arg_end);
        return;
      } while (r05_open_evar_advance(p+31, p[5]));
      r05_stop_e_loop();
    } while (r05_open_evar_advance(p+13, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars-B_rest: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* e.Holes-B_rest: 15 */
    struct r05_node *p[26] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_rest (e.Vars-B_rest) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[12], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoGenPatternu_cont4);
    r05_alloc_svar(p+10);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+15);
    r05_correct_evar(p+13);
    r05_splice_evar(p[18], p+13);
    r05_splice_evar(p[18], p+15);
    r05_splice_evar(p[20], p+6);
    r05_splice_evar(p[23], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_cont4, "DoGenPattern_cont4") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B: 11 */
    /* e.Holes-E: 15 */
    /* s.L: 17 */
    /* s.R: 21 */
    /* t.SrcPos: 22 */
    /* e.Index: 25 */
    struct r05_node *p[45] = { 0 };
    /* s.Stack e.Holes-B (s.L (Variable t.SrcPos 'e' e.Index) s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    p[11] = p[10]->next;
    p[12] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+13, p[12], p[4]))
        continue;
      r05_close_evar(p+15, p[14], p[4]);
      if (! r05_svar_left(p+17, p[13], p[14]))
        continue;
      if (! r05_brackets_left(p+18, p[17], p[14]))
        continue;
      if (! r05_function_left(p+20, p[18], p[19], &r05f_Variable))
        continue;
      if (! r05_svar_left(p+21, p[19], p[14]))
        continue;
      if (! r05_empty_hole(p[21], p[14]))
        continue;
      if (! r05_tvar_left(p+22, p[20], p[19]))
        continue;
      if (! r05_char_left(p+24, p[23], p[19], 'e'))
        continue;
      r05_close_evar(p+25, p[24], p[19]);

      r05_reset_allocator();
      r05_alloc_open_call(p+27);
      r05_alloc_function(&r05f_DoGenPattern);
      r05_alloc_open_call(p+28);
      r05_alloc_function(&r05f_IncMode);
      r05_alloc_svar(p+10);
      r05_alloc_char('e');
      r05_alloc_close_call(p+29);
      r05_alloc_insert_pos(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_open_bracket(p+33);
      r05_alloc_char('e');
      r05_alloc_insert_pos(p+34);
      r05_alloc_svar(p+10);
      r05_alloc_open_bracket(p+35);
      r05_alloc_svar(p+10);
      r05_alloc_close_bracket(p+36);
      r05_alloc_close_bracket(p+37);
      r05_alloc_close_bracket(p+38);
      r05_alloc_open_bracket(p+39);
      r05_alloc_insert_pos(p+40);
      r05_alloc_open_bracket(p+41);
      r05_alloc_function(&r05f_CmdClosedE);
      r05_alloc_svar(p+17);
      r05_alloc_svar(p+21);
      r05_alloc_char('e');
      r05_alloc_svar(p+10);
      r05_alloc_close_bracket(p+42);
      r05_alloc_close_bracket(p+43);
      r05_alloc_close_call(p+44);
      r05_push_stack(p[44]);
      r05_push_stack(p[27]);
      r05_link_brackets(p[39], p[43]);
      r05_link_brackets(p[41], p[42]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[31], p[38]);
      r05_link_brackets(p[33], p[37]);
      r05_link_brackets(p[35], p[36]);
      r05_correct_evar(p+25);
      r05_correct_evar(p+6);
      r05_correct_evar(p+15);
      r05_correct_evar(p+11);
      r05_push_stack(p[29]);
      r05_push_stack(p[28]);
      r05_splice_evar(p[30], p+11);
      r05_splice_evar(p[30], p+15);
      r05_splice_evar(p[32], p+6);
      r05_splice_evar(p[34], p+25);
      r05_splice_evar(p[40], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+11, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B: 11 */
    /* e.Holes-E: 15 */
    /* s.L: 17 */
    /* t.SrcPos: 21 */
    /* e.Index: 24 */
    /* s.R: 26 */
    /* e.Hole: 27 */
    struct r05_node *p[52] = { 0 };
    /* s.Stack e.Holes-B (s.L (Variable t.SrcPos 's' e.Index) e.Hole s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    p[11] = p[10]->next;
    p[12] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+13, p[12], p[4]))
        continue;
      r05_close_evar(p+15, p[14], p[4]);
      if (! r05_svar_left(p+17, p[13], p[14]))
        continue;
      if (! r05_brackets_left(p+18, p[17], p[14]))
        continue;
      if (! r05_function_left(p+20, p[18], p[19], &r05f_Variable))
        continue;
      if (! r05_tvar_left(p+21, p[20], p[19]))
        continue;
      if (! r05_char_left(p+23, p[22], p[19], 's'))
        continue;
      r05_close_evar(p+24, p[23], p[19]);
      if (! r05_svar_right(p+26, p[19], p[14]))
        continue;
      r05_close_evar(p+27, p[19], p[26]);

      r05_reset_allocator();
      r05_alloc_open_call(p+29);
      r05_alloc_function(&r05f_DoGenPatternu_check5);
      r05_alloc_svar(p+10);
      r05_alloc_open_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_bracket(p+32);
      r05_alloc_svar(p+17);
      r05_alloc_insert_pos(p+33);
      r05_alloc_open_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_insert_pos(p+38);
      r05_alloc_close_bracket(p+39);
      r05_alloc_svar(p+26);
      r05_alloc_open_bracket(p+40);
      r05_alloc_insert_pos(p+41);
      r05_alloc_close_bracket(p+42);
      r05_alloc_open_bracket(p+43);
      r05_alloc_insert_pos(p+44);
      r05_alloc_close_bracket(p+45);
      r05_alloc_open_bracket(p+46);
      r05_alloc_insert_pos(p+47);
      r05_alloc_close_bracket(p+48);
      r05_alloc_open_call(p+49);
      r05_alloc_function(&r05f_VarRightSide);
      r05_alloc_svar(p+10);
      r05_alloc_char('s');
      r05_alloc_close_call(p+50);
      r05_alloc_close_call(p+51);
      r05_push_stack(p[51]);
      r05_push_stack(p[29]);
      r05_push_stack(p[50]);
      r05_push_stack(p[49]);
      r05_link_brackets(p[46], p[48]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[43], p[45]);
      r05_correct_evar(p+6);
      r05_link_brackets(p[40], p[42]);
      r05_correct_evar(p+15);
      r05_link_brackets(p[37], p[39]);
      r05_correct_evar(p+27);
      r05_link_brackets(p[34], p[36]);
      r05_correct_evar(p+24);
      r05_link_brackets(p[30], p[32]);
      r05_correct_evar(p+11);
      r05_splice_evar(p[31], p+11);
      r05_splice_tvar(p[33], p+21);
      r05_splice_evar(p[35], p+24);
      r05_splice_evar(p[38], p+27);
      r05_splice_evar(p[41], p+15);
      r05_splice_evar(p[44], p+6);
      r05_splice_evar(p[47], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+11, p[4]));
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
    r05_alloc_function(&r05f_DoGenPatternu_cont5);
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

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_check5, "DoGenPattern_check5") {
  r05_this_is_generated_function();

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* t.SrcPos: 8 */
    /* e.Index: 14 */
    /* e.Hole: 16 */
    /* s.R: 18 */
    /* e.Holes-E: 25 */
    /* e.Vars: 27 */
    /* e.Commands: 29 */
    /* s.VarRight: 31 */
    struct r05_node *p[54] = { 0 };
    /* s.Stack (e.Holes-B) s.L t.SrcPos (e.Index) (e.Hole) s.R (e.Holes-E) (e.Vars) (e.Commands) s.VarRight */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_tvar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    r05_close_evar(p+14, p[10], p[11]);
    r05_close_evar(p+16, p[12], p[13]);
    if (! r05_svar_left(p+18, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    if (! r05_brackets_left(p+23, p[22], p[1]))
      continue;
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    r05_close_evar(p+29, p[23], p[24]);
    if (! r05_svar_left(p+31, p[24], p[1]))
      continue;
    if (! r05_empty_hole(p[31], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_DoGenPattern);
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_IncMode);
    r05_alloc_svar(p+2);
    r05_alloc_char('s');
    r05_alloc_close_call(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_svar(p+31);
    r05_alloc_insert_pos(p+37);
    r05_alloc_svar(p+18);
    r05_alloc_close_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_open_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_char('s');
    r05_alloc_insert_pos(p+43);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+44);
    r05_alloc_svar(p+2);
    r05_alloc_close_bracket(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_open_bracket(p+50);
    r05_alloc_function(&r05f_CmdMatch);
    r05_alloc_function(&r05f_LEFT);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+18);
    r05_alloc_svar(p+2);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_char('s');
    r05_alloc_close_bracket(p+51);
    r05_alloc_close_bracket(p+52);
    r05_alloc_close_call(p+53);
    r05_push_stack(p[53]);
    r05_push_stack(p[32]);
    r05_link_brackets(p[48], p[52]);
    r05_link_brackets(p[50], p[51]);
    r05_correct_evar(p+29);
    r05_link_brackets(p[40], p[47]);
    r05_link_brackets(p[42], p[46]);
    r05_link_brackets(p[44], p[45]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+27);
    r05_correct_evar(p+25);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+16);
    r05_correct_evar(p+5);
    r05_push_stack(p[34]);
    r05_push_stack(p[33]);
    r05_splice_evar(p[35], p+5);
    r05_splice_evar(p[37], p+16);
    r05_splice_evar(p[39], p+25);
    r05_splice_evar(p[41], p+27);
    r05_splice_evar(p[43], p+14);
    r05_splice_evar(p[49], p+29);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* t.SrcPos: 8 */
    /* e.Index: 14 */
    /* e.Hole: 16 */
    /* s.R: 18 */
    /* e.Holes-E: 25 */
    /* e.Vars: 27 */
    /* e.Commands: 29 */
    /* e.Other: 31 */
    struct r05_node *p[52] = { 0 };
    /* s.Stack (e.Holes-B) s.L t.SrcPos (e.Index) (e.Hole) s.R (e.Holes-E) (e.Vars) (e.Commands) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_tvar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    r05_close_evar(p+14, p[10], p[11]);
    r05_close_evar(p+16, p[12], p[13]);
    if (! r05_svar_left(p+18, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    if (! r05_brackets_left(p+23, p[22], p[1]))
      continue;
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    r05_close_evar(p+29, p[23], p[24]);
    r05_close_evar(p+31, p[24], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_DoGenPatternu_forward5);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_svar(p+7);
    r05_alloc_open_bracket(p+38);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+39);
    r05_alloc_char('s');
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_insert_pos(p+42);
    r05_alloc_svar(p+18);
    r05_alloc_close_bracket(p+43);
    r05_alloc_insert_pos(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_close_bracket(p+50);
    r05_alloc_close_call(p+51);
    r05_push_stack(p[51]);
    r05_push_stack(p[33]);
    r05_link_brackets(p[48], p[50]);
    r05_correct_evar(p+29);
    r05_link_brackets(p[45], p[47]);
    r05_correct_evar(p+27);
    r05_correct_evar(p+25);
    r05_link_brackets(p[37], p[43]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[38], p[41]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[35], p+5);
    r05_splice_tvar(p[39], p+8);
    r05_splice_evar(p[40], p+14);
    r05_splice_evar(p[42], p+16);
    r05_splice_evar(p[44], p+25);
    r05_splice_evar(p[46], p+27);
    r05_splice_evar(p[49], p+29);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_forward5, "DoGenPattern_forward5") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* t.Holes-B_next: 15 */
    /* e.Holes-B_rest: 17 */
    struct r05_node *p[31] = { 0 };
    /* s.Stack (e.Holes-B_fix) t.Holes-B_next e.Holes-B_rest (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    if (! r05_tvar_left(p+15, p[12], p[4]))
      continue;
    r05_close_evar(p+17, p[16], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_DoGenPatternu_next5);
    r05_alloc_svar(p+10);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+17);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_splice_evar(p[21], p+13);
    r05_splice_tvar(p[21], p+15);
    r05_splice_evar(p[23], p+17);
    r05_splice_evar(p[25], p+6);
    r05_splice_evar(p[28], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Holes-B_fix: 8 */
    /* e.Vars: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    struct r05_node *p[24] = { 0 };
    /* s.Stack (e.Holes-B_fix) (e.Vars) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+6, p[0], p[4]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[2], p[3]);
    if (! r05_svar_left(p+14, p[0], p[6]))
      continue;
    if (! r05_empty_hole(p[14], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoGenPatternu_cont5);
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_splice_evar(p[16], p+8);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[21], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_next5, "DoGenPattern_next5") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* e.Holes-B_var: 15 */
    /* e.Holes-E: 19 */
    /* s.L: 21 */
    /* t.SrcPos: 25 */
    /* e.Index: 28 */
    /* s.R: 30 */
    /* e.Hole: 31 */
    struct r05_node *p[56] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_var (s.L (Variable t.SrcPos 's' e.Index) e.Hole s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    p[15] = p[12]->next;
    p[16] = p[12];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+17, p[16], p[4]))
        continue;
      r05_close_evar(p+19, p[18], p[4]);
      if (! r05_svar_left(p+21, p[17], p[18]))
        continue;
      if (! r05_brackets_left(p+22, p[21], p[18]))
        continue;
      if (! r05_function_left(p+24, p[22], p[23], &r05f_Variable))
        continue;
      if (! r05_tvar_left(p+25, p[24], p[23]))
        continue;
      if (! r05_char_left(p+27, p[26], p[23], 's'))
        continue;
      r05_close_evar(p+28, p[27], p[23]);
      if (! r05_svar_right(p+30, p[23], p[18]))
        continue;
      r05_close_evar(p+31, p[23], p[30]);

      r05_reset_allocator();
      r05_alloc_open_call(p+33);
      r05_alloc_function(&r05f_DoGenPatternu_check5);
      r05_alloc_svar(p+10);
      r05_alloc_open_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_svar(p+21);
      r05_alloc_insert_pos(p+37);
      r05_alloc_open_bracket(p+38);
      r05_alloc_insert_pos(p+39);
      r05_alloc_close_bracket(p+40);
      r05_alloc_open_bracket(p+41);
      r05_alloc_insert_pos(p+42);
      r05_alloc_close_bracket(p+43);
      r05_alloc_svar(p+30);
      r05_alloc_open_bracket(p+44);
      r05_alloc_insert_pos(p+45);
      r05_alloc_close_bracket(p+46);
      r05_alloc_open_bracket(p+47);
      r05_alloc_insert_pos(p+48);
      r05_alloc_close_bracket(p+49);
      r05_alloc_open_bracket(p+50);
      r05_alloc_insert_pos(p+51);
      r05_alloc_close_bracket(p+52);
      r05_alloc_open_call(p+53);
      r05_alloc_function(&r05f_VarRightSide);
      r05_alloc_svar(p+10);
      r05_alloc_char('s');
      r05_alloc_close_call(p+54);
      r05_alloc_close_call(p+55);
      r05_push_stack(p[55]);
      r05_push_stack(p[33]);
      r05_push_stack(p[54]);
      r05_push_stack(p[53]);
      r05_link_brackets(p[50], p[52]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[47], p[49]);
      r05_correct_evar(p+6);
      r05_link_brackets(p[44], p[46]);
      r05_correct_evar(p+19);
      r05_link_brackets(p[41], p[43]);
      r05_correct_evar(p+31);
      r05_link_brackets(p[38], p[40]);
      r05_correct_evar(p+28);
      r05_link_brackets(p[34], p[36]);
      r05_correct_evar(p+15);
      r05_correct_evar(p+13);
      r05_splice_evar(p[35], p+13);
      r05_splice_evar(p[35], p+15);
      r05_splice_tvar(p[37], p+25);
      r05_splice_evar(p[39], p+28);
      r05_splice_evar(p[42], p+31);
      r05_splice_evar(p[45], p+19);
      r05_splice_evar(p[48], p+6);
      r05_splice_evar(p[51], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+15, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* e.Holes-B_rest: 15 */
    struct r05_node *p[26] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_rest (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[12], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoGenPatternu_cont5);
    r05_alloc_svar(p+10);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+15);
    r05_correct_evar(p+13);
    r05_splice_evar(p[18], p+13);
    r05_splice_evar(p[18], p+15);
    r05_splice_evar(p[20], p+6);
    r05_splice_evar(p[23], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_cont5, "DoGenPattern_cont5") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B: 11 */
    /* e.Holes-E: 15 */
    /* s.L: 17 */
    /* t.SrcPos: 21 */
    /* e.Index: 24 */
    /* s.R: 26 */
    /* e.Hole: 27 */
    struct r05_node *p[52] = { 0 };
    /* s.Stack e.Holes-B (s.L (Variable t.SrcPos 't' e.Index) e.Hole s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    p[11] = p[10]->next;
    p[12] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+13, p[12], p[4]))
        continue;
      r05_close_evar(p+15, p[14], p[4]);
      if (! r05_svar_left(p+17, p[13], p[14]))
        continue;
      if (! r05_brackets_left(p+18, p[17], p[14]))
        continue;
      if (! r05_function_left(p+20, p[18], p[19], &r05f_Variable))
        continue;
      if (! r05_tvar_left(p+21, p[20], p[19]))
        continue;
      if (! r05_char_left(p+23, p[22], p[19], 't'))
        continue;
      r05_close_evar(p+24, p[23], p[19]);
      if (! r05_svar_right(p+26, p[19], p[14]))
        continue;
      r05_close_evar(p+27, p[19], p[26]);

      r05_reset_allocator();
      r05_alloc_open_call(p+29);
      r05_alloc_function(&r05f_DoGenPatternu_check6);
      r05_alloc_svar(p+10);
      r05_alloc_open_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_bracket(p+32);
      r05_alloc_svar(p+17);
      r05_alloc_insert_pos(p+33);
      r05_alloc_open_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_insert_pos(p+38);
      r05_alloc_close_bracket(p+39);
      r05_alloc_svar(p+26);
      r05_alloc_open_bracket(p+40);
      r05_alloc_insert_pos(p+41);
      r05_alloc_close_bracket(p+42);
      r05_alloc_open_bracket(p+43);
      r05_alloc_insert_pos(p+44);
      r05_alloc_close_bracket(p+45);
      r05_alloc_open_bracket(p+46);
      r05_alloc_insert_pos(p+47);
      r05_alloc_close_bracket(p+48);
      r05_alloc_open_call(p+49);
      r05_alloc_function(&r05f_VarRightSide);
      r05_alloc_svar(p+10);
      r05_alloc_char('t');
      r05_alloc_close_call(p+50);
      r05_alloc_close_call(p+51);
      r05_push_stack(p[51]);
      r05_push_stack(p[29]);
      r05_push_stack(p[50]);
      r05_push_stack(p[49]);
      r05_link_brackets(p[46], p[48]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[43], p[45]);
      r05_correct_evar(p+6);
      r05_link_brackets(p[40], p[42]);
      r05_correct_evar(p+15);
      r05_link_brackets(p[37], p[39]);
      r05_correct_evar(p+27);
      r05_link_brackets(p[34], p[36]);
      r05_correct_evar(p+24);
      r05_link_brackets(p[30], p[32]);
      r05_correct_evar(p+11);
      r05_splice_evar(p[31], p+11);
      r05_splice_tvar(p[33], p+21);
      r05_splice_evar(p[35], p+24);
      r05_splice_evar(p[38], p+27);
      r05_splice_evar(p[41], p+15);
      r05_splice_evar(p[44], p+6);
      r05_splice_evar(p[47], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+11, p[4]));
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
    r05_alloc_function(&r05f_DoGenPatternu_cont6);
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

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_check6, "DoGenPattern_check6") {
  r05_this_is_generated_function();

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* t.SrcPos: 8 */
    /* e.Index: 14 */
    /* e.Hole: 16 */
    /* s.R: 18 */
    /* e.Holes-E: 25 */
    /* e.Vars: 27 */
    /* e.Commands: 29 */
    /* s.VarRight: 31 */
    struct r05_node *p[54] = { 0 };
    /* s.Stack (e.Holes-B) s.L t.SrcPos (e.Index) (e.Hole) s.R (e.Holes-E) (e.Vars) (e.Commands) s.VarRight */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_tvar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    r05_close_evar(p+14, p[10], p[11]);
    r05_close_evar(p+16, p[12], p[13]);
    if (! r05_svar_left(p+18, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    if (! r05_brackets_left(p+23, p[22], p[1]))
      continue;
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    r05_close_evar(p+29, p[23], p[24]);
    if (! r05_svar_left(p+31, p[24], p[1]))
      continue;
    if (! r05_empty_hole(p[31], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_DoGenPattern);
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_IncMode);
    r05_alloc_svar(p+2);
    r05_alloc_char('t');
    r05_alloc_close_call(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_svar(p+31);
    r05_alloc_insert_pos(p+37);
    r05_alloc_svar(p+18);
    r05_alloc_close_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_open_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_char('t');
    r05_alloc_insert_pos(p+43);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+44);
    r05_alloc_svar(p+2);
    r05_alloc_close_bracket(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_open_bracket(p+50);
    r05_alloc_function(&r05f_CmdMatch);
    r05_alloc_function(&r05f_LEFT);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+18);
    r05_alloc_svar(p+2);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_char('t');
    r05_alloc_close_bracket(p+51);
    r05_alloc_close_bracket(p+52);
    r05_alloc_close_call(p+53);
    r05_push_stack(p[53]);
    r05_push_stack(p[32]);
    r05_link_brackets(p[48], p[52]);
    r05_link_brackets(p[50], p[51]);
    r05_correct_evar(p+29);
    r05_link_brackets(p[40], p[47]);
    r05_link_brackets(p[42], p[46]);
    r05_link_brackets(p[44], p[45]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+27);
    r05_correct_evar(p+25);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+16);
    r05_correct_evar(p+5);
    r05_push_stack(p[34]);
    r05_push_stack(p[33]);
    r05_splice_evar(p[35], p+5);
    r05_splice_evar(p[37], p+16);
    r05_splice_evar(p[39], p+25);
    r05_splice_evar(p[41], p+27);
    r05_splice_evar(p[43], p+14);
    r05_splice_evar(p[49], p+29);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* t.SrcPos: 8 */
    /* e.Index: 14 */
    /* e.Hole: 16 */
    /* s.R: 18 */
    /* e.Holes-E: 25 */
    /* e.Vars: 27 */
    /* e.Commands: 29 */
    /* e.Other: 31 */
    struct r05_node *p[52] = { 0 };
    /* s.Stack (e.Holes-B) s.L t.SrcPos (e.Index) (e.Hole) s.R (e.Holes-E) (e.Vars) (e.Commands) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_tvar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    r05_close_evar(p+14, p[10], p[11]);
    r05_close_evar(p+16, p[12], p[13]);
    if (! r05_svar_left(p+18, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    if (! r05_brackets_left(p+23, p[22], p[1]))
      continue;
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    r05_close_evar(p+29, p[23], p[24]);
    r05_close_evar(p+31, p[24], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_DoGenPatternu_forward6);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_svar(p+7);
    r05_alloc_open_bracket(p+38);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+39);
    r05_alloc_char('t');
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_insert_pos(p+42);
    r05_alloc_svar(p+18);
    r05_alloc_close_bracket(p+43);
    r05_alloc_insert_pos(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_close_bracket(p+50);
    r05_alloc_close_call(p+51);
    r05_push_stack(p[51]);
    r05_push_stack(p[33]);
    r05_link_brackets(p[48], p[50]);
    r05_correct_evar(p+29);
    r05_link_brackets(p[45], p[47]);
    r05_correct_evar(p+27);
    r05_correct_evar(p+25);
    r05_link_brackets(p[37], p[43]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[38], p[41]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[35], p+5);
    r05_splice_tvar(p[39], p+8);
    r05_splice_evar(p[40], p+14);
    r05_splice_evar(p[42], p+16);
    r05_splice_evar(p[44], p+25);
    r05_splice_evar(p[46], p+27);
    r05_splice_evar(p[49], p+29);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_forward6, "DoGenPattern_forward6") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* t.Holes-B_next: 15 */
    /* e.Holes-B_rest: 17 */
    struct r05_node *p[31] = { 0 };
    /* s.Stack (e.Holes-B_fix) t.Holes-B_next e.Holes-B_rest (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    if (! r05_tvar_left(p+15, p[12], p[4]))
      continue;
    r05_close_evar(p+17, p[16], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_DoGenPatternu_next6);
    r05_alloc_svar(p+10);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+17);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_splice_evar(p[21], p+13);
    r05_splice_tvar(p[21], p+15);
    r05_splice_evar(p[23], p+17);
    r05_splice_evar(p[25], p+6);
    r05_splice_evar(p[28], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Holes-B_fix: 8 */
    /* e.Vars: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    struct r05_node *p[24] = { 0 };
    /* s.Stack (e.Holes-B_fix) (e.Vars) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+6, p[0], p[4]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[2], p[3]);
    if (! r05_svar_left(p+14, p[0], p[6]))
      continue;
    if (! r05_empty_hole(p[14], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoGenPatternu_cont6);
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_splice_evar(p[16], p+8);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[21], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_next6, "DoGenPattern_next6") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* e.Holes-B_var: 15 */
    /* e.Holes-E: 19 */
    /* s.L: 21 */
    /* t.SrcPos: 25 */
    /* e.Index: 28 */
    /* s.R: 30 */
    /* e.Hole: 31 */
    struct r05_node *p[56] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_var (s.L (Variable t.SrcPos 't' e.Index) e.Hole s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    p[15] = p[12]->next;
    p[16] = p[12];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+17, p[16], p[4]))
        continue;
      r05_close_evar(p+19, p[18], p[4]);
      if (! r05_svar_left(p+21, p[17], p[18]))
        continue;
      if (! r05_brackets_left(p+22, p[21], p[18]))
        continue;
      if (! r05_function_left(p+24, p[22], p[23], &r05f_Variable))
        continue;
      if (! r05_tvar_left(p+25, p[24], p[23]))
        continue;
      if (! r05_char_left(p+27, p[26], p[23], 't'))
        continue;
      r05_close_evar(p+28, p[27], p[23]);
      if (! r05_svar_right(p+30, p[23], p[18]))
        continue;
      r05_close_evar(p+31, p[23], p[30]);

      r05_reset_allocator();
      r05_alloc_open_call(p+33);
      r05_alloc_function(&r05f_DoGenPatternu_check6);
      r05_alloc_svar(p+10);
      r05_alloc_open_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_svar(p+21);
      r05_alloc_insert_pos(p+37);
      r05_alloc_open_bracket(p+38);
      r05_alloc_insert_pos(p+39);
      r05_alloc_close_bracket(p+40);
      r05_alloc_open_bracket(p+41);
      r05_alloc_insert_pos(p+42);
      r05_alloc_close_bracket(p+43);
      r05_alloc_svar(p+30);
      r05_alloc_open_bracket(p+44);
      r05_alloc_insert_pos(p+45);
      r05_alloc_close_bracket(p+46);
      r05_alloc_open_bracket(p+47);
      r05_alloc_insert_pos(p+48);
      r05_alloc_close_bracket(p+49);
      r05_alloc_open_bracket(p+50);
      r05_alloc_insert_pos(p+51);
      r05_alloc_close_bracket(p+52);
      r05_alloc_open_call(p+53);
      r05_alloc_function(&r05f_VarRightSide);
      r05_alloc_svar(p+10);
      r05_alloc_char('t');
      r05_alloc_close_call(p+54);
      r05_alloc_close_call(p+55);
      r05_push_stack(p[55]);
      r05_push_stack(p[33]);
      r05_push_stack(p[54]);
      r05_push_stack(p[53]);
      r05_link_brackets(p[50], p[52]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[47], p[49]);
      r05_correct_evar(p+6);
      r05_link_brackets(p[44], p[46]);
      r05_correct_evar(p+19);
      r05_link_brackets(p[41], p[43]);
      r05_correct_evar(p+31);
      r05_link_brackets(p[38], p[40]);
      r05_correct_evar(p+28);
      r05_link_brackets(p[34], p[36]);
      r05_correct_evar(p+15);
      r05_correct_evar(p+13);
      r05_splice_evar(p[35], p+13);
      r05_splice_evar(p[35], p+15);
      r05_splice_tvar(p[37], p+25);
      r05_splice_evar(p[39], p+28);
      r05_splice_evar(p[42], p+31);
      r05_splice_evar(p[45], p+19);
      r05_splice_evar(p[48], p+6);
      r05_splice_evar(p[51], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+15, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* e.Holes-B_rest: 15 */
    struct r05_node *p[26] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_rest (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[12], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoGenPatternu_cont6);
    r05_alloc_svar(p+10);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+15);
    r05_correct_evar(p+13);
    r05_splice_evar(p[18], p+13);
    r05_splice_evar(p[18], p+15);
    r05_splice_evar(p[20], p+6);
    r05_splice_evar(p[23], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_cont6, "DoGenPattern_cont6") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B: 11 */
    /* e.Holes-E: 15 */
    /* s.L: 17 */
    /* s.R: 18 */
    /* e.Hole: 22 */
    /* t.SrcPos: 24 */
    /* e.Index: 27 */
    struct r05_node *p[51] = { 0 };
    /* s.Stack e.Holes-B (s.L e.Hole (Variable t.SrcPos 's' e.Index) s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    p[11] = p[10]->next;
    p[12] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+13, p[12], p[4]))
        continue;
      r05_close_evar(p+15, p[14], p[4]);
      if (! r05_svar_left(p+17, p[13], p[14]))
        continue;
      if (! r05_svar_right(p+18, p[17], p[14]))
        continue;
      if (! r05_brackets_right(p+19, p[17], p[18]))
        continue;
      if (! r05_function_left(p+21, p[19], p[20], &r05f_Variable))
        continue;
      r05_close_evar(p+22, p[17], p[19]);
      if (! r05_tvar_left(p+24, p[21], p[20]))
        continue;
      if (! r05_char_left(p+26, p[25], p[20], 's'))
        continue;
      r05_close_evar(p+27, p[26], p[20]);

      r05_reset_allocator();
      r05_alloc_open_call(p+29);
      r05_alloc_function(&r05f_DoGenPattern);
      r05_alloc_open_call(p+30);
      r05_alloc_function(&r05f_IncMode);
      r05_alloc_svar(p+10);
      r05_alloc_char('s');
      r05_alloc_close_call(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_open_bracket(p+33);
      r05_alloc_svar(p+17);
      r05_alloc_insert_pos(p+34);
      r05_alloc_svar(p+10);
      r05_alloc_close_bracket(p+35);
      r05_alloc_insert_pos(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_insert_pos(p+38);
      r05_alloc_open_bracket(p+39);
      r05_alloc_char('s');
      r05_alloc_insert_pos(p+40);
      r05_alloc_svar(p+10);
      r05_alloc_open_bracket(p+41);
      r05_alloc_svar(p+10);
      r05_alloc_close_bracket(p+42);
      r05_alloc_close_bracket(p+43);
      r05_alloc_close_bracket(p+44);
      r05_alloc_open_bracket(p+45);
      r05_alloc_insert_pos(p+46);
      r05_alloc_open_bracket(p+47);
      r05_alloc_function(&r05f_CmdMatch);
      r05_alloc_function(&r05f_RIGHT);
      r05_alloc_svar(p+17);
      r05_alloc_svar(p+18);
      r05_alloc_svar(p+10);
      r05_alloc_function(&r05f_Variable);
      r05_alloc_char('s');
      r05_alloc_close_bracket(p+48);
      r05_alloc_close_bracket(p+49);
      r05_alloc_close_call(p+50);
      r05_push_stack(p[50]);
      r05_push_stack(p[29]);
      r05_link_brackets(p[45], p[49]);
      r05_link_brackets(p[47], p[48]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[37], p[44]);
      r05_link_brackets(p[39], p[43]);
      r05_link_brackets(p[41], p[42]);
      r05_correct_evar(p+27);
      r05_correct_evar(p+6);
      r05_correct_evar(p+15);
      r05_link_brackets(p[33], p[35]);
      r05_correct_evar(p+22);
      r05_correct_evar(p+11);
      r05_push_stack(p[31]);
      r05_push_stack(p[30]);
      r05_splice_evar(p[32], p+11);
      r05_splice_evar(p[34], p+22);
      r05_splice_evar(p[36], p+15);
      r05_splice_evar(p[38], p+6);
      r05_splice_evar(p[40], p+27);
      r05_splice_evar(p[46], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+11, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B: 11 */
    /* e.Holes-E: 15 */
    /* s.L: 17 */
    /* s.R: 18 */
    /* e.Hole: 22 */
    /* t.SrcPos: 24 */
    /* e.Index: 27 */
    struct r05_node *p[51] = { 0 };
    /* s.Stack e.Holes-B (s.L e.Hole (Variable t.SrcPos 't' e.Index) s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    p[11] = p[10]->next;
    p[12] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+13, p[12], p[4]))
        continue;
      r05_close_evar(p+15, p[14], p[4]);
      if (! r05_svar_left(p+17, p[13], p[14]))
        continue;
      if (! r05_svar_right(p+18, p[17], p[14]))
        continue;
      if (! r05_brackets_right(p+19, p[17], p[18]))
        continue;
      if (! r05_function_left(p+21, p[19], p[20], &r05f_Variable))
        continue;
      r05_close_evar(p+22, p[17], p[19]);
      if (! r05_tvar_left(p+24, p[21], p[20]))
        continue;
      if (! r05_char_left(p+26, p[25], p[20], 't'))
        continue;
      r05_close_evar(p+27, p[26], p[20]);

      r05_reset_allocator();
      r05_alloc_open_call(p+29);
      r05_alloc_function(&r05f_DoGenPattern);
      r05_alloc_open_call(p+30);
      r05_alloc_function(&r05f_IncMode);
      r05_alloc_svar(p+10);
      r05_alloc_char('t');
      r05_alloc_close_call(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_open_bracket(p+33);
      r05_alloc_svar(p+17);
      r05_alloc_insert_pos(p+34);
      r05_alloc_svar(p+10);
      r05_alloc_close_bracket(p+35);
      r05_alloc_insert_pos(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_insert_pos(p+38);
      r05_alloc_open_bracket(p+39);
      r05_alloc_char('t');
      r05_alloc_insert_pos(p+40);
      r05_alloc_svar(p+10);
      r05_alloc_open_bracket(p+41);
      r05_alloc_svar(p+10);
      r05_alloc_close_bracket(p+42);
      r05_alloc_close_bracket(p+43);
      r05_alloc_close_bracket(p+44);
      r05_alloc_open_bracket(p+45);
      r05_alloc_insert_pos(p+46);
      r05_alloc_open_bracket(p+47);
      r05_alloc_function(&r05f_CmdMatch);
      r05_alloc_function(&r05f_RIGHT);
      r05_alloc_svar(p+17);
      r05_alloc_svar(p+18);
      r05_alloc_svar(p+10);
      r05_alloc_function(&r05f_Variable);
      r05_alloc_char('t');
      r05_alloc_close_bracket(p+48);
      r05_alloc_close_bracket(p+49);
      r05_alloc_close_call(p+50);
      r05_push_stack(p[50]);
      r05_push_stack(p[29]);
      r05_link_brackets(p[45], p[49]);
      r05_link_brackets(p[47], p[48]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[37], p[44]);
      r05_link_brackets(p[39], p[43]);
      r05_link_brackets(p[41], p[42]);
      r05_correct_evar(p+27);
      r05_correct_evar(p+6);
      r05_correct_evar(p+15);
      r05_link_brackets(p[33], p[35]);
      r05_correct_evar(p+22);
      r05_correct_evar(p+11);
      r05_push_stack(p[31]);
      r05_push_stack(p[30]);
      r05_splice_evar(p[32], p+11);
      r05_splice_evar(p[34], p+22);
      r05_splice_evar(p[36], p+15);
      r05_splice_evar(p[38], p+6);
      r05_splice_evar(p[40], p+27);
      r05_splice_evar(p[46], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+11, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B: 11 */
    /* e.Holes-E: 15 */
    /* s.L: 17 */
    /* t.SrcPos: 21 */
    /* e.Index: 24 */
    /* s.R: 26 */
    /* e.Hole: 27 */
    struct r05_node *p[52] = { 0 };
    /* s.Stack e.Holes-B (s.L (Variable t.SrcPos 'e' e.Index) e.Hole s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    p[11] = p[10]->next;
    p[12] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+13, p[12], p[4]))
        continue;
      r05_close_evar(p+15, p[14], p[4]);
      if (! r05_svar_left(p+17, p[13], p[14]))
        continue;
      if (! r05_brackets_left(p+18, p[17], p[14]))
        continue;
      if (! r05_function_left(p+20, p[18], p[19], &r05f_Variable))
        continue;
      if (! r05_tvar_left(p+21, p[20], p[19]))
        continue;
      if (! r05_char_left(p+23, p[22], p[19], 'e'))
        continue;
      r05_close_evar(p+24, p[23], p[19]);
      if (! r05_svar_right(p+26, p[19], p[14]))
        continue;
      r05_close_evar(p+27, p[19], p[26]);

      r05_reset_allocator();
      r05_alloc_open_call(p+29);
      r05_alloc_function(&r05f_DoGenPatternu_check7);
      r05_alloc_svar(p+10);
      r05_alloc_open_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_bracket(p+32);
      r05_alloc_svar(p+17);
      r05_alloc_insert_pos(p+33);
      r05_alloc_open_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_insert_pos(p+38);
      r05_alloc_close_bracket(p+39);
      r05_alloc_svar(p+26);
      r05_alloc_open_bracket(p+40);
      r05_alloc_insert_pos(p+41);
      r05_alloc_close_bracket(p+42);
      r05_alloc_open_bracket(p+43);
      r05_alloc_insert_pos(p+44);
      r05_alloc_close_bracket(p+45);
      r05_alloc_open_bracket(p+46);
      r05_alloc_insert_pos(p+47);
      r05_alloc_close_bracket(p+48);
      r05_alloc_open_call(p+49);
      r05_alloc_function(&r05f_VarRightSide);
      r05_alloc_svar(p+10);
      r05_alloc_char('e');
      r05_alloc_close_call(p+50);
      r05_alloc_close_call(p+51);
      r05_push_stack(p[51]);
      r05_push_stack(p[29]);
      r05_push_stack(p[50]);
      r05_push_stack(p[49]);
      r05_link_brackets(p[46], p[48]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[43], p[45]);
      r05_correct_evar(p+6);
      r05_link_brackets(p[40], p[42]);
      r05_correct_evar(p+15);
      r05_link_brackets(p[37], p[39]);
      r05_correct_evar(p+27);
      r05_link_brackets(p[34], p[36]);
      r05_correct_evar(p+24);
      r05_link_brackets(p[30], p[32]);
      r05_correct_evar(p+11);
      r05_splice_evar(p[31], p+11);
      r05_splice_tvar(p[33], p+21);
      r05_splice_evar(p[35], p+24);
      r05_splice_evar(p[38], p+27);
      r05_splice_evar(p[41], p+15);
      r05_splice_evar(p[44], p+6);
      r05_splice_evar(p[47], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+11, p[4]));
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
    r05_alloc_function(&r05f_DoGenPatternu_cont7);
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

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_check7, "DoGenPattern_check7") {
  r05_this_is_generated_function();

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* t.SrcPos: 8 */
    /* e.Index: 14 */
    /* e.Hole: 16 */
    /* s.R: 18 */
    /* e.Holes-E: 25 */
    /* e.Vars: 27 */
    /* e.Commands: 29 */
    /* s.VarRight: 31 */
    struct r05_node *p[54] = { 0 };
    /* s.Stack (e.Holes-B) s.L t.SrcPos (e.Index) (e.Hole) s.R (e.Holes-E) (e.Vars) (e.Commands) s.VarRight */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_tvar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    r05_close_evar(p+14, p[10], p[11]);
    r05_close_evar(p+16, p[12], p[13]);
    if (! r05_svar_left(p+18, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    if (! r05_brackets_left(p+23, p[22], p[1]))
      continue;
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    r05_close_evar(p+29, p[23], p[24]);
    if (! r05_svar_left(p+31, p[24], p[1]))
      continue;
    if (! r05_empty_hole(p[31], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_DoGenPattern);
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_IncMode);
    r05_alloc_svar(p+2);
    r05_alloc_char('e');
    r05_alloc_close_call(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_svar(p+31);
    r05_alloc_insert_pos(p+37);
    r05_alloc_svar(p+18);
    r05_alloc_close_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_open_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_char('e');
    r05_alloc_insert_pos(p+43);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+44);
    r05_alloc_svar(p+2);
    r05_alloc_close_bracket(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_open_bracket(p+50);
    r05_alloc_function(&r05f_CmdOpenedE);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+18);
    r05_alloc_char('e');
    r05_alloc_svar(p+2);
    r05_alloc_close_bracket(p+51);
    r05_alloc_close_bracket(p+52);
    r05_alloc_close_call(p+53);
    r05_push_stack(p[53]);
    r05_push_stack(p[32]);
    r05_link_brackets(p[48], p[52]);
    r05_link_brackets(p[50], p[51]);
    r05_correct_evar(p+29);
    r05_link_brackets(p[40], p[47]);
    r05_link_brackets(p[42], p[46]);
    r05_link_brackets(p[44], p[45]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+27);
    r05_correct_evar(p+25);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+16);
    r05_correct_evar(p+5);
    r05_push_stack(p[34]);
    r05_push_stack(p[33]);
    r05_splice_evar(p[35], p+5);
    r05_splice_evar(p[37], p+16);
    r05_splice_evar(p[39], p+25);
    r05_splice_evar(p[41], p+27);
    r05_splice_evar(p[43], p+14);
    r05_splice_evar(p[49], p+29);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Stack: 2 */
    /* e.Holes-B: 5 */
    /* s.L: 7 */
    /* t.SrcPos: 8 */
    /* e.Index: 14 */
    /* e.Hole: 16 */
    /* s.R: 18 */
    /* e.Holes-E: 25 */
    /* e.Vars: 27 */
    /* e.Commands: 29 */
    /* e.Other: 31 */
    struct r05_node *p[52] = { 0 };
    /* s.Stack (e.Holes-B) s.L t.SrcPos (e.Index) (e.Hole) s.R (e.Holes-E) (e.Vars) (e.Commands) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+3, p[2], p[1]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[1]))
      continue;
    if (! r05_tvar_left(p+8, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    r05_close_evar(p+14, p[10], p[11]);
    r05_close_evar(p+16, p[12], p[13]);
    if (! r05_svar_left(p+18, p[13], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    if (! r05_brackets_left(p+21, p[20], p[1]))
      continue;
    if (! r05_brackets_left(p+23, p[22], p[1]))
      continue;
    r05_close_evar(p+25, p[19], p[20]);
    r05_close_evar(p+27, p[21], p[22]);
    r05_close_evar(p+29, p[23], p[24]);
    r05_close_evar(p+31, p[24], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_DoGenPatternu_forward7);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_svar(p+7);
    r05_alloc_open_bracket(p+38);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+39);
    r05_alloc_char('e');
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_insert_pos(p+42);
    r05_alloc_svar(p+18);
    r05_alloc_close_bracket(p+43);
    r05_alloc_insert_pos(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_insert_pos(p+49);
    r05_alloc_close_bracket(p+50);
    r05_alloc_close_call(p+51);
    r05_push_stack(p[51]);
    r05_push_stack(p[33]);
    r05_link_brackets(p[48], p[50]);
    r05_correct_evar(p+29);
    r05_link_brackets(p[45], p[47]);
    r05_correct_evar(p+27);
    r05_correct_evar(p+25);
    r05_link_brackets(p[37], p[43]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[38], p[41]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[35], p+5);
    r05_splice_tvar(p[39], p+8);
    r05_splice_evar(p[40], p+14);
    r05_splice_evar(p[42], p+16);
    r05_splice_evar(p[44], p+25);
    r05_splice_evar(p[46], p+27);
    r05_splice_evar(p[49], p+29);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_forward7, "DoGenPattern_forward7") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* t.Holes-B_next: 15 */
    /* e.Holes-B_rest: 17 */
    struct r05_node *p[31] = { 0 };
    /* s.Stack (e.Holes-B_fix) t.Holes-B_next e.Holes-B_rest (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    if (! r05_tvar_left(p+15, p[12], p[4]))
      continue;
    r05_close_evar(p+17, p[16], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_DoGenPatternu_next7);
    r05_alloc_svar(p+10);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+17);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_splice_evar(p[21], p+13);
    r05_splice_tvar(p[21], p+15);
    r05_splice_evar(p[23], p+17);
    r05_splice_evar(p[25], p+6);
    r05_splice_evar(p[28], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Holes-B_fix: 8 */
    /* e.Vars: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    struct r05_node *p[24] = { 0 };
    /* s.Stack (e.Holes-B_fix) (e.Vars) (e.Commands) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+6, p[0], p[4]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[2], p[3]);
    if (! r05_svar_left(p+14, p[0], p[6]))
      continue;
    if (! r05_empty_hole(p[14], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoGenPatternu_cont7);
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_splice_evar(p[16], p+8);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[21], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_next7, "DoGenPattern_next7") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* e.Holes-B_var: 15 */
    /* e.Holes-E: 19 */
    /* s.L: 21 */
    /* t.SrcPos: 25 */
    /* e.Index: 28 */
    /* s.R: 30 */
    /* e.Hole: 31 */
    struct r05_node *p[56] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_var (s.L (Variable t.SrcPos 'e' e.Index) e.Hole s.R) e.Holes-E (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    p[15] = p[12]->next;
    p[16] = p[12];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+17, p[16], p[4]))
        continue;
      r05_close_evar(p+19, p[18], p[4]);
      if (! r05_svar_left(p+21, p[17], p[18]))
        continue;
      if (! r05_brackets_left(p+22, p[21], p[18]))
        continue;
      if (! r05_function_left(p+24, p[22], p[23], &r05f_Variable))
        continue;
      if (! r05_tvar_left(p+25, p[24], p[23]))
        continue;
      if (! r05_char_left(p+27, p[26], p[23], 'e'))
        continue;
      r05_close_evar(p+28, p[27], p[23]);
      if (! r05_svar_right(p+30, p[23], p[18]))
        continue;
      r05_close_evar(p+31, p[23], p[30]);

      r05_reset_allocator();
      r05_alloc_open_call(p+33);
      r05_alloc_function(&r05f_DoGenPatternu_check7);
      r05_alloc_svar(p+10);
      r05_alloc_open_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_svar(p+21);
      r05_alloc_insert_pos(p+37);
      r05_alloc_open_bracket(p+38);
      r05_alloc_insert_pos(p+39);
      r05_alloc_close_bracket(p+40);
      r05_alloc_open_bracket(p+41);
      r05_alloc_insert_pos(p+42);
      r05_alloc_close_bracket(p+43);
      r05_alloc_svar(p+30);
      r05_alloc_open_bracket(p+44);
      r05_alloc_insert_pos(p+45);
      r05_alloc_close_bracket(p+46);
      r05_alloc_open_bracket(p+47);
      r05_alloc_insert_pos(p+48);
      r05_alloc_close_bracket(p+49);
      r05_alloc_open_bracket(p+50);
      r05_alloc_insert_pos(p+51);
      r05_alloc_close_bracket(p+52);
      r05_alloc_open_call(p+53);
      r05_alloc_function(&r05f_VarRightSide);
      r05_alloc_svar(p+10);
      r05_alloc_char('e');
      r05_alloc_close_call(p+54);
      r05_alloc_close_call(p+55);
      r05_push_stack(p[55]);
      r05_push_stack(p[33]);
      r05_push_stack(p[54]);
      r05_push_stack(p[53]);
      r05_link_brackets(p[50], p[52]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[47], p[49]);
      r05_correct_evar(p+6);
      r05_link_brackets(p[44], p[46]);
      r05_correct_evar(p+19);
      r05_link_brackets(p[41], p[43]);
      r05_correct_evar(p+31);
      r05_link_brackets(p[38], p[40]);
      r05_correct_evar(p+28);
      r05_link_brackets(p[34], p[36]);
      r05_correct_evar(p+15);
      r05_correct_evar(p+13);
      r05_splice_evar(p[35], p+13);
      r05_splice_evar(p[35], p+15);
      r05_splice_tvar(p[37], p+25);
      r05_splice_evar(p[39], p+28);
      r05_splice_evar(p[42], p+31);
      r05_splice_evar(p[45], p+19);
      r05_splice_evar(p[48], p+6);
      r05_splice_evar(p[51], p+8);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+15, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    /* e.Holes-B_fix: 13 */
    /* e.Holes-B_rest: 15 */
    struct r05_node *p[26] = { 0 };
    /* s.Stack (e.Holes-B_fix) e.Holes-B_rest (e.Vars) (e.Commands) */
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
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    r05_close_evar(p+15, p[12], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoGenPatternu_cont7);
    r05_alloc_svar(p+10);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+15);
    r05_correct_evar(p+13);
    r05_splice_evar(p[18], p+13);
    r05_splice_evar(p[18], p+15);
    r05_splice_evar(p[20], p+6);
    r05_splice_evar(p[23], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenPatternu_cont7, "DoGenPattern_cont7") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 6 */
    /* e.Commands: 8 */
    /* s.Stack: 10 */
    struct r05_node *p[17] = { 0 };
    /* s.Stack (e.Vars) (e.Commands) */
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
    r05_alloc_svar(p+10);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
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

R05_DEFINE_LOCAL_FUNCTION(GenResult, "GenResult") {
  r05_this_is_generated_function();

  do {
    /* s.Stack: 2 */
    /* e.PatternVars: 5 */
    /* e.Result: 7 */
    struct r05_node *p[19] = { 0 };
    /* s.Stack (e.PatternVars) e.Result */
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
    r05_alloc_function(&r05f_DoGenResult);
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_svar(p+2);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[15], p[16]);
    r05_link_brackets(p[13], p[14]);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[11], p+5);
    r05_splice_evar(p[17], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoGenResult, "DoGenResult") {
  r05_this_is_generated_function();

  do {
    /* e.Vars: 8 */
    /* e.AllocCommands: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    /* e.Result: 23 */
    /* s.Char1: 25 */
    /* s.Char2: 26 */
    struct r05_node *p[41] = { 0 };
    /* (e.Vars) (e.AllocCommands) (e.Commands) s.Stack (Symbol Char s.Char1) (Symbol Char s.Char2) e.Result */
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
    if (! r05_svar_left(p+14, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_function_left(p+17, p[15], p[16], &r05f_Symbol))
      continue;
    if (! r05_function_left(p+18, p[17], p[16], &r05f_Char))
      continue;
    if (! r05_brackets_left(p+19, p[16], p[1]))
      continue;
    if (! r05_function_left(p+21, p[19], p[20], &r05f_Symbol))
      continue;
    if (! r05_function_left(p+22, p[21], p[20], &r05f_Char))
      continue;
    r05_close_evar(p+23, p[20], p[1]);
    if (! r05_svar_left(p+25, p[18], p[16]))
      continue;
    if (! r05_empty_hole(p[25], p[16]))
      continue;
    if (! r05_svar_left(p+26, p[22], p[20]))
      continue;
    if (! r05_empty_hole(p[26], p[20]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_DoGenResult);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_svar(p+14);
    r05_alloc_open_bracket(p+37);
    r05_alloc_function(&r05f_TkString);
    r05_alloc_number(2UL);
    r05_alloc_svar(p+25);
    r05_alloc_svar(p+26);
    r05_alloc_close_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_call(p+40);
    r05_push_stack(p[40]);
    r05_push_stack(p[27]);
    r05_correct_evar(p+23);
    r05_link_brackets(p[37], p[38]);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[29], p+8);
    r05_splice_evar(p[32], p+10);
    r05_splice_evar(p[35], p+12);
    r05_splice_evar(p[39], p+23);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Vars: 8 */
    /* e.AllocCommands: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    /* e.Result: 19 */
    /* s.Value: 21 */
    struct r05_node *p[36] = { 0 };
    /* (e.Vars) (e.AllocCommands) (e.Commands) s.Stack (Symbol Char s.Value) e.Result */
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
    if (! r05_svar_left(p+14, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_function_left(p+17, p[15], p[16], &r05f_Symbol))
      continue;
    if (! r05_function_left(p+18, p[17], p[16], &r05f_Char))
      continue;
    r05_close_evar(p+19, p[16], p[1]);
    if (! r05_svar_left(p+21, p[18], p[16]))
      continue;
    if (! r05_empty_hole(p[21], p[16]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_DoGenResult);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_function(&r05f_CmdAllocateElem);
    r05_alloc_function(&r05f_ElSymbol);
    r05_alloc_function(&r05f_Char);
    r05_alloc_svar(p+21);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_call(p+35);
    r05_push_stack(p[35]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[26], p[30]);
    r05_link_brackets(p[28], p[29]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[24], p+8);
    r05_splice_evar(p[27], p+10);
    r05_splice_evar(p[32], p+12);
    r05_splice_evar(p[34], p+19);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Vars: 8 */
    /* e.AllocCommands: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    /* e.Result: 22 */
    /* s.Len: 24 */
    /* e.String: 25 */
    /* s.Char: 27 */
    struct r05_node *p[45] = { 0 };
    /* (e.Vars) (e.AllocCommands) (e.Commands) s.Stack (TkString s.Len e.String) (Symbol Char s.Char) e.Result */
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
    if (! r05_svar_left(p+14, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_function_left(p+17, p[15], p[16], &r05f_TkString))
      continue;
    if (! r05_brackets_left(p+18, p[16], p[1]))
      continue;
    if (! r05_function_left(p+20, p[18], p[19], &r05f_Symbol))
      continue;
    if (! r05_function_left(p+21, p[20], p[19], &r05f_Char))
      continue;
    r05_close_evar(p+22, p[19], p[1]);
    if (! r05_svar_left(p+24, p[17], p[16]))
      continue;
    r05_close_evar(p+25, p[24], p[16]);
    if (! r05_svar_left(p+27, p[21], p[19]))
      continue;
    if (! r05_empty_hole(p[27], p[19]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_DoGenResult);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_svar(p+14);
    r05_alloc_open_bracket(p+38);
    r05_alloc_function(&r05f_TkString);
    r05_alloc_open_call(p+39);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+24);
    r05_alloc_close_call(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_svar(p+27);
    r05_alloc_close_bracket(p+42);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_call(p+44);
    r05_push_stack(p[44]);
    r05_push_stack(p[28]);
    r05_correct_evar(p+22);
    r05_link_brackets(p[38], p[42]);
    r05_correct_evar(p+25);
    r05_push_stack(p[40]);
    r05_push_stack(p[39]);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[30], p+8);
    r05_splice_evar(p[33], p+10);
    r05_splice_evar(p[36], p+12);
    r05_splice_evar(p[41], p+25);
    r05_splice_evar(p[43], p+22);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Vars: 8 */
    /* e.AllocCommands: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    /* e.Result: 18 */
    /* s.Len: 20 */
    /* e.String: 21 */
    struct r05_node *p[38] = { 0 };
    /* (e.Vars) (e.AllocCommands) (e.Commands) s.Stack (TkString s.Len e.String) e.Result */
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
    if (! r05_svar_left(p+14, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_function_left(p+17, p[15], p[16], &r05f_TkString))
      continue;
    r05_close_evar(p+18, p[16], p[1]);
    if (! r05_svar_left(p+20, p[17], p[16]))
      continue;
    r05_close_evar(p+21, p[20], p[16]);

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_DoGenResult);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_function(&r05f_CmdAllocateElem);
    r05_alloc_function(&r05f_ElString);
    r05_alloc_svar(p+20);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_open_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_call(p+37);
    r05_push_stack(p[37]);
    r05_push_stack(p[23]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[33], p[35]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[27], p[32]);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+21);
    r05_correct_evar(p+10);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[25], p+8);
    r05_splice_evar(p[28], p+10);
    r05_splice_evar(p[30], p+21);
    r05_splice_evar(p[34], p+12);
    r05_splice_evar(p[36], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Vars: 8 */
    /* e.AllocCommands: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    /* e.Result: 18 */
    /* s.Type: 20 */
    /* e.Value: 21 */
    struct r05_node *p[38] = { 0 };
    /* (e.Vars) (e.AllocCommands) (e.Commands) s.Stack (Symbol s.Type e.Value) e.Result */
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
    if (! r05_svar_left(p+14, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_function_left(p+17, p[15], p[16], &r05f_Symbol))
      continue;
    r05_close_evar(p+18, p[16], p[1]);
    if (! r05_svar_left(p+20, p[17], p[16]))
      continue;
    r05_close_evar(p+21, p[20], p[16]);

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_DoGenResult);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_function(&r05f_CmdAllocateElem);
    r05_alloc_function(&r05f_ElSymbol);
    r05_alloc_svar(p+20);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_open_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_call(p+37);
    r05_push_stack(p[37]);
    r05_push_stack(p[23]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[33], p[35]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[27], p[32]);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+21);
    r05_correct_evar(p+10);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[25], p+8);
    r05_splice_evar(p[28], p+10);
    r05_splice_evar(p[30], p+21);
    r05_splice_evar(p[34], p+12);
    r05_splice_evar(p[36], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Vars: 8 */
    /* e.AllocCommands: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    /* e.InBrackets: 18 */
    /* e.Result: 20 */
    struct r05_node *p[41] = { 0 };
    /* (e.Vars) (e.AllocCommands) (e.Commands) s.Stack (Brackets e.InBrackets) e.Result */
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
    if (! r05_svar_left(p+14, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_function_left(p+17, p[15], p[16], &r05f_Brackets))
      continue;
    r05_close_evar(p+18, p[17], p[16]);
    r05_close_evar(p+20, p[16], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_DoGenResult);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_function(&r05f_CmdAllocateElem);
    r05_alloc_function(&r05f_ElOpenBracket);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_open_call(p+34);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+14);
    r05_alloc_close_call(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_function(&r05f_TkCloseBracket);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_call(p+40);
    r05_push_stack(p[40]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+20);
    r05_link_brackets(p[37], p[38]);
    r05_correct_evar(p+18);
    r05_push_stack(p[35]);
    r05_push_stack(p[34]);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[26], p[30]);
    r05_link_brackets(p[28], p[29]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[24], p+8);
    r05_splice_evar(p[27], p+10);
    r05_splice_evar(p[32], p+12);
    r05_splice_evar(p[36], p+18);
    r05_splice_evar(p[39], p+20);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Vars: 8 */
    /* e.AllocCommands: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    /* e.Result: 18 */
    /* t.SrcPos: 20 */
    /* e.Name: 24 */
    /* e.InBrackets: 26 */
    struct r05_node *p[50] = { 0 };
    /* (e.Vars) (e.AllocCommands) (e.Commands) s.Stack (Call t.SrcPos (e.Name) e.InBrackets) e.Result */
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
    if (! r05_svar_left(p+14, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_function_left(p+17, p[15], p[16], &r05f_Call))
      continue;
    r05_close_evar(p+18, p[16], p[1]);
    if (! r05_tvar_left(p+20, p[17], p[16]))
      continue;
    if (! r05_brackets_left(p+22, p[21], p[16]))
      continue;
    r05_close_evar(p+24, p[22], p[23]);
    r05_close_evar(p+26, p[23], p[16]);

    r05_reset_allocator();
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_DoGenResult);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_function(&r05f_CmdAllocateElem);
    r05_alloc_function(&r05f_ElOpenCall);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_open_call(p+40);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+14);
    r05_alloc_close_call(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_function(&r05f_Symbol);
    r05_alloc_function(&r05f_Word);
    r05_alloc_insert_pos(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_open_bracket(p+46);
    r05_alloc_function(&r05f_TkCloseCall);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+47);
    r05_alloc_insert_pos(p+48);
    r05_alloc_close_call(p+49);
    r05_push_stack(p[49]);
    r05_push_stack(p[28]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[46], p[47]);
    r05_correct_evar(p+26);
    r05_link_brackets(p[42], p[44]);
    r05_correct_evar(p+24);
    r05_push_stack(p[41]);
    r05_push_stack(p[40]);
    r05_link_brackets(p[37], p[39]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[32], p[36]);
    r05_link_brackets(p[34], p[35]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[30], p+8);
    r05_splice_evar(p[33], p+10);
    r05_splice_evar(p[38], p+12);
    r05_splice_evar(p[43], p+24);
    r05_splice_evar(p[45], p+26);
    r05_splice_evar(p[48], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Vars: 8 */
    /* e.AllocCommands: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    /* e.Result: 18 */
    /* s.OpenPos: 20 */
    struct r05_node *p[39] = { 0 };
    /* (e.Vars) (e.AllocCommands) (e.Commands) s.Stack (TkCloseBracket s.OpenPos) e.Result */
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
    if (! r05_svar_left(p+14, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_function_left(p+17, p[15], p[16], &r05f_TkCloseBracket))
      continue;
    r05_close_evar(p+18, p[16], p[1]);
    if (! r05_svar_left(p+20, p[17], p[16]))
      continue;
    if (! r05_empty_hole(p[20], p[16]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_DoGenResult);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_function(&r05f_CmdAllocateElem);
    r05_alloc_function(&r05f_ElCloseBracket);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_function(&r05f_CmdLinkBrackets);
    r05_alloc_svar(p+20);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_open_call(p+35);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+14);
    r05_alloc_close_call(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_call(p+38);
    r05_push_stack(p[38]);
    r05_push_stack(p[21]);
    r05_correct_evar(p+18);
    r05_push_stack(p[36]);
    r05_push_stack(p[35]);
    r05_link_brackets(p[30], p[34]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[31], p[32]);
    r05_link_brackets(p[25], p[29]);
    r05_link_brackets(p[27], p[28]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[23], p+8);
    r05_splice_evar(p[26], p+10);
    r05_splice_evar(p[33], p+12);
    r05_splice_evar(p[37], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Vars: 8 */
    /* e.AllocCommands: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    /* e.Result: 18 */
    /* s.OpenPos: 20 */
    struct r05_node *p[41] = { 0 };
    /* (e.Vars) (e.AllocCommands) (e.Commands) s.Stack (TkCloseCall s.OpenPos) e.Result */
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
    if (! r05_svar_left(p+14, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    if (! r05_function_left(p+17, p[15], p[16], &r05f_TkCloseCall))
      continue;
    r05_close_evar(p+18, p[16], p[1]);
    if (! r05_svar_left(p+20, p[17], p[16]))
      continue;
    if (! r05_empty_hole(p[20], p[16]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_DoGenResult);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_function(&r05f_CmdAllocateElem);
    r05_alloc_function(&r05f_ElCloseCall);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_function(&r05f_CmdPushStack);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+32);
    r05_alloc_open_bracket(p+33);
    r05_alloc_function(&r05f_CmdPushStack);
    r05_alloc_svar(p+20);
    r05_alloc_close_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_call(p+37);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+14);
    r05_alloc_close_call(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_call(p+40);
    r05_push_stack(p[40]);
    r05_push_stack(p[21]);
    r05_correct_evar(p+18);
    r05_push_stack(p[38]);
    r05_push_stack(p[37]);
    r05_link_brackets(p[30], p[36]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[33], p[34]);
    r05_link_brackets(p[31], p[32]);
    r05_link_brackets(p[25], p[29]);
    r05_link_brackets(p[27], p[28]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[23], p+8);
    r05_splice_evar(p[26], p+10);
    r05_splice_evar(p[35], p+12);
    r05_splice_evar(p[39], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.AllocCommands: 8 */
    /* e.Commands: 10 */
    /* s.Stack: 12 */
    /* e.Result: 16 */
    /* t.SrcPos: 18 */
    /* e.Index: 21, 30 */
    /* e.Vars-B: 23 */
    /* e.Insts: 32 */
    /* e.Vars-E: 34 */
    /* s.Sample: 36 */
    struct r05_node *p[58] = { 0 };
    /* (e.Vars-B ('s' e.Index s.Sample (e.Insts)) e.Vars-E) (e.AllocCommands) (e.Commands) s.Stack (Variable t.SrcPos 's' e.Index) e.Result */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_svar_left(p+12, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    if (! r05_function_left(p+15, p[13], p[14], &r05f_Variable))
      continue;
    r05_close_evar(p+16, p[14], p[1]);
    if (! r05_tvar_left(p+18, p[15], p[14]))
      continue;
    if (! r05_char_left(p+20, p[19], p[14], 's'))
      continue;
    r05_close_evar(p+21, p[20], p[14]);
    p[23] = p[2]->next;
    p[24] = p[2];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+25, p[24], p[3]))
        continue;
      if (! r05_char_left(p+27, p[25], p[26], 's'))
        continue;
      if (! r05_brackets_right(p+28, p[27], p[26]))
        continue;
      if (! r05_repeated_evar_left(p+30, p[27], p[28], p+21))
        continue;
      r05_close_evar(p+32, p[28], p[29]);
      r05_close_evar(p+34, p[26], p[3]);
      if (! r05_svar_left(p+36, p[31], p[28]))
        continue;
      if (! r05_empty_hole(p[36], p[28]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+37);
      r05_alloc_function(&r05f_DoGenResult);
      r05_alloc_open_bracket(p+38);
      r05_alloc_insert_pos(p+39);
      r05_alloc_open_bracket(p+40);
      r05_alloc_char('s');
      r05_alloc_insert_pos(p+41);
      r05_alloc_svar(p+36);
      r05_alloc_open_bracket(p+42);
      r05_alloc_insert_pos(p+43);
      r05_alloc_close_bracket(p+44);
      r05_alloc_close_bracket(p+45);
      r05_alloc_insert_pos(p+46);
      r05_alloc_close_bracket(p+47);
      r05_alloc_open_bracket(p+48);
      r05_alloc_insert_pos(p+49);
      r05_alloc_open_bracket(p+50);
      r05_alloc_function(&r05f_CmdAllocateElem);
      r05_alloc_function(&r05f_ElVariable);
      r05_alloc_char('s');
      r05_alloc_svar(p+36);
      r05_alloc_close_bracket(p+51);
      r05_alloc_close_bracket(p+52);
      r05_alloc_open_bracket(p+53);
      r05_alloc_insert_pos(p+54);
      r05_alloc_close_bracket(p+55);
      r05_alloc_svar(p+12);
      r05_alloc_insert_pos(p+56);
      r05_alloc_close_call(p+57);
      r05_push_stack(p[57]);
      r05_push_stack(p[37]);
      r05_correct_evar(p+16);
      r05_link_brackets(p[53], p[55]);
      r05_correct_evar(p+10);
      r05_link_brackets(p[48], p[52]);
      r05_link_brackets(p[50], p[51]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[38], p[47]);
      r05_correct_evar(p+34);
      r05_link_brackets(p[40], p[45]);
      r05_link_brackets(p[42], p[44]);
      r05_correct_evar(p+32);
      r05_correct_evar(p+21);
      r05_correct_evar(p+23);
      r05_splice_evar(p[39], p+23);
      r05_splice_evar(p[41], p+21);
      r05_splice_evar(p[43], p+32);
      r05_splice_evar(p[46], p+34);
      r05_splice_evar(p[49], p+8);
      r05_splice_evar(p[54], p+10);
      r05_splice_evar(p[56], p+16);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+23, p[3]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.AllocCommands: 12 */
    /* e.Commands: 14 */
    /* s.InsertPos: 16 */
    /* s.Stack: 17 */
    /* e.Result: 21 */
    /* t.SrcPos: 23 */
    /* s.Mode: 25, 34 */
    /* e.Index: 26, 35 */
    /* e.Vars-B: 28 */
    /* e.Vars-E: 37 */
    /* s.Sample: 39 */
    /* s.Inst: 40 */
    /* e.Insts: 41 */
    struct r05_node *p[68] = { 0 };
    /* (e.Vars-B (s.Mode e.Index s.Sample (s.Inst e.Insts)) e.Vars-E) (e.AllocCommands (CmdAllocateElem ElSavePos s.InsertPos)) (e.Commands) s.Stack (Variable t.SrcPos s.Mode e.Index) e.Result */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_right(p+8, p[4], p[5]))
      continue;
    if (! r05_function_left(p+10, p[8], p[9], &r05f_CmdAllocateElem))
      continue;
    if (! r05_function_left(p+11, p[10], p[9], &r05f_ElSavePos))
      continue;
    r05_close_evar(p+12, p[4], p[8]);
    r05_close_evar(p+14, p[6], p[7]);
    if (! r05_svar_left(p+16, p[11], p[9]))
      continue;
    if (! r05_empty_hole(p[16], p[9]))
      continue;
    if (! r05_svar_left(p+17, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+18, p[17], p[1]))
      continue;
    if (! r05_function_left(p+20, p[18], p[19], &r05f_Variable))
      continue;
    r05_close_evar(p+21, p[19], p[1]);
    if (! r05_tvar_left(p+23, p[20], p[19]))
      continue;
    if (! r05_svar_left(p+25, p[24], p[19]))
      continue;
    r05_close_evar(p+26, p[25], p[19]);
    p[28] = p[2]->next;
    p[29] = p[2];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+30, p[29], p[3]))
        continue;
      if (! r05_brackets_right(p+32, p[30], p[31]))
        continue;
      if (! r05_repeated_svar_left(p+34, p[30], p[32], p+25))
        continue;
      if (! r05_repeated_evar_left(p+35, p[34], p[32], p+26))
        continue;
      r05_close_evar(p+37, p[31], p[3]);
      if (! r05_svar_left(p+39, p[36], p[32]))
        continue;
      if (! r05_empty_hole(p[39], p[32]))
        continue;
      if (! r05_svar_left(p+40, p[32], p[33]))
        continue;
      r05_close_evar(p+41, p[40], p[33]);

      r05_reset_allocator();
      r05_alloc_open_call(p+43);
      r05_alloc_function(&r05f_DoGenResult);
      r05_alloc_open_bracket(p+44);
      r05_alloc_insert_pos(p+45);
      r05_alloc_open_bracket(p+46);
      r05_alloc_svar(p+25);
      r05_alloc_insert_pos(p+47);
      r05_alloc_svar(p+39);
      r05_alloc_open_bracket(p+48);
      r05_alloc_insert_pos(p+49);
      r05_alloc_close_bracket(p+50);
      r05_alloc_close_bracket(p+51);
      r05_alloc_insert_pos(p+52);
      r05_alloc_close_bracket(p+53);
      r05_alloc_open_bracket(p+54);
      r05_alloc_insert_pos(p+55);
      r05_alloc_open_bracket(p+56);
      r05_alloc_function(&r05f_CmdAllocateElem);
      r05_alloc_function(&r05f_ElSavePos);
      r05_alloc_svar(p+16);
      r05_alloc_close_bracket(p+57);
      r05_alloc_close_bracket(p+58);
      r05_alloc_open_bracket(p+59);
      r05_alloc_open_bracket(p+60);
      r05_alloc_function(&r05f_CmdCorrectVar);
      r05_alloc_svar(p+25);
      r05_alloc_svar(p+40);
      r05_alloc_close_bracket(p+61);
      r05_alloc_insert_pos(p+62);
      r05_alloc_open_bracket(p+63);
      r05_alloc_function(&r05f_CmdInsertVar);
      r05_alloc_svar(p+16);
      r05_alloc_svar(p+25);
      r05_alloc_svar(p+40);
      r05_alloc_close_bracket(p+64);
      r05_alloc_close_bracket(p+65);
      r05_alloc_svar(p+17);
      r05_alloc_insert_pos(p+66);
      r05_alloc_close_call(p+67);
      r05_push_stack(p[67]);
      r05_push_stack(p[43]);
      r05_correct_evar(p+21);
      r05_link_brackets(p[59], p[65]);
      r05_link_brackets(p[63], p[64]);
      r05_correct_evar(p+14);
      r05_link_brackets(p[60], p[61]);
      r05_link_brackets(p[54], p[58]);
      r05_link_brackets(p[56], p[57]);
      r05_correct_evar(p+12);
      r05_link_brackets(p[44], p[53]);
      r05_correct_evar(p+37);
      r05_link_brackets(p[46], p[51]);
      r05_link_brackets(p[48], p[50]);
      r05_correct_evar(p+41);
      r05_correct_evar(p+26);
      r05_correct_evar(p+28);
      r05_splice_evar(p[45], p+28);
      r05_splice_evar(p[47], p+26);
      r05_splice_evar(p[49], p+41);
      r05_splice_evar(p[52], p+37);
      r05_splice_evar(p[55], p+12);
      r05_splice_evar(p[62], p+14);
      r05_splice_evar(p[66], p+21);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+28, p[3]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.AllocCommands: 8 */
    /* e.Commands: 10 */
    /* s.Stack: 12 */
    /* e.Result: 16 */
    /* t.SrcPos: 18 */
    /* s.Mode: 20, 29 */
    /* e.Index: 21, 30 */
    /* e.Vars-B: 23 */
    /* e.Vars-E: 32 */
    /* s.Sample: 34 */
    /* s.Inst: 35 */
    /* e.Insts: 36 */
    struct r05_node *p[65] = { 0 };
    /* (e.Vars-B (s.Mode e.Index s.Sample (s.Inst e.Insts)) e.Vars-E) (e.AllocCommands) (e.Commands) s.Stack (Variable t.SrcPos s.Mode e.Index) e.Result */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_svar_left(p+12, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    if (! r05_function_left(p+15, p[13], p[14], &r05f_Variable))
      continue;
    r05_close_evar(p+16, p[14], p[1]);
    if (! r05_tvar_left(p+18, p[15], p[14]))
      continue;
    if (! r05_svar_left(p+20, p[19], p[14]))
      continue;
    r05_close_evar(p+21, p[20], p[14]);
    p[23] = p[2]->next;
    p[24] = p[2];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+25, p[24], p[3]))
        continue;
      if (! r05_brackets_right(p+27, p[25], p[26]))
        continue;
      if (! r05_repeated_svar_left(p+29, p[25], p[27], p+20))
        continue;
      if (! r05_repeated_evar_left(p+30, p[29], p[27], p+21))
        continue;
      r05_close_evar(p+32, p[26], p[3]);
      if (! r05_svar_left(p+34, p[31], p[27]))
        continue;
      if (! r05_empty_hole(p[34], p[27]))
        continue;
      if (! r05_svar_left(p+35, p[27], p[28]))
        continue;
      r05_close_evar(p+36, p[35], p[28]);

      r05_reset_allocator();
      r05_alloc_open_call(p+38);
      r05_alloc_function(&r05f_DoGenResult);
      r05_alloc_open_bracket(p+39);
      r05_alloc_insert_pos(p+40);
      r05_alloc_open_bracket(p+41);
      r05_alloc_svar(p+20);
      r05_alloc_insert_pos(p+42);
      r05_alloc_svar(p+34);
      r05_alloc_open_bracket(p+43);
      r05_alloc_insert_pos(p+44);
      r05_alloc_close_bracket(p+45);
      r05_alloc_close_bracket(p+46);
      r05_alloc_insert_pos(p+47);
      r05_alloc_close_bracket(p+48);
      r05_alloc_open_bracket(p+49);
      r05_alloc_insert_pos(p+50);
      r05_alloc_open_bracket(p+51);
      r05_alloc_function(&r05f_CmdAllocateElem);
      r05_alloc_function(&r05f_ElSavePos);
      r05_alloc_svar(p+12);
      r05_alloc_close_bracket(p+52);
      r05_alloc_close_bracket(p+53);
      r05_alloc_open_bracket(p+54);
      r05_alloc_open_bracket(p+55);
      r05_alloc_function(&r05f_CmdCorrectVar);
      r05_alloc_svar(p+20);
      r05_alloc_svar(p+35);
      r05_alloc_close_bracket(p+56);
      r05_alloc_insert_pos(p+57);
      r05_alloc_open_bracket(p+58);
      r05_alloc_function(&r05f_CmdInsertVar);
      r05_alloc_svar(p+12);
      r05_alloc_svar(p+20);
      r05_alloc_svar(p+35);
      r05_alloc_close_bracket(p+59);
      r05_alloc_close_bracket(p+60);
      r05_alloc_open_call(p+61);
      r05_alloc_function(&r05f_Inc);
      r05_alloc_svar(p+12);
      r05_alloc_close_call(p+62);
      r05_alloc_insert_pos(p+63);
      r05_alloc_close_call(p+64);
      r05_push_stack(p[64]);
      r05_push_stack(p[38]);
      r05_correct_evar(p+16);
      r05_push_stack(p[62]);
      r05_push_stack(p[61]);
      r05_link_brackets(p[54], p[60]);
      r05_link_brackets(p[58], p[59]);
      r05_correct_evar(p+10);
      r05_link_brackets(p[55], p[56]);
      r05_link_brackets(p[49], p[53]);
      r05_link_brackets(p[51], p[52]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[39], p[48]);
      r05_correct_evar(p+32);
      r05_link_brackets(p[41], p[46]);
      r05_link_brackets(p[43], p[45]);
      r05_correct_evar(p+36);
      r05_correct_evar(p+21);
      r05_correct_evar(p+23);
      r05_splice_evar(p[40], p+23);
      r05_splice_evar(p[42], p+21);
      r05_splice_evar(p[44], p+36);
      r05_splice_evar(p[47], p+32);
      r05_splice_evar(p[50], p+8);
      r05_splice_evar(p[57], p+10);
      r05_splice_evar(p[63], p+16);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+23, p[3]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.AllocCommands: 8 */
    /* e.Commands: 10 */
    /* s.Stack: 12 */
    /* e.Result: 16 */
    /* t.SrcPos: 18 */
    /* s.Mode: 20, 29 */
    /* e.Index: 21, 30 */
    /* e.Vars-B: 23 */
    /* e.Vars-E: 32 */
    /* s.Sample: 34 */
    struct r05_node *p[55] = { 0 };
    /* (e.Vars-B (s.Mode e.Index s.Sample ()) e.Vars-E) (e.AllocCommands) (e.Commands) s.Stack (Variable t.SrcPos s.Mode e.Index) e.Result */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_svar_left(p+12, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    if (! r05_function_left(p+15, p[13], p[14], &r05f_Variable))
      continue;
    r05_close_evar(p+16, p[14], p[1]);
    if (! r05_tvar_left(p+18, p[15], p[14]))
      continue;
    if (! r05_svar_left(p+20, p[19], p[14]))
      continue;
    r05_close_evar(p+21, p[20], p[14]);
    p[23] = p[2]->next;
    p[24] = p[2];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+25, p[24], p[3]))
        continue;
      if (! r05_brackets_right(p+27, p[25], p[26]))
        continue;
      if (! r05_empty_hole(p[27], p[28]))
        continue;
      if (! r05_repeated_svar_left(p+29, p[25], p[27], p+20))
        continue;
      if (! r05_repeated_evar_left(p+30, p[29], p[27], p+21))
        continue;
      r05_close_evar(p+32, p[26], p[3]);
      if (! r05_svar_left(p+34, p[31], p[27]))
        continue;
      if (! r05_empty_hole(p[34], p[27]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+35);
      r05_alloc_function(&r05f_DoGenResult);
      r05_alloc_open_bracket(p+36);
      r05_alloc_insert_pos(p+37);
      r05_alloc_open_bracket(p+38);
      r05_alloc_svar(p+20);
      r05_alloc_insert_pos(p+39);
      r05_alloc_svar(p+34);
      r05_alloc_open_bracket(p+40);
      r05_alloc_close_bracket(p+41);
      r05_alloc_close_bracket(p+42);
      r05_alloc_insert_pos(p+43);
      r05_alloc_close_bracket(p+44);
      r05_alloc_open_bracket(p+45);
      r05_alloc_insert_pos(p+46);
      r05_alloc_open_bracket(p+47);
      r05_alloc_function(&r05f_CmdAllocateElem);
      r05_alloc_function(&r05f_ElVariable);
      r05_alloc_svar(p+20);
      r05_alloc_svar(p+34);
      r05_alloc_close_bracket(p+48);
      r05_alloc_close_bracket(p+49);
      r05_alloc_open_bracket(p+50);
      r05_alloc_insert_pos(p+51);
      r05_alloc_close_bracket(p+52);
      r05_alloc_svar(p+12);
      r05_alloc_insert_pos(p+53);
      r05_alloc_close_call(p+54);
      r05_push_stack(p[54]);
      r05_push_stack(p[35]);
      r05_correct_evar(p+16);
      r05_link_brackets(p[50], p[52]);
      r05_correct_evar(p+10);
      r05_link_brackets(p[45], p[49]);
      r05_link_brackets(p[47], p[48]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[36], p[44]);
      r05_correct_evar(p+32);
      r05_link_brackets(p[38], p[42]);
      r05_link_brackets(p[40], p[41]);
      r05_correct_evar(p+21);
      r05_correct_evar(p+23);
      r05_splice_evar(p[37], p+23);
      r05_splice_evar(p[39], p+21);
      r05_splice_evar(p[43], p+32);
      r05_splice_evar(p[46], p+8);
      r05_splice_evar(p[51], p+10);
      r05_splice_evar(p[53], p+16);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+23, p[3]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.UnusedVars: 8 */
    /* e.AllocCommands: 10 */
    /* e.Commands: 12 */
    /* s.Stack: 14 */
    struct r05_node *p[16] = { 0 };
    /* (e.UnusedVars) (e.AllocCommands) (e.Commands) s.Stack */
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
    if (! r05_svar_left(p+14, p[7], p[1]))
      continue;
    if (! r05_empty_hole(p[14], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+15);
    r05_correct_evar(p+12);
    r05_correct_evar(p+10);
    r05_splice_evar(p[15], p+10);
    r05_splice_evar(p[15], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

static struct r05_function *metatable_entries[] = {
  &r05f_SaveFile,
  &r05f_MapAccum,
  &r05f_Map,
  &r05f_Inc,
  &r05f_InlineExpr,
  &r05f_Transform,
  &r05f_R05m_Generatem_ToFile,
  &r05f_R05m_Generatem_ToLines,
  &r05f_R05m_Generatem_Aux,
  &r05f_generatoru_GenTreeItem,
  &r05f_SafeSpecialComment,
  &r05f_r05m_generatoru_MetatableName,
  &r05f_r05m_generatoru_GenExtern,
  &r05f_Scope,
  &r05f_GenEmptyDefinition,
  &r05f_GenDeclaration,
  &r05f_GenFunction,
  &r05f_AssertOneOf,
  &r05f_DefName,
  &r05f_EscapeName,
  &r05f_r05m_generatoru_EscapeNameChar,
  &r05f_EscapeNameCharm_Code,
  &r05f_EscapeNamem_GlueCodes,
  &r05f_Hex,
  &r05f_AddFailCommand,
  &r05f_generatoru_GenSentence,
  &r05f_SkipIndentAccum,
  &r05f_SafeComment,
  &r05f_generatoru_GenCommand,
  &r05f_CmdComment,
  &r05f_CmdAllocStack,
  &r05f_CmdInitHole0,
  &r05f_CmdMatch,
  &r05f_MatchFunc,
  &r05f_SymbolFunc,
  &r05f_StrFromDir,
  &r05f_MatchArgs,
  &r05f_SymbolTextRep,
  &r05f_CmdEmpty,
  &r05f_CmdClosedE,
  &r05f_CmdOpenedEm_Start,
  &r05f_CmdOpenedEm_End,
  &r05f_CmdEmptyResult,
  &r05f_CmdAllocateElem,
  &r05f_ElSymbol,
  &r05f_ElString,
  &r05f_ElOpenBracket,
  &r05f_ElCloseBracket,
  &r05f_ElOpenCall,
  &r05f_ElCloseCall,
  &r05f_ElSavePos,
  &r05f_ElVariable,
  &r05f_CmdLinkBrackets,
  &r05f_CmdPushStack,
  &r05f_CmdCorrectVar,
  &r05f_CmdInsertVar,
  &r05f_CmdReturnResult,
  &r05f_EscapeString,
  &r05f_r05m_generatoru_EscapeChar,
  &r05f_EscapeCharm_Aux,
  &r05f_EscapeCharm_SwCompare,
  &r05f_Elem,
  &r05f_ElemPtr,
  &r05f_ElemLR,
  &r05f_CompileSentence,
  &r05f_generatoru_MakeDeclaration,
  &r05f_r05m_generatorm_SymbInst,
  &r05f_CompileSentencem_OpenELoops,
  &r05f_GenPattern,
  &r05f_Inc2,
  &r05f_VarSize,
  &r05f_IncMode,
  &r05f_VarRightSide,
  &r05f_DoGenPattern,
  &r05f_GenResult,
  &r05f_DoGenResult,
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

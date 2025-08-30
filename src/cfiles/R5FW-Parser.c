/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(LoadFile)
R05_DECLARE_ENTRY_FUNCTION(Inc)
R05_DECLARE_ENTRY_FUNCTION(Map)
R05_DECLARE_ENTRY_FUNCTION(MapAccum)
R05_DECLARE_ENTRY_FUNCTION(Builtins)
R05_DECLARE_ENTRY_FUNCTION(TokName)
R05_DECLARE_ENTRY_FUNCTION(Scan)
R05_DECLARE_ENTRY_FUNCTION(ScanStringm_FromPos)
R05_DECLARE_LOCAL_FUNCTION(SkipBOM)
R05_DECLARE_LOCAL_FUNCTION(IncLine)
R05_DECLARE_LOCAL_FUNCTION(IncCol)
R05_DECLARE_LOCAL_FUNCTION(DoScan)
R05_DECLARE_LOCAL_FUNCTION(DoScanu_check)
R05_DECLARE_LOCAL_FUNCTION(DoScanu_cont)
R05_DECLARE_LOCAL_FUNCTION(DoScanu_check0)
R05_DECLARE_LOCAL_FUNCTION(DoScanu_cont0)
R05_DECLARE_LOCAL_FUNCTION(DoScanu_check1)
R05_DECLARE_LOCAL_FUNCTION(DoScanu_cont1)
R05_DECLARE_LOCAL_FUNCTION(DoScanu_check2)
R05_DECLARE_LOCAL_FUNCTION(DoScanu_cont2)
R05_DECLARE_LOCAL_FUNCTION(DoScanu_check3)
R05_DECLARE_LOCAL_FUNCTION(DoScanu_cont3)
R05_DECLARE_LOCAL_FUNCTION(DoScanu_check4)
R05_DECLARE_LOCAL_FUNCTION(DoScanu_cont4)
R05_DECLARE_LOCAL_FUNCTION(IsVarType)
R05_DECLARE_LOCAL_FUNCTION(IsPunctuation)
R05_DECLARE_LOCAL_FUNCTION(IsPunctuationu_check)
R05_DECLARE_LOCAL_FUNCTION(IsPunctuationu_cont)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Keyword)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_BuildKeyword)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_BuildKeywordu_check)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_BuildKeywordu_cont)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_BuildKeywordu_check0)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_BuildKeywordu_cont0)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Number)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Numberu_check)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Numberu_cont)
R05_DECLARE_LOCAL_FUNCTION(DropZero)
R05_DECLARE_LOCAL_FUNCTION(MAXm_MACRODIGIT)
R05_DECLARE_LOCAL_FUNCTION(CheckNumber)
R05_DECLARE_LOCAL_FUNCTION(CheckNumber0)
R05_DECLARE_LOCAL_FUNCTION(CheckNumberm_Compare)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Var)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Varu_check)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Varu_cont)
R05_DECLARE_LOCAL_FUNCTION(IsIdentTail)
R05_DECLARE_LOCAL_FUNCTION(IsIdentTail0)
R05_DECLARE_LOCAL_FUNCTION(CheckIndex)
R05_DECLARE_LOCAL_FUNCTION(CheckIndexu_check)
R05_DECLARE_LOCAL_FUNCTION(CheckIndexu_cont)
R05_DECLARE_LOCAL_FUNCTION(CheckIndexu_check0)
R05_DECLARE_LOCAL_FUNCTION(CheckIndexu_cont0)
R05_DECLARE_LOCAL_FUNCTION(CheckIndexm_Digits)
R05_DECLARE_LOCAL_FUNCTION(CheckIndexm_Digitsu_check)
R05_DECLARE_LOCAL_FUNCTION(CheckIndexm_Digitsu_cont)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_CComment)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Ident)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Identu_check)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Identu_cont)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Chars)
R05_DECLARE_LOCAL_FUNCTION(SimpleEscapedChar)
R05_DECLARE_LOCAL_FUNCTION(SimpleEscapedChar0)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Charsm_Escape)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Charsm_Escapeu_check)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Charsm_Escapeu_cont)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Charsm_Escapeu_check0)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Charsm_Escapeu_cont0)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Charsm_Escapeu_check1)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Charsm_Escapeu_cont1)
R05_DECLARE_LOCAL_FUNCTION(HexDigit)
R05_DECLARE_LOCAL_FUNCTION(HexDigit0)
R05_DECLARE_LOCAL_FUNCTION(DoHexDigit)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Compound)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscape)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscapeu_check)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscapeu_cont)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscapeu_check0)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscapeu_cont0)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscapeu_check1)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscapeu_cont1)
R05_DECLARE_ENTRY_FUNCTION(Parse)
R05_DECLARE_LOCAL_FUNCTION(Parseu_check)
R05_DECLARE_LOCAL_FUNCTION(Parsem_Aux)
R05_DECLARE_LOCAL_FUNCTION(SeparateLexerErrors)
R05_DECLARE_LOCAL_FUNCTION(Program)
R05_DECLARE_LOCAL_FUNCTION(Programu_check)
R05_DECLARE_LOCAL_FUNCTION(Programu_cont)
R05_DECLARE_LOCAL_FUNCTION(Programu_check0)
R05_DECLARE_LOCAL_FUNCTION(Programu_cont0)
R05_DECLARE_LOCAL_FUNCTION(FIRSTu_Unit)
R05_DECLARE_LOCAL_FUNCTION(Unit)
R05_DECLARE_LOCAL_FUNCTION(Unitu_check)
R05_DECLARE_LOCAL_FUNCTION(Unitu_cont)
R05_DECLARE_LOCAL_FUNCTION(Unitu_check0)
R05_DECLARE_LOCAL_FUNCTION(Unitu_cont0)
R05_DECLARE_LOCAL_FUNCTION(Unitu_check1)
R05_DECLARE_LOCAL_FUNCTION(Unitu_cont1)
R05_DECLARE_LOCAL_FUNCTION(NameList)
R05_DECLARE_LOCAL_FUNCTION(NameListu_check)
R05_DECLARE_LOCAL_FUNCTION(NameListu_cont)
R05_DECLARE_LOCAL_FUNCTION(FunctionDef)
R05_DECLARE_LOCAL_FUNCTION(Block)
R05_DECLARE_LOCAL_FUNCTION(CheckEmptyBlock)
R05_DECLARE_LOCAL_FUNCTION(Sentences)
R05_DECLARE_LOCAL_FUNCTION(Sentencesu_check)
R05_DECLARE_LOCAL_FUNCTION(Sentencesu_cont)
R05_DECLARE_LOCAL_FUNCTION(Sentencesu_check0)
R05_DECLARE_LOCAL_FUNCTION(Sentencesu_cont0)
R05_DECLARE_LOCAL_FUNCTION(Sentencesu_check1)
R05_DECLARE_LOCAL_FUNCTION(Sentencesu_cont1)
R05_DECLARE_LOCAL_FUNCTION(Sentencesu_check2)
R05_DECLARE_LOCAL_FUNCTION(Sentencesu_cont2)
R05_DECLARE_LOCAL_FUNCTION(FIRSTu_Sentence)
R05_DECLARE_LOCAL_FUNCTION(Sentence)
R05_DECLARE_LOCAL_FUNCTION(UnexpectedTokenInSentence)
R05_DECLARE_LOCAL_FUNCTION(SentenceTail)
R05_DECLARE_LOCAL_FUNCTION(SentenceTailu_check)
R05_DECLARE_LOCAL_FUNCTION(SentenceTailu_cont)
R05_DECLARE_LOCAL_FUNCTION(Pattern)
R05_DECLARE_LOCAL_FUNCTION(Result)
R05_DECLARE_LOCAL_FUNCTION(DirtyExpression)
R05_DECLARE_LOCAL_FUNCTION(Expression)
R05_DECLARE_LOCAL_FUNCTION(Expressionu_check)
R05_DECLARE_LOCAL_FUNCTION(Expressionu_cont)
R05_DECLARE_LOCAL_FUNCTION(Expressionu_check0)
R05_DECLARE_LOCAL_FUNCTION(Expressionu_cont0)
R05_DECLARE_LOCAL_FUNCTION(FIRSTu_Term)
R05_DECLARE_LOCAL_FUNCTION(Term)
R05_DECLARE_LOCAL_FUNCTION(Termu_check)
R05_DECLARE_LOCAL_FUNCTION(Termu_cont)
R05_DECLARE_LOCAL_FUNCTION(CallBracketInPattern)
R05_DECLARE_LOCAL_FUNCTION(Unbalanced)
R05_DECLARE_LOCAL_FUNCTION(Unbalancedu_check)
R05_DECLARE_LOCAL_FUNCTION(Unbalancedu_cont)
R05_DECLARE_LOCAL_FUNCTION(UnexpectedToken)
R05_DECLARE_LOCAL_FUNCTION(SemanticCheck)
R05_DECLARE_LOCAL_FUNCTION(SemanticChecku_check)
R05_DECLARE_LOCAL_FUNCTION(SemanticCheck0)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_FormatError)
R05_DECLARE_LOCAL_FUNCTION(NoEntryError)
R05_DECLARE_LOCAL_FUNCTION(GetFuncNames)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_GetNames)
R05_DECLARE_LOCAL_FUNCTION(UpdateHasEntry)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_RemovePos)
R05_DECLARE_LOCAL_FUNCTION(FindSemanticsErrors)
R05_DECLARE_LOCAL_FUNCTION(FindRedefinitions)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_BuiltinDefinition)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_ExtractDefinition)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_MarkExternalName)
R05_DECLARE_LOCAL_FUNCTION(DoFindRedefinitions)
R05_DECLARE_LOCAL_FUNCTION(MakeRedefinitionError)
R05_DECLARE_LOCAL_FUNCTION(DeclType)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_FindSemanticsErrors)
R05_DECLARE_LOCAL_FUNCTION(CheckSentences)
R05_DECLARE_LOCAL_FUNCTION(ExtractCheckable)
R05_DECLARE_LOCAL_FUNCTION(ExtractCheckablem_Tail)
R05_DECLARE_LOCAL_FUNCTION(ExtractCheckablem_Sentences)
R05_DECLARE_LOCAL_FUNCTION(ExtractCheckablem_Expr)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_ExtractCheckablem_Term)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_CheckSentence)
R05_DECLARE_LOCAL_FUNCTION(CheckSentencem_Tail)
R05_DECLARE_LOCAL_FUNCTION(CheckResult)
R05_DECLARE_LOCAL_FUNCTION(CheckResult0)
R05_DECLARE_LOCAL_FUNCTION(CheckResult1)
R05_DECLARE_ENTRY_FUNCTION(Type)
R05_DECLARE_ENTRY_FUNCTION(k2B_)
R05_DECLARE_ENTRY_FUNCTION(Ord)
R05_DECLARE_ENTRY_FUNCTION(Lenw)
R05_DECLARE_ENTRY_FUNCTION(Numb)
R05_DECLARE_ENTRY_FUNCTION(Chr)
R05_DECLARE_ENTRY_FUNCTION(k2A_)
R05_DECLARE_ENTRY_FUNCTION(Compare)
R05_DEFINE_LOCAL_ENUM(Error, "Error")
R05_DEFINE_LOCAL_ENUM(SpecialComment, "SpecialComment")
R05_DEFINE_LOCAL_ENUM(Function, "Function")
R05_DEFINE_LOCAL_ENUM(Extern, "Extern")
R05_DEFINE_LOCAL_ENUM(Builtin, "Builtin")
R05_DEFINE_LOCAL_ENUM(NOm_POS, "NO-POS")
R05_DEFINE_LOCAL_ENUM(Define, "Define")
R05_DEFINE_LOCAL_ENUM(External, "External")
R05_DEFINE_LOCAL_ENUM(Variable, "Variable")
R05_DEFINE_LOCAL_ENUM(Brackets, "Brackets")
R05_DEFINE_LOCAL_ENUM(Call, "Call")
R05_DEFINE_LOCAL_ENUM(TkEOF, "TkEOF")
R05_DEFINE_LOCAL_ENUM(True, "True")
R05_DEFINE_LOCAL_ENUM(TkSpecComment, "TkSpecComment")
R05_DEFINE_LOCAL_ENUM(TkOpenCall, "TkOpenCall")
R05_DEFINE_LOCAL_ENUM(Len, "Len")
R05_DEFINE_LOCAL_ENUM(TkError, "TkError")
R05_DEFINE_LOCAL_ENUM(TkSemicolon, "TkSemicolon")
R05_DEFINE_LOCAL_ENUM(Entry, "Entry")
R05_DEFINE_LOCAL_ENUM(HasEntry, "HasEntry")
R05_DEFINE_LOCAL_ENUM(Local, "Local")
R05_DEFINE_LOCAL_ENUM(Condition, "Condition")
R05_DEFINE_LOCAL_ENUM(RETURN, "RETURN")
R05_DEFINE_LOCAL_ENUM(CALLm_BLOCK, "CALL-BLOCK")
R05_DEFINE_LOCAL_ENUM(False, "False")
R05_DEFINE_LOCAL_ENUM(TkVariable, "TkVariable")
R05_DEFINE_LOCAL_ENUM(TkOpenBracket, "TkOpenBracket")
R05_DEFINE_LOCAL_ENUM(TkCloseBracket, "TkCloseBracket")
R05_DEFINE_LOCAL_ENUM(TkOpenBlock, "TkOpenBlock")
R05_DEFINE_LOCAL_ENUM(TkCloseBlock, "TkCloseBlock")
R05_DEFINE_LOCAL_ENUM(TkCloseCall, "TkCloseCall")
R05_DEFINE_LOCAL_ENUM(TkComma, "TkComma")
R05_DEFINE_LOCAL_ENUM(TkColon, "TkColon")
R05_DEFINE_LOCAL_ENUM(TkAssign, "TkAssign")
R05_DEFINE_LOCAL_ENUM(TkName, "TkName")
R05_DEFINE_LOCAL_ENUM(TkChar, "TkChar")
R05_DEFINE_LOCAL_ENUM(TkCompound, "TkCompound")
R05_DEFINE_LOCAL_ENUM(Success, "Success")
R05_DEFINE_LOCAL_ENUM(Fails, "Fails")
R05_DEFINE_LOCAL_ENUM(TkExtern, "TkExtern")
R05_DEFINE_LOCAL_ENUM(TkEntry, "TkEntry")
R05_DEFINE_LOCAL_ENUM(TkMacroDigit, "TkMacroDigit")
R05_DEFINE_LOCAL_ENUM(NoEntry, "NoEntry")
R05_DEFINE_LOCAL_ENUM(Word, "Word")
R05_DEFINE_LOCAL_ENUM(Number, "Number")
R05_DEFINE_LOCAL_ENUM(Char, "Char")
R05_DEFINE_LOCAL_ENUM(Symbol, "Symbol")

/*
*$FROM LibraryEx
*/
/*
*$FROM R5FW-Parser-Defs
*/
R05_DEFINE_ENTRY_FUNCTION(Scan, "Scan") {
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
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_bracket(p+5);
    r05_alloc_number(1UL);
    r05_alloc_number(1UL);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_SkipBOM);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_LoadFile);
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

R05_DEFINE_ENTRY_FUNCTION(ScanStringm_FromPos, "ScanString-FromPos") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.String: 4 */
    struct r05_node *p[12] = { 0 };
    /* t.Pos e.String */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_insert_pos(p+7);
    r05_alloc_open_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_bracket(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[6]);
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

R05_DEFINE_LOCAL_FUNCTION(SkipBOM, "SkipBOM") {
  r05_this_is_generated_function();

  do {
    /* e.FirstLine: 7 */
    /* e.Lines: 9 */
    struct r05_node *p[15] = { 0 };
    /* ('﻿' e.FirstLine) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '\357'))
      continue;
    if (! r05_char_left(p+5, p[4], p[3], '\273'))
      continue;
    if (! r05_char_left(p+6, p[5], p[3], '\277'))
      continue;
    r05_close_evar(p+7, p[6], p[3]);
    r05_close_evar(p+9, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_correct_evar(p+9);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[12], p+7);
    r05_splice_evar(p[14], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
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

R05_DEFINE_LOCAL_FUNCTION(IncLine, "IncLine") {
  r05_this_is_generated_function();

  do {
    /* s.Line: 4 */
    /* s.Col: 5 */
    /* e.FileName: 6 */
    struct r05_node *p[13] = { 0 };
    /* (s.Line s.Col e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[2], p[3]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[3]))
      continue;
    r05_close_evar(p+6, p[5], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+4);
    r05_alloc_close_call(p+10);
    r05_alloc_number(1UL);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_link_brackets(p[8], p[12]);
    r05_correct_evar(p+6);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_splice_evar(p[11], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(IncCol, "IncCol") {
  r05_this_is_generated_function();

  do {
    /* s.Line: 4 */
    /* s.Col: 5 */
    /* e.FileName: 6 */
    struct r05_node *p[13] = { 0 };
    /* (s.Line s.Col e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[2], p[3]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[3]))
      continue;
    r05_close_evar(p+6, p[5], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_svar(p+4);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+5);
    r05_alloc_close_call(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_link_brackets(p[8], p[12]);
    r05_correct_evar(p+6);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_splice_evar(p[11], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 3 */
    struct r05_node *p[6] = { 0 };
    /* t.Pos Len */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_Len))
      continue;
    if (! r05_tvar_left(p+3, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+5);
    r05_splice_tvar(p[5], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* s.First: 5 */
    /* e.String: 6 */
    struct r05_node *p[14] = { 0 };
    /* t.Pos Len s.First e.String */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[3], p[1], &r05f_Len))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_function(&r05f_Len);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+6);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_splice_tvar(p[10], p+2);
    r05_splice_evar(p[12], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Line: 5 */
    /* s.Col: 6 */
    /* e.FileName: 7 */
    /* s.Number: 9 */
    struct r05_node *p[15] = { 0 };
    /* (s.Line s.Col e.FileName) '+' s.Number */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[3], p[1], '+'))
      continue;
    if (! r05_svar_left(p+5, p[2], p[3]))
      continue;
    if (! r05_svar_left(p+6, p[5], p[3]))
      continue;
    r05_close_evar(p+7, p[6], p[3]);
    if (! r05_svar_left(p+9, p[4], p[1]))
      continue;
    if (! r05_empty_hole(p[9], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_svar(p+5);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_k2B_);
    r05_alloc_svar(p+6);
    r05_alloc_svar(p+9);
    r05_alloc_close_call(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_link_brackets(p[10], p[14]);
    r05_correct_evar(p+7);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_splice_evar(p[13], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScan, "DoScan") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    struct r05_node *p[7] = { 0 };
    /* t.Pos */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+4);
    r05_alloc_function(&r05f_TkEOF);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_bracket(p+6);
    r05_link_brackets(p[4], p[6]);
    r05_splice_tvar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Lines: 6 */
    struct r05_node *p[14] = { 0 };
    /* t.Pos () e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[5]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_IncLine);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+6);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_splice_tvar(p[10], p+2);
    r05_splice_evar(p[12], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Line: 7 */
    /* e.Lines: 9 */
    struct r05_node *p[20] = { 0 };
    /* t.Pos (' ' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], ' '))
      continue;
    r05_close_evar(p+7, p[6], p[5]);
    r05_close_evar(p+9, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+7);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_splice_tvar(p[13], p+2);
    r05_splice_evar(p[16], p+7);
    r05_splice_evar(p[18], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Line: 7 */
    /* e.Lines: 9 */
    struct r05_node *p[20] = { 0 };
    /* t.Pos ('\t' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '\t'))
      continue;
    r05_close_evar(p+7, p[6], p[5]);
    r05_close_evar(p+9, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+7);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_splice_tvar(p[13], p+2);
    r05_splice_evar(p[16], p+7);
    r05_splice_evar(p[18], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Line: 7 */
    /* e.Lines: 9 */
    struct r05_node *p[18] = { 0 };
    /* t.Pos ('$' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '$'))
      continue;
    r05_close_evar(p+7, p[6], p[5]);
    r05_close_evar(p+9, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScanm_Keyword);
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
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[14], p+7);
    r05_splice_evar(p[16], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Lines: 6 */
    /* s.Digit: 8 */
    /* e.Line: 9 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos (s.Digit e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);
    if (! r05_svar_left(p+8, p[4], p[5]))
      continue;
    r05_close_evar(p+9, p[8], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScanu_check);
    r05_alloc_insert_pos(p+12);
    r05_alloc_svar(p+8);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Type);
    r05_alloc_svar(p+8);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[11]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[14], p+9);
    r05_splice_evar(p[17], p+6);
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
    r05_alloc_function(&r05f_DoScanu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanu_check, "DoScan_check") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Digit: 4, 11 */
    /* e.Line: 12 */
    /* e.Lines: 14 */
    struct r05_node *p[25] = { 0 };
    /* t.Pos s.Digit (e.Line) (e.Lines) 'D0' s.Digit */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_char_left(p+9, p[8], p[1], 'D'))
      continue;
    if (! r05_char_left(p+10, p[9], p[1], '0'))
      continue;
    if (! r05_repeated_svar_left(p+11, p[10], p[1], p+4))
      continue;
    if (! r05_empty_hole(p[11], p[1]))
      continue;
    r05_close_evar(p+12, p[5], p[6]);
    r05_close_evar(p+14, p[7], p[8]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_DoScanm_Number);
    r05_alloc_insert_pos(p+17);
    r05_alloc_tvar(p+2);
    r05_alloc_open_bracket(p+18);
    r05_alloc_svar(p+4);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[16]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[18], p[19]);
    r05_splice_tvar(p[17], p+2);
    r05_splice_evar(p[21], p+12);
    r05_splice_evar(p[23], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* s.Digit: 4 */
    /* e.Line: 9 */
    /* e.Lines: 11 */
    /* e.Other: 13 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos s.Digit (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScanu_cont);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_svar(p+4);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[18], p+9);
    r05_splice_evar(p[20], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanu_cont, "DoScan_cont") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Lines: 6 */
    /* s.Var: 8 */
    /* e.Line: 10 */
    struct r05_node *p[23] = { 0 };
    /* t.Pos (s.Var '.' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);
    if (! r05_svar_left(p+8, p[4], p[5]))
      continue;
    if (! r05_char_left(p+9, p[8], p[5], '.'))
      continue;
    r05_close_evar(p+10, p[9], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_DoScanu_check0);
    r05_alloc_insert_pos(p+13);
    r05_alloc_svar(p+8);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_IsVarType);
    r05_alloc_svar(p+8);
    r05_alloc_close_call(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[12]);
    r05_push_stack(p[21]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[13], p+2);
    r05_splice_evar(p[15], p+10);
    r05_splice_evar(p[18], p+6);
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
    r05_alloc_function(&r05f_DoScanu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanu_check0, "DoScan_check0") {
  r05_this_is_generated_function();

  do {
    /* e.Line: 7 */
    /* e.Lines: 9 */
    /* t.Pos: 11 */
    /* s.Var: 13 */
    struct r05_node *p[23] = { 0 };
    /* t.Pos s.Var (e.Line) (e.Lines) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[0], p[3]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[3], p[4]);
    if (! r05_tvar_left(p+11, p[0], p[5]))
      continue;
    if (! r05_svar_left(p+13, p[12], p[5]))
      continue;
    if (! r05_empty_hole(p[13], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_DoScanm_Var);
    r05_alloc_insert_pos(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_svar(p+13);
    r05_alloc_char('.');
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[16], p[17]);
    r05_splice_tvar(p[15], p+11);
    r05_splice_evar(p[19], p+7);
    r05_splice_evar(p[21], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* s.Var: 4 */
    /* e.Line: 9 */
    /* e.Lines: 11 */
    /* e.Other: 13 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos s.Var (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScanu_cont0);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_svar(p+4);
    r05_alloc_char('.');
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[18], p+9);
    r05_splice_evar(p[20], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanu_cont0, "DoScan_cont0") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Line: 8 */
    /* e.Lines: 10 */
    struct r05_node *p[21] = { 0 };
    /* t.Pos ('/' '*' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '/'))
      continue;
    if (! r05_char_left(p+7, p[6], p[5], '*'))
      continue;
    r05_close_evar(p+8, p[7], p[5]);
    r05_close_evar(p+10, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_DoScanm_CComment);
    r05_alloc_insert_pos(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_chars("/*", 2);
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
    r05_correct_evar(p+8);
    r05_link_brackets(p[14], p[15]);
    r05_splice_tvar(p[13], p+2);
    r05_splice_evar(p[17], p+8);
    r05_splice_evar(p[19], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Line: 8 */
    /* e.Lines: 10 */
    /* s.Line: 12 */
    /* e.FileName: 14 */
    struct r05_node *p[29] = { 0 };
    /* (s.Line 1 e.FileName) ('*$' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '*'))
      continue;
    if (! r05_char_left(p+7, p[6], p[5], '$'))
      continue;
    r05_close_evar(p+8, p[7], p[5]);
    r05_close_evar(p+10, p[5], p[1]);
    if (! r05_svar_left(p+12, p[2], p[3]))
      continue;
    if (! r05_number_left(p+13, p[12], p[3], 1UL))
      continue;
    r05_close_evar(p+14, p[13], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_TkSpecComment);
    r05_alloc_open_bracket(p+17);
    r05_alloc_svar(p+12);
    r05_alloc_number(1UL);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_chars("*$", 2);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_bracket(p+23);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+12);
    r05_alloc_close_call(p+25);
    r05_alloc_number(1UL);
    r05_alloc_evar(p+14);
    r05_alloc_close_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[23], p[26]);
    r05_push_stack(p[25]);
    r05_push_stack(p[24]);
    r05_link_brackets(p[16], p[21]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+14);
    r05_splice_evar(p[18], p+14);
    r05_splice_evar(p[20], p+8);
    r05_splice_evar(p[27], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Comment: 7 */
    /* e.Lines: 9 */
    /* s.Line: 11 */
    /* e.FileName: 13 */
    struct r05_node *p[23] = { 0 };
    /* (s.Line 1 e.FileName) ('*' e.Comment) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '*'))
      continue;
    r05_close_evar(p+7, p[6], p[5]);
    r05_close_evar(p+9, p[5], p[1]);
    if (! r05_svar_left(p+11, p[2], p[3]))
      continue;
    if (! r05_number_left(p+12, p[11], p[3], 1UL))
      continue;
    r05_close_evar(p+13, p[12], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+11);
    r05_alloc_close_call(p+18);
    r05_alloc_number(1UL);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[16], p[20]);
    r05_correct_evar(p+13);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_splice_evar(p[19], p+13);
    r05_splice_evar(p[21], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Lines: 6 */
    /* s.StartIdent: 8 */
    /* e.Line: 9 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos (s.StartIdent e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);
    if (! r05_svar_left(p+8, p[4], p[5]))
      continue;
    r05_close_evar(p+9, p[8], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScanu_check1);
    r05_alloc_insert_pos(p+12);
    r05_alloc_svar(p+8);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Type);
    r05_alloc_svar(p+8);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[11]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[14], p+9);
    r05_splice_evar(p[17], p+6);
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
    r05_alloc_function(&r05f_DoScanu_cont1);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanu_check1, "DoScan_check1") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.StartIdent: 4, 10 */
    /* e.Line: 11 */
    /* e.Lines: 13 */
    /* s.Case: 15 */
    struct r05_node *p[25] = { 0 };
    /* t.Pos s.StartIdent (e.Line) (e.Lines) 'L' s.Case s.StartIdent */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_char_left(p+9, p[8], p[1], 'L'))
      continue;
    if (! r05_repeated_svar_right(p+10, p[9], p[1], p+4))
      continue;
    r05_close_evar(p+11, p[5], p[6]);
    r05_close_evar(p+13, p[7], p[8]);
    if (! r05_svar_left(p+15, p[9], p[10]))
      continue;
    if (! r05_empty_hole(p[15], p[10]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_DoScanm_Ident);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_svar(p+4);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[16]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[18], p[19]);
    r05_splice_tvar(p[17], p+2);
    r05_splice_evar(p[21], p+11);
    r05_splice_evar(p[23], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* s.StartIdent: 4 */
    /* e.Line: 9 */
    /* e.Lines: 11 */
    /* e.Other: 13 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos s.StartIdent (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScanu_cont1);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_svar(p+4);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[18], p+9);
    r05_splice_evar(p[20], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanu_cont1, "DoScan_cont1") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Lines: 6 */
    /* s.Punctuation: 8 */
    /* e.Line: 9 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos (s.Punctuation e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);
    if (! r05_svar_left(p+8, p[4], p[5]))
      continue;
    r05_close_evar(p+9, p[8], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScanu_check2);
    r05_alloc_insert_pos(p+12);
    r05_alloc_svar(p+8);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_IsPunctuation);
    r05_alloc_svar(p+8);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[11]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[14], p+9);
    r05_splice_evar(p[17], p+6);
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
    r05_alloc_function(&r05f_DoScanu_cont2);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanu_check2, "DoScan_check2") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Punctuation: 4 */
    /* e.Line: 9 */
    /* e.Lines: 11 */
    /* s.TokType: 13 */
    struct r05_node *p[25] = { 0 };
    /* t.Pos s.Punctuation (e.Line) (e.Lines) s.TokType */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_svar_left(p+13, p[8], p[1]))
      continue;
    if (! r05_empty_hole(p[13], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_svar(p+13);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+2);
    r05_alloc_close_call(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+9);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[14], p[16]);
    r05_splice_tvar(p[15], p+2);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* s.Punctuation: 4 */
    /* e.Line: 9 */
    /* e.Lines: 11 */
    /* e.Other: 13 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos s.Punctuation (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScanu_cont2);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_svar(p+4);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[18], p+9);
    r05_splice_evar(p[20], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanu_cont2, "DoScan_cont2") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Lines: 7 */
    /* s.StartIdent: 9 */
    /* e.Line: 10 */
    struct r05_node *p[23] = { 0 };
    /* t.Pos ('<' s.StartIdent e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '<'))
      continue;
    r05_close_evar(p+7, p[5], p[1]);
    if (! r05_svar_left(p+9, p[6], p[5]))
      continue;
    r05_close_evar(p+10, p[9], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_DoScanu_check3);
    r05_alloc_insert_pos(p+13);
    r05_alloc_svar(p+9);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Type);
    r05_alloc_svar(p+9);
    r05_alloc_close_call(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[12]);
    r05_push_stack(p[21]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[13], p+2);
    r05_splice_evar(p[15], p+10);
    r05_splice_evar(p[18], p+7);
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
    r05_alloc_function(&r05f_DoScanu_cont3);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanu_check3, "DoScan_check3") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.StartIdent: 4, 10 */
    /* e.Line: 11 */
    /* e.Lines: 13 */
    /* s.Case: 15 */
    struct r05_node *p[25] = { 0 };
    /* t.Pos s.StartIdent (e.Line) (e.Lines) 'L' s.Case s.StartIdent */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_char_left(p+9, p[8], p[1], 'L'))
      continue;
    if (! r05_repeated_svar_right(p+10, p[9], p[1], p+4))
      continue;
    r05_close_evar(p+11, p[5], p[6]);
    r05_close_evar(p+13, p[7], p[8]);
    if (! r05_svar_left(p+15, p[9], p[10]))
      continue;
    if (! r05_empty_hole(p[15], p[10]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_DoScanm_Ident);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_char('<');
    r05_alloc_svar(p+4);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[16]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[18], p[19]);
    r05_splice_tvar(p[17], p+2);
    r05_splice_evar(p[21], p+11);
    r05_splice_evar(p[23], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* s.StartIdent: 4 */
    /* e.Line: 9 */
    /* e.Lines: 11 */
    /* e.Other: 13 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos s.StartIdent (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScanu_cont3);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_char('<');
    r05_alloc_svar(p+4);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[18], p+9);
    r05_splice_evar(p[20], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanu_cont3, "DoScan_cont3") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Lines: 7 */
    /* s.Arithm: 9 */
    /* e.Line: 10 */
    struct r05_node *p[21] = { 0 };
    /* t.Pos ('<' s.Arithm e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '<'))
      continue;
    r05_close_evar(p+7, p[5], p[1]);
    if (! r05_svar_left(p+9, p[6], p[5]))
      continue;
    r05_close_evar(p+10, p[9], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_DoScanu_check4);
    r05_alloc_insert_pos(p+13);
    r05_alloc_svar(p+9);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_chars("+-*/%?", 6);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[13], p+2);
    r05_splice_evar(p[15], p+10);
    r05_splice_evar(p[18], p+7);
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
    r05_alloc_function(&r05f_DoScanu_cont4);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanu_check4, "DoScan_check4") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Arithm: 4, 15 */
    /* e.Line: 9 */
    /* e.Lines: 11 */
    /* e.Arithms-B: 13 */
    /* e.Arithms-E: 16 */
    struct r05_node *p[29] = { 0 };
    /* t.Pos s.Arithm (e.Line) (e.Lines) e.Arithms-B s.Arithm e.Arithms-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    p[13] = p[8]->next;
    p[14] = p[8];
    r05_start_e_loop();
    do {
      if (! r05_repeated_svar_left(p+15, p[14], p[1], p+4))
        continue;
      r05_close_evar(p+16, p[15], p[1]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+18);
      r05_alloc_function(&r05f_TkOpenCall);
      r05_alloc_insert_pos(p+19);
      r05_alloc_svar(p+4);
      r05_alloc_close_bracket(p+20);
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_call(p+22);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_tvar(p+2);
      r05_alloc_function(&r05f_Len);
      r05_alloc_char('<');
      r05_alloc_svar(p+4);
      r05_alloc_close_call(p+23);
      r05_alloc_open_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_close_call(p+28);
      r05_push_stack(p[28]);
      r05_push_stack(p[21]);
      r05_correct_evar(p+11);
      r05_link_brackets(p[24], p[26]);
      r05_correct_evar(p+9);
      r05_push_stack(p[23]);
      r05_push_stack(p[22]);
      r05_link_brackets(p[18], p[20]);
      r05_splice_tvar(p[19], p+2);
      r05_splice_evar(p[25], p+9);
      r05_splice_evar(p[27], p+11);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+13, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* t.Pos: 2 */
    /* s.Arithm: 4 */
    /* e.Line: 9 */
    /* e.Lines: 11 */
    /* e.Other: 13 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos s.Arithm (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScanu_cont4);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_char('<');
    r05_alloc_svar(p+4);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[18], p+9);
    r05_splice_evar(p[20], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanu_cont4, "DoScan_cont4") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Line: 7 */
    /* e.Lines: 9 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos ('<' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '<'))
      continue;
    r05_close_evar(p+7, p[6], p[5]);
    r05_close_evar(p+9, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+12);
    r05_alloc_chars("Identifier expected after \'<\'", 29);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+2);
    r05_alloc_close_call(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+7);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[11], p[13]);
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[18], p+7);
    r05_splice_evar(p[20], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Line: 7 */
    /* e.Lines: 9 */
    struct r05_node *p[20] = { 0 };
    /* t.Pos ('\'' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '\''))
      continue;
    r05_close_evar(p+7, p[6], p[5]);
    r05_close_evar(p+9, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScanm_Chars);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+7);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_splice_tvar(p[13], p+2);
    r05_splice_evar(p[16], p+7);
    r05_splice_evar(p[18], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Line: 7 */
    /* e.Lines: 9 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos ('\"' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '\"'))
      continue;
    r05_close_evar(p+7, p[6], p[5]);
    r05_close_evar(p+9, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScanm_Compound);
    r05_alloc_insert_pos(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+2);
    r05_alloc_close_call(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[15], p[16]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[18], p+7);
    r05_splice_evar(p[20], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Lines: 6 */
    /* s.Other: 8 */
    /* e.Line: 9 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos (s.Other e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);
    if (! r05_svar_left(p+8, p[4], p[5]))
      continue;
    r05_close_evar(p+9, p[8], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+12);
    r05_alloc_chars("Bad character \'", 15);
    r05_alloc_svar(p+8);
    r05_alloc_char('\'');
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+2);
    r05_alloc_close_call(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+9);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[11], p[13]);
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[18], p+9);
    r05_splice_evar(p[20], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(IsVarType, "IsVarType") {
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
    r05_alloc_function(&r05f_True);
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
    r05_alloc_function(&r05f_True);
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
    r05_alloc_function(&r05f_True);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

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
    r05_alloc_function(&r05f_False);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(IsPunctuation, "IsPunctuation") {
  r05_this_is_generated_function();

  do {
    /* s.Punct: 2 */
    struct r05_node *p[23] = { 0 };
    /* s.Punct */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_IsPunctuationu_check);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+4);
    r05_alloc_char('(');
    r05_alloc_function(&r05f_TkOpenBracket);
    r05_alloc_close_bracket(p+5);
    r05_alloc_open_bracket(p+6);
    r05_alloc_char(')');
    r05_alloc_function(&r05f_TkCloseBracket);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_bracket(p+8);
    r05_alloc_char('{');
    r05_alloc_function(&r05f_TkOpenBlock);
    r05_alloc_close_bracket(p+9);
    r05_alloc_open_bracket(p+10);
    r05_alloc_char('}');
    r05_alloc_function(&r05f_TkCloseBlock);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_char('>');
    r05_alloc_function(&r05f_TkCloseCall);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_char(',');
    r05_alloc_function(&r05f_TkComma);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_char(':');
    r05_alloc_function(&r05f_TkColon);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_char('=');
    r05_alloc_function(&r05f_TkAssign);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_char(';');
    r05_alloc_function(&r05f_TkSemicolon);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[3]);
    r05_link_brackets(p[20], p[21]);
    r05_link_brackets(p[18], p[19]);
    r05_link_brackets(p[16], p[17]);
    r05_link_brackets(p[14], p[15]);
    r05_link_brackets(p[12], p[13]);
    r05_link_brackets(p[10], p[11]);
    r05_link_brackets(p[8], p[9]);
    r05_link_brackets(p[6], p[7]);
    r05_link_brackets(p[4], p[5]);
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
    r05_alloc_function(&r05f_IsPunctuationu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(IsPunctuationu_check, "IsPunctuation_check") {
  r05_this_is_generated_function();

  do {
    /* s.Punct: 2, 7 */
    /* e.Types-B: 3 */
    /* e.Types-E: 8 */
    /* s.TokType: 10 */
    struct r05_node *p[11] = { 0 };
    /* s.Punct e.Types-B (s.Punct s.TokType) e.Types-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    p[3] = p[2]->next;
    p[4] = p[2];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+5, p[4], p[1]))
        continue;
      if (! r05_repeated_svar_left(p+7, p[5], p[6], p+2))
        continue;
      r05_close_evar(p+8, p[6], p[1]);
      if (! r05_svar_left(p+10, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[10], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_svar(p+10);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+3, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* s.Punct: 2 */
    /* e.Other: 3 */
    struct r05_node *p[7] = { 0 };
    /* s.Punct e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_IsPunctuationu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(IsPunctuationu_cont, "IsPunctuation_cont") {
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Keyword, "DoScan-Keyword") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Line: 6 */
    /* e.Lines: 8 */
    struct r05_node *p[19] = { 0 };
    /* t.Pos (e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    r05_close_evar(p+8, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_DoScanm_BuildKeyword);
    r05_alloc_insert_pos(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_char('$');
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[12], p[13]);
    r05_splice_tvar(p[11], p+2);
    r05_splice_evar(p[15], p+6);
    r05_splice_evar(p[17], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_BuildKeyword, "DoScan-BuildKeyword") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.KeywordChars: 8 */
    /* e.Lines: 10 */
    /* s.Next: 12 */
    /* e.Line: 13 */
    struct r05_node *p[29] = { 0 };
    /* t.Pos (e.KeywordChars) (s.Next e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[7], p[1]);
    if (! r05_svar_left(p+12, p[6], p[7]))
      continue;
    r05_close_evar(p+13, p[12], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScanm_BuildKeywordu_check);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_Type);
    r05_alloc_svar(p+12);
    r05_alloc_close_call(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[15]);
    r05_push_stack(p[27]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[18], p+8);
    r05_splice_evar(p[21], p+13);
    r05_splice_evar(p[24], p+10);
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
    r05_alloc_function(&r05f_DoScanm_BuildKeywordu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_BuildKeywordu_check, "DoScan-BuildKeyword_check") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.KeywordChars: 6 */
    /* s.Next: 8, 14 */
    /* e.Line: 15 */
    /* e.Lines: 17 */
    /* s.SubType: 19 */
    struct r05_node *p[30] = { 0 };
    /* t.Pos (e.KeywordChars) s.Next (e.Line) (e.Lines) 'L' s.SubType s.Next */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_svar_left(p+8, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_char_left(p+13, p[12], p[1], 'L'))
      continue;
    if (! r05_repeated_svar_right(p+14, p[13], p[1], p+8))
      continue;
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[11], p[12]);
    if (! r05_svar_left(p+19, p[13], p[14]))
      continue;
    if (! r05_empty_hole(p[19], p[14]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_DoScanm_BuildKeyword);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_svar(p+8);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+6);
    r05_splice_tvar(p[21], p+2);
    r05_splice_evar(p[23], p+6);
    r05_splice_evar(p[26], p+15);
    r05_splice_evar(p[28], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.KeywordChars: 6 */
    /* s.Next: 8 */
    /* e.Line: 13 */
    /* e.Lines: 15 */
    /* e.Other: 17 */
    struct r05_node *p[29] = { 0 };
    /* t.Pos (e.KeywordChars) s.Next (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_svar_left(p+8, p[5], p[1]))
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
    r05_alloc_function(&r05f_DoScanm_BuildKeywordu_cont);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_svar(p+8);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[19]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+6);
    r05_splice_tvar(p[20], p+2);
    r05_splice_evar(p[22], p+6);
    r05_splice_evar(p[25], p+13);
    r05_splice_evar(p[27], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_BuildKeywordu_cont, "DoScan-BuildKeyword_cont") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.KeywordChars: 8 */
    /* e.Line: 10 */
    /* e.Lines: 12 */
    struct r05_node *p[34] = { 0 };
    /* t.Pos (e.KeywordChars) (e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_DoScanm_BuildKeywordu_check0);
    r05_alloc_insert_pos(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_function(&r05f_TkExtern);
    r05_alloc_chars("$EXTERN", 7);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_function(&r05f_TkExtern);
    r05_alloc_chars("$EXTRN", 6);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_function(&r05f_TkExtern);
    r05_alloc_chars("$EXTERNAL", 9);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_function(&r05f_TkEntry);
    r05_alloc_chars("$ENTRY", 6);
    r05_alloc_close_bracket(p+32);
    r05_alloc_close_call(p+33);
    r05_push_stack(p[33]);
    r05_push_stack(p[14]);
    r05_link_brackets(p[31], p[32]);
    r05_link_brackets(p[29], p[30]);
    r05_link_brackets(p[27], p[28]);
    r05_link_brackets(p[25], p[26]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[15], p+2);
    r05_splice_evar(p[17], p+8);
    r05_splice_evar(p[20], p+10);
    r05_splice_evar(p[23], p+12);
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
    r05_alloc_function(&r05f_DoScanm_BuildKeywordu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_BuildKeywordu_check0, "DoScan-BuildKeyword_check0") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.KeywordChars: 10, 20 */
    /* e.Line: 12 */
    /* e.Lines: 14 */
    /* e.Keywords-B: 16 */
    /* e.Keywords-E: 22 */
    /* s.Tag: 24 */
    struct r05_node *p[37] = { 0 };
    /* t.Pos (e.KeywordChars) (e.Line) (e.Lines) e.Keywords-B (s.Tag e.KeywordChars) e.Keywords-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[6], p[7]);
    r05_close_evar(p+14, p[8], p[9]);
    p[16] = p[9]->next;
    p[17] = p[9];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+18, p[17], p[1]))
        continue;
      if (! r05_repeated_evar_right(p+20, p[18], p[19], p+10))
        continue;
      r05_close_evar(p+22, p[19], p[1]);
      if (! r05_svar_left(p+24, p[18], p[20]))
        continue;
      if (! r05_empty_hole(p[24], p[20]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+25);
      r05_alloc_svar(p+24);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_open_call(p+28);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_call(p+29);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_tvar(p+2);
      r05_alloc_function(&r05f_Len);
      r05_alloc_insert_pos(p+30);
      r05_alloc_close_call(p+31);
      r05_alloc_open_bracket(p+32);
      r05_alloc_insert_pos(p+33);
      r05_alloc_close_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_call(p+36);
      r05_push_stack(p[36]);
      r05_push_stack(p[28]);
      r05_correct_evar(p+14);
      r05_link_brackets(p[32], p[34]);
      r05_correct_evar(p+12);
      r05_push_stack(p[31]);
      r05_push_stack(p[29]);
      r05_correct_evar(p+10);
      r05_link_brackets(p[25], p[27]);
      r05_splice_tvar(p[26], p+2);
      r05_splice_evar(p[30], p+10);
      r05_splice_evar(p[33], p+12);
      r05_splice_evar(p[35], p+14);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+16, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.KeywordChars: 10 */
    /* e.Line: 12 */
    /* e.Lines: 14 */
    /* e.Other: 16 */
    struct r05_node *p[28] = { 0 };
    /* t.Pos (e.KeywordChars) (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[6], p[7]);
    r05_close_evar(p+14, p[8], p[9]);
    r05_close_evar(p+16, p[9], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_DoScanm_BuildKeywordu_cont0);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[18]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[19], p+2);
    r05_splice_evar(p[21], p+10);
    r05_splice_evar(p[24], p+12);
    r05_splice_evar(p[26], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_BuildKeywordu_cont0, "DoScan-BuildKeyword_cont0") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.KeywordChars: 8 */
    /* e.Line: 10 */
    /* e.Lines: 12 */
    struct r05_node *p[26] = { 0 };
    /* t.Pos (e.KeywordChars) (e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+15);
    r05_alloc_chars("Bad keyword \'", 13);
    r05_alloc_insert_pos(p+16);
    r05_alloc_char('\'');
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+2);
    r05_alloc_function(&r05f_Len);
    r05_alloc_evar(p+8);
    r05_alloc_close_call(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[18]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+10);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[14], p[17]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[15], p+2);
    r05_splice_evar(p[16], p+8);
    r05_splice_evar(p[22], p+10);
    r05_splice_evar(p[24], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Number, "DoScan-Number") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* t.Start: 4 */
    /* e.Number: 10 */
    /* e.Lines: 12 */
    /* s.Next: 14 */
    /* e.Line: 15 */
    struct r05_node *p[31] = { 0 };
    /* t.Pos t.Start (e.Number) (s.Next e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[9], p[1]);
    if (! r05_svar_left(p+14, p[8], p[9]))
      continue;
    r05_close_evar(p+15, p[14], p[9]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoScanm_Numberu_check);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_svar(p+14);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_Type);
    r05_alloc_svar(p+14);
    r05_alloc_close_call(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[17]);
    r05_push_stack(p[29]);
    r05_push_stack(p[28]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[18], p+2);
    r05_splice_tvar(p[18], p+4);
    r05_splice_evar(p[20], p+10);
    r05_splice_evar(p[23], p+15);
    r05_splice_evar(p[26], p+12);
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
    r05_alloc_function(&r05f_DoScanm_Numberu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Numberu_check, "DoScan-Number_check") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* t.Start: 4 */
    /* e.Number: 8 */
    /* s.Next: 10, 17 */
    /* e.Line: 18 */
    /* e.Lines: 20 */
    struct r05_node *p[37] = { 0 };
    /* t.Pos t.Start (e.Number) s.Next (e.Line) (e.Lines) 'D0' s.Next */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_svar_left(p+10, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    if (! r05_char_left(p+15, p[14], p[1], 'D'))
      continue;
    if (! r05_char_left(p+16, p[15], p[1], '0'))
      continue;
    if (! r05_repeated_svar_left(p+17, p[16], p[1], p+10))
      continue;
    if (! r05_empty_hole(p[17], p[1]))
      continue;
    r05_close_evar(p+18, p[11], p[12]);
    r05_close_evar(p+20, p[13], p[14]);

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_DoScanm_Number);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_DropZero);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_call(p+30);
    r05_alloc_svar(p+10);
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
    r05_link_brackets(p[27], p[31]);
    r05_push_stack(p[30]);
    r05_push_stack(p[28]);
    r05_correct_evar(p+8);
    r05_push_stack(p[25]);
    r05_push_stack(p[23]);
    r05_splice_tvar(p[24], p+2);
    r05_splice_tvar(p[26], p+4);
    r05_splice_evar(p[29], p+8);
    r05_splice_evar(p[33], p+18);
    r05_splice_evar(p[35], p+20);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* t.Start: 4 */
    /* e.Number: 8 */
    /* s.Next: 10 */
    /* e.Line: 15 */
    /* e.Lines: 17 */
    /* e.Other: 19 */
    struct r05_node *p[31] = { 0 };
    /* t.Pos t.Start (e.Number) s.Next (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_svar_left(p+10, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[11], p[12]);
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[14], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_DoScanm_Numberu_cont);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_svar(p+10);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[21]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[22], p+2);
    r05_splice_tvar(p[22], p+4);
    r05_splice_evar(p[24], p+8);
    r05_splice_evar(p[27], p+15);
    r05_splice_evar(p[29], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Numberu_cont, "DoScan-Number_cont") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* t.Start: 4 */
    /* e.Number: 10 */
    /* e.Line: 12 */
    /* e.Lines: 14 */
    struct r05_node *p[26] = { 0 };
    /* t.Pos t.Start (e.Number) (e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[9], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_CheckNumber);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[19]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+12);
    r05_push_stack(p[18]);
    r05_push_stack(p[16]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[17], p+4);
    r05_splice_evar(p[17], p+10);
    r05_splice_tvar(p[20], p+2);
    r05_splice_evar(p[22], p+12);
    r05_splice_evar(p[24], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DropZero, "DropZero") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[3] = { 0 };
    /* '0' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '0'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Number: 2 */
    struct r05_node *p[5] = { 0 };
    /* e.Number */
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

R05_DEFINE_LOCAL_FUNCTION(MAXm_MACRODIGIT, "MAX-MACRODIGIT") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("4294967295", 10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckNumber, "CheckNumber") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Number: 4 */
    struct r05_node *p[26] = { 0 };
    /* t.Pos e.Number */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_CheckNumber0);
    r05_alloc_insert_pos(p+7);
    r05_alloc_open_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_CheckNumberm_Compare);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Ord);
    r05_alloc_open_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Lenw);
    r05_alloc_evar(p+4);
    r05_alloc_close_call(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Lenw);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_MAXm_MACRODIGIT);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_call(p+23);
    r05_alloc_close_call(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[6]);
    r05_push_stack(p[24]);
    r05_push_stack(p[11]);
    r05_push_stack(p[23]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[17], p[22]);
    r05_push_stack(p[21]);
    r05_push_stack(p[18]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[13], p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[14]);
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

R05_DEFINE_LOCAL_FUNCTION(CheckNumber0, "CheckNumber0") {
  r05_this_is_generated_function();

  do {
    /* e.Number: 5 */
    /* t.Pos: 7 */
    struct r05_node *p[13] = { 0 };
    /* t.Pos (e.Number) '+' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], '+'))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_tvar_left(p+7, p[0], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+10);
    r05_alloc_chars("Very big numeric literal: ", 26);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_link_brackets(p[9], p[12]);
    r05_correct_evar(p+5);
    r05_splice_tvar(p[10], p+7);
    r05_splice_evar(p[11], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Number: 6 */
    /* s.Other: 8 */
    struct r05_node *p[15] = { 0 };
    /* t.Pos (e.Number) s.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_svar_left(p+8, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[8], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_function(&r05f_TkMacroDigit);
    r05_alloc_insert_pos(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Numb);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_close_bracket(p+14);
    r05_link_brackets(p[9], p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+6);
    r05_splice_tvar(p[10], p+2);
    r05_splice_evar(p[12], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckNumberm_Compare, "CheckNumber-Compare") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[6] = { 0 };
    /* () () */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    if (! r05_empty_hole(p[4], p[5]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('0');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Eq: 6, 7 */
    /* e.X: 8 */
    /* e.Y: 10 */
    struct r05_node *p[20] = { 0 };
    /* (s.Eq e.X) (s.Eq e.Y) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    if (! r05_svar_left(p+6, p[2], p[3]))
      continue;
    if (! r05_repeated_svar_left(p+7, p[4], p[5], p+6))
      continue;
    r05_close_evar(p+8, p[6], p[3]);
    r05_close_evar(p+10, p[7], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_CheckNumberm_Compare);
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
    r05_correct_evar(p+10);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[14], p+8);
    r05_splice_evar(p[17], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.X: 6 */
    /* e.X: 7 */
    /* s.Y: 9 */
    /* e.Y: 10 */
    struct r05_node *p[14] = { 0 };
    /* (s.X e.X) (s.Y e.Y) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    if (! r05_svar_left(p+6, p[2], p[3]))
      continue;
    r05_close_evar(p+7, p[6], p[3]);
    if (! r05_svar_left(p+9, p[4], p[5]))
      continue;
    r05_close_evar(p+10, p[9], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Compare);
    r05_alloc_svar(p+6);
    r05_alloc_svar(p+9);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Var, "DoScan-Var") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Variable: 8 */
    /* e.Lines: 10 */
    /* s.Next: 12 */
    /* e.Line: 13 */
    struct r05_node *p[29] = { 0 };
    /* t.Pos (e.Variable) (s.Next e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[7], p[1]);
    if (! r05_svar_left(p+12, p[6], p[7]))
      continue;
    r05_close_evar(p+13, p[12], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScanm_Varu_check);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_IsIdentTail);
    r05_alloc_svar(p+12);
    r05_alloc_close_call(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[15]);
    r05_push_stack(p[27]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[18], p+8);
    r05_splice_evar(p[21], p+13);
    r05_splice_evar(p[24], p+10);
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
    r05_alloc_function(&r05f_DoScanm_Varu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Varu_check, "DoScan-Var_check") {
  r05_this_is_generated_function();

  do {
    /* e.Line: 7 */
    /* e.Lines: 9 */
    /* t.Pos: 11 */
    /* e.Variable: 15 */
    /* s.Next: 17 */
    struct r05_node *p[28] = { 0 };
    /* t.Pos (e.Variable) s.Next (e.Line) (e.Lines) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[0], p[3]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[3], p[4]);
    if (! r05_tvar_left(p+11, p[0], p[5]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[5]))
      continue;
    r05_close_evar(p+15, p[13], p[14]);
    if (! r05_svar_left(p+17, p[14], p[5]))
      continue;
    if (! r05_empty_hole(p[17], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_DoScanm_Var);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_svar(p+17);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[18]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+15);
    r05_splice_tvar(p[19], p+11);
    r05_splice_evar(p[21], p+15);
    r05_splice_evar(p[24], p+7);
    r05_splice_evar(p[26], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Variable: 6 */
    /* s.Next: 8 */
    /* e.Line: 13 */
    /* e.Lines: 15 */
    /* e.Other: 17 */
    struct r05_node *p[29] = { 0 };
    /* t.Pos (e.Variable) s.Next (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_svar_left(p+8, p[5], p[1]))
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
    r05_alloc_function(&r05f_DoScanm_Varu_cont);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_svar(p+8);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[19]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+6);
    r05_splice_tvar(p[20], p+2);
    r05_splice_evar(p[22], p+6);
    r05_splice_evar(p[25], p+13);
    r05_splice_evar(p[27], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Varu_cont, "DoScan-Var_cont") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Line: 8 */
    /* e.Lines: 10 */
    /* s.Type: 12 */
    /* e.Index: 14 */
    struct r05_node *p[30] = { 0 };
    /* t.Pos (s.Type '.' e.Index) (e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[7], p[1]);
    if (! r05_svar_left(p+12, p[4], p[5]))
      continue;
    if (! r05_char_left(p+13, p[12], p[5], '.'))
      continue;
    r05_close_evar(p+14, p[13], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_TkVariable);
    r05_alloc_insert_pos(p+17);
    r05_alloc_svar(p+12);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_CheckIndex);
    r05_alloc_tvar(p+2);
    r05_alloc_evar(p+14);
    r05_alloc_close_call(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+2);
    r05_alloc_function(&r05f_Len);
    r05_alloc_svar(p+12);
    r05_alloc_char('.');
    r05_alloc_evar(p+14);
    r05_alloc_close_call(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+8);
    r05_push_stack(p[24]);
    r05_push_stack(p[23]);
    r05_push_stack(p[21]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[16], p[19]);
    r05_correct_evar(p+14);
    r05_splice_tvar(p[17], p+2);
    r05_splice_evar(p[18], p+14);
    r05_splice_evar(p[26], p+8);
    r05_splice_evar(p[28], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(IsIdentTail, "IsIdentTail") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[3] = { 0 };
    /* '-' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '-'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_True);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* '_' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '_'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_True);
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
    r05_alloc_function(&r05f_IsIdentTail0);
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

R05_DEFINE_LOCAL_FUNCTION(IsIdentTail0, "IsIdentTail0") {
  r05_this_is_generated_function();

  do {
    /* s.Other: 2, 5 */
    struct r05_node *p[6] = { 0 };
    /* s.Other 'D0' s.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+3, p[2], p[1], 'D'))
      continue;
    if (! r05_char_left(p+4, p[3], p[1], '0'))
      continue;
    if (! r05_repeated_svar_left(p+5, p[4], p[1], p+2))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_True);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Other: 2, 4 */
    /* s.Case: 5 */
    struct r05_node *p[6] = { 0 };
    /* s.Other 'L' s.Case s.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+3, p[2], p[1], 'L'))
      continue;
    if (! r05_repeated_svar_right(p+4, p[3], p[1], p+2))
      continue;
    if (! r05_svar_left(p+5, p[3], p[4]))
      continue;
    if (! r05_empty_hole(p[5], p[4]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_True);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Other: 2 */
    /* e.OtherType: 3 */
    struct r05_node *p[5] = { 0 };
    /* s.Other e.OtherType */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_False);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckIndex, "CheckIndex") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Digit: 4 */
    /* e.MustBeDigits: 5 */
    struct r05_node *p[15] = { 0 };
    /* t.Pos s.Digit e.MustBeDigits */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_CheckIndexu_check);
    r05_alloc_insert_pos(p+8);
    r05_alloc_svar(p+4);
    r05_alloc_open_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Type);
    r05_alloc_svar(p+4);
    r05_alloc_close_call(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[7]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+5);
    r05_splice_tvar(p[8], p+2);
    r05_splice_evar(p[10], p+5);
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
    r05_alloc_function(&r05f_CheckIndexu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(CheckIndexu_check, "CheckIndex_check") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Digit: 4 */
    /* e.MustBeDigits: 9 */
    /* s.Digit_: 11 */
    struct r05_node *p[15] = { 0 };
    /* t.Pos s.Digit (e.MustBeDigits) 'D0' s.Digit_ */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_char_left(p+7, p[6], p[1], 'D'))
      continue;
    if (! r05_char_left(p+8, p[7], p[1], '0'))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_svar_left(p+11, p[8], p[1]))
      continue;
    if (! r05_empty_hole(p[11], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_CheckIndexm_Digits);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[13], p+2);
    r05_splice_evar(p[13], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* s.Digit: 4 */
    /* e.MustBeDigits: 7 */
    /* e.Other: 9 */
    struct r05_node *p[15] = { 0 };
    /* t.Pos s.Digit (e.MustBeDigits) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_CheckIndexu_cont);
    r05_alloc_insert_pos(p+12);
    r05_alloc_svar(p+4);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+7);
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[13], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckIndexu_cont, "CheckIndex_cont") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Letter: 4 */
    /* e.Any: 5 */
    struct r05_node *p[15] = { 0 };
    /* t.Pos s.Letter e.Any */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_CheckIndexu_check0);
    r05_alloc_insert_pos(p+8);
    r05_alloc_svar(p+4);
    r05_alloc_open_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Type);
    r05_alloc_svar(p+4);
    r05_alloc_close_call(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[7]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+5);
    r05_splice_tvar(p[8], p+2);
    r05_splice_evar(p[10], p+5);
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
    r05_alloc_function(&r05f_CheckIndexu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(CheckIndexu_check0, "CheckIndex_check0") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Letter: 4 */
    /* e.Any: 8 */
    /* s.st: 10 */
    /* s.Letter_: 11 */
    struct r05_node *p[12] = { 0 };
    /* t.Pos s.Letter (e.Any) 'L' s.st s.Letter_ */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_char_left(p+7, p[6], p[1], 'L'))
      continue;
    r05_close_evar(p+8, p[5], p[6]);
    if (! r05_svar_left(p+10, p[7], p[1]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[1]))
      continue;
    if (! r05_empty_hole(p[11], p[1]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* s.Letter: 4 */
    /* e.Any: 7 */
    /* e.Other: 9 */
    struct r05_node *p[15] = { 0 };
    /* t.Pos s.Letter (e.Any) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_CheckIndexu_cont0);
    r05_alloc_insert_pos(p+12);
    r05_alloc_svar(p+4);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+7);
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[13], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckIndexu_cont0, "CheckIndex_cont0") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Other: 4 */
    /* e.Any: 5 */
    struct r05_node *p[10] = { 0 };
    /* t.Pos s.Other e.Any */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+7);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+8);
    r05_alloc_chars("index must start with a letter or a number", 42);
    r05_alloc_close_bracket(p+9);
    r05_link_brackets(p[7], p[9]);
    r05_splice_tvar(p[8], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    struct r05_node *p[7] = { 0 };
    /* t.Pos */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+4);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+5);
    r05_alloc_chars("empty variable index", 20);
    r05_alloc_close_bracket(p+6);
    r05_link_brackets(p[4], p[6]);
    r05_splice_tvar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckIndexm_Digits, "CheckIndex-Digits") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    struct r05_node *p[4] = { 0 };
    /* t.Pos */
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

  do {
    /* t.Pos: 2 */
    /* s.Digit: 4 */
    /* e.MustBeDigits: 5 */
    struct r05_node *p[15] = { 0 };
    /* t.Pos s.Digit e.MustBeDigits */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_CheckIndexm_Digitsu_check);
    r05_alloc_insert_pos(p+8);
    r05_alloc_svar(p+4);
    r05_alloc_open_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Type);
    r05_alloc_svar(p+4);
    r05_alloc_close_call(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[7]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+5);
    r05_splice_tvar(p[8], p+2);
    r05_splice_evar(p[10], p+5);
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
    r05_alloc_function(&r05f_CheckIndexm_Digitsu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(CheckIndexm_Digitsu_check, "CheckIndex-Digits_check") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Digit: 4 */
    /* e.MustBeDigits: 9 */
    /* s.Digit_: 11 */
    struct r05_node *p[15] = { 0 };
    /* t.Pos s.Digit (e.MustBeDigits) 'D0' s.Digit_ */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_char_left(p+7, p[6], p[1], 'D'))
      continue;
    if (! r05_char_left(p+8, p[7], p[1], '0'))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_svar_left(p+11, p[8], p[1]))
      continue;
    if (! r05_empty_hole(p[11], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_CheckIndexm_Digits);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[13], p+2);
    r05_splice_evar(p[13], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* s.Digit: 4 */
    /* e.MustBeDigits: 7 */
    /* e.Other: 9 */
    struct r05_node *p[15] = { 0 };
    /* t.Pos s.Digit (e.MustBeDigits) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_CheckIndexm_Digitsu_cont);
    r05_alloc_insert_pos(p+12);
    r05_alloc_svar(p+4);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+7);
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[13], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckIndexm_Digitsu_cont, "CheckIndex-Digits_cont") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Unexpected: 4 */
    /* e.Tail: 5 */
    struct r05_node *p[10] = { 0 };
    /* t.Pos s.Unexpected e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+7);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+8);
    r05_alloc_chars("index must be whole number", 26);
    r05_alloc_close_bracket(p+9);
    r05_link_brackets(p[7], p[9]);
    r05_splice_tvar(p[8], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_CComment, "DoScan-CComment") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Comment: 10 */
    /* e.Line: 12 */
    /* e.Lines: 14 */
    struct r05_node *p[26] = { 0 };
    /* t.Pos (e.Comment) ('*' '/' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_char_left(p+8, p[6], p[7], '*'))
      continue;
    if (! r05_char_left(p+9, p[8], p[7], '/'))
      continue;
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[9], p[7]);
    r05_close_evar(p+14, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+18);
    r05_alloc_function(&r05f_Len);
    r05_alloc_insert_pos(p+19);
    r05_alloc_chars("*/", 2);
    r05_alloc_close_call(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[16]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+12);
    r05_push_stack(p[20]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[18], p+2);
    r05_splice_evar(p[19], p+10);
    r05_splice_evar(p[22], p+12);
    r05_splice_evar(p[24], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Comment: 8 */
    /* e.Lines: 10 */
    /* s.Char: 12 */
    /* e.Line: 13 */
    struct r05_node *p[25] = { 0 };
    /* t.Pos (e.Comment) (s.Char e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[7], p[1]);
    if (! r05_svar_left(p+12, p[6], p[7]))
      continue;
    r05_close_evar(p+13, p[12], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScanm_CComment);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_svar(p+12);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[18], p+8);
    r05_splice_evar(p[21], p+13);
    r05_splice_evar(p[23], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Comment: 8 */
    /* e.Lines: 10 */
    struct r05_node *p[20] = { 0 };
    /* t.Pos (e.Comment) () e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[6], p[7]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_DoScanm_CComment);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_IncLine);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[16], p[17]);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_splice_tvar(p[14], p+2);
    r05_splice_evar(p[18], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Comment: 4 */
    /* t.Pos: 6 */
    struct r05_node *p[16] = { 0 };
    /* t.Pos (e.Comment) */
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
    r05_alloc_open_bracket(p+8);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+9);
    r05_alloc_chars("Unexpected EOF, unclosed comment", 32);
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_TkEOF);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+6);
    r05_alloc_function(&r05f_Len);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_close_bracket(p+15);
    r05_link_brackets(p[11], p[15]);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+4);
    r05_link_brackets(p[8], p[10]);
    r05_splice_tvar(p[9], p+6);
    r05_splice_evar(p[13], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Ident, "DoScan-Ident") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Ident: 8 */
    /* e.Lines: 10 */
    /* s.Next: 12 */
    /* e.Line: 13 */
    struct r05_node *p[29] = { 0 };
    /* t.Pos (e.Ident) (s.Next e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[7], p[1]);
    if (! r05_svar_left(p+12, p[6], p[7]))
      continue;
    r05_close_evar(p+13, p[12], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScanm_Identu_check);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_IsIdentTail);
    r05_alloc_svar(p+12);
    r05_alloc_close_call(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[15]);
    r05_push_stack(p[27]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[18], p+8);
    r05_splice_evar(p[21], p+13);
    r05_splice_evar(p[24], p+10);
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
    r05_alloc_function(&r05f_DoScanm_Identu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Identu_check, "DoScan-Ident_check") {
  r05_this_is_generated_function();

  do {
    /* e.Line: 7 */
    /* e.Lines: 9 */
    /* t.Pos: 11 */
    /* e.Ident: 15 */
    /* s.Next: 17 */
    struct r05_node *p[28] = { 0 };
    /* t.Pos (e.Ident) s.Next (e.Line) (e.Lines) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_right(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[0], p[3]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[3], p[4]);
    if (! r05_tvar_left(p+11, p[0], p[5]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[5]))
      continue;
    r05_close_evar(p+15, p[13], p[14]);
    if (! r05_svar_left(p+17, p[14], p[5]))
      continue;
    if (! r05_empty_hole(p[17], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_DoScanm_Ident);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_svar(p+17);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[18]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+15);
    r05_splice_tvar(p[19], p+11);
    r05_splice_evar(p[21], p+15);
    r05_splice_evar(p[24], p+7);
    r05_splice_evar(p[26], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Ident: 6 */
    /* s.Next: 8 */
    /* e.Line: 13 */
    /* e.Lines: 15 */
    /* e.Other: 17 */
    struct r05_node *p[29] = { 0 };
    /* t.Pos (e.Ident) s.Next (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_svar_left(p+8, p[5], p[1]))
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
    r05_alloc_function(&r05f_DoScanm_Identu_cont);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_svar(p+8);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[19]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+6);
    r05_splice_tvar(p[20], p+2);
    r05_splice_evar(p[22], p+6);
    r05_splice_evar(p[25], p+13);
    r05_splice_evar(p[27], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Identu_cont, "DoScan-Ident_cont") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Ident: 9 */
    /* e.Line: 11 */
    /* e.Lines: 13 */
    struct r05_node *p[26] = { 0 };
    /* t.Pos ('<' e.Ident) (e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '<'))
      continue;
    if (! r05_brackets_left(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[6], p[5]);
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_TkOpenCall);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+2);
    r05_alloc_function(&r05f_Len);
    r05_alloc_char('<');
    r05_alloc_evar(p+9);
    r05_alloc_close_call(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[18]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+11);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[16], p+9);
    r05_splice_evar(p[22], p+11);
    r05_splice_evar(p[24], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Ident: 8 */
    /* e.Line: 10 */
    /* e.Lines: 12 */
    struct r05_node *p[25] = { 0 };
    /* t.Pos (e.Ident) (e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_TkName);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+2);
    r05_alloc_function(&r05f_Len);
    r05_alloc_evar(p+8);
    r05_alloc_close_call(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+10);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[15], p+2);
    r05_splice_evar(p[15], p+8);
    r05_splice_evar(p[21], p+10);
    r05_splice_evar(p[23], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Chars, "DoScan-Chars") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Line: 7 */
    /* e.Lines: 9 */
    struct r05_node *p[18] = { 0 };
    /* t.Pos ('\\' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '\\'))
      continue;
    r05_close_evar(p+7, p[6], p[5]);
    r05_close_evar(p+9, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScanm_Charsm_Escape);
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
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[14], p+7);
    r05_splice_evar(p[16], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Line: 7 */
    /* e.Lines: 9 */
    struct r05_node *p[20] = { 0 };
    /* t.Pos ('\'' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '\''))
      continue;
    r05_close_evar(p+7, p[6], p[5]);
    r05_close_evar(p+9, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+7);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_splice_tvar(p[13], p+2);
    r05_splice_evar(p[16], p+7);
    r05_splice_evar(p[18], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Lines: 6 */
    /* s.Char: 8 */
    /* e.Line: 9 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos (s.Char e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);
    if (! r05_svar_left(p+8, p[4], p[5]))
      continue;
    r05_close_evar(p+9, p[8], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_TkChar);
    r05_alloc_insert_pos(p+12);
    r05_alloc_svar(p+8);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_DoScanm_Chars);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+2);
    r05_alloc_close_call(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+9);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[11], p[13]);
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[18], p+9);
    r05_splice_evar(p[20], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Lines: 6 */
    struct r05_node *p[16] = { 0 };
    /* t.Pos () e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[5]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+9);
    r05_alloc_chars("Unclosed \' - single quote", 25);
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_IncLine);
    r05_alloc_tvar(p+2);
    r05_alloc_close_call(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+6);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[8], p[10]);
    r05_splice_tvar(p[9], p+2);
    r05_splice_evar(p[14], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SimpleEscapedChar, "SimpleEscapedChar") {
  r05_this_is_generated_function();

  do {
    /* s.Escaped: 2 */
    struct r05_node *p[25] = { 0 };
    /* s.Escaped */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_SimpleEscapedChar0);
    r05_alloc_svar(p+2);
    r05_alloc_open_bracket(p+4);
    r05_alloc_chars("\'\'", 2);
    r05_alloc_close_bracket(p+5);
    r05_alloc_open_bracket(p+6);
    r05_alloc_chars("\"\"", 2);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_bracket(p+8);
    r05_alloc_chars("\\\\", 2);
    r05_alloc_close_bracket(p+9);
    r05_alloc_open_bracket(p+10);
    r05_alloc_chars("n\n", 2);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_chars("r\r", 2);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_chars("t\t", 2);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_chars("<<", 2);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_chars(">>", 2);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_chars("((", 2);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_chars("))", 2);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[3]);
    r05_link_brackets(p[22], p[23]);
    r05_link_brackets(p[20], p[21]);
    r05_link_brackets(p[18], p[19]);
    r05_link_brackets(p[16], p[17]);
    r05_link_brackets(p[14], p[15]);
    r05_link_brackets(p[12], p[13]);
    r05_link_brackets(p[10], p[11]);
    r05_link_brackets(p[8], p[9]);
    r05_link_brackets(p[6], p[7]);
    r05_link_brackets(p[4], p[5]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SimpleEscapedChar0, "SimpleEscapedChar0") {
  r05_this_is_generated_function();

  do {
    /* s.Escaped: 2, 7 */
    /* e.Escapes-B: 3 */
    /* e.Escapes-E: 8 */
    /* s.Char: 10 */
    struct r05_node *p[11] = { 0 };
    /* s.Escaped e.Escapes-B (s.Escaped s.Char) e.Escapes-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    p[3] = p[2]->next;
    p[4] = p[2];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+5, p[4], p[1]))
        continue;
      if (! r05_repeated_svar_left(p+7, p[5], p[6], p+2))
        continue;
      r05_close_evar(p+8, p[6], p[1]);
      if (! r05_svar_left(p+10, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[10], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_svar(p+10);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+3, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* s.Escaped: 2 */
    /* e.Escapes: 3 */
    struct r05_node *p[5] = { 0 };
    /* s.Escaped e.Escapes */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Charsm_Escape, "DoScan-Chars-Escape") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Lines: 6 */
    /* s.Escaped: 8 */
    /* e.Line: 9 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos (s.Escaped e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);
    if (! r05_svar_left(p+8, p[4], p[5]))
      continue;
    r05_close_evar(p+9, p[8], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScanm_Charsm_Escapeu_check);
    r05_alloc_insert_pos(p+12);
    r05_alloc_svar(p+8);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_SimpleEscapedChar);
    r05_alloc_svar(p+8);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[11]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[14], p+9);
    r05_splice_evar(p[17], p+6);
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
    r05_alloc_function(&r05f_DoScanm_Charsm_Escapeu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Charsm_Escapeu_check, "DoScan-Chars-Escape_check") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Escaped: 4 */
    /* e.Line: 9 */
    /* e.Lines: 11 */
    /* s.Char: 13 */
    struct r05_node *p[25] = { 0 };
    /* t.Pos s.Escaped (e.Line) (e.Lines) s.Char */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_svar_left(p+13, p[8], p[1]))
      continue;
    if (! r05_empty_hole(p[13], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_TkChar);
    r05_alloc_insert_pos(p+15);
    r05_alloc_svar(p+13);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoScanm_Chars);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+2);
    r05_alloc_function(&r05f_Len);
    r05_alloc_char('\\');
    r05_alloc_svar(p+4);
    r05_alloc_close_call(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+9);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[14], p[16]);
    r05_splice_tvar(p[15], p+2);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* s.Escaped: 4 */
    /* e.Line: 9 */
    /* e.Lines: 11 */
    /* e.Other: 13 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos s.Escaped (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScanm_Charsm_Escapeu_cont);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_svar(p+4);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[18], p+9);
    r05_splice_evar(p[20], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Charsm_Escapeu_cont, "DoScan-Chars-Escape_cont") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Lines: 7 */
    /* s.Hex1: 9 */
    /* s.Hex2: 10 */
    /* e.Line: 11 */
    struct r05_node *p[24] = { 0 };
    /* t.Pos ('x' s.Hex1 s.Hex2 e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], 'x'))
      continue;
    r05_close_evar(p+7, p[5], p[1]);
    if (! r05_svar_left(p+9, p[6], p[5]))
      continue;
    if (! r05_svar_left(p+10, p[9], p[5]))
      continue;
    r05_close_evar(p+11, p[10], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_DoScanm_Charsm_Escapeu_check0);
    r05_alloc_insert_pos(p+14);
    r05_alloc_svar(p+9);
    r05_alloc_svar(p+10);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_HexDigit);
    r05_alloc_svar(p+9);
    r05_alloc_close_call(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[13]);
    r05_push_stack(p[22]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+11);
    r05_splice_tvar(p[14], p+2);
    r05_splice_evar(p[16], p+11);
    r05_splice_evar(p[19], p+7);
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
    r05_alloc_function(&r05f_DoScanm_Charsm_Escapeu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Charsm_Escapeu_check0, "DoScan-Chars-Escape_check0") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Hex1: 4 */
    /* s.Hex2: 5 */
    /* e.Line: 10 */
    /* e.Lines: 12 */
    /* s.Num1: 14 */
    struct r05_node *p[26] = { 0 };
    /* t.Pos s.Hex1 s.Hex2 (e.Line) (e.Lines) s.Num1 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_svar_left(p+14, p[9], p[1]))
      continue;
    if (! r05_empty_hole(p[14], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScanm_Charsm_Escapeu_check1);
    r05_alloc_insert_pos(p+16);
    r05_alloc_svar(p+4);
    r05_alloc_svar(p+5);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_svar(p+14);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_HexDigit);
    r05_alloc_svar(p+5);
    r05_alloc_close_call(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[15]);
    r05_push_stack(p[24]);
    r05_push_stack(p[23]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[21], p+12);
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
    r05_alloc_function(&r05f_DoScanm_Charsm_Escapeu_cont1);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Charsm_Escapeu_cont0, "DoScan-Chars-Escape_cont0") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* e.Line: 7 */
    /* e.Lines: 9 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos ('x' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], 'x'))
      continue;
    r05_close_evar(p+7, p[6], p[5]);
    r05_close_evar(p+9, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+12);
    r05_alloc_chars("After \\x must be two hex digits", 31);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_DoScanm_Chars);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+2);
    r05_alloc_function(&r05f_Len);
    r05_alloc_chars("\\x", 2);
    r05_alloc_close_call(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+7);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[11], p[13]);
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[18], p+7);
    r05_splice_evar(p[20], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Lines: 6 */
    /* s.Other: 8 */
    /* e.Line: 9 */
    struct r05_node *p[22] = { 0 };
    /* t.Pos (s.Other e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);
    if (! r05_svar_left(p+8, p[4], p[5]))
      continue;
    r05_close_evar(p+9, p[8], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+12);
    r05_alloc_chars("Bad escape sequence \\", 21);
    r05_alloc_svar(p+8);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_DoScanm_Chars);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+2);
    r05_alloc_function(&r05f_Len);
    r05_alloc_char('\\');
    r05_alloc_svar(p+8);
    r05_alloc_close_call(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+9);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[11], p[13]);
    r05_splice_tvar(p[12], p+2);
    r05_splice_evar(p[18], p+9);
    r05_splice_evar(p[20], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Lines: 6 */
    struct r05_node *p[16] = { 0 };
    /* t.Pos () e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[5]))
      continue;
    r05_close_evar(p+6, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+9);
    r05_alloc_chars("Unexpected \\ at end of string literal", 37);
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_IncLine);
    r05_alloc_tvar(p+2);
    r05_alloc_close_call(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+6);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[8], p[10]);
    r05_splice_tvar(p[9], p+2);
    r05_splice_evar(p[14], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Charsm_Escapeu_check1, "DoScan-Chars-Escape_check1") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Hex1: 4 */
    /* s.Hex2: 5 */
    /* e.Line: 10 */
    /* e.Lines: 12 */
    /* s.Num1: 14 */
    /* s.Num2: 15 */
    struct r05_node *p[33] = { 0 };
    /* t.Pos s.Hex1 s.Hex2 (e.Line) (e.Lines) s.Num1 s.Num2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_svar_left(p+14, p[9], p[1]))
      continue;
    if (! r05_svar_left(p+15, p[14], p[1]))
      continue;
    if (! r05_empty_hole(p[15], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_TkChar);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_k2B_);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_k2A_);
    r05_alloc_svar(p+14);
    r05_alloc_number(16UL);
    r05_alloc_close_call(p+21);
    r05_alloc_svar(p+15);
    r05_alloc_close_call(p+22);
    r05_alloc_close_call(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_DoScanm_Chars);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+2);
    r05_alloc_function(&r05f_Len);
    r05_alloc_chars("\\x", 2);
    r05_alloc_svar(p+4);
    r05_alloc_svar(p+5);
    r05_alloc_close_call(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[25]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+10);
    r05_push_stack(p[27]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[16], p[24]);
    r05_push_stack(p[23]);
    r05_push_stack(p[18]);
    r05_push_stack(p[22]);
    r05_push_stack(p[19]);
    r05_push_stack(p[21]);
    r05_push_stack(p[20]);
    r05_splice_tvar(p[17], p+2);
    r05_splice_evar(p[29], p+10);
    r05_splice_evar(p[31], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* s.Hex1: 4 */
    /* s.Hex2: 5 */
    /* e.Line: 10 */
    /* e.Lines: 12 */
    /* s.Num1: 14 */
    /* e.Other: 15 */
    struct r05_node *p[26] = { 0 };
    /* t.Pos s.Hex1 s.Hex2 (e.Line) (e.Lines) s.Num1 e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_svar_left(p+14, p[9], p[1]))
      continue;
    r05_close_evar(p+15, p[14], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoScanm_Charsm_Escapeu_cont1);
    r05_alloc_insert_pos(p+18);
    r05_alloc_svar(p+4);
    r05_alloc_svar(p+5);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_svar(p+14);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[18], p+2);
    r05_splice_evar(p[20], p+10);
    r05_splice_evar(p[23], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Charsm_Escapeu_cont1, "DoScan-Chars-Escape_cont1") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    /* s.Hex1: 4 */
    /* s.Hex2: 5 */
    /* e.Line: 10 */
    /* e.Lines: 12 */
    /* e.Other: 14 */
    struct r05_node *p[23] = { 0 };
    /* t.Pos s.Hex1 s.Hex2 (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[9], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_DoScanm_Charsm_Escapeu_cont0);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_char('x');
    r05_alloc_svar(p+4);
    r05_alloc_svar(p+5);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[16]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[17], p+2);
    r05_splice_evar(p[19], p+10);
    r05_splice_evar(p[21], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(HexDigit, "HexDigit") {
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
    r05_alloc_function(&r05f_HexDigit0);
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

R05_DEFINE_LOCAL_FUNCTION(HexDigit0, "HexDigit0") {
  r05_this_is_generated_function();

  do {
    /* s.Digit: 2, 5 */
    struct r05_node *p[8] = { 0 };
    /* s.Digit 'D0' s.Digit */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+3, p[2], p[1], 'D'))
      continue;
    if (! r05_char_left(p+4, p[3], p[1], '0'))
      continue;
    if (! r05_repeated_svar_left(p+5, p[4], p[1], p+2))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;

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
    /* s.Digit: 2, 5 */
    struct r05_node *p[8] = { 0 };
    /* s.Digit 'Lu' s.Digit */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+3, p[2], p[1], 'L'))
      continue;
    if (! r05_char_left(p+4, p[3], p[1], 'u'))
      continue;
    if (! r05_repeated_svar_left(p+5, p[4], p[1], p+2))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_DoHexDigit);
    r05_alloc_chars("ABCDEF", 6);
    r05_alloc_number(10UL);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Digit: 2, 5 */
    struct r05_node *p[8] = { 0 };
    /* s.Digit 'Ll' s.Digit */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+3, p[2], p[1], 'L'))
      continue;
    if (! r05_char_left(p+4, p[3], p[1], 'l'))
      continue;
    if (! r05_repeated_svar_left(p+5, p[4], p[1], p+2))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_DoHexDigit);
    r05_alloc_chars("abcdef", 6);
    r05_alloc_number(10UL);
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
    /* s.Other: 3 */
    struct r05_node *p[4] = { 0 };
    /* s.Digit s.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
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

R05_DEFINE_LOCAL_FUNCTION(DoHexDigit, "DoHexDigit") {
  r05_this_is_generated_function();

  do {
    /* s.Digit: 2, 3 */
    /* s.Val: 4 */
    /* e.Samples: 5 */
    struct r05_node *p[7] = { 0 };
    /* s.Digit e.Samples s.Val s.Digit */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_repeated_svar_right(p+3, p[2], p[1], p+2))
      continue;
    if (! r05_svar_right(p+4, p[2], p[3]))
      continue;
    r05_close_evar(p+5, p[2], p[4]);

    r05_reset_allocator();
    r05_alloc_svar(p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.OtherDigit: 2 */
    /* s.Digit: 3 */
    /* s.Val: 4 */
    /* e.Samples: 5 */
    struct r05_node *p[12] = { 0 };
    /* s.OtherDigit e.Samples s.Val s.Digit */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_right(p+3, p[2], p[1]))
      continue;
    if (! r05_svar_right(p+4, p[2], p[3]))
      continue;
    r05_close_evar(p+5, p[2], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_DoHexDigit);
    r05_alloc_insert_pos(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+4);
    r05_alloc_close_call(p+10);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[7]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[8], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.BadVal: 2 */
    /* s.Digit: 3 */
    struct r05_node *p[4] = { 0 };
    /* s.BadVal s.Digit */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Compound, "DoScan-Compound") {
  r05_this_is_generated_function();

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 11 */
    /* e.Line: 13 */
    /* e.Lines: 15 */
    struct r05_node *p[29] = { 0 };
    /* t.StartPos t.Pos (e.Compound) ('\"' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_char_left(p+10, p[8], p[9], '\"'))
      continue;
    r05_close_evar(p+11, p[6], p[7]);
    r05_close_evar(p+13, p[10], p[9]);
    r05_close_evar(p+15, p[9], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+17);
    r05_alloc_function(&r05f_TkCompound);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_call(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_push_stack(p[23]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+11);
    r05_splice_tvar(p[18], p+2);
    r05_splice_evar(p[18], p+11);
    r05_splice_tvar(p[22], p+4);
    r05_splice_evar(p[25], p+13);
    r05_splice_evar(p[27], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 11 */
    /* e.Line: 13 */
    /* e.Lines: 15 */
    struct r05_node *p[30] = { 0 };
    /* t.StartPos t.Pos (e.Compound) ('\\' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_char_left(p+10, p[8], p[9], '\\'))
      continue;
    r05_close_evar(p+11, p[6], p[7]);
    r05_close_evar(p+13, p[10], p[9]);
    r05_close_evar(p+15, p[9], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoScanm_Compoundm_HandleEscape);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+11);
    r05_push_stack(p[21]);
    r05_push_stack(p[19]);
    r05_splice_tvar(p[18], p+2);
    r05_splice_tvar(p[20], p+4);
    r05_splice_evar(p[23], p+11);
    r05_splice_evar(p[26], p+13);
    r05_splice_evar(p[28], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 10 */
    /* e.Lines: 12 */
    /* s.Char: 14 */
    /* e.Line: 15 */
    struct r05_node *p[30] = { 0 };
    /* t.StartPos t.Pos (e.Compound) (s.Char e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[9], p[1]);
    if (! r05_svar_left(p+14, p[8], p[9]))
      continue;
    r05_close_evar(p+15, p[14], p[9]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoScanm_Compound);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+10);
    r05_push_stack(p[21]);
    r05_push_stack(p[19]);
    r05_splice_tvar(p[18], p+2);
    r05_splice_tvar(p[20], p+4);
    r05_splice_evar(p[23], p+10);
    r05_splice_evar(p[26], p+15);
    r05_splice_evar(p[28], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 10 */
    /* e.Lines: 12 */
    struct r05_node *p[22] = { 0 };
    /* t.StartPos t.Pos (e.Compound) () e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_empty_hole(p[8], p[9]))
      continue;
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[9], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+15);
    r05_alloc_chars("Unclosed \" - double quote", 25);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_IncLine);
    r05_alloc_tvar(p+4);
    r05_alloc_close_call(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+12);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[14], p[16]);
    r05_splice_tvar(p[15], p+4);
    r05_splice_evar(p[20], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscape, "DoScan-Compound-HandleEscape") {
  r05_this_is_generated_function();

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 10 */
    /* e.Lines: 12 */
    /* s.Escaped: 14 */
    /* e.Line: 15 */
    struct r05_node *p[31] = { 0 };
    /* t.StartPos t.Pos (e.Compound) (s.Escaped e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[9], p[1]);
    if (! r05_svar_left(p+14, p[8], p[9]))
      continue;
    r05_close_evar(p+15, p[14], p[9]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoScanm_Compoundm_HandleEscapeu_check);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_svar(p+14);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_SimpleEscapedChar);
    r05_alloc_svar(p+14);
    r05_alloc_close_call(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[17]);
    r05_push_stack(p[29]);
    r05_push_stack(p[28]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[18], p+2);
    r05_splice_tvar(p[18], p+4);
    r05_splice_evar(p[20], p+10);
    r05_splice_evar(p[23], p+15);
    r05_splice_evar(p[26], p+12);
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
    r05_alloc_function(&r05f_DoScanm_Compoundm_HandleEscapeu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscapeu_check, "DoScan-Compound-HandleEscape_check") {
  r05_this_is_generated_function();

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 8 */
    /* s.Escaped: 10 */
    /* e.Line: 15 */
    /* e.Lines: 17 */
    /* s.Char: 19 */
    struct r05_node *p[33] = { 0 };
    /* t.StartPos t.Pos (e.Compound) s.Escaped (e.Line) (e.Lines) s.Char */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_svar_left(p+10, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[11], p[12]);
    r05_close_evar(p+17, p[13], p[14]);
    if (! r05_svar_left(p+19, p[14], p[1]))
      continue;
    if (! r05_empty_hole(p[19], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_DoScanm_Compound);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_svar(p+19);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+8);
    r05_push_stack(p[24]);
    r05_push_stack(p[22]);
    r05_splice_tvar(p[21], p+2);
    r05_splice_tvar(p[23], p+4);
    r05_splice_evar(p[26], p+8);
    r05_splice_evar(p[29], p+15);
    r05_splice_evar(p[31], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 8 */
    /* s.Escaped: 10 */
    /* e.Line: 15 */
    /* e.Lines: 17 */
    /* e.Other: 19 */
    struct r05_node *p[31] = { 0 };
    /* t.StartPos t.Pos (e.Compound) s.Escaped (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_svar_left(p+10, p[7], p[1]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[11], p[12]);
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[14], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_DoScanm_Compoundm_HandleEscapeu_cont);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_svar(p+10);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[21]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[22], p+2);
    r05_splice_tvar(p[22], p+4);
    r05_splice_evar(p[24], p+8);
    r05_splice_evar(p[27], p+15);
    r05_splice_evar(p[29], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscapeu_cont, "DoScan-Compound-HandleEscape_cont") {
  r05_this_is_generated_function();

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 11 */
    /* e.Lines: 13 */
    /* s.Hex1: 15 */
    /* s.Hex2: 16 */
    /* e.Line: 17 */
    struct r05_node *p[33] = { 0 };
    /* t.StartPos t.Pos (e.Compound) ('x' s.Hex1 s.Hex2 e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_char_left(p+10, p[8], p[9], 'x'))
      continue;
    r05_close_evar(p+11, p[6], p[7]);
    r05_close_evar(p+13, p[9], p[1]);
    if (! r05_svar_left(p+15, p[10], p[9]))
      continue;
    if (! r05_svar_left(p+16, p[15], p[9]))
      continue;
    r05_close_evar(p+17, p[16], p[9]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_DoScanm_Compoundm_HandleEscapeu_check0);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_svar(p+15);
    r05_alloc_svar(p+16);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_HexDigit);
    r05_alloc_svar(p+15);
    r05_alloc_close_call(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[19]);
    r05_push_stack(p[31]);
    r05_push_stack(p[30]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+11);
    r05_splice_tvar(p[20], p+2);
    r05_splice_tvar(p[20], p+4);
    r05_splice_evar(p[22], p+11);
    r05_splice_evar(p[25], p+17);
    r05_splice_evar(p[28], p+13);
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
    r05_alloc_function(&r05f_DoScanm_Compoundm_HandleEscapeu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscapeu_check0, "DoScan-Compound-HandleEscape_check0") {
  r05_this_is_generated_function();

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 8 */
    /* s.Hex1: 10 */
    /* s.Hex2: 11 */
    /* e.Line: 16 */
    /* e.Lines: 18 */
    /* s.Num1: 20 */
    struct r05_node *p[35] = { 0 };
    /* t.StartPos t.Pos (e.Compound) s.Hex1 s.Hex2 (e.Line) (e.Lines) s.Num1 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_svar_left(p+10, p[7], p[1]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    r05_close_evar(p+16, p[12], p[13]);
    r05_close_evar(p+18, p[14], p[15]);
    if (! r05_svar_left(p+20, p[15], p[1]))
      continue;
    if (! r05_empty_hole(p[20], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_DoScanm_Compoundm_HandleEscapeu_check1);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_svar(p+10);
    r05_alloc_svar(p+11);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_svar(p+20);
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_HexDigit);
    r05_alloc_svar(p+11);
    r05_alloc_close_call(p+33);
    r05_alloc_close_call(p+34);
    r05_push_stack(p[34]);
    r05_push_stack(p[21]);
    r05_push_stack(p[33]);
    r05_push_stack(p[32]);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[22], p+2);
    r05_splice_tvar(p[22], p+4);
    r05_splice_evar(p[24], p+8);
    r05_splice_evar(p[27], p+16);
    r05_splice_evar(p[30], p+18);
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
    r05_alloc_function(&r05f_DoScanm_Compoundm_HandleEscapeu_cont1);
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscapeu_cont0, "DoScan-Compound-HandleEscape_cont0") {
  r05_this_is_generated_function();

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 11 */
    /* e.Line: 13 */
    /* e.Lines: 15 */
    struct r05_node *p[32] = { 0 };
    /* t.StartPos t.Pos (e.Compound) ('x' e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_char_left(p+10, p[8], p[9], 'x'))
      continue;
    r05_close_evar(p+11, p[6], p[7]);
    r05_close_evar(p+13, p[10], p[9]);
    r05_close_evar(p+15, p[9], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+17);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+18);
    r05_alloc_chars("After \\x must be two hex digits", 31);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_DoScanm_Compound);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+4);
    r05_alloc_close_call(p+23);
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
    r05_correct_evar(p+15);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+11);
    r05_push_stack(p[23]);
    r05_push_stack(p[22]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_tvar(p[18], p+4);
    r05_splice_tvar(p[21], p+2);
    r05_splice_evar(p[25], p+11);
    r05_splice_evar(p[28], p+13);
    r05_splice_evar(p[30], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 10 */
    /* e.Lines: 12 */
    /* s.Other: 14 */
    /* e.Line: 15 */
    struct r05_node *p[32] = { 0 };
    /* t.StartPos t.Pos (e.Compound) (s.Other e.Line) e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[9], p[1]);
    if (! r05_svar_left(p+14, p[8], p[9]))
      continue;
    r05_close_evar(p+15, p[14], p[9]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+17);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+18);
    r05_alloc_chars("Bad escape sequence \\", 21);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_DoScanm_Compound);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+4);
    r05_alloc_close_call(p+23);
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
    r05_correct_evar(p+12);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+10);
    r05_push_stack(p[23]);
    r05_push_stack(p[22]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_tvar(p[18], p+4);
    r05_splice_tvar(p[21], p+2);
    r05_splice_evar(p[25], p+10);
    r05_splice_evar(p[28], p+15);
    r05_splice_evar(p[30], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 10 */
    /* e.Lines: 12 */
    struct r05_node *p[25] = { 0 };
    /* t.StartPos t.Pos (e.Compound) () e.Lines */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    if (! r05_empty_hole(p[8], p[9]))
      continue;
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[9], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+15);
    r05_alloc_chars("Unexpected \\ at end of compound literal", 39);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_function(&r05f_TkCompound);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_IncLine);
    r05_alloc_tvar(p+4);
    r05_alloc_close_call(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[20]);
    r05_correct_evar(p+12);
    r05_push_stack(p[22]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[14], p[16]);
    r05_splice_tvar(p[15], p+4);
    r05_splice_tvar(p[18], p+2);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[23], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscapeu_check1, "DoScan-Compound-HandleEscape_check1") {
  r05_this_is_generated_function();

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 8 */
    /* s.Hex1: 10 */
    /* s.Hex2: 11 */
    /* e.Line: 16 */
    /* e.Lines: 18 */
    /* s.Num1: 20 */
    /* s.Num2: 21 */
    struct r05_node *p[41] = { 0 };
    /* t.StartPos t.Pos (e.Compound) s.Hex1 s.Hex2 (e.Line) (e.Lines) s.Num1 s.Num2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_svar_left(p+10, p[7], p[1]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    r05_close_evar(p+16, p[12], p[13]);
    r05_close_evar(p+18, p[14], p[15]);
    if (! r05_svar_left(p+20, p[15], p[1]))
      continue;
    if (! r05_svar_left(p+21, p[20], p[1]))
      continue;
    if (! r05_empty_hole(p[21], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_DoScanm_Compound);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+25);
    r05_alloc_function(&r05f_Len);
    r05_alloc_char('x');
    r05_alloc_svar(p+10);
    r05_alloc_svar(p+11);
    r05_alloc_close_call(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_Chr);
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_k2B_);
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_k2A_);
    r05_alloc_svar(p+20);
    r05_alloc_number(16UL);
    r05_alloc_close_call(p+32);
    r05_alloc_svar(p+21);
    r05_alloc_close_call(p+33);
    r05_alloc_close_call(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_call(p+40);
    r05_push_stack(p[40]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[27], p[35]);
    r05_push_stack(p[34]);
    r05_push_stack(p[29]);
    r05_push_stack(p[33]);
    r05_push_stack(p[30]);
    r05_push_stack(p[32]);
    r05_push_stack(p[31]);
    r05_correct_evar(p+8);
    r05_push_stack(p[26]);
    r05_push_stack(p[24]);
    r05_splice_tvar(p[23], p+2);
    r05_splice_tvar(p[25], p+4);
    r05_splice_evar(p[28], p+8);
    r05_splice_evar(p[37], p+16);
    r05_splice_evar(p[39], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 8 */
    /* s.Hex1: 10 */
    /* s.Hex2: 11 */
    /* e.Line: 16 */
    /* e.Lines: 18 */
    /* s.Num1: 20 */
    /* e.Other: 21 */
    struct r05_node *p[35] = { 0 };
    /* t.StartPos t.Pos (e.Compound) s.Hex1 s.Hex2 (e.Line) (e.Lines) s.Num1 e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_svar_left(p+10, p[7], p[1]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    r05_close_evar(p+16, p[12], p[13]);
    r05_close_evar(p+18, p[14], p[15]);
    if (! r05_svar_left(p+20, p[15], p[1]))
      continue;
    r05_close_evar(p+21, p[20], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_DoScanm_Compoundm_HandleEscapeu_cont1);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_svar(p+10);
    r05_alloc_svar(p+11);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_svar(p+20);
    r05_alloc_close_call(p+34);
    r05_push_stack(p[34]);
    r05_push_stack(p[23]);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[24], p+2);
    r05_splice_tvar(p[24], p+4);
    r05_splice_evar(p[26], p+8);
    r05_splice_evar(p[29], p+16);
    r05_splice_evar(p[32], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscapeu_cont1, "DoScan-Compound-HandleEscape_cont1") {
  r05_this_is_generated_function();

  do {
    /* t.StartPos: 2 */
    /* t.Pos: 4 */
    /* e.Compound: 8 */
    /* s.Hex1: 10 */
    /* s.Hex2: 11 */
    /* e.Line: 16 */
    /* e.Lines: 18 */
    /* e.Other: 20 */
    struct r05_node *p[32] = { 0 };
    /* t.StartPos t.Pos (e.Compound) s.Hex1 s.Hex2 (e.Line) (e.Lines) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_svar_left(p+10, p[7], p[1]))
      continue;
    if (! r05_svar_left(p+11, p[10], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    r05_close_evar(p+16, p[12], p[13]);
    r05_close_evar(p+18, p[14], p[15]);
    r05_close_evar(p+20, p[15], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_DoScanm_Compoundm_HandleEscapeu_cont0);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_char('x');
    r05_alloc_svar(p+10);
    r05_alloc_svar(p+11);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[23], p+2);
    r05_splice_tvar(p[23], p+4);
    r05_splice_evar(p[25], p+8);
    r05_splice_evar(p[28], p+16);
    r05_splice_evar(p[30], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Parse, "Parse") {
  r05_this_is_generated_function();

  do {
    /* t.First: 2 */
    /* e.Tokens: 4 */
    struct r05_node *p[12] = { 0 };
    /* t.First e.Tokens */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Parseu_check);
    r05_alloc_insert_pos(p+7);
    r05_alloc_open_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_bracket(p+10);
    r05_alloc_tvar(p+2);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[6]);
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

R05_DEFINE_LOCAL_FUNCTION(Parseu_check, "Parse_check") {
  r05_this_is_generated_function();

  do {
    /* e.Tokens: 6 */
    /* s.Type: 8 */
    /* t.First: 9 */
    /* t.Pos: 11 */
    /* e.Value: 13 */
    struct r05_node *p[27] = { 0 };
    /* t.First (e.Tokens) (s.Type t.Pos e.Value) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_svar_left(p+8, p[2], p[3]))
      continue;
    if (! r05_tvar_left(p+9, p[0], p[4]))
      continue;
    if (! r05_empty_hole(p[10], p[4]))
      continue;
    if (! r05_tvar_left(p+11, p[8], p[3]))
      continue;
    r05_close_evar(p+13, p[12], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Parsem_Aux);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Program);
    r05_alloc_open_bracket(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_SeparateLexerErrors);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_call(p+24);
    r05_alloc_close_call(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[15]);
    r05_push_stack(p[25]);
    r05_push_stack(p[17]);
    r05_push_stack(p[24]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[22], p[23]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[18], p[19]);
    r05_splice_tvar(p[16], p+11);
    r05_splice_tvar(p[21], p+9);
    r05_splice_evar(p[21], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Parsem_Aux, "Parse-Aux") {
  r05_this_is_generated_function();

  do {
    /* e.Units: 10 */
    /* e.Errors: 12 */
    /* t.FirstTokenPos: 14 */
    /* t.EOFPos: 16 */
    struct r05_node *p[24] = { 0 };
    /* t.FirstTokenPos (Program e.Units) (TkEOF t.EOFPos) (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[0], p[2]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkEOF))
      continue;
    if (! r05_brackets_right(p+7, p[0], p[4]))
      continue;
    if (! r05_function_left(p+9, p[7], p[8], &r05f_Program))
      continue;
    r05_close_evar(p+10, p[9], p[8]);
    r05_close_evar(p+12, p[2], p[3]);
    if (! r05_tvar_left(p+14, p[0], p[7]))
      continue;
    if (! r05_empty_hole(p[15], p[7]))
      continue;
    if (! r05_tvar_left(p+16, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[17], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_SemanticCheck);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[19], p+14);
    r05_splice_evar(p[19], p+10);
    r05_splice_evar(p[21], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SeparateLexerErrors, "SeparateLexerErrors") {
  r05_this_is_generated_function();

  do {
    /* e.Tokens: 7 */
    /* e.Errors: 9 */
    /* t.Pos: 11 */
    /* e.Message: 13 */
    struct r05_node *p[24] = { 0 };
    /* (TkError t.Pos e.Message) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_TkError))
      continue;
    if (! r05_brackets_right(p+5, p[3], p[1]))
      continue;
    r05_close_evar(p+7, p[3], p[5]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_tvar_left(p+11, p[4], p[3]))
      continue;
    r05_close_evar(p+13, p[12], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_SeparateLexerErrors);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[17], p[22]);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+9);
    r05_correct_evar(p+7);
    r05_splice_evar(p[16], p+7);
    r05_splice_evar(p[18], p+9);
    r05_splice_tvar(p[20], p+11);
    r05_splice_evar(p[20], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 4 */
    /* t.ValidToken: 6 */
    /* e.Tokens: 8 */
    struct r05_node *p[17] = { 0 };
    /* t.ValidToken e.Tokens (e.Errors) */
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
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_SeparateLexerErrors);
    r05_alloc_insert_pos(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_close_call(p+16);
    r05_push_stack(p[16]);
    r05_push_stack(p[11]);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+4);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[10], p+6);
    r05_splice_evar(p[12], p+8);
    r05_splice_evar(p[14], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 4 */
    struct r05_node *p[9] = { 0 };
    /* (e.Errors) */
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
    r05_link_brackets(p[6], p[8]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Program, "Program") {
  r05_this_is_generated_function();

  do {
    /* e.Errors: 6 */
    /* t.First: 8 */
    /* e.Tokens: 10 */
    struct r05_node *p[21] = { 0 };
    /* () t.First e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_tvar_left(p+8, p[3], p[4]))
      continue;
    r05_close_evar(p+10, p[9], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Programu_check);
    r05_alloc_insert_pos(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_tvar(p+8);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[13], p+8);
    r05_splice_evar(p[15], p+10);
    r05_splice_evar(p[18], p+6);
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
    r05_alloc_function(&r05f_Programu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(Programu_check, "Program_check") {
  r05_this_is_generated_function();

  do {
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* s.Type: 12 */
    /* t.First: 13 */
    /* t.Pos: 15 */
    /* e.Value: 17 */
    struct r05_node *p[34] = { 0 };
    /* t.First (e.Tokens) (e.Errors) (s.Type t.Pos e.Value) */
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
    if (! r05_svar_left(p+12, p[2], p[3]))
      continue;
    if (! r05_tvar_left(p+13, p[0], p[6]))
      continue;
    if (! r05_empty_hole(p[14], p[6]))
      continue;
    if (! r05_tvar_left(p+15, p[12], p[3]))
      continue;
    r05_close_evar(p+17, p[16], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Programu_check0);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_svar(p+12);
    r05_alloc_insert_pos(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_FIRSTu_Unit);
    r05_alloc_close_call(p+32);
    r05_alloc_close_call(p+33);
    r05_push_stack(p[33]);
    r05_push_stack(p[19]);
    r05_push_stack(p[32]);
    r05_push_stack(p[31]);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[20], p+13);
    r05_splice_evar(p[22], p+8);
    r05_splice_evar(p[25], p+10);
    r05_splice_tvar(p[27], p+15);
    r05_splice_evar(p[29], p+17);
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
    r05_alloc_function(&r05f_Programu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(Programu_cont, "Program_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Unit: 13 */
    struct r05_node *p[30] = { 0 };
    /* () (Unit t.Unit) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Unit))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Program);
    r05_alloc_open_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_function(&r05f_Unit);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_Program);
    r05_alloc_open_bracket(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[15]);
    r05_push_stack(p[28]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[22], p[23]);
    r05_link_brackets(p[16], p[20]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_tvar(p[18], p+13);
    r05_splice_evar(p[24], p+9);
    r05_splice_evar(p[26], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Program: 12 */
    /* e.Tokens: 14 */
    /* e.Errors: 16 */
    /* t.Unit: 18 */
    struct r05_node *p[27] = { 0 };
    /* ((Unit t.Unit)) (Program e.Program) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Unit))
      continue;
    if (! r05_brackets_left(p+7, p[3], p[1]))
      continue;
    if (! r05_function_left(p+9, p[7], p[8], &r05f_Program))
      continue;
    if (! r05_brackets_right(p+10, p[8], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;
    r05_close_evar(p+12, p[9], p[8]);
    r05_close_evar(p+14, p[8], p[10]);
    r05_close_evar(p+16, p[10], p[11]);
    if (! r05_tvar_left(p+18, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[19], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_Program);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+16);
    r05_correct_evar(p+14);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+12);
    r05_splice_tvar(p[21], p+18);
    r05_splice_evar(p[21], p+12);
    r05_splice_evar(p[23], p+14);
    r05_splice_evar(p[25], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    struct r05_node *p[23] = { 0 };
    /* () (TkSemicolon t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSemicolon))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Program);
    r05_alloc_open_bracket(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[16], p[17]);
    r05_splice_evar(p[18], p+9);
    r05_splice_evar(p[20], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 9 */
    /* t.Pos: 11 */
    struct r05_node *p[21] = { 0 };
    /* () (TkEOF t.Pos) (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkEOF))
      continue;
    if (! r05_brackets_left(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[1]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    if (! r05_tvar_left(p+11, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[12], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_function(&r05f_Program);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_TkEOF);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[15], p[17]);
    r05_link_brackets(p[13], p[14]);
    r05_splice_tvar(p[16], p+11);
    r05_splice_evar(p[19], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 6 */
    /* t.Unexpected: 8 */
    /* e.Tokens: 10 */
    struct r05_node *p[23] = { 0 };
    /* () t.Unexpected e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_tvar_left(p+8, p[3], p[4]))
      continue;
    r05_close_evar(p+10, p[9], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Program);
    r05_alloc_open_bracket(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_UnexpectedToken);
    r05_alloc_insert_pos(p+19);
    r05_alloc_chars("$EXTERN, $ENTRY, function name or special comment", 49);
    r05_alloc_close_call(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[16], p[21]);
    r05_push_stack(p[20]);
    r05_push_stack(p[18]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+10);
    r05_link_brackets(p[13], p[14]);
    r05_splice_evar(p[15], p+10);
    r05_splice_evar(p[17], p+6);
    r05_splice_tvar(p[19], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Programu_check0, "Program_check0") {
  r05_this_is_generated_function();

  do {
    /* t.First: 2 */
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* s.Type: 12, 21 */
    /* t.Pos: 13 */
    /* e.Value: 17 */
    /* e.1: 19 */
    /* e.2: 22 */
    struct r05_node *p[36] = { 0 };
    /* t.First (e.Tokens) (e.Errors) s.Type t.Pos (e.Value) e.1 s.Type e.2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_svar_left(p+12, p[7], p[1]))
      continue;
    if (! r05_tvar_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    r05_close_evar(p+17, p[15], p[16]);
    p[19] = p[16]->next;
    p[20] = p[16];
    r05_start_e_loop();
    do {
      if (! r05_repeated_svar_left(p+21, p[20], p[1], p+12))
        continue;
      r05_close_evar(p+22, p[21], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+24);
      r05_alloc_function(&r05f_Program);
      r05_alloc_open_bracket(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_open_call(p+27);
      r05_alloc_function(&r05f_Unit);
      r05_alloc_open_bracket(p+28);
      r05_alloc_close_bracket(p+29);
      r05_alloc_insert_pos(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_close_call(p+34);
      r05_alloc_close_call(p+35);
      r05_push_stack(p[35]);
      r05_push_stack(p[24]);
      r05_push_stack(p[34]);
      r05_push_stack(p[27]);
      r05_link_brackets(p[31], p[33]);
      r05_correct_evar(p+10);
      r05_correct_evar(p+8);
      r05_link_brackets(p[28], p[29]);
      r05_link_brackets(p[25], p[26]);
      r05_splice_tvar(p[30], p+2);
      r05_splice_evar(p[30], p+8);
      r05_splice_evar(p[32], p+10);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+19, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* t.First: 2 */
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* s.Type: 12 */
    /* t.Pos: 13 */
    /* e.Value: 17 */
    /* e.Other: 19 */
    struct r05_node *p[33] = { 0 };
    /* t.First (e.Tokens) (e.Errors) s.Type t.Pos (e.Value) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_svar_left(p+12, p[7], p[1]))
      continue;
    if (! r05_tvar_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    r05_close_evar(p+17, p[15], p[16]);
    r05_close_evar(p+19, p[16], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_Programu_cont0);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_svar(p+12);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[22], p+2);
    r05_splice_evar(p[24], p+8);
    r05_splice_evar(p[27], p+10);
    r05_splice_tvar(p[30], p+13);
    r05_splice_evar(p[30], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Programu_cont0, "Program_cont0") {
  r05_this_is_generated_function();

  do {
    /* t.First: 2 */
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* e.Other: 12 */
    struct r05_node *p[22] = { 0 };
    /* t.First (e.Tokens) (e.Errors) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Programu_cont);
    r05_alloc_open_bracket(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[14]);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_link_brackets(p[15], p[16]);
    r05_splice_tvar(p[17], p+2);
    r05_splice_evar(p[17], p+8);
    r05_splice_evar(p[19], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FIRSTu_Unit, "FIRST_Unit") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_TkSpecComment);
    r05_alloc_function(&r05f_TkExtern);
    r05_alloc_function(&r05f_TkEntry);
    r05_alloc_function(&r05f_TkName);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Unit, "Unit") {
  r05_this_is_generated_function();

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    /* e.Text: 15 */
    struct r05_node *p[26] = { 0 };
    /* () (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    r05_close_evar(p+15, p[14], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+17);
    r05_alloc_function(&r05f_Unit);
    r05_alloc_open_bracket(p+18);
    r05_alloc_function(&r05f_SpecialComment);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[17], p[21]);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+15);
    r05_splice_tvar(p[19], p+13);
    r05_splice_evar(p[19], p+15);
    r05_splice_evar(p[22], p+9);
    r05_splice_evar(p[24], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 9 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    /* t.Pos: 15 */
    /* e.Text: 17 */
    struct r05_node *p[28] = { 0 };
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[5], p[7]);
    r05_close_evar(p+13, p[7], p[8]);
    if (! r05_tvar_left(p+15, p[6], p[5]))
      continue;
    r05_close_evar(p+17, p[16], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Unit);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_evar(p[25], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    struct r05_node *p[27] = { 0 };
    /* () (TkExtern t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkExtern))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Unit);
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_open_bracket(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[15]);
    r05_push_stack(p[25]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[19], p[20]);
    r05_link_brackets(p[16], p[17]);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Names: 10 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    struct r05_node *p[27] = { 0 };
    /* (Extern) (NameList e.Names) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Extern))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_NameList))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[3]))
      continue;
    r05_close_evar(p+10, p[7], p[6]);
    r05_close_evar(p+12, p[6], p[8]);
    r05_close_evar(p+14, p[8], p[9]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Unit);
    r05_alloc_open_bracket(p+17);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_open_bracket(p+18);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+12);
    r05_link_brackets(p[17], p[21]);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+10);
    r05_splice_evar(p[19], p+10);
    r05_splice_evar(p[22], p+12);
    r05_splice_evar(p[24], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 10 */
    /* e.Errors: 12 */
    /* t.Pos: 14 */
    struct r05_node *p[23] = { 0 };
    /* (Extern) (TkSemicolon t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Extern))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSemicolon))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[3]))
      continue;
    r05_close_evar(p+10, p[6], p[8]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[15], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+20);
    r05_alloc_chars("No names after $EXTERN", 22);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_link_brackets(p[17], p[22]);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+10);
    r05_splice_evar(p[16], p+10);
    r05_splice_evar(p[18], p+12);
    r05_splice_tvar(p[20], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 7 */
    /* t.Unexpected: 9 */
    /* e.Tokens: 11 */
    struct r05_node *p[22] = { 0 };
    /* (Extern) t.Unexpected e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Extern))
      continue;
    if (! r05_brackets_right(p+5, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[3]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    if (! r05_tvar_left(p+9, p[3], p[5]))
      continue;
    r05_close_evar(p+11, p[10], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Unitu_check);
    r05_alloc_insert_pos(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_tvar(p+9);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[13]);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+11);
    r05_splice_tvar(p[14], p+9);
    r05_splice_evar(p[16], p+11);
    r05_splice_evar(p[19], p+7);
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
    r05_alloc_function(&r05f_Unitu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(Unitu_check, "Unit_check") {
  r05_this_is_generated_function();

  do {
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* s.1: 12 */
    /* t.Unexpected: 13 */
    /* t.Pos: 15 */
    /* e.2: 17 */
    struct r05_node *p[26] = { 0 };
    /* t.Unexpected (e.Tokens) (e.Errors) (s.1 t.Pos e.2) */
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
    if (! r05_svar_left(p+12, p[2], p[3]))
      continue;
    if (! r05_tvar_left(p+13, p[0], p[6]))
      continue;
    if (! r05_empty_hole(p[14], p[6]))
      continue;
    if (! r05_tvar_left(p+15, p[12], p[3]))
      continue;
    r05_close_evar(p+17, p[16], p[3]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+23);
    r05_alloc_chars("Can\'t parse names after $EXTERN", 31);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_bracket(p+25);
    r05_link_brackets(p[20], p[25]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[19], p+13);
    r05_splice_evar(p[19], p+8);
    r05_splice_evar(p[21], p+10);
    r05_splice_tvar(p[23], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Unexpected: 2 */
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* e.Other: 12 */
    struct r05_node *p[22] = { 0 };
    /* t.Unexpected (e.Tokens) (e.Errors) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Unitu_cont);
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[14]);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_link_brackets(p[15], p[16]);
    r05_splice_tvar(p[17], p+2);
    r05_splice_evar(p[17], p+8);
    r05_splice_evar(p[19], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Unitu_cont, "Unit_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Names: 13 */
    /* e.Tokens: 15 */
    /* e.Errors: 17 */
    /* t.Pos: 19 */
    struct r05_node *p[30] = { 0 };
    /* (Extern (NameList e.Names)) (TkSemicolon t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Extern))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[3]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_NameList))
      continue;
    if (! r05_brackets_left(p+8, p[3], p[1]))
      continue;
    if (! r05_function_left(p+10, p[8], p[9], &r05f_TkSemicolon))
      continue;
    if (! r05_brackets_right(p+11, p[9], p[1]))
      continue;
    if (! r05_empty_hole(p[6], p[3]))
      continue;
    r05_close_evar(p+13, p[7], p[6]);
    r05_close_evar(p+15, p[9], p[11]);
    r05_close_evar(p+17, p[11], p[12]);
    if (! r05_tvar_left(p+19, p[10], p[9]))
      continue;
    if (! r05_empty_hole(p[20], p[9]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+21);
    r05_alloc_function(&r05f_Unit);
    r05_alloc_open_bracket(p+22);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+17);
    r05_correct_evar(p+15);
    r05_link_brackets(p[21], p[25]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+13);
    r05_splice_evar(p[23], p+13);
    r05_splice_evar(p[26], p+15);
    r05_splice_evar(p[28], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Names: 10 */
    /* e.Errors: 12 */
    /* t.NextToken: 14 */
    /* e.Tokens: 16 */
    struct r05_node *p[30] = { 0 };
    /* (Extern (NameList e.Names)) t.NextToken e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Extern))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[3]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_NameList))
      continue;
    if (! r05_brackets_right(p+8, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[6], p[3]))
      continue;
    r05_close_evar(p+10, p[7], p[6]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[3], p[8]))
      continue;
    r05_close_evar(p+16, p[15], p[8]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Unitu_check0);
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
    r05_alloc_tvar(p+14);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+10);
    r05_splice_evar(p[20], p+10);
    r05_splice_tvar(p[22], p+14);
    r05_splice_evar(p[24], p+16);
    r05_splice_evar(p[27], p+12);
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
    r05_alloc_function(&r05f_Unitu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(Unitu_check0, "Unit_check0") {
  r05_this_is_generated_function();

  do {
    /* e.Names: 10 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* s.1: 16 */
    /* t.NextToken: 17 */
    /* t.Pos: 19 */
    /* e.2: 21 */
    struct r05_node *p[35] = { 0 };
    /* (e.Names) t.NextToken (e.Tokens) (e.Errors) (s.1 t.Pos e.2) */
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
    r05_close_evar(p+10, p[2], p[3]);
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[6], p[7]);
    if (! r05_svar_left(p+16, p[4], p[5]))
      continue;
    if (! r05_tvar_left(p+17, p[3], p[8]))
      continue;
    if (! r05_empty_hole(p[18], p[8]))
      continue;
    if (! r05_tvar_left(p+19, p[16], p[5]))
      continue;
    r05_close_evar(p+21, p[20], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+23);
    r05_alloc_function(&r05f_Unit);
    r05_alloc_open_bracket(p+24);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+32);
    r05_alloc_chars("missed semicolon", 16);
    r05_alloc_close_bracket(p+33);
    r05_alloc_close_bracket(p+34);
    r05_link_brackets(p[29], p[34]);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+12);
    r05_link_brackets(p[23], p[27]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+10);
    r05_splice_evar(p[25], p+10);
    r05_splice_tvar(p[28], p+17);
    r05_splice_evar(p[28], p+12);
    r05_splice_evar(p[30], p+14);
    r05_splice_tvar(p[32], p+19);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Names: 4 */
    /* t.NextToken: 6 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* e.Other: 16 */
    struct r05_node *p[29] = { 0 };
    /* (e.Names) t.NextToken (e.Tokens) (e.Errors) e.Other */
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
    r05_alloc_function(&r05f_Unitu_cont0);
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+12);
    r05_link_brackets(p[19], p[23]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[21], p+4);
    r05_splice_tvar(p[24], p+6);
    r05_splice_evar(p[24], p+12);
    r05_splice_evar(p[26], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Unitu_cont0, "Unit_cont0") {
  r05_this_is_generated_function();

  do {
    /* e.Function: 9 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    struct r05_node *p[24] = { 0 };
    /* () (Function e.Function) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Function))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[6], p[5]);
    r05_close_evar(p+11, p[5], p[7]);
    r05_close_evar(p+13, p[7], p[8]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_Unit);
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_Function);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[15], p[19]);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[17], p+9);
    r05_splice_evar(p[20], p+11);
    r05_splice_evar(p[22], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* s.Type: 12 */
    /* t.Pos: 13 */
    /* e.Value: 15 */
    struct r05_node *p[29] = { 0 };
    /* () (s.Type t.Pos e.Value) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_right(p+6, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+8, p[5], p[6]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_svar_left(p+12, p[4], p[5]))
      continue;
    if (! r05_tvar_left(p+13, p[12], p[5]))
      continue;
    r05_close_evar(p+15, p[14], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Unitu_check1);
    r05_alloc_svar(p+12);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_function(&r05f_TkName);
    r05_alloc_function(&r05f_TkEntry);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+15);
    r05_splice_tvar(p[18], p+13);
    r05_splice_evar(p[20], p+15);
    r05_splice_evar(p[23], p+8);
    r05_splice_evar(p[26], p+10);
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
    r05_alloc_function(&r05f_Unitu_cont1);
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

R05_DEFINE_LOCAL_FUNCTION(Unitu_check1, "Unit_check1") {
  r05_this_is_generated_function();

  do {
    /* s.Type: 2, 19 */
    /* t.Pos: 3 */
    /* e.Value: 11 */
    /* e.Tokens: 13 */
    /* e.Errors: 15 */
    /* e.1: 17 */
    /* e.2: 20 */
    struct r05_node *p[37] = { 0 };
    /* s.Type t.Pos (e.Value) (e.Tokens) (e.Errors) e.1 s.Type e.2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    r05_close_evar(p+11, p[5], p[6]);
    r05_close_evar(p+13, p[7], p[8]);
    r05_close_evar(p+15, p[9], p[10]);
    p[17] = p[10]->next;
    p[18] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_repeated_svar_left(p+19, p[18], p[1], p+2))
        continue;
      r05_close_evar(p+20, p[19], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+22);
      r05_alloc_function(&r05f_Unit);
      r05_alloc_open_bracket(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_open_call(p+25);
      r05_alloc_function(&r05f_FunctionDef);
      r05_alloc_open_bracket(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_open_bracket(p+28);
      r05_alloc_svar(p+2);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_open_bracket(p+32);
      r05_alloc_insert_pos(p+33);
      r05_alloc_close_bracket(p+34);
      r05_alloc_close_call(p+35);
      r05_alloc_close_call(p+36);
      r05_push_stack(p[36]);
      r05_push_stack(p[22]);
      r05_push_stack(p[35]);
      r05_push_stack(p[25]);
      r05_link_brackets(p[32], p[34]);
      r05_correct_evar(p+15);
      r05_correct_evar(p+13);
      r05_link_brackets(p[28], p[30]);
      r05_correct_evar(p+11);
      r05_link_brackets(p[26], p[27]);
      r05_link_brackets(p[23], p[24]);
      r05_splice_tvar(p[29], p+3);
      r05_splice_evar(p[29], p+11);
      r05_splice_evar(p[31], p+13);
      r05_splice_evar(p[33], p+15);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+17, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* s.Type: 2 */
    /* t.Pos: 3 */
    /* e.Value: 11 */
    /* e.Tokens: 13 */
    /* e.Errors: 15 */
    /* e.Other: 17 */
    struct r05_node *p[30] = { 0 };
    /* s.Type t.Pos (e.Value) (e.Tokens) (e.Errors) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    r05_close_evar(p+11, p[5], p[6]);
    r05_close_evar(p+13, p[7], p[8]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[10], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Unitu_cont1);
    r05_alloc_open_bracket(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_svar(p+2);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+15);
    r05_correct_evar(p+13);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[20], p[21]);
    r05_splice_tvar(p[23], p+3);
    r05_splice_evar(p[23], p+11);
    r05_splice_evar(p[25], p+13);
    r05_splice_evar(p[27], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Unitu_cont1, "Unit_cont1") {
  r05_this_is_generated_function();

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    struct r05_node *p[19] = { 0 };
    /* () (TkSemicolon t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSemicolon))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_splice_evar(p[15], p+9);
    r05_splice_evar(p[17], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 6 */
    /* t.Unexpected: 8 */
    /* e.Tokens: 10 */
    struct r05_node *p[18] = { 0 };
    /* () t.Unexpected e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_tvar_left(p+8, p[3], p[4]))
      continue;
    r05_close_evar(p+10, p[9], p[4]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_UnexpectedToken);
    r05_alloc_tvar(p+8);
    r05_alloc_chars("$EXTERN, $ENTRY, function name or special comment", 49);
    r05_alloc_close_call(p+16);
    r05_alloc_close_bracket(p+17);
    r05_link_brackets(p[13], p[17]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[12], p+8);
    r05_splice_evar(p[12], p+10);
    r05_splice_evar(p[14], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(NameList, "NameList") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 9 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    /* t.Pos: 15 */
    /* e.Text: 17 */
    struct r05_node *p[28] = { 0 };
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[5], p[7]);
    r05_close_evar(p+13, p[7], p[8]);
    if (! r05_tvar_left(p+15, p[6], p[5]))
      continue;
    r05_close_evar(p+17, p[16], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_evar(p[25], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    /* e.Name: 15 */
    struct r05_node *p[30] = { 0 };
    /* () (TkName t.Pos e.Name) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkName))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    r05_close_evar(p+15, p[14], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_open_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[18], p[24]);
    r05_link_brackets(p[19], p[23]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+15);
    r05_splice_tvar(p[21], p+13);
    r05_splice_evar(p[21], p+15);
    r05_splice_evar(p[25], p+9);
    r05_splice_evar(p[27], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 6 */
    /* t.Unexpected: 8 */
    /* e.Tokens: 10 */
    struct r05_node *p[21] = { 0 };
    /* () t.Unexpected e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_tvar_left(p+8, p[3], p[4]))
      continue;
    r05_close_evar(p+10, p[9], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_NameListu_check);
    r05_alloc_insert_pos(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_tvar(p+8);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[13], p+8);
    r05_splice_evar(p[15], p+10);
    r05_splice_evar(p[18], p+6);
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
    r05_alloc_function(&r05f_NameListu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(NameListu_check, "NameList_check") {
  r05_this_is_generated_function();

  do {
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* s.1: 12 */
    /* t.Unexpected: 13 */
    /* t.Pos: 15 */
    /* e.2: 17 */
    struct r05_node *p[26] = { 0 };
    /* t.Unexpected (e.Tokens) (e.Errors) (s.1 t.Pos e.2) */
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
    if (! r05_svar_left(p+12, p[2], p[3]))
      continue;
    if (! r05_tvar_left(p+13, p[0], p[6]))
      continue;
    if (! r05_empty_hole(p[14], p[6]))
      continue;
    if (! r05_tvar_left(p+15, p[12], p[3]))
      continue;
    r05_close_evar(p+17, p[16], p[3]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+23);
    r05_alloc_chars("expected function name after $EXTERN keyword", 44);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_bracket(p+25);
    r05_link_brackets(p[20], p[25]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[19], p+13);
    r05_splice_evar(p[19], p+8);
    r05_splice_evar(p[21], p+10);
    r05_splice_tvar(p[23], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Unexpected: 2 */
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* e.Other: 12 */
    struct r05_node *p[22] = { 0 };
    /* t.Unexpected (e.Tokens) (e.Errors) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_NameListu_cont);
    r05_alloc_open_bracket(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[14]);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_link_brackets(p[15], p[16]);
    r05_splice_tvar(p[17], p+2);
    r05_splice_evar(p[17], p+8);
    r05_splice_evar(p[19], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(NameListu_cont, "NameList_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Names: 12 */
    /* e.Tokens: 14 */
    /* e.Errors: 16 */
    /* t.Pos: 18 */
    struct r05_node *p[32] = { 0 };
    /* ((NameList e.Names)) (TkComma t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_NameList))
      continue;
    if (! r05_brackets_left(p+7, p[3], p[1]))
      continue;
    if (! r05_function_left(p+9, p[7], p[8], &r05f_TkComma))
      continue;
    if (! r05_brackets_right(p+10, p[8], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;
    r05_close_evar(p+12, p[6], p[5]);
    r05_close_evar(p+14, p[8], p[10]);
    r05_close_evar(p+16, p[10], p[11]);
    if (! r05_tvar_left(p+18, p[9], p[8]))
      continue;
    if (! r05_empty_hole(p[19], p[8]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_open_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_char(',');
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+16);
    r05_correct_evar(p+14);
    r05_link_brackets(p[21], p[26]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[23], p+12);
    r05_splice_tvar(p[25], p+18);
    r05_splice_evar(p[27], p+14);
    r05_splice_evar(p[29], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Names: 13 */
    /* e.Tokens: 15 */
    /* e.Errors: 17 */
    /* t.CommaPos: 19 */
    /* t.Pos: 21 */
    /* e.Name: 23 */
    struct r05_node *p[39] = { 0 };
    /* ((NameList e.Names) ',' t.CommaPos) (TkName t.Pos e.Name) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_NameList))
      continue;
    if (! r05_char_left(p+7, p[5], p[3], ','))
      continue;
    if (! r05_brackets_left(p+8, p[3], p[1]))
      continue;
    if (! r05_function_left(p+10, p[8], p[9], &r05f_TkName))
      continue;
    if (! r05_brackets_right(p+11, p[9], p[1]))
      continue;
    r05_close_evar(p+13, p[6], p[5]);
    r05_close_evar(p+15, p[9], p[11]);
    r05_close_evar(p+17, p[11], p[12]);
    if (! r05_tvar_left(p+19, p[7], p[3]))
      continue;
    if (! r05_empty_hole(p[20], p[3]))
      continue;
    if (! r05_tvar_left(p+21, p[10], p[9]))
      continue;
    r05_close_evar(p+23, p[22], p[9]);

    r05_reset_allocator();
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_open_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_insert_pos(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_close_call(p+38);
    r05_push_stack(p[38]);
    r05_push_stack(p[25]);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+17);
    r05_correct_evar(p+15);
    r05_link_brackets(p[26], p[33]);
    r05_link_brackets(p[27], p[32]);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+23);
    r05_correct_evar(p+13);
    r05_splice_evar(p[28], p+13);
    r05_splice_tvar(p[30], p+21);
    r05_splice_evar(p[30], p+23);
    r05_splice_evar(p[34], p+15);
    r05_splice_evar(p[36], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Names: 10 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* t.Pos: 16 */
    struct r05_node *p[32] = { 0 };
    /* ((NameList e.Names) ',' t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_NameList))
      continue;
    if (! r05_char_left(p+7, p[5], p[3], ','))
      continue;
    if (! r05_brackets_right(p+8, p[3], p[1]))
      continue;
    r05_close_evar(p+10, p[6], p[5]);
    r05_close_evar(p+12, p[3], p[8]);
    r05_close_evar(p+14, p[8], p[9]);
    if (! r05_tvar_left(p+16, p[7], p[3]))
      continue;
    if (! r05_empty_hole(p[17], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_open_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+28);
    r05_alloc_chars("expected name after comma", 25);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[25], p[30]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+12);
    r05_link_brackets(p[19], p[23]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+10);
    r05_splice_evar(p[21], p+10);
    r05_splice_evar(p[24], p+12);
    r05_splice_evar(p[26], p+14);
    r05_splice_tvar(p[28], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Names: 15 */
    /* e.Tokens: 17 */
    /* e.Errors: 19 */
    /* t.NamePos: 21 */
    /* e.Name: 23 */
    /* t.BracketPos: 25 */
    struct r05_node *p[42] = { 0 };
    /* ((NameList e.Names)) (TkName t.NamePos e.Name) (TkOpenBlock t.BracketPos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_NameList))
      continue;
    if (! r05_brackets_left(p+7, p[3], p[1]))
      continue;
    if (! r05_function_left(p+9, p[7], p[8], &r05f_TkName))
      continue;
    if (! r05_brackets_left(p+10, p[8], p[1]))
      continue;
    if (! r05_function_left(p+12, p[10], p[11], &r05f_TkOpenBlock))
      continue;
    if (! r05_brackets_right(p+13, p[11], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;
    r05_close_evar(p+15, p[6], p[5]);
    r05_close_evar(p+17, p[11], p[13]);
    r05_close_evar(p+19, p[13], p[14]);
    if (! r05_tvar_left(p+21, p[9], p[8]))
      continue;
    r05_close_evar(p+23, p[22], p[8]);
    if (! r05_tvar_left(p+25, p[12], p[11]))
      continue;
    if (! r05_empty_hole(p[26], p[11]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+27);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_function(&r05f_TkName);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_open_bracket(p+33);
    r05_alloc_function(&r05f_TkOpenBlock);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_open_bracket(p+39);
    r05_alloc_function(&r05f_Error);
    r05_alloc_tvar(p+21);
    r05_alloc_chars("missed semicolon after previous $EXTERN declaration", 51);
    r05_alloc_close_bracket(p+40);
    r05_alloc_close_bracket(p+41);
    r05_link_brackets(p[37], p[41]);
    r05_link_brackets(p[39], p[40]);
    r05_correct_evar(p+19);
    r05_correct_evar(p+17);
    r05_link_brackets(p[33], p[35]);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+23);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+15);
    r05_splice_evar(p[28], p+15);
    r05_splice_tvar(p[31], p+21);
    r05_splice_evar(p[31], p+23);
    r05_splice_tvar(p[34], p+25);
    r05_splice_evar(p[36], p+17);
    r05_splice_evar(p[38], p+19);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Names: 12 */
    /* e.Tokens: 14 */
    /* e.Errors: 16 */
    /* t.Pos: 18 */
    /* e.Name: 20 */
    struct r05_node *p[38] = { 0 };
    /* ((NameList e.Names)) (TkName t.Pos e.Name) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_NameList))
      continue;
    if (! r05_brackets_left(p+7, p[3], p[1]))
      continue;
    if (! r05_function_left(p+9, p[7], p[8], &r05f_TkName))
      continue;
    if (! r05_brackets_right(p+10, p[8], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;
    r05_close_evar(p+12, p[6], p[5]);
    r05_close_evar(p+14, p[8], p[10]);
    r05_close_evar(p+16, p[10], p[11]);
    if (! r05_tvar_left(p+18, p[9], p[8]))
      continue;
    r05_close_evar(p+20, p[19], p[8]);

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_open_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_function(&r05f_Error);
    r05_alloc_tvar(p+18);
    r05_alloc_chars("missed comma after external name", 32);
    r05_alloc_close_bracket(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_close_call(p+37);
    r05_push_stack(p[37]);
    r05_push_stack(p[22]);
    r05_link_brackets(p[32], p[36]);
    r05_link_brackets(p[34], p[35]);
    r05_correct_evar(p+16);
    r05_correct_evar(p+14);
    r05_link_brackets(p[23], p[30]);
    r05_link_brackets(p[24], p[29]);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+20);
    r05_correct_evar(p+12);
    r05_splice_evar(p[25], p+12);
    r05_splice_tvar(p[27], p+18);
    r05_splice_evar(p[27], p+20);
    r05_splice_evar(p[31], p+14);
    r05_splice_evar(p[33], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Names: 9 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    struct r05_node *p[22] = { 0 };
    /* ((NameList e.Names)) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_NameList))
      continue;
    if (! r05_brackets_right(p+7, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;
    r05_close_evar(p+9, p[6], p[5]);
    r05_close_evar(p+11, p[3], p[7]);
    r05_close_evar(p+13, p[7], p[8]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_NameList);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[16], p+9);
    r05_splice_evar(p[18], p+11);
    r05_splice_evar(p[20], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FunctionDef, "FunctionDef") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 9 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    /* t.Pos: 15 */
    /* e.Text: 17 */
    struct r05_node *p[28] = { 0 };
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[5], p[7]);
    r05_close_evar(p+13, p[7], p[8]);
    if (! r05_tvar_left(p+15, p[6], p[5]))
      continue;
    r05_close_evar(p+17, p[16], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_FunctionDef);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_evar(p[25], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.EntryPos: 13 */
    struct r05_node *p[26] = { 0 };
    /* () (TkEntry t.EntryPos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkEntry))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_FunctionDef);
    r05_alloc_open_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_function(&r05f_TkEntry);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[16], p[20]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_tvar(p[18], p+13);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* t.EntryPos: 16 */
    /* t.NamePos: 18 */
    /* e.Name: 20 */
    struct r05_node *p[34] = { 0 };
    /* ((TkEntry t.EntryPos)) (TkName t.NamePos e.Name) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkEntry))
      continue;
    if (! r05_brackets_left(p+7, p[3], p[1]))
      continue;
    if (! r05_function_left(p+9, p[7], p[8], &r05f_TkName))
      continue;
    if (! r05_brackets_right(p+10, p[8], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;
    r05_close_evar(p+12, p[8], p[10]);
    r05_close_evar(p+14, p[10], p[11]);
    if (! r05_tvar_left(p+16, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[17], p[5]))
      continue;
    if (! r05_tvar_left(p+18, p[9], p[8]))
      continue;
    r05_close_evar(p+20, p[19], p[8]);

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_FunctionDef);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_function(&r05f_Entry);
    r05_alloc_close_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_close_call(p+33);
    r05_push_stack(p[33]);
    r05_push_stack(p[22]);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+12);
    r05_link_brackets(p[23], p[28]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+20);
    r05_splice_tvar(p[24], p+16);
    r05_splice_evar(p[26], p+20);
    r05_splice_evar(p[29], p+12);
    r05_splice_evar(p[31], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.EntryPos: 13 */
    struct r05_node *p[22] = { 0 };
    /* ((TkEntry t.EntryPos)) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkEntry))
      continue;
    if (! r05_brackets_right(p+7, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;
    r05_close_evar(p+9, p[3], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+19);
    r05_alloc_chars("$ENTRY without function name, skipped", 37);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_bracket(p+21);
    r05_link_brackets(p[16], p[21]);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_splice_evar(p[15], p+9);
    r05_splice_evar(p[17], p+11);
    r05_splice_tvar(p[19], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    /* e.Name: 15 */
    struct r05_node *p[29] = { 0 };
    /* () (TkName t.Pos e.Name) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkName))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    r05_close_evar(p+15, p[14], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_FunctionDef);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_function(&r05f_Local);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[18], p[23]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+15);
    r05_splice_tvar(p[19], p+13);
    r05_splice_evar(p[21], p+15);
    r05_splice_evar(p[24], p+9);
    r05_splice_evar(p[26], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Sentences: 9 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    /* t.Pos: 15 */
    /* e.Name: 19 */
    /* s.Scope: 21 */
    struct r05_node *p[33] = { 0 };
    /* (t.Pos (e.Name) s.Scope) (Block e.Sentences) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Block))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[6], p[5]);
    r05_close_evar(p+11, p[5], p[7]);
    r05_close_evar(p+13, p[7], p[8]);
    if (! r05_tvar_left(p+15, p[2], p[3]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[3]))
      continue;
    r05_close_evar(p+19, p[17], p[18]);
    if (! r05_svar_left(p+21, p[18], p[3]))
      continue;
    if (! r05_empty_hole(p[21], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+22);
    r05_alloc_function(&r05f_Function);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_svar(p+21);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[22], p[28]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+19);
    r05_splice_tvar(p[23], p+15);
    r05_splice_evar(p[25], p+19);
    r05_splice_evar(p[27], p+9);
    r05_splice_evar(p[29], p+11);
    r05_splice_evar(p[31], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    /* e.Name: 17 */
    /* s.Scope: 19 */
    /* t.OpenPos: 20 */
    struct r05_node *p[41] = { 0 };
    /* (t.Pos (e.Name) s.Scope) (TkOpenBlock t.OpenPos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkOpenBlock))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[2], p[3]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[3]))
      continue;
    r05_close_evar(p+17, p[15], p[16]);
    if (! r05_svar_left(p+19, p[16], p[3]))
      continue;
    if (! r05_empty_hole(p[19], p[3]))
      continue;
    if (! r05_tvar_left(p+20, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[21], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_FunctionDef);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_svar(p+19);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_Block);
    r05_alloc_open_bracket(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_open_bracket(p+32);
    r05_alloc_function(&r05f_TkOpenBlock);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_close_call(p+39);
    r05_alloc_close_call(p+40);
    r05_push_stack(p[40]);
    r05_push_stack(p[22]);
    r05_push_stack(p[39]);
    r05_push_stack(p[29]);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[32], p[34]);
    r05_link_brackets(p[30], p[31]);
    r05_link_brackets(p[23], p[28]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+17);
    r05_splice_tvar(p[24], p+13);
    r05_splice_evar(p[26], p+17);
    r05_splice_tvar(p[33], p+20);
    r05_splice_evar(p[35], p+9);
    r05_splice_evar(p[37], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 6 */
    /* t.Pos: 8 */
    /* e.Name: 12 */
    /* s.Scope: 14 */
    /* t.Unexpected: 15 */
    /* e.Tokens: 17 */
    struct r05_node *p[31] = { 0 };
    /* (t.Pos (e.Name) s.Scope) t.Unexpected e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_tvar_left(p+8, p[2], p[3]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[3]))
      continue;
    r05_close_evar(p+12, p[10], p[11]);
    if (! r05_svar_left(p+14, p[11], p[3]))
      continue;
    if (! r05_empty_hole(p[14], p[3]))
      continue;
    if (! r05_tvar_left(p+15, p[3], p[4]))
      continue;
    r05_close_evar(p+17, p[16], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_Function);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_svar(p+14);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_UnexpectedToken);
    r05_alloc_tvar(p+15);
    r05_alloc_chars("\'{\'", 3);
    r05_alloc_close_call(p+29);
    r05_alloc_close_bracket(p+30);
    r05_link_brackets(p[26], p[30]);
    r05_push_stack(p[29]);
    r05_push_stack(p[28]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+17);
    r05_link_brackets(p[19], p[24]);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+12);
    r05_splice_tvar(p[20], p+8);
    r05_splice_evar(p[22], p+12);
    r05_splice_tvar(p[25], p+15);
    r05_splice_evar(p[25], p+17);
    r05_splice_evar(p[27], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Block, "Block") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 9 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    /* t.Pos: 15 */
    /* e.Text: 17 */
    struct r05_node *p[28] = { 0 };
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[5], p[7]);
    r05_close_evar(p+13, p[7], p[8]);
    if (! r05_tvar_left(p+15, p[6], p[5]))
      continue;
    r05_close_evar(p+17, p[16], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Block);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_evar(p[25], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.OpenPos: 13 */
    struct r05_node *p[28] = { 0 };
    /* () (TkOpenBlock t.OpenPos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkOpenBlock))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Block);
    r05_alloc_open_bracket(p+16);
    r05_alloc_char('{');
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_open_bracket(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_close_call(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[15]);
    r05_push_stack(p[26]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[20], p[21]);
    r05_link_brackets(p[16], p[18]);
    r05_splice_tvar(p[17], p+13);
    r05_splice_evar(p[22], p+9);
    r05_splice_evar(p[24], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 6 */
    /* t.Unexpected: 8 */
    /* e.Tokens: 10 */
    struct r05_node *p[19] = { 0 };
    /* () t.Unexpected e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_tvar_left(p+8, p[3], p[4]))
      continue;
    r05_close_evar(p+10, p[9], p[4]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_UnexpectedToken);
    r05_alloc_insert_pos(p+16);
    r05_alloc_chars("\'{\'", 3);
    r05_alloc_close_call(p+17);
    r05_alloc_close_bracket(p+18);
    r05_link_brackets(p[13], p[18]);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+10);
    r05_splice_evar(p[12], p+10);
    r05_splice_evar(p[14], p+6);
    r05_splice_tvar(p[16], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Sentences: 10 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* t.OpenPos: 16 */
    struct r05_node *p[32] = { 0 };
    /* ('{' t.OpenPos) (Sentences e.Sentences) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '{'))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Sentences))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[1]))
      continue;
    r05_close_evar(p+10, p[7], p[6]);
    r05_close_evar(p+12, p[6], p[8]);
    r05_close_evar(p+14, p[8], p[9]);
    if (! r05_tvar_left(p+16, p[4], p[3]))
      continue;
    if (! r05_empty_hole(p[17], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Block);
    r05_alloc_open_bracket(p+19);
    r05_alloc_char('{');
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_CheckEmptyBlock);
    r05_alloc_tvar(p+16);
    r05_alloc_evar(p+10);
    r05_alloc_close_call(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[26], p[30]);
    r05_push_stack(p[29]);
    r05_push_stack(p[28]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+12);
    r05_link_brackets(p[19], p[24]);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[20], p+16);
    r05_splice_evar(p[22], p+10);
    r05_splice_evar(p[25], p+12);
    r05_splice_evar(p[27], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Sentences: 12 */
    /* e.Tokens: 14 */
    /* e.Errors: 16 */
    /* t.OpenPos: 18 */
    /* t.Pos: 20 */
    struct r05_node *p[29] = { 0 };
    /* ('{' t.OpenPos (e.Sentences)) (TkCloseBlock t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '{'))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkCloseBlock))
      continue;
    if (! r05_brackets_right(p+8, p[4], p[3]))
      continue;
    if (! r05_brackets_right(p+10, p[6], p[1]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[6], p[10]);
    r05_close_evar(p+16, p[10], p[11]);
    if (! r05_tvar_left(p+18, p[4], p[8]))
      continue;
    if (! r05_empty_hole(p[19], p[8]))
      continue;
    if (! r05_tvar_left(p+20, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[21], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+22);
    r05_alloc_function(&r05f_Block);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+16);
    r05_correct_evar(p+14);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[23], p+12);
    r05_splice_evar(p[25], p+14);
    r05_splice_evar(p[27], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Sentences: 9 */
    /* e.Errors: 11 */
    /* t.OpenPos: 13 */
    /* t.Unexpected: 15 */
    /* e.Tokens: 17 */
    struct r05_node *p[28] = { 0 };
    /* ('{' t.OpenPos (e.Sentences)) t.Unexpected e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '{'))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[3]))
      continue;
    if (! r05_brackets_right(p+7, p[3], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[4], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;
    if (! r05_tvar_left(p+15, p[3], p[7]))
      continue;
    r05_close_evar(p+17, p[16], p[7]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_Block);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_UnexpectedToken);
    r05_alloc_tvar(p+15);
    r05_alloc_chars("\'}\'", 3);
    r05_alloc_close_call(p+26);
    r05_alloc_close_bracket(p+27);
    r05_link_brackets(p[23], p[27]);
    r05_push_stack(p[26]);
    r05_push_stack(p[25]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+17);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[20], p+9);
    r05_splice_tvar(p[22], p+15);
    r05_splice_evar(p[22], p+17);
    r05_splice_evar(p[24], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckEmptyBlock, "CheckEmptyBlock") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 2 */
    struct r05_node *p[7] = { 0 };
    /* t.Pos */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+4);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+5);
    r05_alloc_chars("Empty function block", 20);
    r05_alloc_close_bracket(p+6);
    r05_link_brackets(p[4], p[6]);
    r05_splice_tvar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 2 */
    /* e.Sentences: 4 */
    struct r05_node *p[6] = { 0 };
    /* t.Pos e.Sentences */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

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
    /* e.Scanned: 9 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    /* t.Pos: 15 */
    /* e.Text: 17 */
    struct r05_node *p[28] = { 0 };
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[5], p[7]);
    r05_close_evar(p+13, p[7], p[8]);
    if (! r05_tvar_left(p+15, p[6], p[5]))
      continue;
    r05_close_evar(p+17, p[16], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_evar(p[25], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 6 */
    /* t.Start: 8 */
    /* e.Tokens: 10 */
    struct r05_node *p[21] = { 0 };
    /* () t.Start e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_tvar_left(p+8, p[3], p[4]))
      continue;
    r05_close_evar(p+10, p[9], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Sentencesu_check);
    r05_alloc_insert_pos(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_tvar(p+8);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[13], p+8);
    r05_splice_evar(p[15], p+10);
    r05_splice_evar(p[18], p+6);
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
    r05_alloc_function(&r05f_Sentencesu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(Sentencesu_check, "Sentences_check") {
  r05_this_is_generated_function();

  do {
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* s.Type: 12 */
    /* t.Start: 13 */
    /* t.Pos: 15 */
    /* e.Value: 17 */
    struct r05_node *p[34] = { 0 };
    /* t.Start (e.Tokens) (e.Errors) (s.Type t.Pos e.Value) */
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
    if (! r05_svar_left(p+12, p[2], p[3]))
      continue;
    if (! r05_tvar_left(p+13, p[0], p[6]))
      continue;
    if (! r05_empty_hole(p[14], p[6]))
      continue;
    if (! r05_tvar_left(p+15, p[12], p[3]))
      continue;
    r05_close_evar(p+17, p[16], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Sentencesu_check0);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_svar(p+12);
    r05_alloc_insert_pos(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_call(p+31);
    r05_alloc_function(&r05f_FIRSTu_Sentence);
    r05_alloc_close_call(p+32);
    r05_alloc_close_call(p+33);
    r05_push_stack(p[33]);
    r05_push_stack(p[19]);
    r05_push_stack(p[32]);
    r05_push_stack(p[31]);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[20], p+13);
    r05_splice_evar(p[22], p+8);
    r05_splice_evar(p[25], p+10);
    r05_splice_tvar(p[27], p+15);
    r05_splice_evar(p[29], p+17);
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
    r05_alloc_function(&r05f_Sentencesu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(Sentencesu_cont, "Sentences_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Sentence: 13 */
    struct r05_node *p[26] = { 0 };
    /* () (Sentence t.Sentence) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Sentence))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_open_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[16], p[20]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_tvar(p[18], p+13);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 6 */
    /* t.Unexpected: 8 */
    /* e.Tokens: 10 */
    struct r05_node *p[20] = { 0 };
    /* () t.Unexpected e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_tvar_left(p+8, p[3], p[4]))
      continue;
    r05_close_evar(p+10, p[9], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+12);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_close_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_UnexpectedToken);
    r05_alloc_tvar(p+8);
    r05_alloc_chars("start of sentence", 17);
    r05_alloc_close_call(p+18);
    r05_alloc_close_bracket(p+19);
    r05_link_brackets(p[15], p[19]);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+10);
    r05_link_brackets(p[12], p[13]);
    r05_splice_tvar(p[14], p+8);
    r05_splice_evar(p[14], p+10);
    r05_splice_evar(p[16], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Sentences: 11 */
    /* e.Tokens: 13 */
    /* e.Errors: 15 */
    /* t.Pos: 17 */
    struct r05_node *p[30] = { 0 };
    /* ((e.Sentences)) (TkSemicolon t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_brackets_left(p+6, p[3], p[1]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_TkSemicolon))
      continue;
    if (! r05_brackets_right(p+9, p[7], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;
    r05_close_evar(p+11, p[4], p[5]);
    r05_close_evar(p+13, p[7], p[9]);
    r05_close_evar(p+15, p[9], p[10]);
    if (! r05_tvar_left(p+17, p[8], p[7]))
      continue;
    if (! r05_empty_hole(p[18], p[7]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_open_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_char(';');
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+15);
    r05_correct_evar(p+13);
    r05_link_brackets(p[20], p[24]);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+11);
    r05_splice_evar(p[22], p+11);
    r05_splice_evar(p[25], p+13);
    r05_splice_evar(p[27], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Sentences: 8 */
    /* e.Tokens: 10 */
    /* e.Errors: 12 */
    struct r05_node *p[21] = { 0 };
    /* ((e.Sentences)) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_brackets_right(p+6, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[3], p[6]);
    r05_close_evar(p+12, p[6], p[7]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+10);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[15], p+8);
    r05_splice_evar(p[17], p+10);
    r05_splice_evar(p[19], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Sentences: 9 */
    /* e.Errors: 11 */
    /* t.Start: 13 */
    /* e.Tokens: 15 */
    struct r05_node *p[29] = { 0 };
    /* ((e.Sentences) ';') t.Start e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_right(p+4, p[2], p[3], ';'))
      continue;
    if (! r05_brackets_left(p+5, p[2], p[4]))
      continue;
    if (! r05_brackets_right(p+7, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[6], p[4]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[3], p[7]))
      continue;
    r05_close_evar(p+15, p[14], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Sentencesu_check1);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_tvar(p+13);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[19], p+9);
    r05_splice_tvar(p[21], p+13);
    r05_splice_evar(p[23], p+15);
    r05_splice_evar(p[26], p+11);
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
    r05_alloc_function(&r05f_Sentencesu_cont1);
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

R05_DEFINE_LOCAL_FUNCTION(Sentencesu_check0, "Sentences_check0") {
  r05_this_is_generated_function();

  do {
    /* t.Start: 2 */
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* s.Type: 12, 21 */
    /* t.Pos: 13 */
    /* e.Value: 17 */
    /* e.1: 19 */
    /* e.2: 22 */
    struct r05_node *p[36] = { 0 };
    /* t.Start (e.Tokens) (e.Errors) s.Type t.Pos (e.Value) e.1 s.Type e.2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_svar_left(p+12, p[7], p[1]))
      continue;
    if (! r05_tvar_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    r05_close_evar(p+17, p[15], p[16]);
    p[19] = p[16]->next;
    p[20] = p[16];
    r05_start_e_loop();
    do {
      if (! r05_repeated_svar_left(p+21, p[20], p[1], p+12))
        continue;
      r05_close_evar(p+22, p[21], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+24);
      r05_alloc_function(&r05f_Sentences);
      r05_alloc_open_bracket(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_open_call(p+27);
      r05_alloc_function(&r05f_Sentence);
      r05_alloc_open_bracket(p+28);
      r05_alloc_close_bracket(p+29);
      r05_alloc_insert_pos(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_close_call(p+34);
      r05_alloc_close_call(p+35);
      r05_push_stack(p[35]);
      r05_push_stack(p[24]);
      r05_push_stack(p[34]);
      r05_push_stack(p[27]);
      r05_link_brackets(p[31], p[33]);
      r05_correct_evar(p+10);
      r05_correct_evar(p+8);
      r05_link_brackets(p[28], p[29]);
      r05_link_brackets(p[25], p[26]);
      r05_splice_tvar(p[30], p+2);
      r05_splice_evar(p[30], p+8);
      r05_splice_evar(p[32], p+10);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+19, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* t.Start: 2 */
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* s.Type: 12 */
    /* t.Pos: 13 */
    /* e.Value: 17 */
    /* e.Other: 19 */
    struct r05_node *p[33] = { 0 };
    /* t.Start (e.Tokens) (e.Errors) s.Type t.Pos (e.Value) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_svar_left(p+12, p[7], p[1]))
      continue;
    if (! r05_tvar_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    r05_close_evar(p+17, p[15], p[16]);
    r05_close_evar(p+19, p[16], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_Sentencesu_cont0);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_svar(p+12);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[22], p+2);
    r05_splice_evar(p[24], p+8);
    r05_splice_evar(p[27], p+10);
    r05_splice_tvar(p[30], p+13);
    r05_splice_evar(p[30], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Sentencesu_cont0, "Sentences_cont0") {
  r05_this_is_generated_function();

  do {
    /* t.Start: 2 */
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* e.Other: 12 */
    struct r05_node *p[22] = { 0 };
    /* t.Start (e.Tokens) (e.Errors) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Sentencesu_cont);
    r05_alloc_open_bracket(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[14]);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_link_brackets(p[15], p[16]);
    r05_splice_tvar(p[17], p+2);
    r05_splice_evar(p[17], p+8);
    r05_splice_evar(p[19], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Sentencesu_check1, "Sentences_check1") {
  r05_this_is_generated_function();

  do {
    /* e.Sentences: 10 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* s.Type: 16 */
    /* t.Start: 17 */
    /* t.Pos: 19 */
    /* e.Value: 21 */
    struct r05_node *p[41] = { 0 };
    /* (e.Sentences) t.Start (e.Tokens) (e.Errors) (s.Type t.Pos e.Value) */
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
    r05_close_evar(p+10, p[2], p[3]);
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[6], p[7]);
    if (! r05_svar_left(p+16, p[4], p[5]))
      continue;
    if (! r05_tvar_left(p+17, p[3], p[8]))
      continue;
    if (! r05_empty_hole(p[18], p[8]))
      continue;
    if (! r05_tvar_left(p+19, p[16], p[5]))
      continue;
    r05_close_evar(p+21, p[20], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Sentencesu_check2);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_svar(p+16);
    r05_alloc_insert_pos(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_open_call(p+38);
    r05_alloc_function(&r05f_FIRSTu_Sentence);
    r05_alloc_close_call(p+39);
    r05_alloc_close_call(p+40);
    r05_push_stack(p[40]);
    r05_push_stack(p[23]);
    r05_push_stack(p[39]);
    r05_push_stack(p[38]);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+10);
    r05_splice_evar(p[25], p+10);
    r05_splice_tvar(p[27], p+17);
    r05_splice_evar(p[29], p+12);
    r05_splice_evar(p[32], p+14);
    r05_splice_tvar(p[34], p+19);
    r05_splice_evar(p[36], p+21);
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
    r05_alloc_function(&r05f_Sentencesu_cont2);
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

R05_DEFINE_LOCAL_FUNCTION(Sentencesu_cont1, "Sentences_cont1") {
  r05_this_is_generated_function();

  do {
    /* e.Sentences: 12 */
    /* e.Tokens: 14 */
    /* e.Errors: 16 */
    /* t.Sentence: 18 */
    struct r05_node *p[31] = { 0 };
    /* ((e.Sentences) ';') (Sentence t.Sentence) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_right(p+4, p[2], p[3], ';'))
      continue;
    if (! r05_brackets_left(p+5, p[2], p[4]))
      continue;
    if (! r05_brackets_left(p+7, p[3], p[1]))
      continue;
    if (! r05_function_left(p+9, p[7], p[8], &r05f_Sentence))
      continue;
    if (! r05_brackets_right(p+10, p[8], p[1]))
      continue;
    if (! r05_empty_hole(p[6], p[4]))
      continue;
    r05_close_evar(p+12, p[5], p[6]);
    r05_close_evar(p+14, p[8], p[10]);
    r05_close_evar(p+16, p[10], p[11]);
    if (! r05_tvar_left(p+18, p[9], p[8]))
      continue;
    if (! r05_empty_hole(p[19], p[8]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_open_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+16);
    r05_correct_evar(p+14);
    r05_link_brackets(p[21], p[25]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[23], p+12);
    r05_splice_tvar(p[23], p+18);
    r05_splice_evar(p[26], p+14);
    r05_splice_evar(p[28], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Sentences: 9 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    struct r05_node *p[22] = { 0 };
    /* ((e.Sentences) ';') e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_right(p+4, p[2], p[3], ';'))
      continue;
    if (! r05_brackets_left(p+5, p[2], p[4]))
      continue;
    if (! r05_brackets_right(p+7, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[6], p[4]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[3], p[7]);
    r05_close_evar(p+13, p[7], p[8]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[16], p+9);
    r05_splice_evar(p[18], p+11);
    r05_splice_evar(p[20], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Sentencesu_check2, "Sentences_check2") {
  r05_this_is_generated_function();

  do {
    /* e.Sentences: 4 */
    /* t.Start: 6 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* s.Type: 16, 25 */
    /* t.Pos: 17 */
    /* e.Value: 21 */
    /* e.1: 23 */
    /* e.2: 26 */
    struct r05_node *p[43] = { 0 };
    /* (e.Sentences) t.Start (e.Tokens) (e.Errors) s.Type t.Pos (e.Value) e.1 s.Type e.2 */
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
    if (! r05_svar_left(p+16, p[11], p[1]))
      continue;
    if (! r05_tvar_left(p+17, p[16], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    r05_close_evar(p+21, p[19], p[20]);
    p[23] = p[20]->next;
    p[24] = p[20];
    r05_start_e_loop();
    do {
      if (! r05_repeated_svar_left(p+25, p[24], p[1], p+16))
        continue;
      r05_close_evar(p+26, p[25], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+28);
      r05_alloc_function(&r05f_Sentences);
      r05_alloc_open_bracket(p+29);
      r05_alloc_open_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_bracket(p+32);
      r05_alloc_char(';');
      r05_alloc_close_bracket(p+33);
      r05_alloc_open_call(p+34);
      r05_alloc_function(&r05f_Sentence);
      r05_alloc_open_bracket(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_insert_pos(p+37);
      r05_alloc_open_bracket(p+38);
      r05_alloc_insert_pos(p+39);
      r05_alloc_close_bracket(p+40);
      r05_alloc_close_call(p+41);
      r05_alloc_close_call(p+42);
      r05_push_stack(p[42]);
      r05_push_stack(p[28]);
      r05_push_stack(p[41]);
      r05_push_stack(p[34]);
      r05_link_brackets(p[38], p[40]);
      r05_correct_evar(p+14);
      r05_correct_evar(p+12);
      r05_link_brackets(p[35], p[36]);
      r05_link_brackets(p[29], p[33]);
      r05_link_brackets(p[30], p[32]);
      r05_correct_evar(p+4);
      r05_splice_evar(p[31], p+4);
      r05_splice_tvar(p[37], p+6);
      r05_splice_evar(p[37], p+12);
      r05_splice_evar(p[39], p+14);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+23, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Sentences: 4 */
    /* t.Start: 6 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* s.Type: 16 */
    /* t.Pos: 17 */
    /* e.Value: 21 */
    /* e.Other: 23 */
    struct r05_node *p[40] = { 0 };
    /* (e.Sentences) t.Start (e.Tokens) (e.Errors) s.Type t.Pos (e.Value) e.Other */
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
    if (! r05_svar_left(p+16, p[11], p[1]))
      continue;
    if (! r05_tvar_left(p+17, p[16], p[1]))
      continue;
    if (! r05_brackets_left(p+19, p[18], p[1]))
      continue;
    r05_close_evar(p+21, p[19], p[20]);
    r05_close_evar(p+23, p[20], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_Sentencesu_cont2);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_open_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_svar(p+16);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_close_call(p+39);
    r05_push_stack(p[39]);
    r05_push_stack(p[25]);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[33], p[35]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[27], p+4);
    r05_splice_tvar(p[29], p+6);
    r05_splice_evar(p[31], p+12);
    r05_splice_evar(p[34], p+14);
    r05_splice_tvar(p[37], p+17);
    r05_splice_evar(p[37], p+21);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Sentencesu_cont2, "Sentences_cont2") {
  r05_this_is_generated_function();

  do {
    /* e.Sentences: 4 */
    /* t.Start: 6 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* e.Other: 16 */
    struct r05_node *p[29] = { 0 };
    /* (e.Sentences) t.Start (e.Tokens) (e.Errors) e.Other */
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
    r05_alloc_function(&r05f_Sentencesu_cont1);
    r05_alloc_open_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_char(';');
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+12);
    r05_link_brackets(p[19], p[23]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[21], p+4);
    r05_splice_tvar(p[24], p+6);
    r05_splice_evar(p[24], p+12);
    r05_splice_evar(p[26], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FIRSTu_Sentence, "FIRST_Sentence") {
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
    r05_alloc_function(&r05f_FIRSTu_Term);
    r05_alloc_close_call(p+3);
    r05_alloc_function(&r05f_TkAssign);
    r05_alloc_function(&r05f_TkComma);
    r05_push_stack(p[3]);
    r05_push_stack(p[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Sentence, "Sentence") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 9 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    /* t.Pos: 15 */
    /* e.Text: 17 */
    struct r05_node *p[28] = { 0 };
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[5], p[7]);
    r05_close_evar(p+13, p[7], p[8]);
    if (! r05_tvar_left(p+15, p[6], p[5]))
      continue;
    r05_close_evar(p+17, p[16], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Sentence);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_evar(p[25], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Pattern: 13 */
    struct r05_node *p[24] = { 0 };
    /* () (Pattern t.Pattern) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Pattern))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Sentence);
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
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[16], p[18]);
    r05_splice_tvar(p[17], p+13);
    r05_splice_evar(p[19], p+9);
    r05_splice_evar(p[21], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 6 */
    /* e.Errors: 8 */
    struct r05_node *p[22] = { 0 };
    /* () e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[3], p[4]);
    r05_close_evar(p+8, p[4], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Sentence);
    r05_alloc_open_bracket(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Pattern);
    r05_alloc_open_bracket(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[10]);
    r05_push_stack(p[20]);
    r05_push_stack(p[13]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+6);
    r05_link_brackets(p[14], p[15]);
    r05_link_brackets(p[11], p[12]);
    r05_splice_evar(p[16], p+6);
    r05_splice_evar(p[18], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.SentenceTail: 9 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    /* t.Pattern: 15 */
    struct r05_node *p[26] = { 0 };
    /* (t.Pattern) (SentenceTail e.SentenceTail) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_SentenceTail))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[6], p[5]);
    r05_close_evar(p+11, p[5], p[7]);
    r05_close_evar(p+13, p[7], p[8]);
    if (! r05_tvar_left(p+15, p[2], p[3]))
      continue;
    if (! r05_empty_hole(p[16], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+17);
    r05_alloc_function(&r05f_Sentence);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[17], p[21]);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[19], p+15);
    r05_splice_evar(p[19], p+9);
    r05_splice_evar(p[22], p+11);
    r05_splice_evar(p[24], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 6 */
    /* e.Errors: 8 */
    /* t.Pattern: 10 */
    struct r05_node *p[25] = { 0 };
    /* (t.Pattern) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[3], p[4]);
    r05_close_evar(p+8, p[4], p[5]);
    if (! r05_tvar_left(p+10, p[2], p[3]))
      continue;
    if (! r05_empty_hole(p[11], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Sentence);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_call(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[12]);
    r05_push_stack(p[23]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+6);
    r05_link_brackets(p[17], p[18]);
    r05_link_brackets(p[13], p[15]);
    r05_splice_tvar(p[14], p+10);
    r05_splice_evar(p[19], p+6);
    r05_splice_evar(p[21], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(UnexpectedTokenInSentence, "UnexpectedTokenInSentence") {
  r05_this_is_generated_function();

  do {
    /* t.Unexpected: 2 */
    struct r05_node *p[7] = { 0 };
    /* t.Unexpected */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_UnexpectedToken);
    r05_alloc_insert_pos(p+5);
    r05_alloc_chars("valid Refal expression, \'=\', \',\', \':\' or \';\'", 44);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_splice_tvar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SentenceTail, "SentenceTail") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 9 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    /* t.Pos: 15 */
    /* e.Text: 17 */
    struct r05_node *p[28] = { 0 };
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[5], p[7]);
    r05_close_evar(p+13, p[7], p[8]);
    if (! r05_tvar_left(p+15, p[6], p[5]))
      continue;
    r05_close_evar(p+17, p[16], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_evar(p[25], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    struct r05_node *p[27] = { 0 };
    /* () (TkAssign t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkAssign))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+16);
    r05_alloc_char('=');
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Result);
    r05_alloc_open_bracket(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[15]);
    r05_push_stack(p[25]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[19], p[20]);
    r05_link_brackets(p[16], p[17]);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    struct r05_node *p[27] = { 0 };
    /* () (TkComma t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkComma))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+16);
    r05_alloc_char(',');
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Result);
    r05_alloc_open_bracket(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[15]);
    r05_push_stack(p[25]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[19], p[20]);
    r05_link_brackets(p[16], p[17]);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    struct r05_node *p[32] = { 0 };
    /* () (TkSemicolon t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSemicolon))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+16);
    r05_alloc_char('=');
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Result);
    r05_alloc_open_bracket(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_function(&r05f_TkSemicolon);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_function(&r05f_Error);
    r05_alloc_tvar(p+13);
    r05_alloc_chars("Missed \'=\'", 10);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_call(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[15]);
    r05_push_stack(p[30]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[25], p[29]);
    r05_link_brackets(p[27], p[28]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[21], p[23]);
    r05_link_brackets(p[19], p[20]);
    r05_link_brackets(p[16], p[17]);
    r05_splice_tvar(p[22], p+13);
    r05_splice_evar(p[24], p+9);
    r05_splice_evar(p[26], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    struct r05_node *p[28] = { 0 };
    /* () (TkColon t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkColon))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[5], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+16);
    r05_alloc_char(',');
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_function(&r05f_TkColon);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_function(&r05f_Error);
    r05_alloc_tvar(p+13);
    r05_alloc_chars("Missed \',\'", 10);
    r05_alloc_close_bracket(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[22], p[26]);
    r05_link_brackets(p[24], p[25]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+9);
    r05_link_brackets(p[18], p[20]);
    r05_link_brackets(p[16], p[17]);
    r05_splice_tvar(p[19], p+13);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 6 */
    /* t.Unexpected: 8 */
    /* e.Tokens: 10 */
    struct r05_node *p[22] = { 0 };
    /* () t.Unexpected e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_tvar_left(p+8, p[3], p[4]))
      continue;
    r05_close_evar(p+10, p[9], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+12);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_function(&r05f_RETURN);
    r05_alloc_open_bracket(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_UnexpectedTokenInSentence);
    r05_alloc_tvar(p+8);
    r05_alloc_close_call(p+20);
    r05_alloc_close_bracket(p+21);
    r05_link_brackets(p[17], p[21]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+10);
    r05_link_brackets(p[12], p[15]);
    r05_link_brackets(p[13], p[14]);
    r05_splice_tvar(p[16], p+8);
    r05_splice_evar(p[16], p+10);
    r05_splice_evar(p[18], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 10 */
    /* e.Errors: 12 */
    /* t.Result: 14 */
    struct r05_node *p[23] = { 0 };
    /* ('=') (Result t.Result) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '='))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Result))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[3]))
      continue;
    r05_close_evar(p+10, p[6], p[8]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[15], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_function(&r05f_RETURN);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+10);
    r05_link_brackets(p[16], p[18]);
    r05_splice_tvar(p[17], p+14);
    r05_splice_evar(p[19], p+10);
    r05_splice_evar(p[21], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 10 */
    /* e.Errors: 12 */
    /* t.Result: 14 */
    struct r05_node *p[25] = { 0 };
    /* (',') (Result t.Result) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], ','))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Result))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[3]))
      continue;
    r05_close_evar(p+10, p[6], p[8]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[15], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+17);
    r05_alloc_char(',');
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+10);
    r05_link_brackets(p[17], p[19]);
    r05_splice_tvar(p[18], p+14);
    r05_splice_evar(p[20], p+10);
    r05_splice_evar(p[22], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 7 */
    /* e.Errors: 9 */
    struct r05_node *p[23] = { 0 };
    /* (',') e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], ','))
      continue;
    if (! r05_brackets_right(p+5, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[4], p[3]))
      continue;
    r05_close_evar(p+7, p[3], p[5]);
    r05_close_evar(p+9, p[5], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+12);
    r05_alloc_char(',');
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Result);
    r05_alloc_open_bracket(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[11]);
    r05_push_stack(p[21]);
    r05_push_stack(p[14]);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+9);
    r05_correct_evar(p+7);
    r05_link_brackets(p[15], p[16]);
    r05_link_brackets(p[12], p[13]);
    r05_splice_evar(p[17], p+7);
    r05_splice_evar(p[19], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 10 */
    /* e.Errors: 12 */
    /* t.Result: 14 */
    /* t.ColonPos: 16 */
    struct r05_node *p[27] = { 0 };
    /* (',' t.Result) (TkColon t.ColonPos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], ','))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkColon))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[1]))
      continue;
    r05_close_evar(p+10, p[6], p[8]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[4], p[3]))
      continue;
    if (! r05_empty_hole(p[15], p[3]))
      continue;
    if (! r05_tvar_left(p+16, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[17], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+19);
    r05_alloc_char(',');
    r05_alloc_insert_pos(p+20);
    r05_alloc_char(':');
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+10);
    r05_link_brackets(p[19], p[21]);
    r05_splice_tvar(p[20], p+14);
    r05_splice_evar(p[22], p+10);
    r05_splice_evar(p[24], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    /* t.Result: 15 */
    /* t.BlockPos: 17 */
    struct r05_node *p[35] = { 0 };
    /* (',' t.Result ':') (TkOpenBlock t.BlockPos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], ','))
      continue;
    if (! r05_char_right(p+5, p[4], p[3], ':'))
      continue;
    if (! r05_brackets_left(p+6, p[3], p[1]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_TkOpenBlock))
      continue;
    if (! r05_brackets_right(p+9, p[7], p[1]))
      continue;
    r05_close_evar(p+11, p[7], p[9]);
    r05_close_evar(p+13, p[9], p[10]);
    if (! r05_tvar_left(p+15, p[4], p[5]))
      continue;
    if (! r05_empty_hole(p[16], p[5]))
      continue;
    if (! r05_tvar_left(p+17, p[8], p[7]))
      continue;
    if (! r05_empty_hole(p[18], p[7]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_CALLm_BLOCK);
    r05_alloc_insert_pos(p+21);
    r05_alloc_chars(":{", 2);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Block);
    r05_alloc_open_bracket(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_function(&r05f_TkOpenBlock);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_close_call(p+33);
    r05_alloc_close_call(p+34);
    r05_push_stack(p[34]);
    r05_push_stack(p[19]);
    r05_push_stack(p[33]);
    r05_push_stack(p[23]);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[26], p[28]);
    r05_link_brackets(p[24], p[25]);
    r05_link_brackets(p[20], p[22]);
    r05_splice_tvar(p[21], p+15);
    r05_splice_tvar(p[27], p+17);
    r05_splice_evar(p[29], p+11);
    r05_splice_evar(p[31], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 10 */
    /* e.Errors: 12 */
    /* t.Result: 14 */
    /* t.Pos: 16 */
    struct r05_node *p[36] = { 0 };
    /* (',' t.Result) (TkOpenBlock t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], ','))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkOpenBlock))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[1]))
      continue;
    r05_close_evar(p+10, p[6], p[8]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[4], p[3]))
      continue;
    if (! r05_empty_hole(p[15], p[3]))
      continue;
    if (! r05_tvar_left(p+16, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[17], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_CALLm_BLOCK);
    r05_alloc_insert_pos(p+20);
    r05_alloc_chars(":{", 2);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_Block);
    r05_alloc_open_bracket(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_function(&r05f_TkOpenBlock);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_function(&r05f_Error);
    r05_alloc_tvar(p+16);
    r05_alloc_chars("Missed \':\' before block", 23);
    r05_alloc_close_bracket(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_close_call(p+34);
    r05_alloc_close_call(p+35);
    r05_push_stack(p[35]);
    r05_push_stack(p[18]);
    r05_push_stack(p[34]);
    r05_push_stack(p[22]);
    r05_link_brackets(p[29], p[33]);
    r05_link_brackets(p[31], p[32]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+10);
    r05_link_brackets(p[25], p[27]);
    r05_link_brackets(p[23], p[24]);
    r05_link_brackets(p[19], p[21]);
    r05_splice_tvar(p[20], p+14);
    r05_splice_tvar(p[26], p+16);
    r05_splice_evar(p[28], p+10);
    r05_splice_evar(p[30], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 10 */
    /* e.Errors: 12 */
    /* t.Result: 14 */
    /* t.Pos: 16 */
    struct r05_node *p[30] = { 0 };
    /* (',' t.Result) (TkSemicolon t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], ','))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSemicolon))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[1]))
      continue;
    r05_close_evar(p+10, p[6], p[8]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[4], p[3]))
      continue;
    if (! r05_empty_hole(p[15], p[3]))
      continue;
    if (! r05_tvar_left(p+16, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[17], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+18);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_function(&r05f_RETURN);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_function(&r05f_TkSemicolon);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_function(&r05f_Error);
    r05_alloc_tvar(p+16);
    r05_alloc_chars("Mistaken \',\' for \'=\'", 20);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_bracket(p+29);
    r05_link_brackets(p[25], p[29]);
    r05_link_brackets(p[27], p[28]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+10);
    r05_link_brackets(p[21], p[23]);
    r05_link_brackets(p[18], p[20]);
    r05_splice_tvar(p[19], p+14);
    r05_splice_tvar(p[22], p+16);
    r05_splice_evar(p[24], p+10);
    r05_splice_evar(p[26], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 9 */
    /* e.Errors: 11 */
    /* s.Type: 13 */
    /* t.Result: 14 */
    /* t.Pos: 16 */
    struct r05_node *p[28] = { 0 };
    /* (',' t.Result) (s.Type t.Pos) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], ','))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_brackets_right(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[6], p[7]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_svar_left(p+13, p[5], p[6]))
      continue;
    if (! r05_tvar_left(p+14, p[4], p[3]))
      continue;
    if (! r05_empty_hole(p[15], p[3]))
      continue;
    if (! r05_tvar_left(p+16, p[13], p[6]))
      continue;
    if (! r05_empty_hole(p[17], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_SentenceTailu_check);
    r05_alloc_insert_pos(p+19);
    r05_alloc_svar(p+13);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_function(&r05f_TkComma);
    r05_alloc_function(&r05f_TkAssign);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[19], p+14);
    r05_splice_tvar(p[20], p+16);
    r05_splice_evar(p[22], p+9);
    r05_splice_evar(p[25], p+11);
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
    r05_alloc_function(&r05f_SentenceTailu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(SentenceTailu_check, "SentenceTail_check") {
  r05_this_is_generated_function();

  do {
    /* t.Result: 2 */
    /* s.Type: 4, 17 */
    /* t.Pos: 5 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    /* e.1: 15 */
    /* e.2: 18 */
    struct r05_node *p[38] = { 0 };
    /* t.Result s.Type t.Pos (e.Tokens) (e.Errors) e.1 s.Type e.2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[9], p[10]);
    p[15] = p[10]->next;
    p[16] = p[10];
    r05_start_e_loop();
    do {
      if (! r05_repeated_svar_left(p+17, p[16], p[1], p+4))
        continue;
      r05_close_evar(p+18, p[17], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+21);
      r05_alloc_char(',');
      r05_alloc_insert_pos(p+22);
      r05_alloc_char(':');
      r05_alloc_close_bracket(p+23);
      r05_alloc_open_call(p+24);
      r05_alloc_function(&r05f_Pattern);
      r05_alloc_open_bracket(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_open_bracket(p+27);
      r05_alloc_svar(p+4);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_bracket(p+29);
      r05_alloc_insert_pos(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_open_bracket(p+33);
      r05_alloc_function(&r05f_Error);
      r05_alloc_tvar(p+5);
      r05_alloc_chars("Missed \':\'", 10);
      r05_alloc_close_bracket(p+34);
      r05_alloc_close_bracket(p+35);
      r05_alloc_close_call(p+36);
      r05_alloc_close_call(p+37);
      r05_push_stack(p[37]);
      r05_push_stack(p[20]);
      r05_push_stack(p[36]);
      r05_push_stack(p[24]);
      r05_link_brackets(p[31], p[35]);
      r05_link_brackets(p[33], p[34]);
      r05_correct_evar(p+13);
      r05_correct_evar(p+11);
      r05_link_brackets(p[27], p[29]);
      r05_link_brackets(p[25], p[26]);
      r05_link_brackets(p[21], p[23]);
      r05_splice_tvar(p[22], p+2);
      r05_splice_tvar(p[28], p+5);
      r05_splice_evar(p[30], p+11);
      r05_splice_evar(p[32], p+13);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+15, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* t.Result: 2 */
    /* s.Type: 4 */
    /* t.Pos: 5 */
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    /* e.Other: 15 */
    struct r05_node *p[29] = { 0 };
    /* t.Result s.Type t.Pos (e.Tokens) (e.Errors) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[1]))
      continue;
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[9], p[10]);
    r05_close_evar(p+15, p[10], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_SentenceTailu_cont);
    r05_alloc_open_bracket(p+18);
    r05_alloc_char(',');
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_svar(p+4);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[21], p[23]);
    r05_link_brackets(p[18], p[20]);
    r05_splice_tvar(p[19], p+2);
    r05_splice_tvar(p[22], p+5);
    r05_splice_evar(p[24], p+11);
    r05_splice_evar(p[26], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SentenceTailu_cont, "SentenceTail_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Errors: 7 */
    /* t.Result: 9 */
    /* t.Unexpected: 11 */
    /* e.Tokens: 13 */
    struct r05_node *p[24] = { 0 };
    /* (',' t.Result) t.Unexpected e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], ','))
      continue;
    if (! r05_brackets_right(p+5, p[3], p[1]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    if (! r05_tvar_left(p+9, p[4], p[3]))
      continue;
    if (! r05_empty_hole(p[10], p[3]))
      continue;
    if (! r05_tvar_left(p+11, p[3], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_function(&r05f_RETURN);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_UnexpectedTokenInSentence);
    r05_alloc_tvar(p+11);
    r05_alloc_close_call(p+22);
    r05_alloc_close_bracket(p+23);
    r05_link_brackets(p[19], p[23]);
    r05_push_stack(p[22]);
    r05_push_stack(p[21]);
    r05_correct_evar(p+7);
    r05_correct_evar(p+13);
    r05_link_brackets(p[15], p[17]);
    r05_splice_tvar(p[16], p+9);
    r05_splice_tvar(p[18], p+11);
    r05_splice_evar(p[18], p+13);
    r05_splice_evar(p[20], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Sentences: 12 */
    /* e.Tokens: 14 */
    /* e.Errors: 16 */
    /* t.Result: 18 */
    struct r05_node *p[27] = { 0 };
    /* (CALL-BLOCK t.Result ':{') (Block e.Sentences) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_CALLm_BLOCK))
      continue;
    if (! r05_char_right(p+5, p[4], p[3], '{'))
      continue;
    if (! r05_char_right(p+6, p[4], p[5], ':'))
      continue;
    if (! r05_brackets_left(p+7, p[3], p[1]))
      continue;
    if (! r05_function_left(p+9, p[7], p[8], &r05f_Block))
      continue;
    if (! r05_brackets_right(p+10, p[8], p[1]))
      continue;
    r05_close_evar(p+12, p[9], p[8]);
    r05_close_evar(p+14, p[8], p[10]);
    r05_close_evar(p+16, p[10], p[11]);
    if (! r05_tvar_left(p+18, p[4], p[6]))
      continue;
    if (! r05_empty_hole(p[19], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_function(&r05f_CALLm_BLOCK);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+16);
    r05_correct_evar(p+14);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+12);
    r05_splice_tvar(p[21], p+18);
    r05_splice_evar(p[21], p+12);
    r05_splice_evar(p[23], p+14);
    r05_splice_evar(p[25], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 11 */
    /* e.Errors: 13 */
    /* t.Result: 15 */
    /* t.Pattern: 17 */
    struct r05_node *p[33] = { 0 };
    /* (',' t.Result ':') (Pattern t.Pattern) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], ','))
      continue;
    if (! r05_char_right(p+5, p[4], p[3], ':'))
      continue;
    if (! r05_brackets_left(p+6, p[3], p[1]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_Pattern))
      continue;
    if (! r05_brackets_right(p+9, p[7], p[1]))
      continue;
    r05_close_evar(p+11, p[7], p[9]);
    r05_close_evar(p+13, p[9], p[10]);
    if (! r05_tvar_left(p+15, p[4], p[5]))
      continue;
    if (! r05_empty_hole(p[16], p[5]))
      continue;
    if (! r05_tvar_left(p+17, p[8], p[7]))
      continue;
    if (! r05_empty_hole(p[18], p[7]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+20);
    r05_alloc_char(',');
    r05_alloc_insert_pos(p+21);
    r05_alloc_char(':');
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_close_call(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[19]);
    r05_push_stack(p[31]);
    r05_push_stack(p[24]);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_link_brackets(p[25], p[26]);
    r05_link_brackets(p[20], p[23]);
    r05_splice_tvar(p[21], p+15);
    r05_splice_tvar(p[22], p+17);
    r05_splice_evar(p[27], p+11);
    r05_splice_evar(p[29], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* t.Result: 12 */
    struct r05_node *p[27] = { 0 };
    /* (',' t.Result ':') e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], ','))
      continue;
    if (! r05_char_right(p+5, p[4], p[3], ':'))
      continue;
    if (! r05_brackets_right(p+6, p[3], p[1]))
      continue;
    r05_close_evar(p+8, p[3], p[6]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_tvar_left(p+12, p[4], p[5]))
      continue;
    if (! r05_empty_hole(p[13], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+15);
    r05_alloc_char(',');
    r05_alloc_insert_pos(p+16);
    r05_alloc_char(':');
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Pattern);
    r05_alloc_open_bracket(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_call(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[14]);
    r05_push_stack(p[25]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+10);
    r05_correct_evar(p+8);
    r05_link_brackets(p[19], p[20]);
    r05_link_brackets(p[15], p[17]);
    r05_splice_tvar(p[16], p+12);
    r05_splice_evar(p[21], p+8);
    r05_splice_evar(p[23], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.SentenceTail: 10 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* t.Result: 16 */
    /* t.Pattern: 19 */
    struct r05_node *p[31] = { 0 };
    /* (',' t.Result ':' t.Pattern) (SentenceTail e.SentenceTail) e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], ','))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_SentenceTail))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[1]))
      continue;
    r05_close_evar(p+10, p[7], p[6]);
    r05_close_evar(p+12, p[6], p[8]);
    r05_close_evar(p+14, p[8], p[9]);
    if (! r05_tvar_left(p+16, p[4], p[3]))
      continue;
    if (! r05_char_left(p+18, p[17], p[3], ':'))
      continue;
    if (! r05_tvar_left(p+19, p[18], p[3]))
      continue;
    if (! r05_empty_hole(p[20], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+21);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+22);
    r05_alloc_function(&r05f_Condition);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+12);
    r05_link_brackets(p[21], p[26]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[22], p[24]);
    r05_splice_tvar(p[23], p+16);
    r05_splice_tvar(p[23], p+19);
    r05_splice_evar(p[25], p+10);
    r05_splice_evar(p[27], p+12);
    r05_splice_evar(p[29], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Pattern, "Pattern") {
  r05_this_is_generated_function();

  do {
    /* e.Tokens: 6 */
    /* e.Errors: 8 */
    struct r05_node *p[18] = { 0 };
    /* () e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[3], p[4]);
    r05_close_evar(p+8, p[4], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_DirtyExpression);
    r05_alloc_open_bracket(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_function(&r05f_Pattern);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[10]);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+6);
    r05_link_brackets(p[11], p[12]);
    r05_splice_evar(p[13], p+6);
    r05_splice_evar(p[15], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Result, "Result") {
  r05_this_is_generated_function();

  do {
    /* e.Tokens: 6 */
    /* e.Errors: 8 */
    struct r05_node *p[18] = { 0 };
    /* () e.Tokens (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[3], p[4]);
    r05_close_evar(p+8, p[4], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_DirtyExpression);
    r05_alloc_open_bracket(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_function(&r05f_Result);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[10]);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+6);
    r05_link_brackets(p[11], p[12]);
    r05_splice_evar(p[13], p+6);
    r05_splice_evar(p[15], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DirtyExpression, "DirtyExpression") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    /* e.Text: 15 */
    /* s.Kind: 17 */
    /* e.Tokens: 18 */
    struct r05_node *p[29] = { 0 };
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    r05_close_evar(p+15, p[14], p[5]);
    if (! r05_svar_right(p+17, p[5], p[7]))
      continue;
    r05_close_evar(p+18, p[5], p[17]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_DirtyExpression);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_svar(p+17);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+18);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[22], p+9);
    r05_splice_evar(p[24], p+18);
    r05_splice_evar(p[26], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Expression: 9 */
    /* e.Errors: 11 */
    /* s.Kind: 13 */
    /* e.Tokens: 14 */
    struct r05_node *p[31] = { 0 };
    /* () (Expression e.Expression) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Expression))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[6], p[5]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_svar_right(p+13, p[5], p[7]))
      continue;
    r05_close_evar(p+14, p[5], p[13]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_DirtyExpression);
    r05_alloc_open_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_Unbalanced);
    r05_alloc_open_bracket(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_svar(p+13);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_call(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[16]);
    r05_push_stack(p[29]);
    r05_push_stack(p[22]);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+14);
    r05_link_brackets(p[23], p[24]);
    r05_link_brackets(p[17], p[21]);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[19], p+9);
    r05_splice_evar(p[25], p+14);
    r05_splice_evar(p[27], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 6 */
    /* s.Kind: 8 */
    /* e.Tokens: 9 */
    struct r05_node *p[23] = { 0 };
    /* () e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_svar_right(p+8, p[3], p[4]))
      continue;
    r05_close_evar(p+9, p[3], p[8]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DirtyExpression);
    r05_alloc_open_bracket(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_open_bracket(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_svar(p+8);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[11]);
    r05_push_stack(p[21]);
    r05_push_stack(p[14]);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+9);
    r05_link_brackets(p[15], p[16]);
    r05_link_brackets(p[12], p[13]);
    r05_splice_evar(p[17], p+9);
    r05_splice_evar(p[19], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Expression: 11 */
    /* e.Unbalanced: 13 */
    /* e.Errors: 15 */
    /* s.Kind: 17 */
    /* e.Tokens: 18 */
    struct r05_node *p[29] = { 0 };
    /* ((e.Expression)) (Unbalanced e.Unbalanced) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[2], p[3]))
      continue;
    if (! r05_brackets_left(p+6, p[3], p[1]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_Unbalanced))
      continue;
    if (! r05_brackets_right(p+9, p[7], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;
    r05_close_evar(p+11, p[4], p[5]);
    r05_close_evar(p+13, p[8], p[7]);
    r05_close_evar(p+15, p[9], p[10]);
    if (! r05_svar_right(p+17, p[7], p[9]))
      continue;
    r05_close_evar(p+18, p[7], p[17]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+20);
    r05_alloc_svar(p+17);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+15);
    r05_correct_evar(p+18);
    r05_link_brackets(p[20], p[24]);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_splice_evar(p[22], p+11);
    r05_splice_evar(p[22], p+13);
    r05_splice_evar(p[25], p+18);
    r05_splice_evar(p[27], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Expression, "Expression") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    /* e.Text: 15 */
    /* s.Kind: 17 */
    /* e.Tokens: 18 */
    struct r05_node *p[29] = { 0 };
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    r05_close_evar(p+15, p[14], p[5]);
    if (! r05_svar_right(p+17, p[5], p[7]))
      continue;
    r05_close_evar(p+18, p[5], p[17]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_svar(p+17);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+18);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[22], p+9);
    r05_splice_evar(p[24], p+18);
    r05_splice_evar(p[26], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 6 */
    /* e.Errors: 8 */
    /* t.TermStart: 10 */
    /* s.Kind: 12 */
    /* e.Tokens: 13 */
    struct r05_node *p[27] = { 0 };
    /* (e.Scanned) t.TermStart e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    if (! r05_tvar_left(p+10, p[3], p[4]))
      continue;
    if (! r05_svar_right(p+12, p[11], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Expressionu_check);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_tvar(p+10);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[17], p+6);
    r05_splice_tvar(p[19], p+10);
    r05_splice_evar(p[21], p+13);
    r05_splice_evar(p[24], p+8);
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
    /* e.Scanned: 8 */
    /* e.Errors: 10 */
    /* s.Type: 12 */
    /* t.TermStart: 13 */
    /* e.Tokens: 17 */
    /* s.Kind: 19 */
    /* t.Pos: 20 */
    /* e.Value: 22 */
    struct r05_node *p[42] = { 0 };
    /* (e.Scanned) t.TermStart (e.Tokens) s.Kind (e.Errors) (s.Type t.Pos e.Value) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_right(p+6, p[3], p[4]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_svar_left(p+12, p[4], p[5]))
      continue;
    if (! r05_tvar_left(p+13, p[3], p[6]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[6]))
      continue;
    r05_close_evar(p+17, p[15], p[16]);
    if (! r05_svar_left(p+19, p[16], p[6]))
      continue;
    if (! r05_empty_hole(p[19], p[6]))
      continue;
    if (! r05_tvar_left(p+20, p[12], p[5]))
      continue;
    r05_close_evar(p+22, p[21], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_Expressionu_check0);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_svar(p+19);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_svar(p+12);
    r05_alloc_insert_pos(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_open_call(p+39);
    r05_alloc_function(&r05f_FIRSTu_Term);
    r05_alloc_close_call(p+40);
    r05_alloc_close_call(p+41);
    r05_push_stack(p[41]);
    r05_push_stack(p[24]);
    r05_push_stack(p[40]);
    r05_push_stack(p[39]);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+22);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[26], p+8);
    r05_splice_tvar(p[28], p+13);
    r05_splice_evar(p[30], p+17);
    r05_splice_evar(p[33], p+10);
    r05_splice_tvar(p[35], p+20);
    r05_splice_evar(p[37], p+22);
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
    r05_alloc_function(&r05f_Expressionu_cont0);
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

R05_DEFINE_LOCAL_FUNCTION(Expressionu_cont, "Expression_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 9 */
    /* e.Errors: 11 */
    /* t.Term: 13 */
    /* s.Kind: 15 */
    /* e.Tokens: 16 */
    struct r05_node *p[27] = { 0 };
    /* (e.Scanned) (Term t.Term) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Term))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[14], p[5]))
      continue;
    if (! r05_svar_right(p+15, p[5], p[7]))
      continue;
    r05_close_evar(p+16, p[5], p[15]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_svar(p+15);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+16);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[20], p+9);
    r05_splice_tvar(p[20], p+13);
    r05_splice_evar(p[22], p+16);
    r05_splice_evar(p[24], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Scanned: 6 */
    /* e.Errors: 8 */
    /* s.Kind: 10 */
    /* e.Tokens: 11 */
    struct r05_node *p[20] = { 0 };
    /* (e.Scanned) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    if (! r05_svar_right(p+10, p[3], p[4]))
      continue;
    r05_close_evar(p+11, p[3], p[10]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_svar(p+10);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+8);
    r05_correct_evar(p+11);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[14], p+6);
    r05_splice_evar(p[16], p+11);
    r05_splice_evar(p[18], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Expressionu_check0, "Expression_check0") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 4 */
    /* t.TermStart: 6 */
    /* e.Tokens: 10 */
    /* s.Kind: 12 */
    /* e.Errors: 15 */
    /* s.Type: 17, 26 */
    /* t.Pos: 18 */
    /* e.Value: 22 */
    /* e.1: 24 */
    /* e.2: 27 */
    struct r05_node *p[42] = { 0 };
    /* (e.Scanned) t.TermStart (e.Tokens) s.Kind (e.Errors) s.Type t.Pos (e.Value) e.1 s.Type e.2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[8], p[9]);
    if (! r05_svar_left(p+12, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[13], p[14]);
    if (! r05_svar_left(p+17, p[14], p[1]))
      continue;
    if (! r05_tvar_left(p+18, p[17], p[1]))
      continue;
    if (! r05_brackets_left(p+20, p[19], p[1]))
      continue;
    r05_close_evar(p+22, p[20], p[21]);
    p[24] = p[21]->next;
    p[25] = p[21];
    r05_start_e_loop();
    do {
      if (! r05_repeated_svar_left(p+26, p[25], p[1], p+17))
        continue;
      r05_close_evar(p+27, p[26], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+29);
      r05_alloc_function(&r05f_Expression);
      r05_alloc_open_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_bracket(p+32);
      r05_alloc_open_call(p+33);
      r05_alloc_function(&r05f_Term);
      r05_alloc_open_bracket(p+34);
      r05_alloc_close_bracket(p+35);
      r05_alloc_insert_pos(p+36);
      r05_alloc_svar(p+12);
      r05_alloc_open_bracket(p+37);
      r05_alloc_insert_pos(p+38);
      r05_alloc_close_bracket(p+39);
      r05_alloc_close_call(p+40);
      r05_alloc_close_call(p+41);
      r05_push_stack(p[41]);
      r05_push_stack(p[29]);
      r05_push_stack(p[40]);
      r05_push_stack(p[33]);
      r05_link_brackets(p[37], p[39]);
      r05_correct_evar(p+15);
      r05_correct_evar(p+10);
      r05_link_brackets(p[34], p[35]);
      r05_link_brackets(p[30], p[32]);
      r05_correct_evar(p+4);
      r05_splice_evar(p[31], p+4);
      r05_splice_tvar(p[36], p+6);
      r05_splice_evar(p[36], p+10);
      r05_splice_evar(p[38], p+15);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+24, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Scanned: 4 */
    /* t.TermStart: 6 */
    /* e.Tokens: 10 */
    /* s.Kind: 12 */
    /* e.Errors: 15 */
    /* s.Type: 17 */
    /* t.Pos: 18 */
    /* e.Value: 22 */
    /* e.Other: 24 */
    struct r05_node *p[41] = { 0 };
    /* (e.Scanned) t.TermStart (e.Tokens) s.Kind (e.Errors) s.Type t.Pos (e.Value) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[8], p[9]);
    if (! r05_svar_left(p+12, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[13], p[14]);
    if (! r05_svar_left(p+17, p[14], p[1]))
      continue;
    if (! r05_tvar_left(p+18, p[17], p[1]))
      continue;
    if (! r05_brackets_left(p+20, p[19], p[1]))
      continue;
    r05_close_evar(p+22, p[20], p[21]);
    r05_close_evar(p+24, p[21], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_Expressionu_cont0);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_svar(p+17);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_close_call(p+40);
    r05_push_stack(p[40]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[37], p[39]);
    r05_correct_evar(p+22);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[28], p+4);
    r05_splice_tvar(p[30], p+6);
    r05_splice_evar(p[32], p+10);
    r05_splice_evar(p[35], p+15);
    r05_splice_tvar(p[38], p+18);
    r05_splice_evar(p[38], p+22);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Expressionu_cont0, "Expression_cont0") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 4 */
    /* t.TermStart: 6 */
    /* e.Tokens: 10 */
    /* s.Kind: 12 */
    /* e.Errors: 15 */
    /* e.Other: 17 */
    struct r05_node *p[28] = { 0 };
    /* (e.Scanned) t.TermStart (e.Tokens) s.Kind (e.Errors) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[8], p[9]);
    if (! r05_svar_left(p+12, p[9], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    r05_close_evar(p+15, p[13], p[14]);
    r05_close_evar(p+17, p[14], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Expressionu_cont);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+15);
    r05_correct_evar(p+10);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[21], p+4);
    r05_splice_tvar(p[23], p+6);
    r05_splice_evar(p[23], p+10);
    r05_splice_evar(p[25], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FIRSTu_Term, "FIRST_Term") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_TkName);
    r05_alloc_function(&r05f_TkCompound);
    r05_alloc_function(&r05f_TkMacroDigit);
    r05_alloc_function(&r05f_TkChar);
    r05_alloc_function(&r05f_TkVariable);
    r05_alloc_function(&r05f_TkOpenBracket);
    r05_alloc_function(&r05f_TkOpenCall);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Term, "Term") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    /* e.Text: 15 */
    /* s.Kind: 17 */
    /* e.Tokens: 18 */
    struct r05_node *p[29] = { 0 };
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    r05_close_evar(p+15, p[14], p[5]);
    if (! r05_svar_right(p+17, p[5], p[7]))
      continue;
    r05_close_evar(p+18, p[5], p[17]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Term);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_svar(p+17);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+18);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[22], p+9);
    r05_splice_evar(p[24], p+18);
    r05_splice_evar(p[26], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 8 */
    /* s.Literal: 10 */
    /* t.Pos: 11 */
    /* e.Value: 13 */
    /* s.Kind: 15 */
    /* e.Tokens: 16 */
    struct r05_node *p[38] = { 0 };
    /* () (s.Literal t.Pos e.Value) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_right(p+6, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_svar_left(p+10, p[4], p[5]))
      continue;
    if (! r05_tvar_left(p+11, p[10], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);
    if (! r05_svar_right(p+15, p[5], p[6]))
      continue;
    r05_close_evar(p+16, p[5], p[15]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Termu_check);
    r05_alloc_svar(p+10);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_svar(p+15);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_function(&r05f_TkName);
    r05_alloc_function(&r05f_Word);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_function(&r05f_TkCompound);
    r05_alloc_function(&r05f_Word);
    r05_alloc_close_bracket(p+32);
    r05_alloc_open_bracket(p+33);
    r05_alloc_function(&r05f_TkMacroDigit);
    r05_alloc_function(&r05f_Number);
    r05_alloc_close_bracket(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_function(&r05f_TkChar);
    r05_alloc_function(&r05f_Char);
    r05_alloc_close_bracket(p+36);
    r05_alloc_close_call(p+37);
    r05_push_stack(p[37]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[35], p[36]);
    r05_link_brackets(p[33], p[34]);
    r05_link_brackets(p[31], p[32]);
    r05_link_brackets(p[29], p[30]);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+13);
    r05_splice_tvar(p[19], p+11);
    r05_splice_evar(p[21], p+13);
    r05_splice_evar(p[24], p+16);
    r05_splice_evar(p[27], p+8);
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
    r05_alloc_function(&r05f_Termu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(Termu_check, "Term_check") {
  r05_this_is_generated_function();

  do {
    /* s.Literal: 2, 22 */
    /* t.Pos: 3 */
    /* e.Value: 9 */
    /* e.Tokens: 11 */
    /* s.Kind: 13 */
    /* e.Errors: 16 */
    /* e.1: 18 */
    /* e.2: 23 */
    /* s.SymbolType: 25 */
    struct r05_node *p[35] = { 0 };
    /* s.Literal t.Pos (e.Value) (e.Tokens) s.Kind (e.Errors) e.1 (s.Literal s.SymbolType) e.2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_svar_left(p+13, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    r05_close_evar(p+16, p[14], p[15]);
    p[18] = p[15]->next;
    p[19] = p[15];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+20, p[19], p[1]))
        continue;
      if (! r05_repeated_svar_left(p+22, p[20], p[21], p+2))
        continue;
      r05_close_evar(p+23, p[21], p[1]);
      if (! r05_svar_left(p+25, p[22], p[21]))
        continue;
      if (! r05_empty_hole(p[25], p[21]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+26);
      r05_alloc_function(&r05f_Term);
      r05_alloc_open_bracket(p+27);
      r05_alloc_function(&r05f_Symbol);
      r05_alloc_svar(p+25);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_bracket(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_svar(p+13);
      r05_alloc_open_bracket(p+32);
      r05_alloc_insert_pos(p+33);
      r05_alloc_close_bracket(p+34);
      r05_link_brackets(p[32], p[34]);
      r05_correct_evar(p+16);
      r05_correct_evar(p+11);
      r05_link_brackets(p[26], p[30]);
      r05_link_brackets(p[27], p[29]);
      r05_correct_evar(p+9);
      r05_splice_evar(p[28], p+9);
      r05_splice_evar(p[31], p+11);
      r05_splice_evar(p[33], p+16);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+18, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* s.Literal: 2 */
    /* t.Pos: 3 */
    /* e.Value: 9 */
    /* e.Tokens: 11 */
    /* s.Kind: 13 */
    /* e.Errors: 16 */
    /* e.Other: 18 */
    struct r05_node *p[31] = { 0 };
    /* s.Literal t.Pos (e.Value) (e.Tokens) s.Kind (e.Errors) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_svar_left(p+13, p[8], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    r05_close_evar(p+16, p[14], p[15]);
    r05_close_evar(p+18, p[15], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Termu_cont);
    r05_alloc_open_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_svar(p+2);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_svar(p+13);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+16);
    r05_correct_evar(p+11);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[21], p[22]);
    r05_splice_tvar(p[24], p+3);
    r05_splice_evar(p[24], p+9);
    r05_splice_evar(p[26], p+11);
    r05_splice_evar(p[28], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Termu_cont, "Term_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Errors: 9 */
    /* t.Pso: 11 */
    /* s.VarType: 13 */
    /* e.Index: 14 */
    /* s.Kind: 16 */
    /* e.Tokens: 17 */
    struct r05_node *p[29] = { 0 };
    /* () (TkVariable t.Pso s.VarType e.Index) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkVariable))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    if (! r05_tvar_left(p+11, p[6], p[5]))
      continue;
    if (! r05_svar_left(p+13, p[12], p[5]))
      continue;
    r05_close_evar(p+14, p[13], p[5]);
    if (! r05_svar_right(p+16, p[5], p[7]))
      continue;
    r05_close_evar(p+17, p[5], p[16]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_Term);
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+21);
    r05_alloc_svar(p+13);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_svar(p+16);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+9);
    r05_correct_evar(p+17);
    r05_link_brackets(p[19], p[24]);
    r05_link_brackets(p[20], p[23]);
    r05_correct_evar(p+14);
    r05_splice_tvar(p[21], p+11);
    r05_splice_evar(p[22], p+14);
    r05_splice_evar(p[25], p+17);
    r05_splice_evar(p[27], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 9 */
    /* t.Pos: 11 */
    /* s.Kind: 13 */
    /* e.Tokens: 14 */
    struct r05_node *p[29] = { 0 };
    /* () (TkOpenBracket t.Pos) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkOpenBracket))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    if (! r05_tvar_left(p+11, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[12], p[5]))
      continue;
    if (! r05_svar_right(p+13, p[5], p[7]))
      continue;
    r05_close_evar(p+14, p[5], p[13]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Term);
    r05_alloc_open_bracket(p+17);
    r05_alloc_char('(');
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_open_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_svar(p+13);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_call(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[16]);
    r05_push_stack(p[27]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+9);
    r05_correct_evar(p+14);
    r05_link_brackets(p[21], p[22]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_tvar(p[18], p+11);
    r05_splice_evar(p[23], p+14);
    r05_splice_evar(p[25], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Nested: 10 */
    /* e.Errors: 12 */
    /* t.OpenPos: 14 */
    /* s.Kind: 16 */
    /* e.Tokens: 17 */
    struct r05_node *p[31] = { 0 };
    /* ('(' t.OpenPos) (Expression e.Nested) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '('))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Expression))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[1]))
      continue;
    r05_close_evar(p+10, p[7], p[6]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[4], p[3]))
      continue;
    if (! r05_empty_hole(p[15], p[3]))
      continue;
    if (! r05_svar_right(p+16, p[6], p[8]))
      continue;
    r05_close_evar(p+17, p[6], p[16]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Term);
    r05_alloc_open_bracket(p+20);
    r05_alloc_char('(');
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_svar(p+16);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+17);
    r05_link_brackets(p[20], p[25]);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[21], p+14);
    r05_splice_evar(p[23], p+10);
    r05_splice_evar(p[26], p+17);
    r05_splice_evar(p[28], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Nested: 12 */
    /* e.Errors: 14 */
    /* t.OpenPos: 16 */
    /* t.ClosePos: 18 */
    /* s.Kind: 20 */
    /* e.Tokens: 21 */
    struct r05_node *p[32] = { 0 };
    /* ('(' t.OpenPos (e.Nested)) (TkCloseBracket t.ClosePos) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '('))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkCloseBracket))
      continue;
    if (! r05_brackets_right(p+8, p[4], p[3]))
      continue;
    if (! r05_brackets_right(p+10, p[6], p[1]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[10], p[11]);
    if (! r05_tvar_left(p+16, p[4], p[8]))
      continue;
    if (! r05_empty_hole(p[17], p[8]))
      continue;
    if (! r05_tvar_left(p+18, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[19], p[6]))
      continue;
    if (! r05_svar_right(p+20, p[6], p[10]))
      continue;
    r05_close_evar(p+21, p[6], p[20]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+23);
    r05_alloc_function(&r05f_Term);
    r05_alloc_open_bracket(p+24);
    r05_alloc_function(&r05f_Brackets);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_svar(p+20);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+21);
    r05_link_brackets(p[23], p[27]);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[25], p+12);
    r05_splice_evar(p[28], p+21);
    r05_splice_evar(p[30], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Nested: 11 */
    /* e.Errors: 13 */
    /* s.Type: 15 */
    /* t.OpenPos: 16 */
    /* t.Pos: 18 */
    /* e.Value: 20 */
    /* s.Kind: 22 */
    /* e.Tokens: 23 */
    struct r05_node *p[42] = { 0 };
    /* ('(' t.OpenPos (e.Nested)) (s.Type t.Pos e.Value) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '('))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_brackets_right(p+7, p[4], p[3]))
      continue;
    if (! r05_brackets_right(p+9, p[6], p[1]))
      continue;
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[9], p[10]);
    if (! r05_svar_left(p+15, p[5], p[6]))
      continue;
    if (! r05_tvar_left(p+16, p[4], p[7]))
      continue;
    if (! r05_empty_hole(p[17], p[7]))
      continue;
    if (! r05_tvar_left(p+18, p[15], p[6]))
      continue;
    r05_close_evar(p+20, p[19], p[6]);
    if (! r05_svar_right(p+22, p[6], p[9]))
      continue;
    r05_close_evar(p+23, p[6], p[22]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+25);
    r05_alloc_function(&r05f_Term);
    r05_alloc_open_bracket(p+26);
    r05_alloc_function(&r05f_Brackets);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_svar(p+15);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_svar(p+22);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+37);
    r05_alloc_chars("unbalanced \'(\'", 14);
    r05_alloc_close_bracket(p+38);
    r05_alloc_open_bracket(p+39);
    r05_alloc_function(&r05f_Error);
    r05_alloc_tvar(p+18);
    r05_alloc_chars("Missed \')\'", 10);
    r05_alloc_close_bracket(p+40);
    r05_alloc_close_bracket(p+41);
    r05_link_brackets(p[34], p[41]);
    r05_link_brackets(p[39], p[40]);
    r05_link_brackets(p[36], p[38]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+23);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+20);
    r05_link_brackets(p[25], p[29]);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+11);
    r05_splice_evar(p[27], p+11);
    r05_splice_tvar(p[31], p+18);
    r05_splice_evar(p[31], p+20);
    r05_splice_evar(p[33], p+23);
    r05_splice_evar(p[35], p+13);
    r05_splice_tvar(p[37], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 9 */
    /* t.Pos: 11 */
    /* e.FuncName: 13 */
    /* s.Kind: 15 */
    /* e.Tokens: 16 */
    struct r05_node *p[34] = { 0 };
    /* () (TkOpenCall t.Pos e.FuncName) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkOpenCall))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    if (! r05_tvar_left(p+11, p[6], p[5]))
      continue;
    r05_close_evar(p+13, p[12], p[5]);
    if (! r05_svar_right(p+15, p[5], p[7]))
      continue;
    r05_close_evar(p+16, p[5], p[15]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Term);
    r05_alloc_open_bracket(p+19);
    r05_alloc_char('<');
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_open_bracket(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_svar(p+15);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_close_call(p+32);
    r05_alloc_close_call(p+33);
    r05_push_stack(p[33]);
    r05_push_stack(p[18]);
    r05_push_stack(p[32]);
    r05_push_stack(p[25]);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+9);
    r05_correct_evar(p+16);
    r05_link_brackets(p[26], p[27]);
    r05_link_brackets(p[19], p[24]);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+13);
    r05_splice_tvar(p[20], p+11);
    r05_splice_evar(p[22], p+13);
    r05_splice_evar(p[28], p+16);
    r05_splice_evar(p[30], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FuncName: 12 */
    /* e.Nested: 14 */
    /* e.Errors: 16 */
    /* t.OpenPos: 18 */
    /* s.Kind: 20 */
    /* e.Tokens: 21 */
    struct r05_node *p[38] = { 0 };
    /* ('<' t.OpenPos (e.FuncName)) (Expression e.Nested) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '<'))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Expression))
      continue;
    if (! r05_brackets_right(p+8, p[4], p[3]))
      continue;
    if (! r05_brackets_right(p+10, p[6], p[1]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[7], p[6]);
    r05_close_evar(p+16, p[10], p[11]);
    if (! r05_tvar_left(p+18, p[4], p[8]))
      continue;
    if (! r05_empty_hole(p[19], p[8]))
      continue;
    if (! r05_svar_right(p+20, p[6], p[10]))
      continue;
    r05_close_evar(p+21, p[6], p[20]);

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Term);
    r05_alloc_open_bracket(p+24);
    r05_alloc_char('<');
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_svar(p+20);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_close_call(p+37);
    r05_push_stack(p[37]);
    r05_push_stack(p[23]);
    r05_link_brackets(p[34], p[36]);
    r05_correct_evar(p+16);
    r05_correct_evar(p+21);
    r05_link_brackets(p[24], p[32]);
    r05_link_brackets(p[29], p[31]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+12);
    r05_splice_tvar(p[25], p+18);
    r05_splice_evar(p[27], p+12);
    r05_splice_evar(p[30], p+14);
    r05_splice_evar(p[33], p+21);
    r05_splice_evar(p[35], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FuncName: 14 */
    /* e.Nested: 16 */
    /* e.Errors: 18 */
    /* t.OpenPos: 20 */
    /* t.ClosePos: 22 */
    /* s.Kind: 24 */
    /* e.Tokens: 25 */
    struct r05_node *p[42] = { 0 };
    /* ('<' t.OpenPos (e.FuncName) (e.Nested)) (TkCloseCall t.ClosePos) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '<'))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkCloseCall))
      continue;
    if (! r05_brackets_right(p+8, p[4], p[3]))
      continue;
    if (! r05_brackets_right(p+10, p[4], p[8]))
      continue;
    if (! r05_brackets_right(p+12, p[6], p[1]))
      continue;
    r05_close_evar(p+14, p[10], p[11]);
    r05_close_evar(p+16, p[8], p[9]);
    r05_close_evar(p+18, p[12], p[13]);
    if (! r05_tvar_left(p+20, p[4], p[10]))
      continue;
    if (! r05_empty_hole(p[21], p[10]))
      continue;
    if (! r05_tvar_left(p+22, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[23], p[6]))
      continue;
    if (! r05_svar_right(p+24, p[6], p[12]))
      continue;
    r05_close_evar(p+25, p[6], p[24]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+27);
    r05_alloc_function(&r05f_Term);
    r05_alloc_open_bracket(p+28);
    r05_alloc_function(&r05f_Call);
    r05_alloc_insert_pos(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_svar(p+24);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_open_call(p+39);
    r05_alloc_function(&r05f_CallBracketInPattern);
    r05_alloc_tvar(p+20);
    r05_alloc_svar(p+24);
    r05_alloc_char('<');
    r05_alloc_close_call(p+40);
    r05_alloc_close_bracket(p+41);
    r05_link_brackets(p[37], p[41]);
    r05_push_stack(p[40]);
    r05_push_stack(p[39]);
    r05_correct_evar(p+18);
    r05_correct_evar(p+25);
    r05_link_brackets(p[27], p[35]);
    r05_link_brackets(p[28], p[34]);
    r05_correct_evar(p+16);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+14);
    r05_splice_tvar(p[29], p+20);
    r05_splice_evar(p[31], p+14);
    r05_splice_evar(p[33], p+16);
    r05_splice_evar(p[36], p+25);
    r05_splice_evar(p[38], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FuncName: 13 */
    /* e.Nested: 15 */
    /* e.Errors: 17 */
    /* s.Type: 19 */
    /* t.OpenPos: 20 */
    /* t.Pos: 22 */
    /* e.Value: 24 */
    /* s.Kind: 26 */
    /* e.Tokens: 27 */
    struct r05_node *p[48] = { 0 };
    /* ('<' t.OpenPos (e.FuncName) (e.Nested)) (s.Type t.Pos e.Value) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_char_left(p+4, p[2], p[3], '<'))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[1]))
      continue;
    if (! r05_brackets_right(p+7, p[4], p[3]))
      continue;
    if (! r05_brackets_right(p+9, p[4], p[7]))
      continue;
    if (! r05_brackets_right(p+11, p[6], p[1]))
      continue;
    r05_close_evar(p+13, p[9], p[10]);
    r05_close_evar(p+15, p[7], p[8]);
    r05_close_evar(p+17, p[11], p[12]);
    if (! r05_svar_left(p+19, p[5], p[6]))
      continue;
    if (! r05_tvar_left(p+20, p[4], p[9]))
      continue;
    if (! r05_empty_hole(p[21], p[9]))
      continue;
    if (! r05_tvar_left(p+22, p[19], p[6]))
      continue;
    r05_close_evar(p+24, p[23], p[6]);
    if (! r05_svar_right(p+26, p[6], p[11]))
      continue;
    r05_close_evar(p+27, p[6], p[26]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+29);
    r05_alloc_function(&r05f_Term);
    r05_alloc_open_bracket(p+30);
    r05_alloc_function(&r05f_Call);
    r05_alloc_insert_pos(p+31);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_svar(p+26);
    r05_alloc_open_bracket(p+39);
    r05_alloc_open_bracket(p+40);
    r05_alloc_function(&r05f_Error);
    r05_alloc_tvar(p+20);
    r05_alloc_chars("unbalanced \'<\'", 14);
    r05_alloc_close_bracket(p+41);
    r05_alloc_open_bracket(p+42);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+43);
    r05_alloc_chars("Missed \'>\'", 10);
    r05_alloc_close_bracket(p+44);
    r05_alloc_open_call(p+45);
    r05_alloc_function(&r05f_CallBracketInPattern);
    r05_alloc_tvar(p+20);
    r05_alloc_svar(p+26);
    r05_alloc_char('>');
    r05_alloc_close_call(p+46);
    r05_alloc_close_bracket(p+47);
    r05_link_brackets(p[39], p[47]);
    r05_push_stack(p[46]);
    r05_push_stack(p[45]);
    r05_link_brackets(p[42], p[44]);
    r05_link_brackets(p[40], p[41]);
    r05_correct_evar(p+27);
    r05_link_brackets(p[29], p[37]);
    r05_link_brackets(p[30], p[36]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[32], p[34]);
    r05_correct_evar(p+13);
    r05_splice_tvar(p[31], p+20);
    r05_splice_evar(p[33], p+13);
    r05_splice_evar(p[35], p+15);
    r05_splice_evar(p[38], p+27);
    r05_splice_tvar(p[43], p+22);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CallBracketInPattern, "CallBracketInPattern") {
  r05_this_is_generated_function();

  do {
    /* t.CallPos: 2 */
    /* s.Bracket: 5 */
    struct r05_node *p[6] = { 0 };
    /* t.CallPos Result s.Bracket */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[3], p[1], &r05f_Result))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.CallPos: 2 */
    /* s.Bracket: 5 */
    struct r05_node *p[9] = { 0 };
    /* t.CallPos Pattern s.Bracket */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[3], p[1], &r05f_Pattern))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+7);
    r05_alloc_chars("unexpected \'", 12);
    r05_alloc_svar(p+5);
    r05_alloc_chars("\' in pattern expression, maybe missed \'=\'", 41);
    r05_alloc_close_bracket(p+8);
    r05_link_brackets(p[6], p[8]);
    r05_splice_tvar(p[7], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Unbalanced, "Unbalanced") {
  r05_this_is_generated_function();

  do {
    /* e.Scanned: 9 */
    /* e.Errors: 11 */
    /* t.Pos: 13 */
    /* e.Text: 15 */
    /* s.Kind: 17 */
    /* e.Tokens: 18 */
    struct r05_node *p[29] = { 0 };
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_tvar_left(p+13, p[6], p[5]))
      continue;
    r05_close_evar(p+15, p[14], p[5]);
    if (! r05_svar_right(p+17, p[5], p[7]))
      continue;
    r05_close_evar(p+18, p[5], p[17]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Unbalanced);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_svar(p+17);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+18);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[22], p+9);
    r05_splice_evar(p[24], p+18);
    r05_splice_evar(p[26], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Errors: 8 */
    /* s.Type: 10 */
    /* t.Pos: 11 */
    /* s.Kind: 13 */
    /* e.Tokens: 14 */
    struct r05_node *p[25] = { 0 };
    /* () (s.Type t.Pos) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_right(p+6, p[5], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_svar_left(p+10, p[4], p[5]))
      continue;
    if (! r05_tvar_left(p+11, p[10], p[5]))
      continue;
    if (! r05_empty_hole(p[12], p[5]))
      continue;
    if (! r05_svar_right(p+13, p[5], p[6]))
      continue;
    r05_close_evar(p+14, p[5], p[13]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Unbalancedu_check);
    r05_alloc_svar(p+10);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_svar(p+13);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_function(&r05f_TkCloseBracket);
    r05_alloc_function(&r05f_TkCloseCall);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+14);
    r05_splice_tvar(p[17], p+11);
    r05_splice_evar(p[19], p+14);
    r05_splice_evar(p[22], p+8);
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
    r05_alloc_function(&r05f_Unbalancedu_cont);
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

R05_DEFINE_LOCAL_FUNCTION(Unbalancedu_check, "Unbalanced_check") {
  r05_this_is_generated_function();

  do {
    /* s.Type: 2, 16 */
    /* t.Pos: 3 */
    /* e.Tokens: 7 */
    /* s.Kind: 9 */
    /* e.Errors: 12 */
    /* e.1: 14 */
    /* e.2: 17 */
    struct r05_node *p[36] = { 0 };
    /* s.Type t.Pos (e.Tokens) s.Kind (e.Errors) e.1 s.Type e.2 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    if (! r05_svar_left(p+9, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[10], p[11]);
    p[14] = p[11]->next;
    p[15] = p[11];
    r05_start_e_loop();
    do {
      if (! r05_repeated_svar_left(p+16, p[15], p[1], p+2))
        continue;
      r05_close_evar(p+17, p[16], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_Unbalanced);
      r05_alloc_open_bracket(p+20);
      r05_alloc_function(&r05f_TkCloseBracket);
      r05_alloc_close_bracket(p+21);
      r05_alloc_open_call(p+22);
      r05_alloc_function(&r05f_Expression);
      r05_alloc_open_bracket(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_svar(p+9);
      r05_alloc_open_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_open_bracket(p+28);
      r05_alloc_function(&r05f_Error);
      r05_alloc_insert_pos(p+29);
      r05_alloc_chars("unbalanced ", 11);
      r05_alloc_open_call(p+30);
      r05_alloc_function(&r05f_TokName);
      r05_alloc_svar(p+2);
      r05_alloc_close_call(p+31);
      r05_alloc_close_bracket(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_close_call(p+34);
      r05_alloc_close_call(p+35);
      r05_push_stack(p[35]);
      r05_push_stack(p[19]);
      r05_push_stack(p[34]);
      r05_push_stack(p[22]);
      r05_link_brackets(p[26], p[33]);
      r05_link_brackets(p[28], p[32]);
      r05_push_stack(p[31]);
      r05_push_stack(p[30]);
      r05_correct_evar(p+12);
      r05_correct_evar(p+7);
      r05_link_brackets(p[23], p[24]);
      r05_link_brackets(p[20], p[21]);
      r05_splice_evar(p[25], p+7);
      r05_splice_evar(p[27], p+12);
      r05_splice_tvar(p[29], p+3);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+14, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* s.Type: 2 */
    /* t.Pos: 3 */
    /* e.Tokens: 7 */
    /* s.Kind: 9 */
    /* e.Errors: 12 */
    /* e.Other: 14 */
    struct r05_node *p[27] = { 0 };
    /* s.Type t.Pos (e.Tokens) s.Kind (e.Errors) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    if (! r05_svar_left(p+9, p[6], p[1]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[1]))
      continue;
    r05_close_evar(p+12, p[10], p[11]);
    r05_close_evar(p+14, p[11], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Unbalancedu_cont);
    r05_alloc_open_bracket(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_svar(p+2);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_svar(p+9);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+12);
    r05_correct_evar(p+7);
    r05_link_brackets(p[19], p[21]);
    r05_link_brackets(p[17], p[18]);
    r05_splice_tvar(p[20], p+3);
    r05_splice_evar(p[22], p+7);
    r05_splice_evar(p[24], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Unbalancedu_cont, "Unbalanced_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Errors: 6 */
    /* s.Kind: 8 */
    /* e.Tokens: 9 */
    struct r05_node *p[17] = { 0 };
    /* () e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_right(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    if (! r05_svar_right(p+8, p[3], p[4]))
      continue;
    r05_close_evar(p+9, p[3], p[8]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_Unbalanced);
    r05_alloc_close_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_svar(p+8);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+9);
    r05_link_brackets(p[11], p[12]);
    r05_splice_evar(p[13], p+9);
    r05_splice_evar(p[15], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Expression: 9 */
    /* e.Errors: 11 */
    /* s.Type: 13 */
    /* s.Kind: 14 */
    /* e.Tokens: 15 */
    struct r05_node *p[32] = { 0 };
    /* (s.Type) (Expression e.Expression) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Expression))
      continue;
    if (! r05_brackets_right(p+7, p[5], p[1]))
      continue;
    r05_close_evar(p+9, p[6], p[5]);
    r05_close_evar(p+11, p[7], p[8]);
    if (! r05_svar_left(p+13, p[2], p[3]))
      continue;
    if (! r05_empty_hole(p[13], p[3]))
      continue;
    if (! r05_svar_right(p+14, p[5], p[7]))
      continue;
    r05_close_evar(p+15, p[5], p[14]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Unbalanced);
    r05_alloc_open_bracket(p+18);
    r05_alloc_svar(p+13);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Unbalanced);
    r05_alloc_open_bracket(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_svar(p+14);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_call(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[17]);
    r05_push_stack(p[30]);
    r05_push_stack(p[23]);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+11);
    r05_correct_evar(p+15);
    r05_link_brackets(p[24], p[25]);
    r05_link_brackets(p[18], p[22]);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[20], p+9);
    r05_splice_evar(p[26], p+15);
    r05_splice_evar(p[28], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Expression: 11 */
    /* e.Unbalanced: 13 */
    /* e.Errors: 15 */
    /* s.Type: 17 */
    /* s.Kind: 18 */
    /* e.Tokens: 19 */
    struct r05_node *p[28] = { 0 };
    /* (s.Type (e.Expression)) (Unbalanced e.Unbalanced) e.Tokens s.Kind (e.Errors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Unbalanced))
      continue;
    if (! r05_brackets_right(p+7, p[2], p[3]))
      continue;
    if (! r05_brackets_right(p+9, p[5], p[1]))
      continue;
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[6], p[5]);
    r05_close_evar(p+15, p[9], p[10]);
    if (! r05_svar_left(p+17, p[2], p[7]))
      continue;
    if (! r05_empty_hole(p[17], p[7]))
      continue;
    if (! r05_svar_right(p+18, p[5], p[9]))
      continue;
    r05_close_evar(p+19, p[5], p[18]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+21);
    r05_alloc_function(&r05f_Unbalanced);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_svar(p+18);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_link_brackets(p[25], p[27]);
    r05_correct_evar(p+15);
    r05_correct_evar(p+19);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+13);
    r05_correct_evar(p+11);
    r05_splice_evar(p[22], p+11);
    r05_splice_evar(p[22], p+13);
    r05_splice_evar(p[24], p+19);
    r05_splice_evar(p[26], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(UnexpectedToken, "UnexpectedToken") {
  r05_this_is_generated_function();

  do {
    /* e.Expected: 4 */
    /* s.Type: 6 */
    /* t.Pos: 7 */
    /* e.Value: 9 */
    struct r05_node *p[17] = { 0 };
    /* (s.Type t.Pos e.Value) e.Expected */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);
    if (! r05_svar_left(p+6, p[2], p[3]))
      continue;
    if (! r05_tvar_left(p+7, p[6], p[3]))
      continue;
    r05_close_evar(p+9, p[8], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+12);
    r05_alloc_chars("unexpected ", 11);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_TokName);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+14);
    r05_alloc_chars(", expected ", 11);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_link_brackets(p[11], p[16]);
    r05_correct_evar(p+4);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_splice_tvar(p[12], p+7);
    r05_splice_evar(p[15], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SemanticCheck, "SemanticCheck") {
  r05_this_is_generated_function();

  do {
    /* e.ParseErrors: 4 */
    /* t.FirstTokenPos: 6 */
    /* e.Program: 8 */
    struct r05_node *p[21] = { 0 };
    /* t.FirstTokenPos e.Program (e.ParseErrors) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[0], p[2]))
      continue;
    r05_close_evar(p+8, p[7], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_SemanticChecku_check);
    r05_alloc_insert_pos(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_GetFuncNames);
    r05_alloc_evar(p+8);
    r05_alloc_close_call(p+19);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[10]);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+4);
    r05_link_brackets(p[12], p[14]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[11], p+6);
    r05_splice_evar(p[13], p+8);
    r05_splice_evar(p[16], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SemanticChecku_check, "SemanticCheck_check") {
  r05_this_is_generated_function();

  do {
    /* t.FirstTokenPos: 2 */
    /* e.Program: 8 */
    /* e.ParseErrors: 10 */
    /* s.HasEntry: 12 */
    /* e.Functions: 13 */
    struct r05_node *p[37] = { 0 };
    /* t.FirstTokenPos (e.Program) (e.ParseErrors) s.HasEntry e.Functions */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
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
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_SemanticCheck0);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_svar(p+12);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r5fwm_parseru_FormatError);
    r05_alloc_evar(p+10);
    r05_alloc_close_call(p+27);
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_FindSemanticsErrors);
    r05_alloc_open_bracket(p+29);
    r05_alloc_evar(p+13);
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_Builtins);
    r05_alloc_close_call(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_evar(p+8);
    r05_alloc_close_call(p+33);
    r05_alloc_open_call(p+34);
    r05_alloc_function(&r05f_NoEntryError);
    r05_alloc_tvar(p+2);
    r05_alloc_svar(p+12);
    r05_alloc_close_call(p+35);
    r05_alloc_close_call(p+36);
    r05_push_stack(p[36]);
    r05_push_stack(p[15]);
    r05_push_stack(p[35]);
    r05_push_stack(p[34]);
    r05_push_stack(p[33]);
    r05_push_stack(p[28]);
    r05_link_brackets(p[29], p[32]);
    r05_push_stack(p[31]);
    r05_push_stack(p[30]);
    r05_push_stack(p[27]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+10);
    r05_splice_tvar(p[16], p+2);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[21], p+8);
    r05_splice_evar(p[24], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SemanticCheck0, "SemanticCheck0") {
  r05_this_is_generated_function();

  do {
    /* e.Functions: 4 */
    /* t.FirstTokenPos: 6 */
    /* e.ParseErrors: 12 */
    /* e.Program: 14 */
    /* s.HasEntry: 16 */
    struct r05_node *p[18] = { 0 };
    /* t.FirstTokenPos (e.ParseErrors) (e.Program) s.HasEntry (e.Functions) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[2]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[2]))
      continue;
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[10], p[11]);
    if (! r05_svar_left(p+16, p[11], p[2]))
      continue;
    if (! r05_empty_hole(p[16], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_Success);
    r05_alloc_insert_pos(p+17);
    r05_correct_evar(p+14);
    r05_splice_evar(p[17], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.FirstTokenPos: 2 */
    /* e.ParseErrors: 8 */
    /* e.Program: 10 */
    /* s.HasEntry: 12 */
    /* e.Functions: 15 */
    /* e.Errors: 17 */
    struct r05_node *p[20] = { 0 };
    /* t.FirstTokenPos (e.ParseErrors) (e.Program) s.HasEntry (e.Functions) e.Errors */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_left(p+2, p[0], p[1]))
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
    r05_close_evar(p+15, p[13], p[14]);
    r05_close_evar(p+17, p[14], p[1]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_Fails);
    r05_alloc_insert_pos(p+19);
    r05_correct_evar(p+17);
    r05_splice_evar(p[19], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_FormatError, "r5fw-parser_FormatError") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 5 */
    /* e.Message: 7 */
    struct r05_node *p[12] = { 0 };
    /* (Error t.Pos e.Message) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Error))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[3]))
      continue;
    r05_close_evar(p+7, p[6], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
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

R05_DEFINE_LOCAL_FUNCTION(NoEntryError, "NoEntryError") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 3 */
    struct r05_node *p[8] = { 0 };
    /* t.Pos NoEntry */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_NoEntry))
      continue;
    if (! r05_tvar_left(p+3, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_chars("No $ENTRY functions in a file", 29);
    r05_alloc_close_bracket(p+7);
    r05_link_brackets(p[5], p[7]);
    r05_splice_tvar(p[6], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 3 */
    struct r05_node *p[5] = { 0 };
    /* t.Pos HasEntry */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_HasEntry))
      continue;
    if (! r05_tvar_left(p+3, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(GetFuncNames, "GetFuncNames") {
  r05_this_is_generated_function();

  do {
    /* e.Units: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Units */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_function(&r05f_r5fwm_parseru_GetNames);
    r05_alloc_function(&r05f_NoEntry);
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

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_GetNames, "r5fw-parser_GetNames") {
  r05_this_is_generated_function();

  do {
    /* s.HasEntry: 5 */
    /* t.Pos: 6 */
    /* e.Text: 8 */
    struct r05_node *p[10] = { 0 };
    /* s.HasEntry (SpecialComment t.Pos e.Text) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_SpecialComment))
      continue;
    if (! r05_svar_left(p+5, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[5], p[2]))
      continue;
    if (! r05_tvar_left(p+6, p[4], p[3]))
      continue;
    r05_close_evar(p+8, p[7], p[3]);

    r05_reset_allocator();
    r05_alloc_svar(p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.HasEntry: 5 */
    /* t.Pos: 6 */
    /* e.Name: 10 */
    /* s.Scope: 12 */
    /* e.Sentences: 13 */
    struct r05_node *p[20] = { 0 };
    /* s.HasEntry (Function t.Pos (e.Name) s.Scope e.Sentences) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Function))
      continue;
    if (! r05_svar_left(p+5, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[5], p[2]))
      continue;
    if (! r05_tvar_left(p+6, p[4], p[3]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[3]))
      continue;
    r05_close_evar(p+10, p[8], p[9]);
    if (! r05_svar_left(p+12, p[9], p[3]))
      continue;
    r05_close_evar(p+13, p[12], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_UpdateHasEntry);
    r05_alloc_svar(p+5);
    r05_alloc_svar(p+12);
    r05_alloc_close_call(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+10);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_splice_evar(p[18], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.ExternalNames: 5 */
    /* s.HasEntry: 7 */
    struct r05_node *p[11] = { 0 };
    /* s.HasEntry (Extern e.ExternalNames) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Extern))
      continue;
    r05_close_evar(p+5, p[4], p[3]);
    if (! r05_svar_left(p+7, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[7], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_svar(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r5fwm_parseru_RemovePos);
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

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(UpdateHasEntry, "UpdateHasEntry") {
  r05_this_is_generated_function();

  do {
    /* s.Scope: 3 */
    struct r05_node *p[4] = { 0 };
    /* HasEntry s.Scope */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_HasEntry))
      continue;
    if (! r05_svar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_HasEntry);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.HasEntry: 3 */
    struct r05_node *p[4] = { 0 };
    /* s.HasEntry Entry */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_Entry))
      continue;
    if (! r05_svar_left(p+3, p[0], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_HasEntry);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.HasEntry: 3 */
    struct r05_node *p[4] = { 0 };
    /* s.HasEntry Local */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_Local))
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

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_RemovePos, "r5fw-parser_RemovePos") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 4 */
    /* e.Name: 6 */
    struct r05_node *p[11] = { 0 };
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
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_bracket(p+10);
    r05_link_brackets(p[8], p[10]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindSemanticsErrors, "FindSemanticsErrors") {
  r05_this_is_generated_function();

  do {
    /* e.FuncNames: 4 */
    /* e.Units: 6 */
    struct r05_node *p[16] = { 0 };
    /* (e.FuncNames) e.Units */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Map);
    r05_alloc_open_bracket(p+9);
    r05_alloc_function(&r05f_r5fwm_parseru_FindSemanticsErrors);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_FindRedefinitions);
    r05_alloc_evar(p+6);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[10], p+4);
    r05_splice_evar(p[12], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindRedefinitions, "FindRedefinitions") {
  r05_this_is_generated_function();

  do {
    /* e.Units: 2 */
    struct r05_node *p[13] = { 0 };
    /* e.Units */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_DoFindRedefinitions);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r5fwm_parseru_BuiltinDefinition);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Builtins);
    r05_alloc_close_call(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r5fwm_parseru_ExtractDefinition);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[4]);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+2);
    r05_push_stack(p[8]);
    r05_push_stack(p[5]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[10], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_BuiltinDefinition, "r5fw-parser_BuiltinDefinition") {
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
    r05_alloc_function(&r05f_Builtin);
    r05_alloc_function(&r05f_NOm_POS);
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

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_ExtractDefinition, "r5fw-parser_ExtractDefinition") {
  r05_this_is_generated_function();

  do {
    /* e.Name: 6 */
    struct r05_node *p[11] = { 0 };
    /* (Builtin NO-POS e.Name) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Builtin))
      continue;
    if (! r05_function_left(p+5, p[4], p[3], &r05f_NOm_POS))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[5], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_function(&r05f_Builtin);
    r05_alloc_function(&r05f_NOm_POS);
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
    /* t.Pos: 5 */
    /* e.Text: 7 */
    struct r05_node *p[9] = { 0 };
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
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.Pos: 5 */
    /* e.Name: 9 */
    /* s.Scope: 11 */
    /* e.Sentences: 12 */
    struct r05_node *p[17] = { 0 };
    /* (Function t.Pos (e.Name) s.Scope e.Sentences) */
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
    r05_alloc_function(&r05f_Define);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[15], p+5);
    r05_splice_evar(p[15], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.ExternalNames: 5 */
    struct r05_node *p[10] = { 0 };
    /* (Extern e.ExternalNames) */
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
    r05_alloc_function(&r05f_r5fwm_parseru_MarkExternalName);
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

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_MarkExternalName, "r5fw-parser_MarkExternalName") {
  r05_this_is_generated_function();

  do {
    /* t.Pos: 4 */
    /* e.Name: 6 */
    struct r05_node *p[11] = { 0 };
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
    r05_alloc_function(&r05f_External);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_bracket(p+10);
    r05_link_brackets(p[8], p[10]);
    r05_correct_evar(p+6);
    r05_splice_tvar(p[9], p+4);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoFindRedefinitions, "DoFindRedefinitions") {
  r05_this_is_generated_function();

  do {
    /* s.Type2: 4 */
    /* t.Pos2: 5 */
    /* e.Name: 7, 13 */
    /* e.Defs-B: 9 */
    /* e.Defs-E: 15 */
    /* s.Type1: 17 */
    /* t.Pos1: 18 */
    struct r05_node *p[30] = { 0 };
    /* e.Defs-B (s.Type1 t.Pos1 e.Name) e.Defs-E (s.Type2 t.Pos2 e.Name) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[2], p[3]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[3]))
      continue;
    r05_close_evar(p+7, p[6], p[3]);
    p[9] = p[0]->next;
    p[10] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+11, p[10], p[2]))
        continue;
      if (! r05_repeated_evar_right(p+13, p[11], p[12], p+7))
        continue;
      r05_close_evar(p+15, p[12], p[2]);
      if (! r05_svar_left(p+17, p[11], p[13]))
        continue;
      if (! r05_tvar_left(p+18, p[17], p[13]))
        continue;
      if (! r05_empty_hole(p[19], p[13]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_DoFindRedefinitions);
      r05_alloc_insert_pos(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_svar(p+17);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_call(p+26);
      r05_alloc_open_call(p+27);
      r05_alloc_function(&r05f_MakeRedefinitionError);
      r05_alloc_svar(p+17);
      r05_alloc_tvar(p+18);
      r05_alloc_svar(p+4);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_call(p+29);
      r05_push_stack(p[29]);
      r05_push_stack(p[27]);
      r05_correct_evar(p+13);
      r05_push_stack(p[26]);
      r05_push_stack(p[20]);
      r05_correct_evar(p+15);
      r05_link_brackets(p[22], p[24]);
      r05_correct_evar(p+7);
      r05_correct_evar(p+9);
      r05_splice_evar(p[21], p+9);
      r05_splice_tvar(p[23], p+18);
      r05_splice_evar(p[23], p+7);
      r05_splice_evar(p[25], p+15);
      r05_splice_tvar(p[28], p+5);
      r05_splice_evar(p[28], p+13);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+9, p[2]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* t.Other: 2 */
    /* e.Defs: 4 */
    struct r05_node *p[9] = { 0 };
    /* e.Defs t.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_tvar_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[0], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_DoFindRedefinitions);
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

R05_DEFINE_LOCAL_FUNCTION(MakeRedefinitionError, "MakeRedefinitionError") {
  r05_this_is_generated_function();

  do {
    /* s.Type: 4 */
    /* t.Pos: 5 */
    /* e.Name: 7 */
    struct r05_node *p[15] = { 0 };
    /* Builtin NO-POS s.Type t.Pos e.Name */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Builtin))
      continue;
    if (! r05_function_left(p+3, p[2], p[1], &r05f_NOm_POS))
      continue;
    if (! r05_svar_left(p+4, p[3], p[1]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[1]))
      continue;
    r05_close_evar(p+7, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_chars("Re", 2);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DeclType);
    r05_alloc_svar(p+4);
    r05_alloc_close_call(p+12);
    r05_alloc_chars("ion of builtin function ", 24);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_link_brackets(p[9], p[14]);
    r05_correct_evar(p+7);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_splice_tvar(p[10], p+5);
    r05_splice_evar(p[13], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Type1: 2 */
    /* t.Pos1: 3 */
    /* s.Type2: 5 */
    /* t.Pos2: 6 */
    /* e.Name: 8 */
    struct r05_node *p[18] = { 0 };
    /* s.Type1 t.Pos1 s.Type2 t.Pos2 e.Name */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_tvar_left(p+3, p[2], p[1]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[1]))
      continue;
    if (! r05_tvar_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_chars("Re", 2);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_DeclType);
    r05_alloc_svar(p+5);
    r05_alloc_close_call(p+13);
    r05_alloc_chars("ion of function ", 16);
    r05_alloc_insert_pos(p+14);
    r05_alloc_chars(" (function is already ", 22);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DeclType);
    r05_alloc_svar(p+2);
    r05_alloc_close_call(p+16);
    r05_alloc_chars("ed)", 3);
    r05_alloc_close_bracket(p+17);
    r05_link_brackets(p[10], p[17]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+8);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_splice_tvar(p[11], p+6);
    r05_splice_evar(p[14], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DeclType, "DeclType") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[3] = { 0 };
    /* Define */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_Define))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("defin", 5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    struct r05_node *p[3] = { 0 };
    /* External */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_External))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("declar", 6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_FindSemanticsErrors, "r5fw-parser_FindSemanticsErrors") {
  r05_this_is_generated_function();

  do {
    /* e.FuncNames: 5 */
    /* t.Pos: 7 */
    /* e.Text: 9 */
    struct r05_node *p[11] = { 0 };
    /* e.FuncNames (SpecialComment t.Pos e.Text) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_SpecialComment))
      continue;
    r05_close_evar(p+5, p[0], p[2]);
    if (! r05_tvar_left(p+7, p[4], p[3]))
      continue;
    r05_close_evar(p+9, p[8], p[3]);

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FuncNames: 5 */
    /* t.Pos: 7 */
    /* e.Name: 11 */
    /* s.Scope: 13 */
    /* e.Sentences: 14 */
    struct r05_node *p[26] = { 0 };
    /* e.FuncNames (Function t.Pos (e.Name) s.Scope e.Sentences) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Function))
      continue;
    r05_close_evar(p+5, p[0], p[2]);
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
    r05_alloc_function(&r05f_CheckSentences);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_ExtractCheckablem_Sentences);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[16]);
    r05_push_stack(p[24]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[20], p[21]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[18], p+5);
    r05_splice_evar(p[23], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FuncNames: 5 */
    /* e.Names: 7 */
    struct r05_node *p[9] = { 0 };
    /* e.FuncNames (Extern e.Names) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Extern))
      continue;
    r05_close_evar(p+5, p[0], p[2]);
    r05_close_evar(p+7, p[4], p[3]);

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckSentences, "CheckSentences") {
  r05_this_is_generated_function();

  do {
    /* e.FuncNames: 6 */
    /* e.Variables: 8 */
    /* e.Sentences: 10 */
    struct r05_node *p[23] = { 0 };
    /* (e.FuncNames) (e.Variables) e.Sentences */
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
    r05_alloc_function(&r05f_Map);
    r05_alloc_open_bracket(p+13);
    r05_alloc_function(&r05f_r5fwm_parseru_CheckSentence);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[13], p[20]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[15], p+6);
    r05_splice_evar(p[18], p+8);
    r05_splice_evar(p[21], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ExtractCheckable, "ExtractCheckable") {
  r05_this_is_generated_function();

  do {
    /* e.Pattern: 4 */
    /* e.Conditions-And-SentenceTail: 6 */
    struct r05_node *p[16] = { 0 };
    /* (e.Pattern) e.Conditions-And-SentenceTail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_ExtractCheckablem_Tail);
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

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ExtractCheckablem_Tail, "ExtractCheckable-Tail") {
  r05_this_is_generated_function();

  do {
    /* e.Result: 9 */
    /* e.Pattern: 11 */
    /* e.Tail: 13 */
    struct r05_node *p[30] = { 0 };
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
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_Condition);
    r05_alloc_open_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_ExtractCheckablem_Tail);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[27]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[15], p[26]);
    r05_link_brackets(p[21], p[25]);
    r05_push_stack(p[24]);
    r05_push_stack(p[22]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[16], p[20]);
    r05_push_stack(p[19]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[18], p+9);
    r05_splice_evar(p[23], p+11);
    r05_splice_evar(p[28], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Result: 5 */
    struct r05_node *p[12] = { 0 };
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
    r05_alloc_function(&r05f_RETURN);
    r05_alloc_open_bracket(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[7], p[11]);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[9], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Result: 5 */
    /* e.Sentences: 7 */
    struct r05_node *p[17] = { 0 };
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
    r05_alloc_function(&r05f_CALLm_BLOCK);
    r05_alloc_open_bracket(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_ExtractCheckablem_Sentences);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_push_stack(p[16]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[9], p[13]);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[11], p+5);
    r05_splice_evar(p[15], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ExtractCheckablem_Sentences, "ExtractCheckable-Sentences") {
  r05_this_is_generated_function();

  do {
    /* e.Sentence: 4 */
    /* e.Sentences: 6 */
    struct r05_node *p[16] = { 0 };
    /* (e.Sentence) e.Sentences */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_ExtractCheckable);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_ExtractCheckablem_Sentences);
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

R05_DEFINE_LOCAL_FUNCTION(ExtractCheckablem_Expr, "ExtractCheckable-Expr") {
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
    r05_alloc_function(&r05f_r5fwm_parseru_ExtractCheckablem_Term);
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

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_ExtractCheckablem_Term, "r5fw-parser_ExtractCheckable-Term") {
  r05_this_is_generated_function();

  do {
    /* t.SrcPos: 5 */
    /* s.VarType: 7 */
    /* e.Index: 8 */
    struct r05_node *p[14] = { 0 };
    /* (Variable t.SrcPos s.VarType e.Index) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Variable))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[3]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[3]))
      continue;
    r05_close_evar(p+8, p[7], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+11);
    r05_alloc_svar(p+7);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_link_brackets(p[10], p[13]);
    r05_correct_evar(p+8);
    r05_splice_tvar(p[11], p+5);
    r05_splice_evar(p[12], p+8);
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
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
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
    /* e.Expr: 11 */
    struct r05_node *p[19] = { 0 };
    /* (Call t.Pos (e.Name) e.Expr) */
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
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[16]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+9);
    r05_splice_tvar(p[14], p+5);
    r05_splice_evar(p[14], p+9);
    r05_splice_evar(p[17], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* t.OtherTerm: 2 */
    struct r05_node *p[4] = { 0 };
    /* t.OtherTerm */
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

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_CheckSentence, "r5fw-parser_CheckSentence") {
  r05_this_is_generated_function();

  do {
    /* e.FuncNames: 10 */
    /* e.Variables: 12 */
    /* e.PatternItems: 14 */
    /* e.Tail: 16 */
    struct r05_node *p[27] = { 0 };
    /* (e.FuncNames) (e.Variables) ((e.PatternItems) e.Tail) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[6], p[7]))
      continue;
    if (! r05_empty_hole(p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[2], p[3]);
    r05_close_evar(p+12, p[4], p[5]);
    r05_close_evar(p+14, p[8], p[9]);
    r05_close_evar(p+16, p[9], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_CheckSentencem_Tail);
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
    r05_correct_evar(p+16);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+14);
    r05_correct_evar(p+12);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+10);
    r05_splice_evar(p[20], p+10);
    r05_splice_evar(p[23], p+12);
    r05_splice_evar(p[23], p+14);
    r05_splice_evar(p[25], p+16);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckSentencem_Tail, "CheckSentence-Tail") {
  r05_this_is_generated_function();

  do {
    /* e.FuncNames: 13 */
    /* e.Variables: 15 */
    /* e.ResultItems: 17 */
    /* e.PatternItems: 19 */
    /* e.Tail: 21 */
    struct r05_node *p[40] = { 0 };
    /* (e.FuncNames) (e.Variables) (Condition (e.ResultItems) (e.PatternItems)) e.Tail */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_Condition))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[7]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[7]))
      continue;
    if (! r05_empty_hole(p[12], p[7]))
      continue;
    r05_close_evar(p+13, p[2], p[3]);
    r05_close_evar(p+15, p[4], p[5]);
    r05_close_evar(p+17, p[9], p[10]);
    r05_close_evar(p+19, p[11], p[12]);
    r05_close_evar(p+21, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_CheckResult);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_call(p+31);
    r05_alloc_open_call(p+32);
    r05_alloc_function(&r05f_CheckSentencem_Tail);
    r05_alloc_open_bracket(p+33);
    r05_alloc_evar(p+13);
    r05_alloc_close_bracket(p+34);
    r05_alloc_open_bracket(p+35);
    r05_alloc_evar(p+15);
    r05_alloc_insert_pos(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_call(p+39);
    r05_push_stack(p[39]);
    r05_push_stack(p[32]);
    r05_correct_evar(p+21);
    r05_link_brackets(p[35], p[37]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[33], p[34]);
    r05_push_stack(p[31]);
    r05_push_stack(p[23]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+13);
    r05_splice_evar(p[25], p+13);
    r05_splice_evar(p[28], p+15);
    r05_splice_evar(p[30], p+17);
    r05_splice_evar(p[36], p+19);
    r05_splice_evar(p[38], p+21);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FuncNames: 9 */
    /* e.Variables: 11 */
    /* e.ResultItems: 13 */
    struct r05_node *p[24] = { 0 };
    /* (e.FuncNames) (e.Variables) RETURN (e.ResultItems) */
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
    r05_alloc_function(&r05f_CheckResult);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[17], p+9);
    r05_splice_evar(p[20], p+11);
    r05_splice_evar(p[22], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FuncNames: 9 */
    /* e.Variables: 11 */
    /* e.ResultItems: 13 */
    /* e.Sentences: 15 */
    struct r05_node *p[33] = { 0 };
    /* (e.FuncNames) (e.Variables) CALL-BLOCK (e.ResultItems) e.Sentences */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[5], p[1], &r05f_CALLm_BLOCK))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[4], p[5]);
    r05_close_evar(p+13, p[7], p[8]);
    r05_close_evar(p+15, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_CheckResult);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_CheckSentences);
    r05_alloc_open_bracket(p+27);
    r05_alloc_evar(p+9);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_evar(p+11);
    r05_alloc_close_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[26]);
    r05_correct_evar(p+15);
    r05_link_brackets(p[29], p[30]);
    r05_link_brackets(p[27], p[28]);
    r05_push_stack(p[25]);
    r05_push_stack(p[17]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[19], p+9);
    r05_splice_evar(p[22], p+11);
    r05_splice_evar(p[24], p+13);
    r05_splice_evar(p[31], p+15);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckResult, "CheckResult") {
  r05_this_is_generated_function();

  do {
    /* e.FuncNames: 9 */
    /* e.Variables: 11 */
    /* e.Items: 13 */
    /* t.Pos: 15 */
    /* e.Name: 17 */
    struct r05_node *p[34] = { 0 };
    /* (e.FuncNames) (e.Variables) (Call t.Pos e.Name) e.Items */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_Call))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[4], p[5]);
    r05_close_evar(p+13, p[7], p[1]);
    if (! r05_tvar_left(p+15, p[8], p[7]))
      continue;
    r05_close_evar(p+17, p[16], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_CheckResult0);
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
    r05_alloc_evar(p+9);
    r05_alloc_close_call(p+33);
    r05_push_stack(p[33]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[21], p+9);
    r05_splice_evar(p[24], p+11);
    r05_splice_tvar(p[26], p+15);
    r05_splice_evar(p[28], p+17);
    r05_splice_evar(p[31], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FuncNames: 9 */
    /* e.Variables: 11 */
    /* e.Items: 13 */
    /* t.Pos: 15 */
    /* s.Type: 17 */
    /* e.Index: 18 */
    struct r05_node *p[35] = { 0 };
    /* (e.FuncNames) (e.Variables) (Variable t.Pos s.Type e.Index) e.Items */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_Variable))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[4], p[5]);
    r05_close_evar(p+13, p[7], p[1]);
    if (! r05_tvar_left(p+15, p[8], p[7]))
      continue;
    if (! r05_svar_left(p+17, p[16], p[7]))
      continue;
    r05_close_evar(p+18, p[17], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_CheckResult1);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_svar(p+17);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_evar(p+11);
    r05_alloc_close_call(p+34);
    r05_push_stack(p[34]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+18);
    r05_link_brackets(p[24], p[26]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[21], p[23]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[22], p+9);
    r05_splice_evar(p[25], p+11);
    r05_splice_tvar(p[27], p+15);
    r05_splice_evar(p[29], p+18);
    r05_splice_evar(p[32], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FuncNames: 6 */
    /* e.Variables: 8 */
    struct r05_node *p[10] = { 0 };
    /* (e.FuncNames) (e.Variables) */
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

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckResult0, "CheckResult0") {
  r05_this_is_generated_function();

  do {
    /* e.FuncNames: 6 */
    /* e.Variables: 8 */
    /* t.Pos: 10 */
    /* e.Name: 16, 24 */
    /* e.Items: 18 */
    /* e.Names-B: 20 */
    /* e.Names-E: 26 */
    struct r05_node *p[37] = { 0 };
    /* (e.FuncNames) (e.Variables) t.Pos (e.Name) (e.Items) e.Names-B (e.Name) e.Names-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    if (! r05_tvar_left(p+10, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    r05_close_evar(p+16, p[12], p[13]);
    r05_close_evar(p+18, p[14], p[15]);
    p[20] = p[15]->next;
    p[21] = p[15];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+22, p[21], p[1]))
        continue;
      if (! r05_repeated_evar_left(p+24, p[22], p[23], p+16))
        continue;
      if (! r05_empty_hole(p[25], p[23]))
        continue;
      r05_close_evar(p+26, p[23], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+28);
      r05_alloc_function(&r05f_CheckResult);
      r05_alloc_open_bracket(p+29);
      r05_alloc_insert_pos(p+30);
      r05_alloc_close_bracket(p+31);
      r05_alloc_open_bracket(p+32);
      r05_alloc_insert_pos(p+33);
      r05_alloc_close_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_call(p+36);
      r05_push_stack(p[36]);
      r05_push_stack(p[28]);
      r05_correct_evar(p+18);
      r05_link_brackets(p[32], p[34]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[29], p[31]);
      r05_correct_evar(p+6);
      r05_splice_evar(p[30], p+6);
      r05_splice_evar(p[33], p+8);
      r05_splice_evar(p[35], p+18);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+20, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.FuncNames: 6 */
    /* e.Variables: 8 */
    /* t.Pos: 10 */
    /* e.Name: 16 */
    /* e.Items: 18 */
    /* e.Names: 20 */
    struct r05_node *p[35] = { 0 };
    /* (e.FuncNames) (e.Variables) t.Pos (e.Name) (e.Items) e.Names */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    if (! r05_tvar_left(p+10, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[1]))
      continue;
    r05_close_evar(p+16, p[12], p[13]);
    r05_close_evar(p+18, p[14], p[15]);
    r05_close_evar(p+20, p[15], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_chars("function ", 9);
    r05_alloc_insert_pos(p+24);
    r05_alloc_chars(" is not declared", 16);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_CheckResult);
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
    r05_correct_evar(p+18);
    r05_link_brackets(p[30], p[32]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[27], p[29]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[22], p[25]);
    r05_correct_evar(p+16);
    r05_splice_tvar(p[23], p+10);
    r05_splice_evar(p[24], p+16);
    r05_splice_evar(p[28], p+6);
    r05_splice_evar(p[31], p+8);
    r05_splice_evar(p[33], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckResult1, "CheckResult1") {
  r05_this_is_generated_function();

  do {
    /* e.FuncNames: 6 */
    /* e.Variables: 8 */
    /* t.Pos: 10 */
    /* s.Type: 12, 28 */
    /* e.Index: 17, 26 */
    /* e.Items: 19 */
    /* e.Vars-B: 21 */
    /* e.Vars-E: 29 */
    /* t.DeclPos: 31 */
    struct r05_node *p[42] = { 0 };
    /* (e.FuncNames) (e.Variables) t.Pos s.Type (e.Index) (e.Items) e.Vars-B (Variable t.DeclPos s.Type e.Index) e.Vars-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    if (! r05_tvar_left(p+10, p[5], p[1]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[15], p[16]);
    p[21] = p[16]->next;
    p[22] = p[16];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+23, p[22], p[1]))
        continue;
      if (! r05_function_left(p+25, p[23], p[24], &r05f_Variable))
        continue;
      if (! r05_repeated_evar_right(p+26, p[25], p[24], p+17))
        continue;
      if (! r05_repeated_svar_right(p+28, p[25], p[26], p+12))
        continue;
      r05_close_evar(p+29, p[24], p[1]);
      if (! r05_tvar_left(p+31, p[25], p[28]))
        continue;
      if (! r05_empty_hole(p[32], p[28]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+33);
      r05_alloc_function(&r05f_CheckResult);
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
      r05_correct_evar(p+19);
      r05_link_brackets(p[37], p[39]);
      r05_correct_evar(p+8);
      r05_link_brackets(p[34], p[36]);
      r05_correct_evar(p+6);
      r05_splice_evar(p[35], p+6);
      r05_splice_evar(p[38], p+8);
      r05_splice_evar(p[40], p+19);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+21, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.FuncNames: 6 */
    /* e.Variables: 8 */
    /* t.Pos: 10 */
    /* s.Type: 12 */
    /* e.Index: 17 */
    /* e.Items: 19 */
    /* e.Vars: 21 */
    struct r05_node *p[36] = { 0 };
    /* (e.FuncNames) (e.Variables) t.Pos s.Type (e.Index) (e.Items) e.Vars */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    if (! r05_tvar_left(p+10, p[5], p[1]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[1]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[1]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[1]))
      continue;
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[15], p[16]);
    r05_close_evar(p+21, p[16], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_chars("variable ", 9);
    r05_alloc_svar(p+12);
    r05_alloc_char('.');
    r05_alloc_insert_pos(p+25);
    r05_alloc_chars(" is not declared", 16);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_CheckResult);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_call(p+35);
    r05_push_stack(p[35]);
    r05_push_stack(p[27]);
    r05_correct_evar(p+19);
    r05_link_brackets(p[31], p[33]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[28], p[30]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[23], p[26]);
    r05_correct_evar(p+17);
    r05_splice_tvar(p[24], p+10);
    r05_splice_evar(p[25], p+17);
    r05_splice_evar(p[29], p+6);
    r05_splice_evar(p[32], p+8);
    r05_splice_evar(p[34], p+19);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */

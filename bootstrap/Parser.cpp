/* Automatically generated file. Don't edit! */
#include "refalrts.h"


extern enum r05_fnresult r05c_Fetch(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Seq(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Map(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_SaveFile(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Inc(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Dec(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_LexFolding(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkOpenBracket(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkCloseBracket(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkOpenCall(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkCloseCall(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkEOF(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkDirective(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkName(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkSemicolon(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EEnum(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Enum(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Extern(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Entry(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkComma(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkOpenBlock(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkCloseBlock(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkVariable(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkReplace(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkChar(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkNumber(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkOpen(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkClose(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkNative(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_Create(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_Destroy(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_NoErrors(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_HasErrors(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_AddUnexpected(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_AddErrorAt(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_Create(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_CheckUnresolved(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_Destroy(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_AllFunctions(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_AddDefined(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_AddDeclared(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_AddFunctionCall(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_GetAnyName(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Success(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Fails(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_StrFromInt(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_GN_Entry(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_GenExtern(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_GN_Local(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_GenForward(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_GenEnum(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_GenFnStart(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_GenSentence(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_GenFnEnd_Success(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_GenFnEnd(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_GenNative(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_GenPostprocess(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_GenThisIsGeneratedFunction(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_MakeAlgorithm(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Brackets(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CallBrackets(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Symbol(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Char(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Number(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Name(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CompileFile(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_PrepareBracket(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Pass_Lexer(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Pass_CheckUnresolved(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Pass_Final(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Pass_Final_SwNoErrors(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseElements(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_GenDeclaration(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseElements_DirectiveParsed(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseElements_FunctionParsed(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScopeClassFromEnumDirective(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseElement_SwDirective(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseNameList_Enum(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseNameList_Tail_Enum(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseNameList_Extern(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseNameList_Tail_Extern(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseFunction(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Sentences(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Native(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseFunction_BlockParsed(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_GenFunctionBody(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_MakeAlgorithm_and_GenSentence(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseBlock(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseBlock_CloseBlock(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_DoParseBlock(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseSentence(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseSentence_AfterParsePattern(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseSentence_ParseResult(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseSentence_AfterParseResult(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParsePattern(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_StrFromBracket(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ParseResult(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_BracketPairName(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_CloseBracketName(struct r05_node *arg_begin, struct r05_node *arg_end);

enum r05_fnresult r05c_CompileFile(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eSrcName_b_1;
    struct r05_node *eSrcName_e_1;
    struct r05_node *eOutputName_b_1;
    struct r05_node *eOutputName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[20] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.SrcName  ) e.OutputName */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eSrcName_b_1 = bb[1];
    eSrcName_e_1 = be[1];
    eOutputName_b_1 = bb[0];
    eOutputName_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Fetch, "Fetch");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_LexFolding, "LexFolding");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_call(n[3]);
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_Seq, "Seq");
    r05_alloc_open_bracket(n[5]);
    r05_alloc_function(r05c_Map, "Map");
    r05_alloc_function(r05c_PrepareBracket, "PrepareBracket");
    r05_alloc_close_bracket(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_function(r05c_Pass_Lexer, "Pass_Lexer");
    r05_alloc_open_bracket(n[8]);
    r05_alloc_evar(eSrcName_b_1, eSrcName_e_1);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_close_bracket(n[10]);
    r05_alloc_function(r05c_Pass_CheckUnresolved, "Pass_CheckUnresolved");
    r05_alloc_open_bracket(n[11]);
    r05_alloc_function(r05c_Pass_Final, "Pass_Final");
    r05_alloc_open_bracket(n[12]);
    r05_alloc_evar(eSrcName_b_1, eSrcName_e_1);
    r05_alloc_close_bracket(n[13]);
    r05_alloc_open_bracket(n[14]);
    r05_alloc_insert_pos(n[15]);
    r05_alloc_close_bracket(n[16]);
    r05_alloc_close_bracket(n[17]);
    r05_alloc_close_call(n[18]);
    r05_alloc_close_call(n[19]);
    r05_push_stack(n[19]);
    r05_push_stack(n[0]);
    r05_push_stack(n[18]);
    r05_push_stack(n[4]);
    r05_link_brackets(n[11], n[17]);
    r05_link_brackets(n[14], n[16]);
    r05_link_brackets(n[12], n[13]);
    r05_link_brackets(n[7], n[10]);
    r05_link_brackets(n[8], n[9]);
    r05_link_brackets(n[5], n[6]);
    r05_push_stack(n[3]);
    r05_push_stack(n[1]);
    r05_splice_evar(n[2], eSrcName_b_1, eSrcName_e_1);
    r05_splice_evar(n[15], eOutputName_b_1, eOutputName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_PrepareBracket(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & TkOpenBracket t.SrcPos  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkOpenBracket, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_TkOpen, "TkOpen");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_function(r05c_TkOpenBracket, "TkOpenBracket");
    r05_alloc_close_bracket(n[2]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_tvar(n[1], tSrcPos_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & TkCloseBracket t.SrcPos  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkCloseBracket, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_TkClose, "TkClose");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_function(r05c_TkCloseBracket, "TkCloseBracket");
    r05_alloc_close_bracket(n[2]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_tvar(n[1], tSrcPos_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & TkOpenCall t.SrcPos  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkOpenCall, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_TkOpen, "TkOpen");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_function(r05c_TkOpenCall, "TkOpenCall");
    r05_alloc_close_bracket(n[2]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_tvar(n[1], tSrcPos_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & TkCloseCall t.SrcPos  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkCloseCall, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_TkClose, "TkClose");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_function(r05c_TkCloseCall, "TkCloseCall");
    r05_alloc_close_bracket(n[2]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_tvar(n[1], tSrcPos_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tOtherToken_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.OtherToken */
    if (! r05_tvar_left(&tOtherToken_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_splice_tvar(n[0], tOtherToken_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Pass_Lexer(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eSrcName_b_1;
    struct r05_node *eSrcName_e_1;
    struct r05_node *eLexFolding_b_1;
    struct r05_node *eLexFolding_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[10] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.SrcName  ) e.LexFolding */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eSrcName_b_1 = bb[1];
    eSrcName_e_1 = be[1];
    eLexFolding_b_1 = bb[0];
    eLexFolding_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseElements, "ParseElements");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_EL_Create, "EL_Create");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_call(n[3]);
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_ST_Create, "ST_Create");
    r05_alloc_close_call(n[5]);
    r05_alloc_open_bracket(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_call(n[9]);
    r05_push_stack(n[9]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[6], n[7]);
    r05_push_stack(n[5]);
    r05_push_stack(n[4]);
    r05_push_stack(n[3]);
    r05_push_stack(n[1]);
    r05_splice_evar(n[2], eSrcName_b_1, eSrcName_e_1);
    r05_splice_evar(n[8], eLexFolding_b_1, eLexFolding_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Pass_CheckUnresolved(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eLines_b_1;
    struct r05_node *eLines_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[4] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable e.Lines */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    eLines_b_1 = bb[0];
    eLines_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ST_CheckUnresolved, "ST_CheckUnresolved");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_evar(n[3], eLines_b_1, eLines_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Pass_Final(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eSrcName_b_1;
    struct r05_node *eSrcName_e_1;
    struct r05_node *eOutputName_b_1;
    struct r05_node *eOutputName_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eLines_b_1;
    struct r05_node *eLines_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[15] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.SrcName  ) ( e.OutputName  ) t.ErrorList t.SymTable e.Lines */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    eSrcName_b_1 = bb[1];
    eSrcName_e_1 = be[1];
    eOutputName_b_1 = bb[2];
    eOutputName_e_1 = be[2];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    eLines_b_1 = bb[0];
    eLines_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ST_Destroy, "ST_Destroy");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_Pass_Final_SwNoErrors, "Pass_Final_SwNoErrors");
    r05_alloc_open_bracket(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_bracket(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_alloc_open_call(n[11]);
    r05_alloc_function(r05c_EL_Destroy, "EL_Destroy");
    r05_alloc_insert_pos(n[12]);
    r05_alloc_close_call(n[13]);
    r05_alloc_close_call(n[14]);
    r05_push_stack(n[14]);
    r05_push_stack(n[3]);
    r05_push_stack(n[13]);
    r05_push_stack(n[11]);
    r05_link_brackets(n[7], n[9]);
    r05_link_brackets(n[4], n[6]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_evar(n[5], eSrcName_b_1, eSrcName_e_1);
    r05_splice_evar(n[8], eOutputName_b_1, eOutputName_e_1);
    r05_splice_evar(n[10], eLines_b_1, eLines_e_1);
    r05_splice_tvar(n[12], tErrorList_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Pass_Final_SwNoErrors(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eSrcName_b_1;
    struct r05_node *eSrcName_e_1;
    struct r05_node *eOutputName_b_1;
    struct r05_node *eOutputName_e_1;
    struct r05_node *eLines_b_1;
    struct r05_node *eLines_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[13] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.SrcName  ) ( e.OutputName  ) e.Lines & EL_NoErrors */
    if (! r05_function_right(r05c_EL_NoErrors, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    eSrcName_b_1 = bb[1];
    eSrcName_e_1 = be[1];
    eOutputName_b_1 = bb[2];
    eOutputName_e_1 = be[2];
    eLines_b_1 = bb[0];
    eLines_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_SaveFile, "SaveFile");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_GenPostprocess, "GenPostprocess");
    r05_alloc_open_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_alloc_open_bracket(n[8]);
    r05_alloc_evar(eOutputName_b_1, eOutputName_e_1);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_alloc_close_call(n[11]);
    r05_alloc_close_call(n[12]);
    r05_alloc_function(r05c_Success, "Success");
    r05_alloc_evar(eOutputName_b_1, eOutputName_e_1);
    r05_push_stack(n[12]);
    r05_push_stack(n[0]);
    r05_push_stack(n[11]);
    r05_push_stack(n[4]);
    r05_link_brackets(n[8], n[9]);
    r05_link_brackets(n[5], n[7]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_evar(n[2], eOutputName_b_1, eOutputName_e_1);
    r05_splice_evar(n[6], eSrcName_b_1, eSrcName_e_1);
    r05_splice_evar(n[10], eLines_b_1, eLines_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.SrcName  ) ( e.OutputName  ) e.Lines & EL_HasErrors */
    if (! r05_function_right(r05c_EL_HasErrors, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    /* Unused closed variable e.SrcName*/
    /* Unused closed variable e.OutputName*/
    /* Unused closed variable e.Lines*/

    r05_reset_allocator();
    r05_alloc_function(r05c_Fails, "Fails");
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseElements(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eGenerated_b_1;
    struct r05_node *eGenerated_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Generated  ) ( & TkEOF t.SrcPos  ) */
    if (! r05_brackets_right(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkEOF, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    eGenerated_b_1 = bb[2];
    eGenerated_e_1 = be[2];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_Map, "Map");
    r05_alloc_function(r05c_GenDeclaration, "GenDeclaration");
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_ST_AllFunctions, "ST_AllFunctions");
    r05_alloc_tvar(tSymTable_1);
    r05_alloc_close_call(n[3]);
    r05_alloc_close_call(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_close_bracket(n[6]);
    r05_alloc_insert_pos(n[7]);
    r05_link_brackets(n[5], n[6]);
    r05_push_stack(n[4]);
    r05_push_stack(n[1]);
    r05_push_stack(n[3]);
    r05_push_stack(n[2]);
    r05_splice_tvar(n[0], tErrorList_1);
    r05_splice_tvar(n[0], tSymTable_1);
    r05_splice_evar(n[7], eGenerated_b_1, eGenerated_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eGenerated_b_1;
    struct r05_node *eGenerated_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *sDirective_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[9] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Generated  ) ( & TkDirective t.SrcPos s.Directive  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkDirective, &bb[2], &be[2]))
      break;
    eGenerated_b_1 = bb[1];
    eGenerated_e_1 = be[1];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[2], &be[2]))
      break;
    if (! r05_svar_left(&sDirective_1, &bb[2], &be[2]))
      break;
    if (! r05_empty_seq(bb[2], be[2]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseElements_DirectiveParsed, "ParseElements_DirectiveParsed");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_ParseElement_SwDirective, "ParseElement_SwDirective");
    r05_alloc_insert_pos(n[5]);
    r05_alloc_svar(sDirective_1);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_call(n[7]);
    r05_alloc_close_call(n[8]);
    r05_push_stack(n[8]);
    r05_push_stack(n[0]);
    r05_push_stack(n[7]);
    r05_push_stack(n[4]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_evar(n[2], eGenerated_b_1, eGenerated_e_1);
    r05_splice_tvar(n[5], tErrorList_1);
    r05_splice_tvar(n[5], tSymTable_1);
    r05_splice_evar(n[6], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eGenerated_b_1;
    struct r05_node *eGenerated_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[15] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Generated  ) ( & TkName t.SrcPos e.Name  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkName, &bb[2], &be[2]))
      break;
    eGenerated_b_1 = bb[1];
    eGenerated_e_1 = be[1];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[2], &be[2]))
      break;
    eName_b_1 = bb[2];
    eName_e_1 = be[2];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseElements_FunctionParsed, "ParseElements_FunctionParsed");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_ParseFunction, "ParseFunction");
    r05_alloc_function(r05c_GN_Local, "GN_Local");
    r05_alloc_open_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_alloc_open_call(n[8]);
    r05_alloc_function(r05c_ST_AddDefined, "ST_AddDefined");
    r05_alloc_insert_pos(n[9]);
    r05_alloc_function(r05c_GN_Local, "GN_Local");
    r05_alloc_insert_pos(n[10]);
    r05_alloc_evar(eName_b_1, eName_e_1);
    r05_alloc_close_call(n[11]);
    r05_alloc_insert_pos(n[12]);
    r05_alloc_close_call(n[13]);
    r05_alloc_close_call(n[14]);
    r05_push_stack(n[14]);
    r05_push_stack(n[0]);
    r05_push_stack(n[13]);
    r05_push_stack(n[4]);
    r05_push_stack(n[11]);
    r05_push_stack(n[8]);
    r05_link_brackets(n[5], n[7]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_evar(n[2], eGenerated_b_1, eGenerated_e_1);
    r05_splice_evar(n[6], eName_b_1, eName_e_1);
    r05_splice_tvar(n[9], tErrorList_1);
    r05_splice_tvar(n[9], tSymTable_1);
    r05_splice_tvar(n[10], tSrcPos_1);
    r05_splice_evar(n[12], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eGenerated_b_1;
    struct r05_node *eGenerated_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[7] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Generated  ) ( & TkSemicolon t.SrcPos  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkSemicolon, &bb[2], &be[2]))
      break;
    eGenerated_b_1 = bb[1];
    eGenerated_e_1 = be[1];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[2], &be[2]))
      break;
    if (! r05_empty_seq(bb[2], be[2]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseElements, "ParseElements");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_push_stack(n[6]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_evar(n[3], eGenerated_b_1, eGenerated_e_1);
    r05_splice_evar(n[5], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eGenerated_b_1;
    struct r05_node *eGenerated_e_1;
    struct r05_node *eCode_b_1;
    struct r05_node *eCode_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[10] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Generated  ) ( & TkNative ( s.Row s.Col  ) e.Code  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkNative, &bb[2], &be[2]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[2], &be[2]))
      break;
    eGenerated_b_1 = bb[1];
    eGenerated_e_1 = be[1];
    eCode_b_1 = bb[2];
    eCode_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_svar_left(&sRow_1, &bb[3], &be[3]))
      break;
    if (! r05_svar_left(&sCol_1, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[3], be[3]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseElements, "ParseElements");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_GenNative, "GenNative");
    r05_alloc_svar(sRow_1);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_call(n[9]);
    r05_push_stack(n[9]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[2], n[7]);
    r05_push_stack(n[6]);
    r05_push_stack(n[4]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_evar(n[3], eGenerated_b_1, eGenerated_e_1);
    r05_splice_evar(n[5], eCode_b_1, eCode_e_1);
    r05_splice_evar(n[8], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eGenerated_b_1;
    struct r05_node *eGenerated_e_1;
    struct r05_node *tUnexpected_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[10] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Generated  ) t.Unexpected e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eGenerated_b_1 = bb[1];
    eGenerated_e_1 = be[1];
    if (! r05_tvar_left(&tUnexpected_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseElements, "ParseElements");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_EL_AddUnexpected, "EL_AddUnexpected");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_chars("directive or name", 17);
    r05_alloc_close_call(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_call(n[9]);
    r05_push_stack(n[9]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[5], n[7]);
    r05_push_stack(n[3]);
    r05_push_stack(n[1]);
    r05_splice_tvar(n[2], tErrorList_1);
    r05_splice_tvar(n[2], tUnexpected_1);
    r05_splice_tvar(n[4], tSymTable_1);
    r05_splice_evar(n[6], eGenerated_b_1, eGenerated_e_1);
    r05_splice_evar(n[8], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_GenDeclaration(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & GN_Entry e.Name  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_GN_Entry, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eName_b_1 = bb[1];
    eName_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_GenExtern, "GenExtern");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eName_b_1, eName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & GN_Local e.Name  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_GN_Local, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eName_b_1 = bb[1];
    eName_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_GenForward, "GenForward");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eName_b_1, eName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseElements_DirectiveParsed(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eGenerated_b_1;
    struct r05_node *eGenerated_e_1;
    struct r05_node *eNewGenerated_b_1;
    struct r05_node *eNewGenerated_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[7] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.Generated  ) ( e.NewGenerated  ) t.ErrorList t.SymTable e.Tail */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    eGenerated_b_1 = bb[1];
    eGenerated_e_1 = be[1];
    eNewGenerated_b_1 = bb[2];
    eNewGenerated_e_1 = be[2];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseElements, "ParseElements");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_push_stack(n[6]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_evar(n[3], eGenerated_b_1, eGenerated_e_1);
    r05_splice_evar(n[3], eNewGenerated_b_1, eNewGenerated_e_1);
    r05_splice_evar(n[5], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseElements_FunctionParsed(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eGenerated_b_1;
    struct r05_node *eGenerated_e_1;
    struct r05_node *eNewGenerated_b_1;
    struct r05_node *eNewGenerated_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[7] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.Generated  ) ( e.NewGenerated  ) t.ErrorList t.SymTable e.Tail */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    eGenerated_b_1 = bb[1];
    eGenerated_e_1 = be[1];
    eNewGenerated_b_1 = bb[2];
    eNewGenerated_e_1 = be[2];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseElements, "ParseElements");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_push_stack(n[6]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_evar(n[3], eGenerated_b_1, eGenerated_e_1);
    r05_splice_evar(n[3], eNewGenerated_b_1, eNewGenerated_e_1);
    r05_splice_evar(n[5], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScopeClassFromEnumDirective(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & EEnum */
    if (! r05_function_left(r05c_EEnum, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_function(r05c_GN_Entry, "GN_Entry");
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & Enum */
    if (! r05_function_left(r05c_Enum, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_function(r05c_GN_Local, "GN_Local");
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseElement_SwDirective(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[10] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable & Entry ( & TkName t.SrcPos e.Name  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_Entry, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkName, &bb[1], &be[1]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    eName_b_1 = bb[1];
    eName_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseFunction, "ParseFunction");
    r05_alloc_function(r05c_GN_Entry, "GN_Entry");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_ST_AddDefined, "ST_AddDefined");
    r05_alloc_insert_pos(n[5]);
    r05_alloc_function(r05c_GN_Entry, "GN_Entry");
    r05_alloc_insert_pos(n[6]);
    r05_alloc_evar(eName_b_1, eName_e_1);
    r05_alloc_close_call(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_call(n[9]);
    r05_push_stack(n[9]);
    r05_push_stack(n[0]);
    r05_push_stack(n[7]);
    r05_push_stack(n[4]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_evar(n[2], eName_b_1, eName_e_1);
    r05_splice_tvar(n[5], tErrorList_1);
    r05_splice_tvar(n[5], tSymTable_1);
    r05_splice_tvar(n[6], tSrcPos_1);
    r05_splice_evar(n[8], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tUnexpected_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[7] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable & Entry t.Unexpected e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_Entry, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tUnexpected_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_close_bracket(n[1]);
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_EL_AddUnexpected, "EL_AddUnexpected");
    r05_alloc_insert_pos(n[3]);
    r05_alloc_chars("function name", 13);
    r05_alloc_close_call(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_tvar(tUnexpected_1);
    r05_alloc_insert_pos(n[6]);
    r05_push_stack(n[4]);
    r05_push_stack(n[2]);
    r05_link_brackets(n[0], n[1]);
    r05_splice_tvar(n[3], tErrorList_1);
    r05_splice_tvar(n[3], tUnexpected_1);
    r05_splice_tvar(n[5], tSymTable_1);
    r05_splice_evar(n[6], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable & Extern e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_Extern, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_close_bracket(n[1]);
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_ParseNameList_Extern, "ParseNameList_Extern");
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_call(n[4]);
    r05_push_stack(n[4]);
    r05_push_stack(n[2]);
    r05_link_brackets(n[0], n[1]);
    r05_splice_tvar(n[3], tErrorList_1);
    r05_splice_tvar(n[3], tSymTable_1);
    r05_splice_evar(n[3], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *sDirective_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable s.Directive e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_svar_left(&sDirective_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseNameList_Enum, "ParseNameList_Enum");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_ScopeClassFromEnumDirective, "ScopeClassFromEnumDirective");
    r05_alloc_svar(sDirective_1);
    r05_alloc_close_call(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_call(n[7]);
    r05_push_stack(n[7]);
    r05_push_stack(n[0]);
    r05_push_stack(n[5]);
    r05_push_stack(n[4]);
    r05_link_brackets(n[1], n[2]);
    r05_splice_tvar(n[3], tErrorList_1);
    r05_splice_tvar(n[3], tSymTable_1);
    r05_splice_evar(n[6], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseNameList_Enum(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eGenerated_b_1;
    struct r05_node *eGenerated_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *sScopeClass_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[13] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.Generated  ) t.ErrorList t.SymTable s.ScopeClass ( & TkName t.SrcPos e.Name  ) e.Tail */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eGenerated_b_1 = bb[1];
    eGenerated_e_1 = be[1];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_svar_left(&sScopeClass_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkName, &bb[2], &be[2]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[2], &be[2]))
      break;
    eName_b_1 = bb[2];
    eName_e_1 = be[2];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseNameList_Tail_Enum, "ParseNameList_Tail_Enum");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_GenEnum, "GenEnum");
    r05_alloc_svar(sScopeClass_1);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_close_call(n[5]);
    r05_alloc_close_bracket(n[6]);
    r05_alloc_open_call(n[7]);
    r05_alloc_function(r05c_ST_AddDefined, "ST_AddDefined");
    r05_alloc_insert_pos(n[8]);
    r05_alloc_svar(sScopeClass_1);
    r05_alloc_insert_pos(n[9]);
    r05_alloc_evar(eName_b_1, eName_e_1);
    r05_alloc_close_call(n[10]);
    r05_alloc_svar(sScopeClass_1);
    r05_alloc_insert_pos(n[11]);
    r05_alloc_close_call(n[12]);
    r05_push_stack(n[12]);
    r05_push_stack(n[0]);
    r05_push_stack(n[10]);
    r05_push_stack(n[7]);
    r05_link_brackets(n[1], n[6]);
    r05_push_stack(n[5]);
    r05_push_stack(n[3]);
    r05_splice_evar(n[2], eGenerated_b_1, eGenerated_e_1);
    r05_splice_evar(n[4], eName_b_1, eName_e_1);
    r05_splice_tvar(n[8], tErrorList_1);
    r05_splice_tvar(n[8], tSymTable_1);
    r05_splice_tvar(n[9], tSrcPos_1);
    r05_splice_evar(n[11], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eGenerated_b_1;
    struct r05_node *eGenerated_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *sScopeClass_1;
    struct r05_node *tUnexpected_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.Generated  ) t.ErrorList t.SymTable s.ScopeClass t.Unexpected e.Tail */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eGenerated_b_1 = bb[1];
    eGenerated_e_1 = be[1];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_svar_left(&sScopeClass_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tUnexpected_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_EL_AddUnexpected, "EL_AddUnexpected");
    r05_alloc_insert_pos(n[4]);
    r05_alloc_chars("function name", 13);
    r05_alloc_close_call(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_tvar(tUnexpected_1);
    r05_alloc_insert_pos(n[7]);
    r05_push_stack(n[5]);
    r05_push_stack(n[3]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], eGenerated_b_1, eGenerated_e_1);
    r05_splice_tvar(n[4], tErrorList_1);
    r05_splice_tvar(n[4], tUnexpected_1);
    r05_splice_tvar(n[6], tSymTable_1);
    r05_splice_evar(n[7], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseNameList_Tail_Enum(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eGenerated_b_1;
    struct r05_node *eGenerated_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *sScopeClass_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[7] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.Generated  ) t.ErrorList t.SymTable s.ScopeClass ( & TkComma t.SrcPos  ) e.Tail */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eGenerated_b_1 = bb[1];
    eGenerated_e_1 = be[1];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_svar_left(&sScopeClass_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkComma, &bb[2], &be[2]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[2], &be[2]))
      break;
    if (! r05_empty_seq(bb[2], be[2]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseNameList_Enum, "ParseNameList_Enum");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_svar(sScopeClass_1);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_push_stack(n[6]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_evar(n[2], eGenerated_b_1, eGenerated_e_1);
    r05_splice_tvar(n[4], tErrorList_1);
    r05_splice_tvar(n[4], tSymTable_1);
    r05_splice_evar(n[5], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eGenerated_b_1;
    struct r05_node *eGenerated_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *sScopeClass_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[4] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.Generated  ) t.ErrorList t.SymTable s.ScopeClass ( & TkSemicolon t.SrcPos  ) e.Tail */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eGenerated_b_1 = bb[1];
    eGenerated_e_1 = be[1];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_svar_left(&sScopeClass_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkSemicolon, &bb[2], &be[2]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[2], &be[2]))
      break;
    if (! r05_empty_seq(bb[2], be[2]))
      break;

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], eGenerated_b_1, eGenerated_e_1);
    r05_splice_tvar(n[3], tErrorList_1);
    r05_splice_tvar(n[3], tSymTable_1);
    r05_splice_evar(n[3], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eGenerated_b_1;
    struct r05_node *eGenerated_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *sScopeClass_1;
    struct r05_node *tUnexpected_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.Generated  ) t.ErrorList t.SymTable s.ScopeClass t.Unexpected e.Tail */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eGenerated_b_1 = bb[1];
    eGenerated_e_1 = be[1];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_svar_left(&sScopeClass_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tUnexpected_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_EL_AddUnexpected, "EL_AddUnexpected");
    r05_alloc_insert_pos(n[4]);
    r05_alloc_chars("comma or semicolon", 18);
    r05_alloc_close_call(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_tvar(tUnexpected_1);
    r05_alloc_insert_pos(n[7]);
    r05_push_stack(n[5]);
    r05_push_stack(n[3]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], eGenerated_b_1, eGenerated_e_1);
    r05_splice_tvar(n[4], tErrorList_1);
    r05_splice_tvar(n[4], tUnexpected_1);
    r05_splice_tvar(n[6], tSymTable_1);
    r05_splice_evar(n[7], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseNameList_Extern(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[7] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( & TkName t.SrcPos e.Name  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkName, &bb[1], &be[1]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    eName_b_1 = bb[1];
    eName_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseNameList_Tail_Extern, "ParseNameList_Tail_Extern");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_ST_AddDeclared, "ST_AddDeclared");
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_call(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_push_stack(n[6]);
    r05_push_stack(n[0]);
    r05_push_stack(n[4]);
    r05_push_stack(n[2]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[3], tSymTable_1);
    r05_splice_evar(n[3], eName_b_1, eName_e_1);
    r05_splice_evar(n[5], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tUnexpected_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.Unexpected e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tUnexpected_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_EL_AddUnexpected, "EL_AddUnexpected");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_chars("function name", 13);
    r05_alloc_close_call(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_tvar(tUnexpected_1);
    r05_alloc_insert_pos(n[4]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tUnexpected_1);
    r05_splice_tvar(n[3], tSymTable_1);
    r05_splice_evar(n[4], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseNameList_Tail_Extern(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( & TkComma t.SrcPos  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkComma, &bb[1], &be[1]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseNameList_Extern, "ParseNameList_Extern");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_evar(n[1], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( & TkSemicolon t.SrcPos  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkSemicolon, &bb[1], &be[1]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_splice_tvar(n[0], tErrorList_1);
    r05_splice_tvar(n[0], tSymTable_1);
    r05_splice_evar(n[0], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tUnexpected_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.Unexpected e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tUnexpected_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_EL_AddUnexpected, "EL_AddUnexpected");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_chars("comma or semicolon", 18);
    r05_alloc_close_call(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_tvar(tUnexpected_1);
    r05_alloc_insert_pos(n[4]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tUnexpected_1);
    r05_splice_tvar(n[3], tSymTable_1);
    r05_splice_evar(n[4], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseFunction(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *sScopeClass_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* s.ScopeClass ( e.Name  ) t.ErrorList t.SymTable ( & TkOpenBlock t.SrcPos  ) e.Tail */
    if (! r05_svar_left(&sScopeClass_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eName_b_1 = bb[1];
    eName_e_1 = be[1];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkOpenBlock, &bb[2], &be[2]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[2], &be[2]))
      break;
    if (! r05_empty_seq(bb[2], be[2]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseFunction_BlockParsed, "ParseFunction_BlockParsed");
    r05_alloc_svar(sScopeClass_1);
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_ParseBlock, "ParseBlock");
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_alloc_close_call(n[7]);
    r05_push_stack(n[7]);
    r05_push_stack(n[0]);
    r05_push_stack(n[6]);
    r05_push_stack(n[4]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_evar(n[2], eName_b_1, eName_e_1);
    r05_splice_tvar(n[5], tErrorList_1);
    r05_splice_tvar(n[5], tSymTable_1);
    r05_splice_evar(n[5], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *sScopeClass_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tUnexpected_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[7] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* s.ScopeClass ( e.Name  ) t.ErrorList t.SymTable t.Unexpected e.Tail */
    if (! r05_svar_left(&sScopeClass_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    /* Unused closed variable e.Name*/
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tUnexpected_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_close_bracket(n[1]);
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_EL_AddUnexpected, "EL_AddUnexpected");
    r05_alloc_insert_pos(n[3]);
    r05_alloc_chars("open brace", 10);
    r05_alloc_close_call(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_tvar(tUnexpected_1);
    r05_alloc_insert_pos(n[6]);
    r05_push_stack(n[4]);
    r05_push_stack(n[2]);
    r05_link_brackets(n[0], n[1]);
    r05_splice_tvar(n[3], tErrorList_1);
    r05_splice_tvar(n[3], tUnexpected_1);
    r05_splice_tvar(n[5], tSymTable_1);
    r05_splice_evar(n[6], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Sentences(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Native(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseFunction_BlockParsed(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *sScopeClass_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *eSentences_b_1;
    struct r05_node *eSentences_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[9] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* s.ScopeClass ( e.Name  ) ( & Sentences e.Sentences  ) t.ErrorList t.SymTable e.Tail */
    if (! r05_svar_left(&sScopeClass_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_Sentences, &bb[2], &be[2]))
      break;
    eName_b_1 = bb[1];
    eName_e_1 = be[1];
    eSentences_b_1 = bb[2];
    eSentences_e_1 = be[2];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_GenFunctionBody, "GenFunctionBody");
    r05_alloc_svar(sScopeClass_1);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_link_brackets(n[0], n[7]);
    r05_push_stack(n[6]);
    r05_push_stack(n[1]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_evar(n[3], eName_b_1, eName_e_1);
    r05_splice_evar(n[5], eSentences_b_1, eSentences_e_1);
    r05_splice_tvar(n[8], tErrorList_1);
    r05_splice_tvar(n[8], tSymTable_1);
    r05_splice_evar(n[8], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *sScopeClass_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *sLineNo_1;
    struct r05_node *eCode_b_1;
    struct r05_node *eCode_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[11] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* s.ScopeClass ( e.Name  ) ( & Native s.LineNo e.Code  ) t.ErrorList t.SymTable e.Tail */
    if (! r05_svar_left(&sScopeClass_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_Native, &bb[2], &be[2]))
      break;
    eName_b_1 = bb[1];
    eName_e_1 = be[1];
    if (! r05_svar_left(&sLineNo_1, &bb[2], &be[2]))
      break;
    eCode_b_1 = bb[2];
    eCode_e_1 = be[2];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_GenFnStart, "GenFnStart");
    r05_alloc_svar(sScopeClass_1);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_call(n[3]);
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_GenNative, "GenNative");
    r05_alloc_svar(sLineNo_1);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_alloc_open_call(n[7]);
    r05_alloc_function(r05c_GenFnEnd_Success, "GenFnEnd_Success");
    r05_alloc_close_call(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_link_brackets(n[0], n[9]);
    r05_push_stack(n[8]);
    r05_push_stack(n[7]);
    r05_push_stack(n[6]);
    r05_push_stack(n[4]);
    r05_push_stack(n[3]);
    r05_push_stack(n[1]);
    r05_splice_evar(n[2], eName_b_1, eName_e_1);
    r05_splice_evar(n[5], eCode_b_1, eCode_e_1);
    r05_splice_tvar(n[10], tErrorList_1);
    r05_splice_tvar(n[10], tSymTable_1);
    r05_splice_evar(n[10], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_GenFunctionBody(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *sScopeClass_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *eSentences_b_1;
    struct r05_node *eSentences_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[10] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* s.ScopeClass ( e.Name  ) e.Sentences */
    if (! r05_svar_left(&sScopeClass_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eName_b_1 = bb[1];
    eName_e_1 = be[1];
    eSentences_b_1 = bb[0];
    eSentences_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_GenFnStart, "GenFnStart");
    r05_alloc_svar(sScopeClass_1);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_GenThisIsGeneratedFunction, "GenThisIsGeneratedFunction");
    r05_alloc_close_call(n[4]);
    r05_alloc_open_call(n[5]);
    r05_alloc_function(r05c_Map, "Map");
    r05_alloc_function(r05c_MakeAlgorithm_and_GenSentence, "MakeAlgorithm_and_GenSentence");
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_call(n[7]);
    r05_alloc_open_call(n[8]);
    r05_alloc_function(r05c_GenFnEnd, "GenFnEnd");
    r05_alloc_close_call(n[9]);
    r05_push_stack(n[9]);
    r05_push_stack(n[8]);
    r05_push_stack(n[7]);
    r05_push_stack(n[5]);
    r05_push_stack(n[4]);
    r05_push_stack(n[3]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eName_b_1, eName_e_1);
    r05_splice_evar(n[6], eSentences_b_1, eSentences_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_MakeAlgorithm_and_GenSentence(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *ePattern_b_1;
    struct r05_node *ePattern_e_1;
    struct r05_node *eResult_b_1;
    struct r05_node *eResult_e_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[10] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( ( e.Pattern  ) ( e.Result  )  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    ePattern_b_1 = bb[2];
    ePattern_e_1 = be[2];
    eResult_b_1 = bb[3];
    eResult_e_1 = be[3];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_GenSentence, "GenSentence");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_MakeAlgorithm, "MakeAlgorithm");
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_alloc_close_call(n[8]);
    r05_alloc_close_call(n[9]);
    r05_push_stack(n[9]);
    r05_push_stack(n[0]);
    r05_push_stack(n[8]);
    r05_push_stack(n[1]);
    r05_link_brackets(n[5], n[7]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_evar(n[3], ePattern_b_1, ePattern_e_1);
    r05_splice_evar(n[6], eResult_b_1, eResult_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseBlock(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eCode_b_1;
    struct r05_node *eCode_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[6] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( & TkNative ( s.Row s.Col  ) e.Code  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkNative, &bb[1], &be[1]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    eCode_b_1 = bb[1];
    eCode_e_1 = be[1];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_svar_left(&sRow_1, &bb[2], &be[2]))
      break;
    if (! r05_svar_left(&sCol_1, &bb[2], &be[2]))
      break;
    if (! r05_empty_seq(bb[2], be[2]))
      break;

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_Native, "Native");
    r05_alloc_svar(sRow_1);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_ParseBlock_CloseBlock, "ParseBlock_CloseBlock");
    r05_alloc_insert_pos(n[4]);
    r05_alloc_close_call(n[5]);
    r05_push_stack(n[5]);
    r05_push_stack(n[3]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], eCode_b_1, eCode_e_1);
    r05_splice_tvar(n[4], tErrorList_1);
    r05_splice_tvar(n[4], tSymTable_1);
    r05_splice_evar(n[4], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eTokens_b_1;
    struct r05_node *eTokens_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[6] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable e.Tokens */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    eTokens_b_1 = bb[0];
    eTokens_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_DoParseBlock, "DoParseBlock");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_close_call(n[5]);
    r05_push_stack(n[5]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[2], n[3]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_evar(n[4], eTokens_b_1, eTokens_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseBlock_CloseBlock(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( & TkCloseBlock t.SrcPos  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkCloseBlock, &bb[1], &be[1]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_splice_tvar(n[0], tErrorList_1);
    r05_splice_tvar(n[0], tSymTable_1);
    r05_splice_evar(n[0], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tUnexpected_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.Unexpected e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tUnexpected_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_EL_AddUnexpected, "EL_AddUnexpected");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_chars("\"}\"", 3);
    r05_alloc_close_call(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_tvar(tUnexpected_1);
    r05_alloc_insert_pos(n[4]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tUnexpected_1);
    r05_splice_tvar(n[3], tSymTable_1);
    r05_splice_evar(n[4], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_DoParseBlock(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eSentences_b_1;
    struct r05_node *eSentences_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[4] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Sentences  ) ( & TkCloseBlock t.SrcPos  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkCloseBlock, &bb[2], &be[2]))
      break;
    eSentences_b_1 = bb[1];
    eSentences_e_1 = be[1];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[2], &be[2]))
      break;
    if (! r05_empty_seq(bb[2], be[2]))
      break;

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_Sentences, "Sentences");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], eSentences_b_1, eSentences_e_1);
    r05_splice_tvar(n[3], tErrorList_1);
    r05_splice_tvar(n[3], tSymTable_1);
    r05_splice_evar(n[3], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eSentences_b_1;
    struct r05_node *eSentences_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[10] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Sentences  ) ( & TkEOF t.SrcPos  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkEOF, &bb[2], &be[2]))
      break;
    eSentences_b_1 = bb[1];
    eSentences_e_1 = be[1];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[2], &be[2]))
      break;
    if (! r05_empty_seq(bb[2], be[2]))
      break;

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_Sentences, "Sentences");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[4]);
    r05_alloc_chars("Unexpected EOF, expected \"}\"", 28);
    r05_alloc_close_call(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_function(r05c_TkEOF, "TkEOF");
    r05_alloc_tvar(tSrcPos_1);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_insert_pos(n[9]);
    r05_link_brackets(n[7], n[8]);
    r05_push_stack(n[5]);
    r05_push_stack(n[3]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], eSentences_b_1, eSentences_e_1);
    r05_splice_tvar(n[4], tErrorList_1);
    r05_splice_tvar(n[4], tSrcPos_1);
    r05_splice_tvar(n[6], tSymTable_1);
    r05_splice_evar(n[9], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eSentences_b_1;
    struct r05_node *eSentences_e_1;
    struct r05_node *eTokens_b_1;
    struct r05_node *eTokens_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[9] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Sentences  ) e.Tokens */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eSentences_b_1 = bb[1];
    eSentences_e_1 = be[1];
    eTokens_b_1 = bb[0];
    eTokens_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_DoParseBlock, "DoParseBlock");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_ParseSentence, "ParseSentence");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_open_bracket(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_close_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_call(n[7]);
    r05_alloc_close_call(n[8]);
    r05_push_stack(n[8]);
    r05_push_stack(n[0]);
    r05_push_stack(n[7]);
    r05_push_stack(n[1]);
    r05_link_brackets(n[3], n[5]);
    r05_splice_tvar(n[2], tErrorList_1);
    r05_splice_tvar(n[2], tSymTable_1);
    r05_splice_evar(n[4], eSentences_b_1, eSentences_e_1);
    r05_splice_evar(n[6], eTokens_b_1, eTokens_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseSentence(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eSentences_b_1;
    struct r05_node *eSentences_e_1;
    struct r05_node *eTokens_b_1;
    struct r05_node *eTokens_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[19] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Sentences  ) e.Tokens */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eSentences_b_1 = bb[1];
    eSentences_e_1 = be[1];
    eTokens_b_1 = bb[0];
    eTokens_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Fetch, "Fetch");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_ParsePattern, "ParsePattern");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_open_bracket(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_close_bracket(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_insert_pos(n[9]);
    r05_alloc_close_call(n[10]);
    r05_alloc_open_call(n[11]);
    r05_alloc_function(r05c_Seq, "Seq");
    r05_alloc_function(r05c_ParseSentence_AfterParsePattern, "ParseSentence_AfterParsePattern");
    r05_alloc_function(r05c_ParseSentence_ParseResult, "ParseSentence_ParseResult");
    r05_alloc_open_bracket(n[12]);
    r05_alloc_function(r05c_ParseSentence_AfterParseResult, "ParseSentence_AfterParseResult");
    r05_alloc_open_bracket(n[13]);
    r05_alloc_insert_pos(n[14]);
    r05_alloc_close_bracket(n[15]);
    r05_alloc_close_bracket(n[16]);
    r05_alloc_close_call(n[17]);
    r05_alloc_close_call(n[18]);
    r05_push_stack(n[18]);
    r05_push_stack(n[0]);
    r05_push_stack(n[17]);
    r05_push_stack(n[11]);
    r05_link_brackets(n[12], n[16]);
    r05_link_brackets(n[13], n[15]);
    r05_push_stack(n[10]);
    r05_push_stack(n[1]);
    r05_link_brackets(n[7], n[8]);
    r05_link_brackets(n[5], n[6]);
    r05_link_brackets(n[3], n[4]);
    r05_splice_tvar(n[2], tErrorList_1);
    r05_splice_tvar(n[2], tSymTable_1);
    r05_splice_evar(n[9], eTokens_b_1, eTokens_e_1);
    r05_splice_evar(n[14], eSentences_b_1, eSentences_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseSentence_AfterParsePattern(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *ePattern_b_1;
    struct r05_node *ePattern_e_1;
    struct r05_node *eTokens_b_1;
    struct r05_node *eTokens_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.Pattern  ) ( & TkReplace t.SrcPos  ) e.Tokens */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkReplace, &bb[2], &be[2]))
      break;
    ePattern_b_1 = bb[1];
    ePattern_e_1 = be[1];
    eTokens_b_1 = bb[0];
    eTokens_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[2], &be[2]))
      break;
    if (! r05_empty_seq(bb[2], be[2]))
      break;

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_tvar(n[0], tErrorList_1);
    r05_splice_tvar(n[0], tSymTable_1);
    r05_splice_tvar(n[0], tVarTable_1);
    r05_splice_evar(n[2], ePattern_b_1, ePattern_e_1);
    r05_splice_evar(n[4], eTokens_b_1, eTokens_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *ePattern_b_1;
    struct r05_node *ePattern_e_1;
    struct r05_node *eTokens_b_1;
    struct r05_node *eTokens_e_1;
    struct r05_node *sNextResultTerm_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.Pattern  ) ( s.NextResultTerm t.SrcPos e.Info  ) e.Tokens */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    ePattern_b_1 = bb[1];
    ePattern_e_1 = be[1];
    eTokens_b_1 = bb[0];
    eTokens_e_1 = be[0];
    if (! r05_svar_left(&sNextResultTerm_1, &bb[2], &be[2]))
      break;
    if (! r05_tvar_left(&tSrcPos_1, &bb[2], &be[2]))
      break;
    /* Unused closed variable e.Info*/

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_chars("Incorrect pattern termination", 29);
    r05_alloc_close_call(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_open_bracket(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_bracket(n[6]);
    r05_alloc_insert_pos(n[7]);
    r05_link_brackets(n[4], n[6]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSrcPos_1);
    r05_splice_tvar(n[3], tSymTable_1);
    r05_splice_tvar(n[3], tVarTable_1);
    r05_splice_evar(n[5], ePattern_b_1, ePattern_e_1);
    r05_splice_evar(n[7], eTokens_b_1, eTokens_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseSentence_ParseResult(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *ePattern_b_1;
    struct r05_node *ePattern_e_1;
    struct r05_node *eTokens_b_1;
    struct r05_node *eTokens_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[11] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.Pattern  ) e.Tokens */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    ePattern_b_1 = bb[1];
    ePattern_e_1 = be[1];
    eTokens_b_1 = bb[0];
    eTokens_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_ParseResult, "ParseResult");
    r05_alloc_insert_pos(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_close_bracket(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_insert_pos(n[9]);
    r05_alloc_close_call(n[10]);
    r05_push_stack(n[10]);
    r05_push_stack(n[3]);
    r05_link_brackets(n[7], n[8]);
    r05_link_brackets(n[5], n[6]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], ePattern_b_1, ePattern_e_1);
    r05_splice_tvar(n[4], tErrorList_1);
    r05_splice_tvar(n[4], tSymTable_1);
    r05_splice_tvar(n[4], tVarTable_1);
    r05_splice_evar(n[9], eTokens_b_1, eTokens_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseSentence_AfterParseResult(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eSentences_b_1;
    struct r05_node *eSentences_e_1;
    struct r05_node *ePattern_b_1;
    struct r05_node *ePattern_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eResult_b_1;
    struct r05_node *eResult_e_1;
    struct r05_node *eTokens_b_1;
    struct r05_node *eTokens_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[13] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.Sentences  ) ( e.Pattern  ) t.ErrorList t.SymTable t.VarTable ( e.Result  ) ( & TkSemicolon t.SrcPos  ) e.Tokens */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    eSentences_b_1 = bb[1];
    eSentences_e_1 = be[1];
    ePattern_b_1 = bb[2];
    ePattern_e_1 = be[2];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[4], &be[4], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkSemicolon, &bb[4], &be[4]))
      break;
    eResult_b_1 = bb[3];
    eResult_e_1 = be[3];
    eTokens_b_1 = bb[0];
    eTokens_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[4], &be[4]))
      break;
    if (! r05_empty_seq(bb[4], be[4]))
      break;

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_open_bracket(n[3]);
    r05_alloc_open_bracket(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_bracket(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_close_bracket(n[10]);
    r05_alloc_close_bracket(n[11]);
    r05_alloc_insert_pos(n[12]);
    r05_link_brackets(n[1], n[11]);
    r05_link_brackets(n[3], n[10]);
    r05_link_brackets(n[7], n[9]);
    r05_link_brackets(n[4], n[6]);
    r05_splice_tvar(n[0], tErrorList_1);
    r05_splice_tvar(n[0], tSymTable_1);
    r05_splice_evar(n[2], eSentences_b_1, eSentences_e_1);
    r05_splice_evar(n[5], ePattern_b_1, ePattern_e_1);
    r05_splice_evar(n[8], eResult_b_1, eResult_e_1);
    r05_splice_evar(n[12], eTokens_b_1, eTokens_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eSentences_b_1;
    struct r05_node *eSentences_e_1;
    struct r05_node *ePattern_b_1;
    struct r05_node *ePattern_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eResult_b_1;
    struct r05_node *eResult_e_1;
    struct r05_node *eTokens_b_1;
    struct r05_node *eTokens_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[18] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.Sentences  ) ( e.Pattern  ) t.ErrorList t.SymTable t.VarTable ( e.Result  ) ( & TkCloseBlock t.SrcPos  ) e.Tokens */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    eSentences_b_1 = bb[1];
    eSentences_e_1 = be[1];
    ePattern_b_1 = bb[2];
    ePattern_e_1 = be[2];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[4], &be[4], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkCloseBlock, &bb[4], &be[4]))
      break;
    eResult_b_1 = bb[3];
    eResult_e_1 = be[3];
    eTokens_b_1 = bb[0];
    eTokens_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[4], &be[4]))
      break;
    if (! r05_empty_seq(bb[4], be[4]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_chars("Missed semicolon", 16);
    r05_alloc_close_call(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_open_bracket(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_open_bracket(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_open_bracket(n[10]);
    r05_alloc_insert_pos(n[11]);
    r05_alloc_close_bracket(n[12]);
    r05_alloc_close_bracket(n[13]);
    r05_alloc_close_bracket(n[14]);
    r05_alloc_open_bracket(n[15]);
    r05_alloc_function(r05c_TkCloseBlock, "TkCloseBlock");
    r05_alloc_tvar(tSrcPos_1);
    r05_alloc_close_bracket(n[16]);
    r05_alloc_insert_pos(n[17]);
    r05_link_brackets(n[15], n[16]);
    r05_link_brackets(n[4], n[14]);
    r05_link_brackets(n[6], n[13]);
    r05_link_brackets(n[10], n[12]);
    r05_link_brackets(n[7], n[9]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSrcPos_1);
    r05_splice_tvar(n[3], tSymTable_1);
    r05_splice_evar(n[5], eSentences_b_1, eSentences_e_1);
    r05_splice_evar(n[8], ePattern_b_1, ePattern_e_1);
    r05_splice_evar(n[11], eResult_b_1, eResult_e_1);
    r05_splice_evar(n[17], eTokens_b_1, eTokens_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eSentences_b_1;
    struct r05_node *eSentences_e_1;
    struct r05_node *ePattern_b_1;
    struct r05_node *ePattern_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eResult_b_1;
    struct r05_node *eResult_e_1;
    struct r05_node *tUnexpected_1;
    struct r05_node *eTokens_b_1;
    struct r05_node *eTokens_e_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[16] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.Sentences  ) ( e.Pattern  ) t.ErrorList t.SymTable t.VarTable ( e.Result  ) t.Unexpected e.Tokens */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    eSentences_b_1 = bb[1];
    eSentences_e_1 = be[1];
    ePattern_b_1 = bb[2];
    ePattern_e_1 = be[2];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    eResult_b_1 = bb[3];
    eResult_e_1 = be[3];
    if (! r05_tvar_left(&tUnexpected_1, &bb[0], &be[0]))
      break;
    eTokens_b_1 = bb[0];
    eTokens_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_EL_AddUnexpected, "EL_AddUnexpected");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_chars("semicolon", 9);
    r05_alloc_close_call(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_open_bracket(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_open_bracket(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_open_bracket(n[10]);
    r05_alloc_insert_pos(n[11]);
    r05_alloc_close_bracket(n[12]);
    r05_alloc_close_bracket(n[13]);
    r05_alloc_close_bracket(n[14]);
    r05_alloc_tvar(tUnexpected_1);
    r05_alloc_insert_pos(n[15]);
    r05_link_brackets(n[4], n[14]);
    r05_link_brackets(n[6], n[13]);
    r05_link_brackets(n[10], n[12]);
    r05_link_brackets(n[7], n[9]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tUnexpected_1);
    r05_splice_tvar(n[3], tSymTable_1);
    r05_splice_evar(n[5], eSentences_b_1, eSentences_e_1);
    r05_splice_evar(n[8], ePattern_b_1, ePattern_e_1);
    r05_splice_evar(n[11], eResult_b_1, eResult_e_1);
    r05_splice_evar(n[15], eTokens_b_1, eTokens_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParsePattern(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBrackets_b_1;
    struct r05_node *eMultiBrackets_e_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *sChar_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[12] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBrackets  ) ( e.Scanned  ) ( & TkChar t.SrcPos s.Char  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkChar, &bb[3], &be[3]))
      break;
    eMultiBrackets_b_1 = bb[1];
    eMultiBrackets_e_1 = be[1];
    eScanned_b_1 = bb[2];
    eScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_svar_left(&sChar_1, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[3], be[3]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParsePattern, "ParsePattern");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_function(r05c_Symbol, "Symbol");
    r05_alloc_function(r05c_Char, "Char");
    r05_alloc_svar(sChar_1);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_alloc_close_call(n[11]);
    r05_push_stack(n[11]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[5], n[9]);
    r05_link_brackets(n[7], n[8]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_tvar(n[1], tVarTable_1);
    r05_splice_evar(n[3], eMultiBrackets_b_1, eMultiBrackets_e_1);
    r05_splice_evar(n[6], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[10], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBrackets_b_1;
    struct r05_node *eMultiBrackets_e_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *sNumber_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[12] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBrackets  ) ( e.Scanned  ) ( & TkNumber t.SrcPos s.Number  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkNumber, &bb[3], &be[3]))
      break;
    eMultiBrackets_b_1 = bb[1];
    eMultiBrackets_e_1 = be[1];
    eScanned_b_1 = bb[2];
    eScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_svar_left(&sNumber_1, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[3], be[3]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParsePattern, "ParsePattern");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_function(r05c_Symbol, "Symbol");
    r05_alloc_function(r05c_Number, "Number");
    r05_alloc_svar(sNumber_1);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_alloc_close_call(n[11]);
    r05_push_stack(n[11]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[5], n[9]);
    r05_link_brackets(n[7], n[8]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_tvar(n[1], tVarTable_1);
    r05_splice_evar(n[3], eMultiBrackets_b_1, eMultiBrackets_e_1);
    r05_splice_evar(n[6], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[10], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBrackets_b_1;
    struct r05_node *eMultiBrackets_e_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[16] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBrackets  ) ( e.Scanned  ) ( & TkName t.SrcPos e.Name  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkName, &bb[3], &be[3]))
      break;
    eMultiBrackets_b_1 = bb[1];
    eMultiBrackets_e_1 = be[1];
    eScanned_b_1 = bb[2];
    eScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[3], &be[3]))
      break;
    eName_b_1 = bb[3];
    eName_e_1 = be[3];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParsePattern, "ParsePattern");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_ST_AddFunctionCall, "ST_AddFunctionCall");
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_call(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_open_bracket(n[6]);
    r05_alloc_insert_pos(n[7]);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_open_bracket(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_alloc_open_bracket(n[11]);
    r05_alloc_function(r05c_Symbol, "Symbol");
    r05_alloc_function(r05c_Name, "Name");
    r05_alloc_evar(eName_b_1, eName_e_1);
    r05_alloc_close_bracket(n[12]);
    r05_alloc_close_bracket(n[13]);
    r05_alloc_insert_pos(n[14]);
    r05_alloc_close_call(n[15]);
    r05_push_stack(n[15]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[9], n[13]);
    r05_link_brackets(n[11], n[12]);
    r05_link_brackets(n[6], n[8]);
    r05_push_stack(n[4]);
    r05_push_stack(n[2]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[3], tSymTable_1);
    r05_splice_tvar(n[3], tSrcPos_1);
    r05_splice_evar(n[3], eName_b_1, eName_e_1);
    r05_splice_tvar(n[5], tVarTable_1);
    r05_splice_evar(n[7], eMultiBrackets_b_1, eMultiBrackets_e_1);
    r05_splice_evar(n[10], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[14], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *sMode_2;
    struct r05_node *sMode_1;
    struct r05_node *eIndex_b_2;
    struct r05_node *eIndex_e_2;
    struct r05_node *eIndex_b_1;
    struct r05_node *eIndex_e_1;
    struct r05_node *eVariables_B_b_1;
    struct r05_node *eVariables_B_e_1;
    struct r05_node *eVariables_E_b_1;
    struct r05_node *eVariables_E_e_1;
    struct r05_node *bb[7] = { 0 };
    struct r05_node *be[7] = { 0 };
    struct r05_node *n[20] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Variables_B ( s.Mode e.Index  ) e.Variables_E  ) ( e.MultiBracket  ) ( e.Scanned  ) ( & TkVariable t.SrcPos s.Mode e.Index  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[4], &be[4], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkVariable, &bb[4], &be[4]))
      break;
    eMultiBracket_b_1 = bb[2];
    eMultiBracket_e_1 = be[2];
    eScanned_b_1 = bb[3];
    eScanned_e_1 = be[3];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[4], &be[4]))
      break;
    if (! r05_svar_left(&sMode_1, &bb[4], &be[4]))
      break;
    eIndex_b_1 = bb[4];
    eIndex_e_1 = be[4];
    eVariables_B_b_1 = 0;
    eVariables_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[5] = bb[1];
      be[5] = be[1];
      if (! r05_brackets_left(&bb[6], &be[6], &bb[5], &be[5]))
        continue;
      if (! r05_repeated_stvar_left(&sMode_2, sMode_1, &bb[6], &be[6]))
        continue;
      if (! r05_repeated_evar_left(&eIndex_b_2, &eIndex_e_2, eIndex_b_1, eIndex_e_1, &bb[6], &be[6]))
        continue;
      if (! r05_empty_seq(bb[6], be[6]))
        continue;
      eVariables_E_b_1 = bb[5];
      eVariables_E_e_1 = be[5];

      r05_reset_allocator();
      r05_alloc_open_call(n[0]);
      r05_alloc_function(r05c_ParsePattern, "ParsePattern");
      r05_alloc_insert_pos(n[1]);
      r05_alloc_open_bracket(n[2]);
      r05_alloc_insert_pos(n[3]);
      r05_alloc_open_bracket(n[4]);
      r05_alloc_svar(sMode_1);
      r05_alloc_insert_pos(n[5]);
      r05_alloc_close_bracket(n[6]);
      r05_alloc_insert_pos(n[7]);
      r05_alloc_close_bracket(n[8]);
      r05_alloc_open_bracket(n[9]);
      r05_alloc_insert_pos(n[10]);
      r05_alloc_close_bracket(n[11]);
      r05_alloc_open_bracket(n[12]);
      r05_alloc_insert_pos(n[13]);
      r05_alloc_open_bracket(n[14]);
      r05_alloc_function(r05c_TkVariable, "TkVariable");
      r05_alloc_svar(sMode_1);
      r05_alloc_insert_pos(n[15]);
      r05_alloc_close_bracket(n[16]);
      r05_alloc_close_bracket(n[17]);
      r05_alloc_insert_pos(n[18]);
      r05_alloc_close_call(n[19]);
      r05_push_stack(n[19]);
      r05_push_stack(n[0]);
      r05_link_brackets(n[12], n[17]);
      r05_link_brackets(n[14], n[16]);
      r05_link_brackets(n[9], n[11]);
      r05_link_brackets(n[2], n[8]);
      r05_link_brackets(n[4], n[6]);
      r05_splice_tvar(n[1], tErrorList_1);
      r05_splice_tvar(n[1], tSymTable_1);
      r05_splice_evar(n[3], eVariables_B_b_1, eVariables_B_e_1);
      r05_splice_evar(n[5], eIndex_b_2, eIndex_e_2);
      r05_splice_evar(n[7], eVariables_E_b_1, eVariables_E_e_1);
      r05_splice_evar(n[10], eMultiBracket_b_1, eMultiBracket_e_1);
      r05_splice_evar(n[13], eScanned_b_1, eScanned_e_1);
      r05_splice_evar(n[15], eIndex_b_1, eIndex_e_1);
      r05_splice_evar(n[18], eTail_b_1, eTail_e_1);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eVariables_B_b_1, &eVariables_B_e_1, &bb[1], &be[1]));
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eVariables_b_1;
    struct r05_node *eVariables_e_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *sMode_1;
    struct r05_node *eIndex_b_1;
    struct r05_node *eIndex_e_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[18] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Variables  ) ( e.MultiBracket  ) ( e.Scanned  ) ( & TkVariable t.SrcPos s.Mode e.Index  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[4], &be[4], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkVariable, &bb[4], &be[4]))
      break;
    eVariables_b_1 = bb[1];
    eVariables_e_1 = be[1];
    eMultiBracket_b_1 = bb[2];
    eMultiBracket_e_1 = be[2];
    eScanned_b_1 = bb[3];
    eScanned_e_1 = be[3];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[4], &be[4]))
      break;
    if (! r05_svar_left(&sMode_1, &bb[4], &be[4]))
      break;
    eIndex_b_1 = bb[4];
    eIndex_e_1 = be[4];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParsePattern, "ParsePattern");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_open_bracket(n[3]);
    r05_alloc_svar(sMode_1);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_close_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_alloc_open_bracket(n[8]);
    r05_alloc_insert_pos(n[9]);
    r05_alloc_close_bracket(n[10]);
    r05_alloc_open_bracket(n[11]);
    r05_alloc_insert_pos(n[12]);
    r05_alloc_open_bracket(n[13]);
    r05_alloc_function(r05c_TkVariable, "TkVariable");
    r05_alloc_svar(sMode_1);
    r05_alloc_evar(eIndex_b_1, eIndex_e_1);
    r05_alloc_close_bracket(n[14]);
    r05_alloc_close_bracket(n[15]);
    r05_alloc_insert_pos(n[16]);
    r05_alloc_close_call(n[17]);
    r05_push_stack(n[17]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[11], n[15]);
    r05_link_brackets(n[13], n[14]);
    r05_link_brackets(n[8], n[10]);
    r05_link_brackets(n[2], n[7]);
    r05_link_brackets(n[3], n[5]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_evar(n[4], eIndex_b_1, eIndex_e_1);
    r05_splice_evar(n[6], eVariables_b_1, eVariables_e_1);
    r05_splice_evar(n[9], eMultiBracket_b_1, eMultiBracket_e_1);
    r05_splice_evar(n[12], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[16], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[13] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBracket  ) ( e.Scanned  ) ( & TkOpen t.SrcPos & TkOpenBracket  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkOpen, &bb[3], &be[3]))
      break;
    if (! r05_function_right(r05c_TkOpenBracket, &bb[3], &be[3]))
      break;
    eMultiBracket_b_1 = bb[1];
    eMultiBracket_e_1 = be[1];
    eScanned_b_1 = bb[2];
    eScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[3], be[3]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParsePattern, "ParsePattern");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_open_bracket(n[4]);
    r05_alloc_function(r05c_Brackets, "Brackets");
    r05_alloc_insert_pos(n[5]);
    r05_alloc_function(r05c_TkCloseBracket, "TkCloseBracket");
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_open_bracket(n[9]);
    r05_alloc_close_bracket(n[10]);
    r05_alloc_insert_pos(n[11]);
    r05_alloc_close_call(n[12]);
    r05_push_stack(n[12]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[9], n[10]);
    r05_link_brackets(n[2], n[8]);
    r05_link_brackets(n[4], n[7]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_tvar(n[1], tVarTable_1);
    r05_splice_evar(n[3], eMultiBracket_b_1, eMultiBracket_e_1);
    r05_splice_tvar(n[5], tSrcPos_1);
    r05_splice_evar(n[6], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[11], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[15] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBracket  ) ( e.Scanned  ) ( & TkOpen t.SrcPos & TkOpenCall  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkOpen, &bb[3], &be[3]))
      break;
    if (! r05_function_right(r05c_TkOpenCall, &bb[3], &be[3]))
      break;
    eMultiBracket_b_1 = bb[1];
    eMultiBracket_e_1 = be[1];
    eScanned_b_1 = bb[2];
    eScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[3], be[3]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParsePattern, "ParsePattern");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_chars("Unexpected call bracket in pattern expression", 45);
    r05_alloc_close_call(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_function(r05c_Brackets, "Brackets");
    r05_alloc_tvar(tSrcPos_1);
    r05_alloc_function(r05c_TkCloseCall, "TkCloseCall");
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_close_bracket(n[10]);
    r05_alloc_open_bracket(n[11]);
    r05_alloc_close_bracket(n[12]);
    r05_alloc_insert_pos(n[13]);
    r05_alloc_close_call(n[14]);
    r05_push_stack(n[14]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[11], n[12]);
    r05_link_brackets(n[5], n[10]);
    r05_link_brackets(n[7], n[9]);
    r05_push_stack(n[3]);
    r05_push_stack(n[1]);
    r05_splice_tvar(n[2], tErrorList_1);
    r05_splice_tvar(n[2], tSrcPos_1);
    r05_splice_tvar(n[4], tSymTable_1);
    r05_splice_tvar(n[4], tVarTable_1);
    r05_splice_evar(n[6], eMultiBracket_b_1, eMultiBracket_e_1);
    r05_splice_evar(n[8], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[13], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eInnerScanned_b_1;
    struct r05_node *eInnerScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sBracketsSign_1;
    struct r05_node *tInnerSrcPos_1;
    struct r05_node *sCloseBracket_2;
    struct r05_node *sCloseBracket_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *tCloseSrcPos_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[13] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ( s.BracketsSign t.InnerSrcPos s.CloseBracket e.Scanned  )  ) ( e.InnerScanned  ) ( & TkClose t.CloseSrcPos s.CloseBracket  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkClose, &bb[3], &be[3]))
      break;
    if (! r05_brackets_right(&bb[4], &be[4], &bb[1], &be[1]))
      break;
    eMultiBracket_b_1 = bb[1];
    eMultiBracket_e_1 = be[1];
    eInnerScanned_b_1 = bb[2];
    eInnerScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_svar_left(&sBracketsSign_1, &bb[4], &be[4]))
      break;
    if (! r05_tvar_left(&tInnerSrcPos_1, &bb[4], &be[4]))
      break;
    if (! r05_svar_left(&sCloseBracket_1, &bb[4], &be[4]))
      break;
    if (! r05_repeated_stvar_right(&sCloseBracket_2, sCloseBracket_1, &bb[3], &be[3]))
      break;
    eScanned_b_1 = bb[4];
    eScanned_e_1 = be[4];
    if (! r05_tvar_left(&tCloseSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[3], be[3]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParsePattern, "ParsePattern");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_svar(sBracketsSign_1);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_close_bracket(n[10]);
    r05_alloc_insert_pos(n[11]);
    r05_alloc_close_call(n[12]);
    r05_push_stack(n[12]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[5], n[10]);
    r05_link_brackets(n[7], n[9]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_tvar(n[1], tVarTable_1);
    r05_splice_evar(n[3], eMultiBracket_b_1, eMultiBracket_e_1);
    r05_splice_evar(n[6], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[8], eInnerScanned_b_1, eInnerScanned_e_1);
    r05_splice_evar(n[11], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eInnerScanned_b_1;
    struct r05_node *eInnerScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sBracketsSign_1;
    struct r05_node *tInnerSrcPos_1;
    struct r05_node *sCloseBracket_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *sOtherCloseBracket_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[21] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ( s.BracketsSign t.InnerSrcPos s.CloseBracket e.Scanned  )  ) ( e.InnerScanned  ) ( & TkClose t.SrcPos s.OtherCloseBracket  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkClose, &bb[3], &be[3]))
      break;
    if (! r05_brackets_right(&bb[4], &be[4], &bb[1], &be[1]))
      break;
    eMultiBracket_b_1 = bb[1];
    eMultiBracket_e_1 = be[1];
    eInnerScanned_b_1 = bb[2];
    eInnerScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_svar_left(&sBracketsSign_1, &bb[4], &be[4]))
      break;
    if (! r05_tvar_left(&tInnerSrcPos_1, &bb[4], &be[4]))
      break;
    if (! r05_svar_left(&sCloseBracket_1, &bb[4], &be[4]))
      break;
    eScanned_b_1 = bb[4];
    eScanned_e_1 = be[4];
    if (! r05_tvar_left(&tSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_svar_left(&sOtherCloseBracket_1, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[3], be[3]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParsePattern, "ParsePattern");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_chars("Unbalanced bracket \"", 20);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_StrFromBracket, "StrFromBracket");
    r05_alloc_svar(sBracketsSign_1);
    r05_alloc_close_call(n[4]);
    r05_alloc_char('\"');
    r05_alloc_close_call(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_open_bracket(n[10]);
    r05_alloc_insert_pos(n[11]);
    r05_alloc_open_bracket(n[12]);
    r05_alloc_svar(sBracketsSign_1);
    r05_alloc_insert_pos(n[13]);
    r05_alloc_close_bracket(n[14]);
    r05_alloc_close_bracket(n[15]);
    r05_alloc_open_bracket(n[16]);
    r05_alloc_function(r05c_TkClose, "TkClose");
    r05_alloc_insert_pos(n[17]);
    r05_alloc_svar(sOtherCloseBracket_1);
    r05_alloc_close_bracket(n[18]);
    r05_alloc_insert_pos(n[19]);
    r05_alloc_close_call(n[20]);
    r05_push_stack(n[20]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[16], n[18]);
    r05_link_brackets(n[10], n[15]);
    r05_link_brackets(n[12], n[14]);
    r05_link_brackets(n[7], n[9]);
    r05_push_stack(n[5]);
    r05_push_stack(n[1]);
    r05_push_stack(n[4]);
    r05_push_stack(n[3]);
    r05_splice_tvar(n[2], tErrorList_1);
    r05_splice_tvar(n[2], tInnerSrcPos_1);
    r05_splice_tvar(n[6], tSymTable_1);
    r05_splice_tvar(n[6], tVarTable_1);
    r05_splice_evar(n[8], eMultiBracket_b_1, eMultiBracket_e_1);
    r05_splice_evar(n[11], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[13], eInnerScanned_b_1, eInnerScanned_e_1);
    r05_splice_tvar(n[17], tSrcPos_1);
    r05_splice_evar(n[19], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *sCloseBracket_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[14] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable (  ) ( e.Scanned  ) ( & TkClose t.SrcPos s.CloseBracket  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkClose, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;
    eScanned_b_1 = bb[2];
    eScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_svar_left(&sCloseBracket_1, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[3], be[3]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParsePattern, "ParsePattern");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_chars("Unbalanced bracket \"", 20);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_StrFromBracket, "StrFromBracket");
    r05_alloc_svar(sCloseBracket_1);
    r05_alloc_close_call(n[4]);
    r05_alloc_char('\"');
    r05_alloc_close_call(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_open_bracket(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_alloc_close_bracket(n[11]);
    r05_alloc_insert_pos(n[12]);
    r05_alloc_close_call(n[13]);
    r05_push_stack(n[13]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[9], n[11]);
    r05_link_brackets(n[7], n[8]);
    r05_push_stack(n[5]);
    r05_push_stack(n[1]);
    r05_push_stack(n[4]);
    r05_push_stack(n[3]);
    r05_splice_tvar(n[2], tErrorList_1);
    r05_splice_tvar(n[2], tSrcPos_1);
    r05_splice_tvar(n[6], tSymTable_1);
    r05_splice_tvar(n[6], tVarTable_1);
    r05_splice_evar(n[10], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[12], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eInnerScanned_b_1;
    struct r05_node *eInnerScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sBracketsSign_1;
    struct r05_node *tInnerSrcPos_1;
    struct r05_node *sCloseBracket_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[18] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ( s.BracketsSign t.InnerSrcPos s.CloseBracket e.Scanned  )  ) ( e.InnerScanned  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_right(&bb[3], &be[3], &bb[1], &be[1]))
      break;
    eMultiBracket_b_1 = bb[1];
    eMultiBracket_e_1 = be[1];
    eInnerScanned_b_1 = bb[2];
    eInnerScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_svar_left(&sBracketsSign_1, &bb[3], &be[3]))
      break;
    if (! r05_tvar_left(&tInnerSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_svar_left(&sCloseBracket_1, &bb[3], &be[3]))
      break;
    eScanned_b_1 = bb[3];
    eScanned_e_1 = be[3];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParsePattern, "ParsePattern");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_chars("Unbalanced bracket \"", 20);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_StrFromBracket, "StrFromBracket");
    r05_alloc_svar(sBracketsSign_1);
    r05_alloc_close_call(n[4]);
    r05_alloc_char('\"');
    r05_alloc_close_call(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_open_bracket(n[10]);
    r05_alloc_insert_pos(n[11]);
    r05_alloc_open_bracket(n[12]);
    r05_alloc_svar(sBracketsSign_1);
    r05_alloc_insert_pos(n[13]);
    r05_alloc_close_bracket(n[14]);
    r05_alloc_close_bracket(n[15]);
    r05_alloc_insert_pos(n[16]);
    r05_alloc_close_call(n[17]);
    r05_push_stack(n[17]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[10], n[15]);
    r05_link_brackets(n[12], n[14]);
    r05_link_brackets(n[7], n[9]);
    r05_push_stack(n[5]);
    r05_push_stack(n[1]);
    r05_push_stack(n[4]);
    r05_push_stack(n[3]);
    r05_splice_tvar(n[2], tErrorList_1);
    r05_splice_tvar(n[2], tInnerSrcPos_1);
    r05_splice_tvar(n[6], tSymTable_1);
    r05_splice_tvar(n[6], tVarTable_1);
    r05_splice_evar(n[8], eMultiBracket_b_1, eMultiBracket_e_1);
    r05_splice_evar(n[11], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[13], eInnerScanned_b_1, eInnerScanned_e_1);
    r05_splice_evar(n[16], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *ePattern_b_1;
    struct r05_node *ePattern_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable (  ) ( e.Pattern  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;
    ePattern_b_1 = bb[2];
    ePattern_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_tvar(n[0], tErrorList_1);
    r05_splice_tvar(n[0], tSymTable_1);
    r05_splice_tvar(n[0], tVarTable_1);
    r05_splice_evar(n[2], ePattern_b_1, ePattern_e_1);
    r05_splice_evar(n[4], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_StrFromBracket(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & TkOpenBracket */
    if (! r05_function_left(r05c_TkOpenBracket, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('(');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & TkCloseBracket */
    if (! r05_function_left(r05c_TkCloseBracket, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char(')');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & TkOpenCall */
    if (! r05_function_left(r05c_TkOpenCall, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('<');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & TkCloseCall */
    if (! r05_function_left(r05c_TkCloseCall, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('>');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & Brackets */
    if (! r05_function_left(r05c_Brackets, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('(');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & CallBrackets */
    if (! r05_function_left(r05c_CallBrackets, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('<');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseResult(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *sChar_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[12] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBracket  ) ( e.Scanned  ) ( & TkChar t.SrcPos s.Char  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkChar, &bb[3], &be[3]))
      break;
    eMultiBracket_b_1 = bb[1];
    eMultiBracket_e_1 = be[1];
    eScanned_b_1 = bb[2];
    eScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_svar_left(&sChar_1, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[3], be[3]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseResult, "ParseResult");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_function(r05c_Symbol, "Symbol");
    r05_alloc_function(r05c_Char, "Char");
    r05_alloc_svar(sChar_1);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_alloc_close_call(n[11]);
    r05_push_stack(n[11]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[5], n[9]);
    r05_link_brackets(n[7], n[8]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_tvar(n[1], tVarTable_1);
    r05_splice_evar(n[3], eMultiBracket_b_1, eMultiBracket_e_1);
    r05_splice_evar(n[6], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[10], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *sNumber_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[12] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBracket  ) ( e.Scanned  ) ( & TkNumber t.SrcPos s.Number  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkNumber, &bb[3], &be[3]))
      break;
    eMultiBracket_b_1 = bb[1];
    eMultiBracket_e_1 = be[1];
    eScanned_b_1 = bb[2];
    eScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_svar_left(&sNumber_1, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[3], be[3]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseResult, "ParseResult");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_function(r05c_Symbol, "Symbol");
    r05_alloc_function(r05c_Number, "Number");
    r05_alloc_svar(sNumber_1);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_alloc_close_call(n[11]);
    r05_push_stack(n[11]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[5], n[9]);
    r05_link_brackets(n[7], n[8]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_tvar(n[1], tVarTable_1);
    r05_splice_evar(n[3], eMultiBracket_b_1, eMultiBracket_e_1);
    r05_splice_evar(n[6], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[10], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[16] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBracket  ) ( e.Scanned  ) ( & TkName t.SrcPos e.Name  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkName, &bb[3], &be[3]))
      break;
    eMultiBracket_b_1 = bb[1];
    eMultiBracket_e_1 = be[1];
    eScanned_b_1 = bb[2];
    eScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[3], &be[3]))
      break;
    eName_b_1 = bb[3];
    eName_e_1 = be[3];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseResult, "ParseResult");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_ST_AddFunctionCall, "ST_AddFunctionCall");
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_call(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_open_bracket(n[6]);
    r05_alloc_insert_pos(n[7]);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_open_bracket(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_alloc_open_bracket(n[11]);
    r05_alloc_function(r05c_Symbol, "Symbol");
    r05_alloc_function(r05c_Name, "Name");
    r05_alloc_evar(eName_b_1, eName_e_1);
    r05_alloc_close_bracket(n[12]);
    r05_alloc_close_bracket(n[13]);
    r05_alloc_insert_pos(n[14]);
    r05_alloc_close_call(n[15]);
    r05_push_stack(n[15]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[9], n[13]);
    r05_link_brackets(n[11], n[12]);
    r05_link_brackets(n[6], n[8]);
    r05_push_stack(n[4]);
    r05_push_stack(n[2]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[3], tSymTable_1);
    r05_splice_tvar(n[3], tSrcPos_1);
    r05_splice_evar(n[3], eName_b_1, eName_e_1);
    r05_splice_tvar(n[5], tVarTable_1);
    r05_splice_evar(n[7], eMultiBracket_b_1, eMultiBracket_e_1);
    r05_splice_evar(n[10], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[14], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *sMode_2;
    struct r05_node *sMode_1;
    struct r05_node *eIndex_b_2;
    struct r05_node *eIndex_e_2;
    struct r05_node *eIndex_b_1;
    struct r05_node *eIndex_e_1;
    struct r05_node *eVariables_B_b_1;
    struct r05_node *eVariables_B_e_1;
    struct r05_node *eVariables_E_b_1;
    struct r05_node *eVariables_E_e_1;
    struct r05_node *bb[7] = { 0 };
    struct r05_node *be[7] = { 0 };
    struct r05_node *n[20] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Variables_B ( s.Mode e.Index  ) e.Variables_E  ) ( e.MultiBracket  ) ( e.Scanned  ) ( & TkVariable t.SrcPos s.Mode e.Index  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[4], &be[4], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkVariable, &bb[4], &be[4]))
      break;
    eMultiBracket_b_1 = bb[2];
    eMultiBracket_e_1 = be[2];
    eScanned_b_1 = bb[3];
    eScanned_e_1 = be[3];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[4], &be[4]))
      break;
    if (! r05_svar_left(&sMode_1, &bb[4], &be[4]))
      break;
    eIndex_b_1 = bb[4];
    eIndex_e_1 = be[4];
    eVariables_B_b_1 = 0;
    eVariables_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[5] = bb[1];
      be[5] = be[1];
      if (! r05_brackets_left(&bb[6], &be[6], &bb[5], &be[5]))
        continue;
      if (! r05_repeated_stvar_left(&sMode_2, sMode_1, &bb[6], &be[6]))
        continue;
      if (! r05_repeated_evar_left(&eIndex_b_2, &eIndex_e_2, eIndex_b_1, eIndex_e_1, &bb[6], &be[6]))
        continue;
      if (! r05_empty_seq(bb[6], be[6]))
        continue;
      eVariables_E_b_1 = bb[5];
      eVariables_E_e_1 = be[5];

      r05_reset_allocator();
      r05_alloc_open_call(n[0]);
      r05_alloc_function(r05c_ParseResult, "ParseResult");
      r05_alloc_insert_pos(n[1]);
      r05_alloc_open_bracket(n[2]);
      r05_alloc_insert_pos(n[3]);
      r05_alloc_open_bracket(n[4]);
      r05_alloc_svar(sMode_1);
      r05_alloc_insert_pos(n[5]);
      r05_alloc_close_bracket(n[6]);
      r05_alloc_insert_pos(n[7]);
      r05_alloc_close_bracket(n[8]);
      r05_alloc_open_bracket(n[9]);
      r05_alloc_insert_pos(n[10]);
      r05_alloc_close_bracket(n[11]);
      r05_alloc_open_bracket(n[12]);
      r05_alloc_insert_pos(n[13]);
      r05_alloc_open_bracket(n[14]);
      r05_alloc_function(r05c_TkVariable, "TkVariable");
      r05_alloc_svar(sMode_1);
      r05_alloc_insert_pos(n[15]);
      r05_alloc_close_bracket(n[16]);
      r05_alloc_close_bracket(n[17]);
      r05_alloc_insert_pos(n[18]);
      r05_alloc_close_call(n[19]);
      r05_push_stack(n[19]);
      r05_push_stack(n[0]);
      r05_link_brackets(n[12], n[17]);
      r05_link_brackets(n[14], n[16]);
      r05_link_brackets(n[9], n[11]);
      r05_link_brackets(n[2], n[8]);
      r05_link_brackets(n[4], n[6]);
      r05_splice_tvar(n[1], tErrorList_1);
      r05_splice_tvar(n[1], tSymTable_1);
      r05_splice_evar(n[3], eVariables_B_b_1, eVariables_B_e_1);
      r05_splice_evar(n[5], eIndex_b_2, eIndex_e_2);
      r05_splice_evar(n[7], eVariables_E_b_1, eVariables_E_e_1);
      r05_splice_evar(n[10], eMultiBracket_b_1, eMultiBracket_e_1);
      r05_splice_evar(n[13], eScanned_b_1, eScanned_e_1);
      r05_splice_evar(n[15], eIndex_b_1, eIndex_e_1);
      r05_splice_evar(n[18], eTail_b_1, eTail_e_1);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eVariables_B_b_1, &eVariables_B_e_1, &bb[1], &be[1]));
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *eVariables_b_1;
    struct r05_node *eVariables_e_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *sMode_1;
    struct r05_node *eIndex_b_1;
    struct r05_node *eIndex_e_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[17] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable ( e.Variables  ) ( e.MultiBracket  ) ( e.Scanned  ) ( & TkVariable t.SrcPos s.Mode e.Index  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[4], &be[4], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkVariable, &bb[4], &be[4]))
      break;
    eVariables_b_1 = bb[1];
    eVariables_e_1 = be[1];
    eMultiBracket_b_1 = bb[2];
    eMultiBracket_e_1 = be[2];
    eScanned_b_1 = bb[3];
    eScanned_e_1 = be[3];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[4], &be[4]))
      break;
    if (! r05_svar_left(&sMode_1, &bb[4], &be[4]))
      break;
    eIndex_b_1 = bb[4];
    eIndex_e_1 = be[4];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseResult, "ParseResult");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_chars("Variable ", 9);
    r05_alloc_svar(sMode_1);
    r05_alloc_char('.');
    r05_alloc_insert_pos(n[3]);
    r05_alloc_chars(" not found", 10);
    r05_alloc_close_call(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_open_bracket(n[6]);
    r05_alloc_insert_pos(n[7]);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_open_bracket(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_alloc_close_bracket(n[11]);
    r05_alloc_open_bracket(n[12]);
    r05_alloc_insert_pos(n[13]);
    r05_alloc_close_bracket(n[14]);
    r05_alloc_insert_pos(n[15]);
    r05_alloc_close_call(n[16]);
    r05_push_stack(n[16]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[12], n[14]);
    r05_link_brackets(n[9], n[11]);
    r05_link_brackets(n[6], n[8]);
    r05_push_stack(n[4]);
    r05_push_stack(n[1]);
    r05_splice_tvar(n[2], tErrorList_1);
    r05_splice_tvar(n[2], tSrcPos_1);
    r05_splice_evar(n[3], eIndex_b_1, eIndex_e_1);
    r05_splice_tvar(n[5], tSymTable_1);
    r05_splice_evar(n[7], eVariables_b_1, eVariables_e_1);
    r05_splice_evar(n[10], eMultiBracket_b_1, eMultiBracket_e_1);
    r05_splice_evar(n[13], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[15], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *sOpenBracket_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[17] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBracket  ) ( e.Scanned  ) ( & TkOpen t.SrcPos s.OpenBracket  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkOpen, &bb[3], &be[3]))
      break;
    eMultiBracket_b_1 = bb[1];
    eMultiBracket_e_1 = be[1];
    eScanned_b_1 = bb[2];
    eScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_svar_left(&sOpenBracket_1, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[3], be[3]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseResult, "ParseResult");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_open_bracket(n[4]);
    r05_alloc_open_call(n[5]);
    r05_alloc_function(r05c_BracketPairName, "BracketPairName");
    r05_alloc_svar(sOpenBracket_1);
    r05_alloc_close_call(n[6]);
    r05_alloc_insert_pos(n[7]);
    r05_alloc_open_call(n[8]);
    r05_alloc_function(r05c_CloseBracketName, "CloseBracketName");
    r05_alloc_svar(sOpenBracket_1);
    r05_alloc_close_call(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_alloc_close_bracket(n[11]);
    r05_alloc_close_bracket(n[12]);
    r05_alloc_open_bracket(n[13]);
    r05_alloc_close_bracket(n[14]);
    r05_alloc_insert_pos(n[15]);
    r05_alloc_close_call(n[16]);
    r05_push_stack(n[16]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[13], n[14]);
    r05_link_brackets(n[2], n[12]);
    r05_link_brackets(n[4], n[11]);
    r05_push_stack(n[9]);
    r05_push_stack(n[8]);
    r05_push_stack(n[6]);
    r05_push_stack(n[5]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_tvar(n[1], tVarTable_1);
    r05_splice_evar(n[3], eMultiBracket_b_1, eMultiBracket_e_1);
    r05_splice_tvar(n[7], tSrcPos_1);
    r05_splice_evar(n[10], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[15], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eInnerScanned_b_1;
    struct r05_node *eInnerScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sBracketsSign_1;
    struct r05_node *tOpenSrcPos_1;
    struct r05_node *sCloseBracket_2;
    struct r05_node *sCloseBracket_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[13] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ( s.BracketsSign t.OpenSrcPos s.CloseBracket e.Scanned  )  ) ( e.InnerScanned  ) ( & TkClose t.SrcPos s.CloseBracket  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkClose, &bb[3], &be[3]))
      break;
    if (! r05_brackets_right(&bb[4], &be[4], &bb[1], &be[1]))
      break;
    eMultiBracket_b_1 = bb[1];
    eMultiBracket_e_1 = be[1];
    eInnerScanned_b_1 = bb[2];
    eInnerScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_svar_left(&sBracketsSign_1, &bb[4], &be[4]))
      break;
    if (! r05_tvar_left(&tOpenSrcPos_1, &bb[4], &be[4]))
      break;
    if (! r05_svar_left(&sCloseBracket_1, &bb[4], &be[4]))
      break;
    if (! r05_repeated_stvar_right(&sCloseBracket_2, sCloseBracket_1, &bb[3], &be[3]))
      break;
    eScanned_b_1 = bb[4];
    eScanned_e_1 = be[4];
    if (! r05_tvar_left(&tSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[3], be[3]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseResult, "ParseResult");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_svar(sBracketsSign_1);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_close_bracket(n[10]);
    r05_alloc_insert_pos(n[11]);
    r05_alloc_close_call(n[12]);
    r05_push_stack(n[12]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[5], n[10]);
    r05_link_brackets(n[7], n[9]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSymTable_1);
    r05_splice_tvar(n[1], tVarTable_1);
    r05_splice_evar(n[3], eMultiBracket_b_1, eMultiBracket_e_1);
    r05_splice_evar(n[6], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[8], eInnerScanned_b_1, eInnerScanned_e_1);
    r05_splice_evar(n[11], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eMultiBracket_b_1;
    struct r05_node *eMultiBracket_e_1;
    struct r05_node *eInnerScanned_b_1;
    struct r05_node *eInnerScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sBracketsSign_1;
    struct r05_node *tOpenSrcPos_1;
    struct r05_node *sCloseBracket_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[18] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ( s.BracketsSign t.OpenSrcPos s.CloseBracket e.Scanned  )  ) ( e.InnerScanned  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_right(&bb[3], &be[3], &bb[1], &be[1]))
      break;
    eMultiBracket_b_1 = bb[1];
    eMultiBracket_e_1 = be[1];
    eInnerScanned_b_1 = bb[2];
    eInnerScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_svar_left(&sBracketsSign_1, &bb[3], &be[3]))
      break;
    if (! r05_tvar_left(&tOpenSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_svar_left(&sCloseBracket_1, &bb[3], &be[3]))
      break;
    eScanned_b_1 = bb[3];
    eScanned_e_1 = be[3];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseResult, "ParseResult");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_chars("Unbalanced bracket \"", 20);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_StrFromBracket, "StrFromBracket");
    r05_alloc_svar(sBracketsSign_1);
    r05_alloc_close_call(n[4]);
    r05_alloc_char('\"');
    r05_alloc_close_call(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_open_bracket(n[10]);
    r05_alloc_insert_pos(n[11]);
    r05_alloc_open_bracket(n[12]);
    r05_alloc_svar(sBracketsSign_1);
    r05_alloc_insert_pos(n[13]);
    r05_alloc_close_bracket(n[14]);
    r05_alloc_close_bracket(n[15]);
    r05_alloc_insert_pos(n[16]);
    r05_alloc_close_call(n[17]);
    r05_push_stack(n[17]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[10], n[15]);
    r05_link_brackets(n[12], n[14]);
    r05_link_brackets(n[7], n[9]);
    r05_push_stack(n[5]);
    r05_push_stack(n[1]);
    r05_push_stack(n[4]);
    r05_push_stack(n[3]);
    r05_splice_tvar(n[2], tErrorList_1);
    r05_splice_tvar(n[2], tOpenSrcPos_1);
    r05_splice_tvar(n[6], tSymTable_1);
    r05_splice_tvar(n[6], tVarTable_1);
    r05_splice_evar(n[8], eMultiBracket_b_1, eMultiBracket_e_1);
    r05_splice_evar(n[11], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[13], eInnerScanned_b_1, eInnerScanned_e_1);
    r05_splice_evar(n[16], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *sCloseBracket_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[14] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable (  ) ( e.Scanned  ) ( & TkClose t.SrcPos s.CloseBracket  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkClose, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;
    eScanned_b_1 = bb[2];
    eScanned_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];
    if (! r05_tvar_left(&tSrcPos_1, &bb[3], &be[3]))
      break;
    if (! r05_svar_left(&sCloseBracket_1, &bb[3], &be[3]))
      break;
    if (! r05_empty_seq(bb[3], be[3]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ParseResult, "ParseResult");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_chars("Unbalanced bracket \"", 20);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_StrFromBracket, "StrFromBracket");
    r05_alloc_svar(sCloseBracket_1);
    r05_alloc_close_call(n[4]);
    r05_alloc_char('\"');
    r05_alloc_close_call(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_open_bracket(n[7]);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_open_bracket(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_alloc_close_bracket(n[11]);
    r05_alloc_insert_pos(n[12]);
    r05_alloc_close_call(n[13]);
    r05_push_stack(n[13]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[9], n[11]);
    r05_link_brackets(n[7], n[8]);
    r05_push_stack(n[5]);
    r05_push_stack(n[1]);
    r05_push_stack(n[4]);
    r05_push_stack(n[3]);
    r05_splice_tvar(n[2], tErrorList_1);
    r05_splice_tvar(n[2], tSrcPos_1);
    r05_splice_tvar(n[6], tSymTable_1);
    r05_splice_tvar(n[6], tVarTable_1);
    r05_splice_evar(n[10], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[12], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSymTable_1;
    struct r05_node *tVarTable_1;
    struct r05_node *eResult_b_1;
    struct r05_node *eResult_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList t.SymTable t.VarTable (  ) ( e.Result  ) e.Tail */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSymTable_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tVarTable_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;
    eResult_b_1 = bb[2];
    eResult_e_1 = be[2];
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_tvar(n[0], tErrorList_1);
    r05_splice_tvar(n[0], tSymTable_1);
    r05_splice_tvar(n[0], tVarTable_1);
    r05_splice_evar(n[2], eResult_b_1, eResult_e_1);
    r05_splice_evar(n[4], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_BracketPairName(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & TkOpenBracket */
    if (! r05_function_left(r05c_TkOpenBracket, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_function(r05c_Brackets, "Brackets");
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & TkOpenCall */
    if (! r05_function_left(r05c_TkOpenCall, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_function(r05c_CallBrackets, "CallBrackets");
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_CloseBracketName(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & TkOpenBracket */
    if (! r05_function_left(r05c_TkOpenBracket, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_function(r05c_TkCloseBracket, "TkCloseBracket");
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & TkOpenCall */
    if (! r05_function_left(r05c_TkOpenCall, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_function(r05c_TkCloseCall, "TkCloseCall");
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}


/* End of file */

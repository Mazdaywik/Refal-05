// Automatically generated file. Don't edit!
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
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eSrcName_b_1;
    static struct r05_node *eSrcName_e_1;
    static struct r05_node *eOutputName_b_1;
    static struct r05_node *eOutputName_e_1;
    static struct r05_node *eSrcName_b_2;
    static struct r05_node *eSrcName_e_2;
    static struct r05_node *eSrcName_b_3;
    static struct r05_node *eSrcName_e_3;
    // ( e.SrcName ) e.OutputName
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eSrcName_b_1 = bb_1;
    eSrcName_e_1 = be_1;
    eOutputName_b_1 = bb_0;
    eOutputName_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eSrcName_b_2, eSrcName_e_2, eSrcName_b_1, eSrcName_e_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_evar( eSrcName_b_3, eSrcName_e_3, eSrcName_b_2, eSrcName_e_2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Fetch, "Fetch" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_LexFolding, "LexFolding" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_Seq, "Seq" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_PrepareBracket, "PrepareBracket" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_name( n12, r05c_Pass_Lexer, "Pass_Lexer" ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_name( n16, r05c_Pass_CheckUnresolved, "Pass_CheckUnresolved" ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_name( n18, r05c_Pass_Final, "Pass_Final" ) )
      return R05_NO_MEMORY;
    struct r05_node *n19 = 0;
    if( ! refalrts::alloc_open_bracket( n19 ) )
      return R05_NO_MEMORY;
    struct r05_node *n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return R05_NO_MEMORY;
    struct r05_node *n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return R05_NO_MEMORY;
    struct r05_node *n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return R05_NO_MEMORY;
    struct r05_node *n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return R05_NO_MEMORY;
    struct r05_node *n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return R05_NO_MEMORY;
    struct r05_node *n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n25 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::push_stack( n24 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n17, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n21, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eSrcName_b_3, eSrcName_e_3 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n11, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eSrcName_b_2, eSrcName_e_2 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n7, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eSrcName_b_1, eSrcName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_PrepareBracket(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tSrcPos_1;
    // ( & TkOpenBracket t.SrcPos )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkOpenBracket, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkOpen, "TkOpen" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_TkOpenBracket, "TkOpenBracket" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tSrcPos_1;
    // ( & TkCloseBracket t.SrcPos )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkCloseBracket, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkClose, "TkClose" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_TkCloseBracket, "TkCloseBracket" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tSrcPos_1;
    // ( & TkOpenCall t.SrcPos )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkOpenCall, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkOpen, "TkOpen" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_TkOpenCall, "TkOpenCall" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tSrcPos_1;
    // ( & TkCloseCall t.SrcPos )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkCloseCall, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkClose, "TkClose" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_TkCloseCall, "TkCloseCall" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tOtherToken_1;
    // t.OtherToken
    if( ! refalrts::tvar_left( tOtherToken_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_stvar( res, tOtherToken_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Pass_Lexer(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eSrcName_b_1;
    static struct r05_node *eSrcName_e_1;
    static struct r05_node *eLexFolding_b_1;
    static struct r05_node *eLexFolding_e_1;
    // ( e.SrcName ) e.LexFolding
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eSrcName_b_1 = bb_1;
    eSrcName_e_1 = be_1;
    eLexFolding_b_1 = bb_0;
    eLexFolding_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseElements, "ParseElements" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_EL_Create, "EL_Create" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_ST_Create, "ST_Create" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eLexFolding_b_1, eLexFolding_e_1 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eSrcName_b_1, eSrcName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Pass_CheckUnresolved(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eLines_b_1;
    static struct r05_node *eLines_e_1;
    // t.ErrorList t.SymTable e.Lines
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    eLines_b_1 = bb_0;
    eLines_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ST_CheckUnresolved, "ST_CheckUnresolved" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eLines_b_1, eLines_e_1 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Pass_Final(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eSrcName_b_1;
    static struct r05_node *eSrcName_e_1;
    static struct r05_node *eOutputName_b_1;
    static struct r05_node *eOutputName_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eLines_b_1;
    static struct r05_node *eLines_e_1;
    // ( e.SrcName ) ( e.OutputName ) t.ErrorList t.SymTable e.Lines
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eSrcName_b_1 = bb_1;
    eSrcName_e_1 = be_1;
    eOutputName_b_1 = bb_2;
    eOutputName_e_1 = be_2;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    eLines_b_1 = bb_0;
    eLines_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ST_Destroy, "ST_Destroy" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_Pass_Final_SwNoErrors, "Pass_Final_SwNoErrors" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_name( n10, r05c_EL_Destroy, "EL_Destroy" ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n12 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eLines_b_1, eLines_e_1 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eSrcName_b_1, eSrcName_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Pass_Final_SwNoErrors(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eSrcName_b_1;
    static struct r05_node *eSrcName_e_1;
    static struct r05_node *eOutputName_b_1;
    static struct r05_node *eOutputName_e_1;
    static struct r05_node *eLines_b_1;
    static struct r05_node *eLines_e_1;
    static struct r05_node *eOutputName_b_2;
    static struct r05_node *eOutputName_e_2;
    static struct r05_node *eOutputName_b_3;
    static struct r05_node *eOutputName_e_3;
    // ( e.SrcName ) ( e.OutputName ) e.Lines & EL_NoErrors
    if( ! refalrts::function_right( r05c_EL_NoErrors, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eSrcName_b_1 = bb_1;
    eSrcName_e_1 = be_1;
    eOutputName_b_1 = bb_2;
    eOutputName_e_1 = be_2;
    eLines_b_1 = bb_0;
    eLines_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eOutputName_b_2, eOutputName_e_2, eOutputName_b_1, eOutputName_e_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_evar( eOutputName_b_3, eOutputName_e_3, eOutputName_b_2, eOutputName_e_2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_SaveFile, "SaveFile" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_GenPostprocess, "GenPostprocess" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_name( n12, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eOutputName_b_3, eOutputName_e_3 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eLines_b_1, eLines_e_1 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eOutputName_b_2, eOutputName_e_2 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eSrcName_b_1, eSrcName_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // ( e.SrcName ) ( e.OutputName ) e.Lines & EL_HasErrors
    if( ! refalrts::function_right( r05c_EL_HasErrors, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    // Unused closed variable e.SrcName
    // Unused closed variable e.OutputName
    // Unused closed variable e.Lines

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Fails, "Fails" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseElements(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eGenerated_b_1;
    static struct r05_node *eGenerated_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *tSymTable_2;
    // t.ErrorList t.SymTable ( e.Generated ) ( & TkEOF t.SrcPos )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkEOF, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eGenerated_b_1 = bb_2;
    eGenerated_e_1 = be_2;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tSymTable_2, tSymTable_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_GenDeclaration, "GenDeclaration" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_ST_AllFunctions, "ST_AllFunctions" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, tSymTable_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eGenerated_b_1;
    static struct r05_node *eGenerated_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sDirective_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable ( e.Generated ) ( & TkDirective t.SrcPos s.Directive ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkDirective, bb_2, be_2 ) )
      break;
    eGenerated_b_1 = bb_1;
    eGenerated_e_1 = be_1;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sDirective_1, bb_2, be_2 ) )
      break;
    if (! r05_empty_seq(bb_2, be_2))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseElements_DirectiveParsed, "ParseElements_DirectiveParsed" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_ParseElement_SwDirective, "ParseElement_SwDirective" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sDirective_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eGenerated_b_1;
    static struct r05_node *eGenerated_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    // t.ErrorList t.SymTable ( e.Generated ) ( & TkName t.SrcPos e.Name ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkName, bb_2, be_2 ) )
      break;
    eGenerated_b_1 = bb_1;
    eGenerated_e_1 = be_1;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_2, be_2 ) )
      break;
    eName_b_1 = bb_2;
    eName_e_1 = be_2;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseElements_FunctionParsed, "ParseElements_FunctionParsed" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_ParseFunction, "ParseFunction" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_GN_Local, "GN_Local" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_name( n10, r05c_ST_AddDefined, "ST_AddDefined" ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_name( n11, r05c_GN_Local, "GN_Local" ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eGenerated_b_1;
    static struct r05_node *eGenerated_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable ( e.Generated ) ( & TkSemicolon t.SrcPos ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkSemicolon, bb_2, be_2 ) )
      break;
    eGenerated_b_1 = bb_1;
    eGenerated_e_1 = be_1;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_2, be_2 ) )
      break;
    if (! r05_empty_seq(bb_2, be_2))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseElements, "ParseElements" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eGenerated_b_1;
    static struct r05_node *eGenerated_e_1;
    static struct r05_node *eCode_b_1;
    static struct r05_node *eCode_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sRow_1;
    static struct r05_node *sCol_1;
    // t.ErrorList t.SymTable ( e.Generated ) ( & TkNative ( s.Row s.Col ) e.Code ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkNative, bb_2, be_2 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) )
      break;
    eGenerated_b_1 = bb_1;
    eGenerated_e_1 = be_1;
    eCode_b_1 = bb_2;
    eCode_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::svar_left( sRow_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sCol_1, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseElements, "ParseElements" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_GenNative, "GenNative" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCode_b_1, eCode_e_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eGenerated_b_1;
    static struct r05_node *eGenerated_e_1;
    static struct r05_node *tUnexpected_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    // t.ErrorList t.SymTable ( e.Generated ) t.Unexpected e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eGenerated_b_1 = bb_1;
    eGenerated_e_1 = be_1;
    if( ! refalrts::tvar_left( tUnexpected_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseElements, "ParseElements" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_EL_AddUnexpected, "EL_AddUnexpected" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "directive or name", 17) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_stvar( res, tUnexpected_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_GenDeclaration(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    // ( & GN_Entry e.Name )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_GN_Entry, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_GenExtern, "GenExtern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    // ( & GN_Local e.Name )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_GN_Local, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_GenForward, "GenForward" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseElements_DirectiveParsed(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eGenerated_b_1;
    static struct r05_node *eGenerated_e_1;
    static struct r05_node *eNewGenerated_b_1;
    static struct r05_node *eNewGenerated_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    // ( e.Generated ) ( e.NewGenerated ) t.ErrorList t.SymTable e.Tail
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eGenerated_b_1 = bb_1;
    eGenerated_e_1 = be_1;
    eNewGenerated_b_1 = bb_2;
    eNewGenerated_e_1 = be_2;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseElements, "ParseElements" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eNewGenerated_b_1, eNewGenerated_e_1 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseElements_FunctionParsed(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eGenerated_b_1;
    static struct r05_node *eGenerated_e_1;
    static struct r05_node *eNewGenerated_b_1;
    static struct r05_node *eNewGenerated_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    // ( e.Generated ) ( e.NewGenerated ) t.ErrorList t.SymTable e.Tail
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eGenerated_b_1 = bb_1;
    eGenerated_e_1 = be_1;
    eNewGenerated_b_1 = bb_2;
    eNewGenerated_e_1 = be_2;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseElements, "ParseElements" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eNewGenerated_b_1, eNewGenerated_e_1 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScopeClassFromEnumDirective(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & EEnum
    if( ! refalrts::function_left( r05c_EEnum, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_GN_Entry, "GN_Entry" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & Enum
    if( ! refalrts::function_left( r05c_Enum, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_GN_Local, "GN_Local" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseElement_SwDirective(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    // t.ErrorList t.SymTable & Entry ( & TkName t.SrcPos e.Name ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Entry, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkName, bb_1, be_1 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_1, be_1 ) )
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseFunction, "ParseFunction" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_GN_Entry, "GN_Entry" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_ST_AddDefined, "ST_AddDefined" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_GN_Entry, "GN_Entry" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tUnexpected_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tUnexpected_2;
    // t.ErrorList t.SymTable & Entry t.Unexpected e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Entry, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tUnexpected_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tUnexpected_2, tUnexpected_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_EL_AddUnexpected, "EL_AddUnexpected" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "function name", 13) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tUnexpected_2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_stvar( res, tUnexpected_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    // t.ErrorList t.SymTable & Extern e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Extern, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_ParseNameList_Extern, "ParseNameList_Extern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *sDirective_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    // t.ErrorList t.SymTable s.Directive e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDirective_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseNameList_Enum, "ParseNameList_Enum" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_ScopeClassFromEnumDirective, "ScopeClassFromEnumDirective" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sDirective_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseNameList_Enum(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eGenerated_b_1;
    static struct r05_node *eGenerated_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *sScopeClass_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *sScopeClass_2;
    static struct r05_node *sScopeClass_3;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    // ( e.Generated ) t.ErrorList t.SymTable s.ScopeClass ( & TkName t.SrcPos e.Name ) e.Tail
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eGenerated_b_1 = bb_1;
    eGenerated_e_1 = be_1;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkName, bb_2, be_2 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_2, be_2 ) )
      break;
    eName_b_1 = bb_2;
    eName_e_1 = be_2;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sScopeClass_2, sScopeClass_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sScopeClass_3, sScopeClass_2 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseNameList_Tail_Enum, "ParseNameList_Tail_Enum" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_GenEnum, "GenEnum" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_ST_AddDefined, "ST_AddDefined" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_3 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_stvar( res, sScopeClass_2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eGenerated_b_1;
    static struct r05_node *eGenerated_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tUnexpected_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sScopeClass_1;
    static struct r05_node *tUnexpected_2;
    // ( e.Generated ) t.ErrorList t.SymTable s.ScopeClass t.Unexpected e.Tail
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eGenerated_b_1 = bb_1;
    eGenerated_e_1 = be_1;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tUnexpected_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tUnexpected_2, tUnexpected_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_EL_AddUnexpected, "EL_AddUnexpected" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "function name", 13) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tUnexpected_2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_stvar( res, tUnexpected_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseNameList_Tail_Enum(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eGenerated_b_1;
    static struct r05_node *eGenerated_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *sScopeClass_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    // ( e.Generated ) t.ErrorList t.SymTable s.ScopeClass ( & TkComma t.SrcPos ) e.Tail
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eGenerated_b_1 = bb_1;
    eGenerated_e_1 = be_1;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkComma, bb_2, be_2 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_2, be_2 ) )
      break;
    if (! r05_empty_seq(bb_2, be_2))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseNameList_Enum, "ParseNameList_Enum" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eGenerated_b_1;
    static struct r05_node *eGenerated_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sScopeClass_1;
    static struct r05_node *tSrcPos_1;
    // ( e.Generated ) t.ErrorList t.SymTable s.ScopeClass ( & TkSemicolon t.SrcPos ) e.Tail
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eGenerated_b_1 = bb_1;
    eGenerated_e_1 = be_1;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkSemicolon, bb_2, be_2 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_2, be_2 ) )
      break;
    if (! r05_empty_seq(bb_2, be_2))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eGenerated_b_1;
    static struct r05_node *eGenerated_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tUnexpected_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sScopeClass_1;
    static struct r05_node *tUnexpected_2;
    // ( e.Generated ) t.ErrorList t.SymTable s.ScopeClass t.Unexpected e.Tail
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eGenerated_b_1 = bb_1;
    eGenerated_e_1 = be_1;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tUnexpected_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tUnexpected_2, tUnexpected_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_EL_AddUnexpected, "EL_AddUnexpected" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "comma or semicolon", 18) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tUnexpected_2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_stvar( res, tUnexpected_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseNameList_Extern(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable ( & TkName t.SrcPos e.Name ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkName, bb_1, be_1 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_1, be_1 ) )
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseNameList_Tail_Extern, "ParseNameList_Tail_Extern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_ST_AddDeclared, "ST_AddDeclared" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tUnexpected_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tUnexpected_2;
    // t.ErrorList t.SymTable t.Unexpected e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tUnexpected_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tUnexpected_2, tUnexpected_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_EL_AddUnexpected, "EL_AddUnexpected" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, "function name", 13) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tUnexpected_2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, n2, n3 );
    res = refalrts::splice_stvar( res, tUnexpected_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseNameList_Tail_Extern(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable ( & TkComma t.SrcPos ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkComma, bb_1, be_1 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseNameList_Extern, "ParseNameList_Extern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable ( & TkSemicolon t.SrcPos ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkSemicolon, bb_1, be_1 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tUnexpected_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tUnexpected_2;
    // t.ErrorList t.SymTable t.Unexpected e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tUnexpected_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tUnexpected_2, tUnexpected_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_EL_AddUnexpected, "EL_AddUnexpected" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, "comma or semicolon", 18) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tUnexpected_2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, n2, n3 );
    res = refalrts::splice_stvar( res, tUnexpected_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseFunction(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sScopeClass_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    // s.ScopeClass ( e.Name ) t.ErrorList t.SymTable ( & TkOpenBlock t.SrcPos ) e.Tail
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkOpenBlock, bb_2, be_2 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_2, be_2 ) )
      break;
    if (! r05_empty_seq(bb_2, be_2))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseFunction_BlockParsed, "ParseFunction_BlockParsed" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_ParseBlock, "ParseBlock" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tUnexpected_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sScopeClass_1;
    static struct r05_node *tUnexpected_2;
    // s.ScopeClass ( e.Name ) t.ErrorList t.SymTable t.Unexpected e.Tail
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    // Unused closed variable e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tUnexpected_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tUnexpected_2, tUnexpected_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_EL_AddUnexpected, "EL_AddUnexpected" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "open brace", 10) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tUnexpected_2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_stvar( res, tUnexpected_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
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
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sScopeClass_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eSentences_b_1;
    static struct r05_node *eSentences_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    // s.ScopeClass ( e.Name ) ( & Sentences e.Sentences ) t.ErrorList t.SymTable e.Tail
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Sentences, bb_2, be_2 ) )
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;
    eSentences_b_1 = bb_2;
    eSentences_e_1 = be_2;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_GenFunctionBody, "GenFunctionBody" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    refalrts::link_brackets( n0, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_b_1, eSentences_e_1 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sScopeClass_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *sLineNo_1;
    static struct r05_node *eCode_b_1;
    static struct r05_node *eCode_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    // s.ScopeClass ( e.Name ) ( & Native s.LineNo e.Code ) t.ErrorList t.SymTable e.Tail
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Native, bb_2, be_2 ) )
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;
    if( ! refalrts::svar_left( sLineNo_1, bb_2, be_2 ) )
      break;
    eCode_b_1 = bb_2;
    eCode_e_1 = be_2;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_GenFnStart, "GenFnStart" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_GenNative, "GenNative" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_GenFnEnd_Success, "GenFnEnd_Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eCode_b_1, eCode_e_1 );
    res = refalrts::splice_stvar( res, sLineNo_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_GenFunctionBody(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sScopeClass_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eSentences_b_1;
    static struct r05_node *eSentences_e_1;
    // s.ScopeClass ( e.Name ) e.Sentences
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;
    eSentences_b_1 = bb_0;
    eSentences_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_GenFnStart, "GenFnStart" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_GenThisIsGeneratedFunction, "GenThisIsGeneratedFunction" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_MakeAlgorithm_and_GenSentence, "MakeAlgorithm_and_GenSentence" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_name( n11, r05c_GenFnEnd, "GenFnEnd" ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eSentences_b_1, eSentences_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_MakeAlgorithm_and_GenSentence(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *ePattern_b_1;
    static struct r05_node *ePattern_e_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    // ( ( e.Pattern ) ( e.Result ) )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    ePattern_b_1 = bb_2;
    ePattern_e_1 = be_2;
    eResult_b_1 = bb_3;
    eResult_e_1 = be_3;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_GenSentence, "GenSentence" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_MakeAlgorithm, "MakeAlgorithm" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseBlock(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eCode_b_1;
    static struct r05_node *eCode_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sRow_1;
    static struct r05_node *sCol_1;
    // t.ErrorList t.SymTable ( & TkNative ( s.Row s.Col ) e.Code ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkNative, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) )
      break;
    eCode_b_1 = bb_1;
    eCode_e_1 = be_1;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::svar_left( sRow_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sCol_1, bb_2, be_2 ) )
      break;
    if (! r05_empty_seq(bb_2, be_2))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Native, "Native" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_ParseBlock_CloseBlock, "ParseBlock_CloseBlock" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eCode_b_1, eCode_e_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eTokens_b_1;
    static struct r05_node *eTokens_e_1;
    // t.ErrorList t.SymTable e.Tokens
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    eTokens_b_1 = bb_0;
    eTokens_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoParseBlock, "DoParseBlock" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eTokens_b_1, eTokens_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseBlock_CloseBlock(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable ( & TkCloseBlock t.SrcPos ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkCloseBlock, bb_1, be_1 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tUnexpected_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tUnexpected_2;
    // t.ErrorList t.SymTable t.Unexpected e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tUnexpected_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tUnexpected_2, tUnexpected_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_EL_AddUnexpected, "EL_AddUnexpected" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, "\"}\"", 3) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tUnexpected_2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, n2, n3 );
    res = refalrts::splice_stvar( res, tUnexpected_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_DoParseBlock(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eSentences_b_1;
    static struct r05_node *eSentences_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable ( e.Sentences ) ( & TkCloseBlock t.SrcPos ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkCloseBlock, bb_2, be_2 ) )
      break;
    eSentences_b_1 = bb_1;
    eSentences_e_1 = be_1;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_2, be_2 ) )
      break;
    if (! r05_empty_seq(bb_2, be_2))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Sentences, "Sentences" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eSentences_b_1, eSentences_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eSentences_b_1;
    static struct r05_node *eSentences_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *tSrcPos_2;
    // t.ErrorList t.SymTable ( e.Sentences ) ( & TkEOF t.SrcPos ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkEOF, bb_2, be_2 ) )
      break;
    eSentences_b_1 = bb_1;
    eSentences_e_1 = be_1;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_2, be_2 ) )
      break;
    if (! r05_empty_seq(bb_2, be_2))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tSrcPos_2, tSrcPos_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Sentences, "Sentences" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_EL_AddErrorAt, "EL_AddErrorAt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "Unexpected EOF, expected \"}\"", 28) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_TkEOF, "TkEOF" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n8, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, tSrcPos_2 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, n5, n6 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eSentences_b_1, eSentences_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eSentences_b_1;
    static struct r05_node *eSentences_e_1;
    static struct r05_node *eTokens_b_1;
    static struct r05_node *eTokens_e_1;
    // t.ErrorList t.SymTable ( e.Sentences ) e.Tokens
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eSentences_b_1 = bb_1;
    eSentences_e_1 = be_1;
    eTokens_b_1 = bb_0;
    eTokens_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoParseBlock, "DoParseBlock" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_ParseSentence, "ParseSentence" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eTokens_b_1, eTokens_e_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_b_1, eSentences_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseSentence(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eSentences_b_1;
    static struct r05_node *eSentences_e_1;
    static struct r05_node *eTokens_b_1;
    static struct r05_node *eTokens_e_1;
    // t.ErrorList t.SymTable ( e.Sentences ) e.Tokens
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eSentences_b_1 = bb_1;
    eSentences_e_1 = be_1;
    eTokens_b_1 = bb_0;
    eTokens_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Fetch, "Fetch" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_ParsePattern, "ParsePattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_name( n12, r05c_Seq, "Seq" ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_name( n13, r05c_ParseSentence_AfterParsePattern, "ParseSentence_AfterParsePattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_name( n14, r05c_ParseSentence_ParseResult, "ParseSentence_ParseResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_name( n16, r05c_ParseSentence_AfterParseResult, "ParseSentence_AfterParseResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return R05_NO_MEMORY;
    struct r05_node *n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return R05_NO_MEMORY;
    struct r05_node *n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return R05_NO_MEMORY;
    struct r05_node *n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n21 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n15, n19 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n17, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eSentences_b_1, eSentences_e_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTokens_b_1, eTokens_e_1 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseSentence_AfterParsePattern(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *ePattern_b_1;
    static struct r05_node *ePattern_e_1;
    static struct r05_node *eTokens_b_1;
    static struct r05_node *eTokens_e_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable t.VarTable ( e.Pattern ) ( & TkReplace t.SrcPos ) e.Tokens
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkReplace, bb_2, be_2 ) )
      break;
    ePattern_b_1 = bb_1;
    ePattern_e_1 = be_1;
    eTokens_b_1 = bb_0;
    eTokens_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_2, be_2 ) )
      break;
    if (! r05_empty_seq(bb_2, be_2))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTokens_b_1, eTokens_e_1 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *ePattern_b_1;
    static struct r05_node *ePattern_e_1;
    static struct r05_node *eTokens_b_1;
    static struct r05_node *eTokens_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *sNextResultTerm_1;
    // t.ErrorList t.SymTable t.VarTable ( e.Pattern ) ( s.NextResultTerm t.SrcPos e.Info ) e.Tokens
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    ePattern_b_1 = bb_1;
    ePattern_e_1 = be_1;
    eTokens_b_1 = bb_0;
    eTokens_e_1 = be_0;
    if( ! refalrts::svar_left( sNextResultTerm_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_2, be_2 ) )
      break;
    // Unused closed variable e.Info

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_EL_AddErrorAt, "EL_AddErrorAt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, "Incorrect pattern termination", 29) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTokens_b_1, eTokens_e_1 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, n2, n3 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseSentence_ParseResult(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *ePattern_b_1;
    static struct r05_node *ePattern_e_1;
    static struct r05_node *eTokens_b_1;
    static struct r05_node *eTokens_e_1;
    // t.ErrorList t.SymTable t.VarTable ( e.Pattern ) e.Tokens
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    ePattern_b_1 = bb_1;
    ePattern_e_1 = be_1;
    eTokens_b_1 = bb_0;
    eTokens_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_ParseResult, "ParseResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eTokens_b_1, eTokens_e_1 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseSentence_AfterParseResult(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eSentences_b_1;
    static struct r05_node *eSentences_e_1;
    static struct r05_node *ePattern_b_1;
    static struct r05_node *ePattern_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *eTokens_b_1;
    static struct r05_node *eTokens_e_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *tSrcPos_1;
    // ( e.Sentences ) ( e.Pattern ) t.ErrorList t.SymTable t.VarTable ( e.Result ) ( & TkSemicolon t.SrcPos ) e.Tokens
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eSentences_b_1 = bb_1;
    eSentences_e_1 = be_1;
    ePattern_b_1 = bb_2;
    ePattern_e_1 = be_2;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkSemicolon, bb_4, be_4 ) )
      break;
    eResult_b_1 = bb_3;
    eResult_e_1 = be_3;
    eTokens_b_1 = bb_0;
    eTokens_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_4, be_4 ) )
      break;
    if (! r05_empty_seq(bb_4, be_4))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTokens_b_1, eTokens_e_1 );
    refalrts::link_brackets( n0, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n1, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eSentences_b_1, eSentences_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eSentences_b_1;
    static struct r05_node *eSentences_e_1;
    static struct r05_node *ePattern_b_1;
    static struct r05_node *ePattern_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *eTokens_b_1;
    static struct r05_node *eTokens_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *tSrcPos_2;
    // ( e.Sentences ) ( e.Pattern ) t.ErrorList t.SymTable t.VarTable ( e.Result ) ( & TkCloseBlock t.SrcPos ) e.Tokens
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eSentences_b_1 = bb_1;
    eSentences_e_1 = be_1;
    ePattern_b_1 = bb_2;
    ePattern_e_1 = be_2;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkCloseBlock, bb_4, be_4 ) )
      break;
    eResult_b_1 = bb_3;
    eResult_e_1 = be_3;
    eTokens_b_1 = bb_0;
    eTokens_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_4, be_4 ) )
      break;
    if (! r05_empty_seq(bb_4, be_4))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tSrcPos_2, tSrcPos_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_EL_AddErrorAt, "EL_AddErrorAt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, "Missed semicolon", 16) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_name( n14, r05c_TkCloseBlock, "TkCloseBlock" ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTokens_b_1, eTokens_e_1 );
    refalrts::link_brackets( n13, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, tSrcPos_2 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n5, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n6, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eSentences_b_1, eSentences_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, n2, n3 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eSentences_b_1;
    static struct r05_node *eSentences_e_1;
    static struct r05_node *ePattern_b_1;
    static struct r05_node *ePattern_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *tUnexpected_1;
    static struct r05_node *eTokens_b_1;
    static struct r05_node *eTokens_e_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *tUnexpected_2;
    // ( e.Sentences ) ( e.Pattern ) t.ErrorList t.SymTable t.VarTable ( e.Result ) t.Unexpected e.Tokens
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eSentences_b_1 = bb_1;
    eSentences_e_1 = be_1;
    ePattern_b_1 = bb_2;
    ePattern_e_1 = be_2;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    eResult_b_1 = bb_3;
    eResult_e_1 = be_3;
    if( ! refalrts::tvar_left( tUnexpected_1, bb_0, be_0 ) )
      break;
    eTokens_b_1 = bb_0;
    eTokens_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tUnexpected_2, tUnexpected_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_EL_AddUnexpected, "EL_AddUnexpected" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, "semicolon", 9) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTokens_b_1, eTokens_e_1 );
    res = refalrts::splice_stvar( res, tUnexpected_2 );
    refalrts::link_brackets( n5, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n6, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eSentences_b_1, eSentences_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, n2, n3 );
    res = refalrts::splice_stvar( res, tUnexpected_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParsePattern(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBrackets_b_1;
    static struct r05_node *eMultiBrackets_e_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sChar_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBrackets ) ( e.Scanned ) ( & TkChar t.SrcPos s.Char ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkChar, bb_3, be_3 ) )
      break;
    eMultiBrackets_b_1 = bb_1;
    eMultiBrackets_e_1 = be_1;
    eScanned_b_1 = bb_2;
    eScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sChar_1, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParsePattern, "ParsePattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_Symbol, "Symbol" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_Char, "Char" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eMultiBrackets_b_1, eMultiBrackets_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBrackets_b_1;
    static struct r05_node *eMultiBrackets_e_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sNumber_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBrackets ) ( e.Scanned ) ( & TkNumber t.SrcPos s.Number ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkNumber, bb_3, be_3 ) )
      break;
    eMultiBrackets_b_1 = bb_1;
    eMultiBrackets_e_1 = be_1;
    eScanned_b_1 = bb_2;
    eScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParsePattern, "ParsePattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_Symbol, "Symbol" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_Number, "Number" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eMultiBrackets_b_1, eMultiBrackets_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBrackets_b_1;
    static struct r05_node *eMultiBrackets_e_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBrackets ) ( e.Scanned ) ( & TkName t.SrcPos e.Name ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkName, bb_3, be_3 ) )
      break;
    eMultiBrackets_b_1 = bb_1;
    eMultiBrackets_e_1 = be_1;
    eScanned_b_1 = bb_2;
    eScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_3, be_3 ) )
      break;
    eName_b_1 = bb_3;
    eName_e_1 = be_3;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParsePattern, "ParsePattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Symbol, "Symbol" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_name( n10, r05c_Name, "Name" ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n7, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n8, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eMultiBrackets_b_1, eMultiBrackets_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sMode_1;
    static struct r05_node *sMode_2;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    static struct r05_node *eVariables_B_b_1;
    static struct r05_node *eVariables_B_e_1;
    static struct r05_node *eVariables_E_b_1;
    static struct r05_node *eVariables_E_e_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable ( e.Variables_B ( s.Mode e.Index ) e.Variables_E ) ( e.MultiBracket ) ( e.Scanned ) ( & TkVariable t.SrcPos s.Mode e.Index ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkVariable, bb_4, be_4 ) )
      break;
    eMultiBracket_b_1 = bb_2;
    eMultiBracket_e_1 = be_2;
    eScanned_b_1 = bb_3;
    eScanned_e_1 = be_3;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_4, be_4 ) )
      break;
    eIndex_b_1 = bb_4;
    eIndex_e_1 = be_4;
    eVariables_B_b_1 = 0;
    eVariables_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_5 = bb_1;
      struct r05_node *be_5 = be_1;
      struct r05_node *bb_6 = 0;
      struct r05_node *be_6 = 0;
      if( ! refalrts::brackets_left( bb_6, be_6, bb_5, be_5 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_6, be_6 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_6, be_6 ) )
        continue;
      if (! r05_empty_seq(bb_6, be_6))
        continue;
      eVariables_E_b_1 = bb_5;
      eVariables_E_e_1 = be_5;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_ParsePattern, "ParsePattern" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return R05_NO_MEMORY;
      struct r05_node *n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return R05_NO_MEMORY;
      struct r05_node *n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return R05_NO_MEMORY;
      struct r05_node *n8 = 0;
      if( ! refalrts::alloc_open_bracket( n8 ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_name( n10, r05c_TkVariable, "TkVariable" ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
        return R05_NO_MEMORY;
      struct r05_node *n13 = 0;
      if( ! refalrts::alloc_close_call( n13 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n13 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
      refalrts::link_brackets( n8, n12 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n9, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      refalrts::link_brackets( n3, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, tSymTable_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eVariables_B_b_1, eVariables_B_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eVariables_b_1;
    static struct r05_node *eVariables_e_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sMode_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *sMode_2;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    // t.ErrorList t.SymTable ( e.Variables ) ( e.MultiBracket ) ( e.Scanned ) ( & TkVariable t.SrcPos s.Mode e.Index ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkVariable, bb_4, be_4 ) )
      break;
    eVariables_b_1 = bb_1;
    eVariables_e_1 = be_1;
    eMultiBracket_b_1 = bb_2;
    eMultiBracket_e_1 = be_2;
    eScanned_b_1 = bb_3;
    eScanned_e_1 = be_3;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_4, be_4 ) )
      break;
    eIndex_b_1 = bb_4;
    eIndex_e_1 = be_4;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParsePattern, "ParsePattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_name( n10, r05c_TkVariable, "TkVariable" ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n8, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ) ( e.Scanned ) ( & TkOpen t.SrcPos & TkOpenBracket ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkOpen, bb_3, be_3 ) )
      break;
    if( ! refalrts::function_right( r05c_TkOpenBracket, bb_3, be_3 ) )
      break;
    eMultiBracket_b_1 = bb_1;
    eMultiBracket_e_1 = be_1;
    eScanned_b_1 = bb_2;
    eScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParsePattern, "ParsePattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_Brackets, "Brackets" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_TkCloseBracket, "TkCloseBracket" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n2, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n3, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *tSrcPos_2;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ) ( e.Scanned ) ( & TkOpen t.SrcPos & TkOpenCall ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkOpen, bb_3, be_3 ) )
      break;
    if( ! refalrts::function_right( r05c_TkOpenCall, bb_3, be_3 ) )
      break;
    eMultiBracket_b_1 = bb_1;
    eMultiBracket_e_1 = be_1;
    eScanned_b_1 = bb_2;
    eScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tSrcPos_2, tSrcPos_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParsePattern, "ParsePattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_EL_AddErrorAt, "EL_AddErrorAt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "Unexpected call bracket in pattern expression", 45) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Brackets, "Brackets" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_name( n10, r05c_TkCloseCall, "TkCloseCall" ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n15 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n7, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n8, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, tSrcPos_2 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eInnerScanned_b_1;
    static struct r05_node *eInnerScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sBracketsSign_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *tInnerSrcPos_1;
    static struct r05_node *sCloseBracket_1;
    static struct r05_node *sCloseBracket_2;
    static struct r05_node *tCloseSrcPos_1;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ( s.BracketsSign t.InnerSrcPos s.CloseBracket e.Scanned ) ) ( e.InnerScanned ) ( & TkClose t.CloseSrcPos s.CloseBracket ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkClose, bb_3, be_3 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_1, be_1 ) )
      break;
    eMultiBracket_b_1 = bb_1;
    eMultiBracket_e_1 = be_1;
    eInnerScanned_b_1 = bb_2;
    eInnerScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::svar_left( sBracketsSign_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::tvar_left( tInnerSrcPos_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::repeated_stvar_right( sCloseBracket_2, sCloseBracket_1, bb_3, be_3 ) )
      break;
    eScanned_b_1 = bb_4;
    eScanned_e_1 = be_4;
    if( ! refalrts::tvar_left( tCloseSrcPos_1, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParsePattern, "ParsePattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eInnerScanned_b_1, eInnerScanned_e_1 );
    res = refalrts::splice_stvar( res, sBracketsSign_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eInnerScanned_b_1;
    static struct r05_node *eInnerScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sBracketsSign_1;
    static struct r05_node *tInnerSrcPos_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *sOtherCloseBracket_1;
    static struct r05_node *sCloseBracket_1;
    static struct r05_node *sBracketsSign_2;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ( s.BracketsSign t.InnerSrcPos s.CloseBracket e.Scanned ) ) ( e.InnerScanned ) ( & TkClose t.SrcPos s.OtherCloseBracket ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkClose, bb_3, be_3 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_1, be_1 ) )
      break;
    eMultiBracket_b_1 = bb_1;
    eMultiBracket_e_1 = be_1;
    eInnerScanned_b_1 = bb_2;
    eInnerScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::svar_left( sBracketsSign_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::tvar_left( tInnerSrcPos_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1, bb_4, be_4 ) )
      break;
    eScanned_b_1 = bb_4;
    eScanned_e_1 = be_4;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sOtherCloseBracket_1, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sBracketsSign_2, sBracketsSign_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParsePattern, "ParsePattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_EL_AddErrorAt, "EL_AddErrorAt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "Unbalanced bracket \"", 20) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_StrFromBracket, "StrFromBracket" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_char( n9, '\"' ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_name( n18, r05c_TkClose, "TkClose" ) )
      return R05_NO_MEMORY;
    struct r05_node *n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return R05_NO_MEMORY;
    struct r05_node *n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n20 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n17, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_stvar( res, sOtherCloseBracket_1 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n13, n16 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eInnerScanned_b_1, eInnerScanned_e_1 );
    res = refalrts::splice_stvar( res, sBracketsSign_2 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sBracketsSign_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_stvar( res, tInnerSrcPos_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *sCloseBracket_1;
    // t.ErrorList t.SymTable t.VarTable ( ) ( e.Scanned ) ( & TkClose t.SrcPos s.CloseBracket ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkClose, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    eScanned_b_1 = bb_2;
    eScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParsePattern, "ParsePattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_EL_AddErrorAt, "EL_AddErrorAt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "Unbalanced bracket \"", 20) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_StrFromBracket, "StrFromBracket" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_char( n9, '\"' ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n15 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sCloseBracket_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eInnerScanned_b_1;
    static struct r05_node *eInnerScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sBracketsSign_1;
    static struct r05_node *tInnerSrcPos_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *sCloseBracket_1;
    static struct r05_node *sBracketsSign_2;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ( s.BracketsSign t.InnerSrcPos s.CloseBracket e.Scanned ) ) ( e.InnerScanned ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_1, be_1 ) )
      break;
    eMultiBracket_b_1 = bb_1;
    eMultiBracket_e_1 = be_1;
    eInnerScanned_b_1 = bb_2;
    eInnerScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::svar_left( sBracketsSign_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::tvar_left( tInnerSrcPos_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1, bb_3, be_3 ) )
      break;
    eScanned_b_1 = bb_3;
    eScanned_e_1 = be_3;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sBracketsSign_2, sBracketsSign_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParsePattern, "ParsePattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_EL_AddErrorAt, "EL_AddErrorAt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "Unbalanced bracket \"", 20) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_StrFromBracket, "StrFromBracket" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_char( n9, '\"' ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n17 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n13, n16 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eInnerScanned_b_1, eInnerScanned_e_1 );
    res = refalrts::splice_stvar( res, sBracketsSign_2 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sBracketsSign_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_stvar( res, tInnerSrcPos_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *ePattern_b_1;
    static struct r05_node *ePattern_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    // t.ErrorList t.SymTable t.VarTable ( ) ( e.Pattern ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    ePattern_b_1 = bb_2;
    ePattern_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_StrFromBracket(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkOpenBracket
    if( ! refalrts::function_left( r05c_TkOpenBracket, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '(' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkCloseBracket
    if( ! refalrts::function_left( r05c_TkCloseBracket, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, ')' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkOpenCall
    if( ! refalrts::function_left( r05c_TkOpenCall, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '<' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkCloseCall
    if( ! refalrts::function_left( r05c_TkCloseCall, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '>' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & Brackets
    if( ! refalrts::function_left( r05c_Brackets, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '(' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & CallBrackets
    if( ! refalrts::function_left( r05c_CallBrackets, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '<' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ParseResult(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sChar_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ) ( e.Scanned ) ( & TkChar t.SrcPos s.Char ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkChar, bb_3, be_3 ) )
      break;
    eMultiBracket_b_1 = bb_1;
    eMultiBracket_e_1 = be_1;
    eScanned_b_1 = bb_2;
    eScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sChar_1, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseResult, "ParseResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_Symbol, "Symbol" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_Char, "Char" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sNumber_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ) ( e.Scanned ) ( & TkNumber t.SrcPos s.Number ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkNumber, bb_3, be_3 ) )
      break;
    eMultiBracket_b_1 = bb_1;
    eMultiBracket_e_1 = be_1;
    eScanned_b_1 = bb_2;
    eScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseResult, "ParseResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_Symbol, "Symbol" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_Number, "Number" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ) ( e.Scanned ) ( & TkName t.SrcPos e.Name ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkName, bb_3, be_3 ) )
      break;
    eMultiBracket_b_1 = bb_1;
    eMultiBracket_e_1 = be_1;
    eScanned_b_1 = bb_2;
    eScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_3, be_3 ) )
      break;
    eName_b_1 = bb_3;
    eName_e_1 = be_3;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseResult, "ParseResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_ST_AddFunctionCall, "ST_AddFunctionCall" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Symbol, "Symbol" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_name( n10, r05c_Name, "Name" ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n7, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n8, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sMode_1;
    static struct r05_node *sMode_2;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    static struct r05_node *eVariables_B_b_1;
    static struct r05_node *eVariables_B_e_1;
    static struct r05_node *eVariables_E_b_1;
    static struct r05_node *eVariables_E_e_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable ( e.Variables_B ( s.Mode e.Index ) e.Variables_E ) ( e.MultiBracket ) ( e.Scanned ) ( & TkVariable t.SrcPos s.Mode e.Index ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkVariable, bb_4, be_4 ) )
      break;
    eMultiBracket_b_1 = bb_2;
    eMultiBracket_e_1 = be_2;
    eScanned_b_1 = bb_3;
    eScanned_e_1 = be_3;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_4, be_4 ) )
      break;
    eIndex_b_1 = bb_4;
    eIndex_e_1 = be_4;
    eVariables_B_b_1 = 0;
    eVariables_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_5 = bb_1;
      struct r05_node *be_5 = be_1;
      struct r05_node *bb_6 = 0;
      struct r05_node *be_6 = 0;
      if( ! refalrts::brackets_left( bb_6, be_6, bb_5, be_5 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_6, be_6 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_6, be_6 ) )
        continue;
      if (! r05_empty_seq(bb_6, be_6))
        continue;
      eVariables_E_b_1 = bb_5;
      eVariables_E_e_1 = be_5;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_ParseResult, "ParseResult" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return R05_NO_MEMORY;
      struct r05_node *n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return R05_NO_MEMORY;
      struct r05_node *n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return R05_NO_MEMORY;
      struct r05_node *n8 = 0;
      if( ! refalrts::alloc_open_bracket( n8 ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_name( n10, r05c_TkVariable, "TkVariable" ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
        return R05_NO_MEMORY;
      struct r05_node *n13 = 0;
      if( ! refalrts::alloc_close_call( n13 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n13 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
      refalrts::link_brackets( n8, n12 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n9, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      refalrts::link_brackets( n3, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, tSymTable_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eVariables_B_b_1, eVariables_B_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *eVariables_b_1;
    static struct r05_node *eVariables_e_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *sMode_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    // t.ErrorList t.SymTable ( e.Variables ) ( e.MultiBracket ) ( e.Scanned ) ( & TkVariable t.SrcPos s.Mode e.Index ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkVariable, bb_4, be_4 ) )
      break;
    eVariables_b_1 = bb_1;
    eVariables_e_1 = be_1;
    eMultiBracket_b_1 = bb_2;
    eMultiBracket_e_1 = be_2;
    eScanned_b_1 = bb_3;
    eScanned_e_1 = be_3;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_4, be_4 ) )
      break;
    eIndex_b_1 = bb_4;
    eIndex_e_1 = be_4;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseResult, "ParseResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_EL_AddErrorAt, "EL_AddErrorAt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "Variable ", 9) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_char( n6, '.' ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_chars( n7, n8, " not found", 10) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, n7, n8 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *sOpenBracket_1;
    static struct r05_node *sOpenBracket_2;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ) ( e.Scanned ) ( & TkOpen t.SrcPos s.OpenBracket ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkOpen, bb_3, be_3 ) )
      break;
    eMultiBracket_b_1 = bb_1;
    eMultiBracket_e_1 = be_1;
    eScanned_b_1 = bb_2;
    eScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sOpenBracket_1, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sOpenBracket_2, sOpenBracket_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseResult, "ParseResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_BracketPairName, "BracketPairName" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_CloseBracketName, "CloseBracketName" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n2, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n3, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sOpenBracket_2 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sOpenBracket_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eInnerScanned_b_1;
    static struct r05_node *eInnerScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sBracketsSign_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *tOpenSrcPos_1;
    static struct r05_node *sCloseBracket_1;
    static struct r05_node *sCloseBracket_2;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ( s.BracketsSign t.OpenSrcPos s.CloseBracket e.Scanned ) ) ( e.InnerScanned ) ( & TkClose t.SrcPos s.CloseBracket ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkClose, bb_3, be_3 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_1, be_1 ) )
      break;
    eMultiBracket_b_1 = bb_1;
    eMultiBracket_e_1 = be_1;
    eInnerScanned_b_1 = bb_2;
    eInnerScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::svar_left( sBracketsSign_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::tvar_left( tOpenSrcPos_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::repeated_stvar_right( sCloseBracket_2, sCloseBracket_1, bb_3, be_3 ) )
      break;
    eScanned_b_1 = bb_4;
    eScanned_e_1 = be_4;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseResult, "ParseResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eInnerScanned_b_1, eInnerScanned_e_1 );
    res = refalrts::splice_stvar( res, sBracketsSign_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eMultiBracket_b_1;
    static struct r05_node *eMultiBracket_e_1;
    static struct r05_node *eInnerScanned_b_1;
    static struct r05_node *eInnerScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sBracketsSign_1;
    static struct r05_node *tOpenSrcPos_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *sCloseBracket_1;
    static struct r05_node *sBracketsSign_2;
    // t.ErrorList t.SymTable t.VarTable ( e.MultiBracket ( s.BracketsSign t.OpenSrcPos s.CloseBracket e.Scanned ) ) ( e.InnerScanned ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_1, be_1 ) )
      break;
    eMultiBracket_b_1 = bb_1;
    eMultiBracket_e_1 = be_1;
    eInnerScanned_b_1 = bb_2;
    eInnerScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::svar_left( sBracketsSign_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::tvar_left( tOpenSrcPos_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1, bb_3, be_3 ) )
      break;
    eScanned_b_1 = bb_3;
    eScanned_e_1 = be_3;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sBracketsSign_2, sBracketsSign_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseResult, "ParseResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_EL_AddErrorAt, "EL_AddErrorAt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "Unbalanced bracket \"", 20) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_StrFromBracket, "StrFromBracket" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_char( n9, '\"' ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n17 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n13, n16 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eInnerScanned_b_1, eInnerScanned_e_1 );
    res = refalrts::splice_stvar( res, sBracketsSign_2 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eMultiBracket_b_1, eMultiBracket_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sBracketsSign_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_stvar( res, tOpenSrcPos_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *sCloseBracket_1;
    // t.ErrorList t.SymTable t.VarTable ( ) ( e.Scanned ) ( & TkClose t.SrcPos s.CloseBracket ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkClose, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    eScanned_b_1 = bb_2;
    eScanned_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1, bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ParseResult, "ParseResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_EL_AddErrorAt, "EL_AddErrorAt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "Unbalanced bracket \"", 20) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_StrFromBracket, "StrFromBracket" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_char( n9, '\"' ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n15 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sCloseBracket_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSymTable_1;
    static struct r05_node *tVarTable_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    // t.ErrorList t.SymTable t.VarTable ( ) ( e.Result ) e.Tail
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tVarTable_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    eResult_b_1 = bb_2;
    eResult_e_1 = be_2;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tVarTable_1 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_BracketPairName(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkOpenBracket
    if( ! refalrts::function_left( r05c_TkOpenBracket, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Brackets, "Brackets" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkOpenCall
    if( ! refalrts::function_left( r05c_TkOpenCall, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_CallBrackets, "CallBrackets" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_CloseBracketName(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkOpenBracket
    if( ! refalrts::function_left( r05c_TkOpenBracket, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_TkCloseBracket, "TkCloseBracket" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkOpenCall
    if( ! refalrts::function_left( r05c_TkOpenCall, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_TkCloseCall, "TkCloseCall" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}


//End of file

// Automatically generated file. Don't edit!
#include "refalrts.h"


extern enum r05_fnresult r05c_Fetch(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Inc(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Map(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Seq(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Dec(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkVariable(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkCloseBracket(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkCloseCall(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Add(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_StrFromInt(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EscapeChar(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_MakeAlgorithm(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_AlgLeft(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_AlgRight(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Brackets(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CallBrackets(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Symbol(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Char(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Number(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Name(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdSymbol(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdBrackets(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdEmpty(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdRepeated(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdVar(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdClosedE(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdOpenedE_Start(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdOpenedE_End(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdComment(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdSave(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_CmdOpenedE(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_GenPattern(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_DoGenPattern(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_SaveRanges(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_TextFromPattern(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_TextFromPattern_Char(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_GenResult(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdAllocateElem(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdLinkBrackets(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdPushStack(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdInsertElem(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdInsertVar(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdInsertString(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ElSymbol(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ElString(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ElOpenBracket(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ElCloseBracket(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ElOpenCall(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ElCloseCall(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_TkString(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_DoGenResult(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdEmptyResult(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdReturnResult(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_GeneralizeResult(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ReplicateVar(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ReplicateVars(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_VarSetUnion(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_VarSetDifference(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ClosedEVariables(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_RepeatedEVariables(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_FilterUnusedCmdClosedE(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdDeclareEVar(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdDeclareVar(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_MakeDeclaration(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdCopyEVar(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdCopyVar(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_MakeCopyVar(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_MakeVarsSets(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_FilterCommonVarsAndPatternCommands(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ComposeSentenceCommands(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_GenerateResult_OpenELoops(struct r05_node *arg_begin, struct r05_node *arg_end);

enum r05_fnresult r05c_MakeAlgorithm(struct r05_node *arg_begin, struct r05_node *arg_end) {
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
    // ( e.Pattern ) ( e.Result )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    ePattern_b_1 = bb_1;
    ePattern_e_1 = be_1;
    eResult_b_1 = bb_2;
    eResult_e_1 = be_2;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_GeneralizeResult, "GeneralizeResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_GenPattern, "GenPattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_GenResult, "GenResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
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

enum r05_fnresult r05c_AlgLeft(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_AlgRight(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Brackets(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CallBrackets(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Symbol(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Char(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Number(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Name(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdSymbol(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdBrackets(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdEmpty(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdRepeated(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdVar(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdClosedE(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdOpenedE_Start(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdOpenedE_End(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdComment(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdSave(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_CmdOpenedE(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_GenPattern(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *ePattern_b_1;
    static struct r05_node *ePattern_e_1;
    static struct r05_node *ePattern_b_2;
    static struct r05_node *ePattern_e_2;
    // e.Pattern
    ePattern_b_1 = bb_0;
    ePattern_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( ePattern_b_2, ePattern_e_2, ePattern_b_1, ePattern_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_number( n2, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_number( n4, 0UL ) )
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
    if( ! refalrts::alloc_name( n10, r05c_CmdComment, "CmdComment" ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_name( n12, r05c_TextFromPattern, "TextFromPattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
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
    refalrts::link_brackets( n8, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n9, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, ePattern_b_2, ePattern_e_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n3, n5 );
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

static enum r05_fnresult r05c_DoGenPattern(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eRanges_B_b_1;
    static struct r05_node *eRanges_B_e_1;
    static struct r05_node *eRanges_E_b_1;
    static struct r05_node *eRanges_E_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eRange_b_1;
    static struct r05_node *eRange_e_1;
    static struct r05_node *sType_1;
    static struct r05_node *eValue_b_1;
    static struct r05_node *eValue_e_1;
    static struct r05_node *sNum_2;
    // s.NumRanges e.Ranges_B ( s.Num ( & Symbol s.Type e.Value ) e.Range ) e.Ranges_E ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    eRanges_B_b_1 = 0;
    eRanges_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_0;
      struct r05_node *be_3 = be_0;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      eRanges_E_b_1 = bb_3;
      eRanges_E_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) )
        continue;
      struct r05_node *bb_5 = 0;
      struct r05_node *be_5 = 0;
      if( ! refalrts::brackets_left( bb_5, be_5, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( r05c_Symbol, bb_5, be_5 ) )
        continue;
      eRange_b_1 = bb_4;
      eRange_e_1 = be_4;
      if( ! refalrts::svar_left( sType_1, bb_5, be_5 ) )
        continue;
      eValue_b_1 = bb_5;
      eValue_e_1 = be_5;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return R05_NO_MEMORY;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return R05_NO_MEMORY;
      struct r05_node *n8 = 0;
      if( ! refalrts::alloc_name( n8, r05c_CmdSymbol, "CmdSymbol" ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_name( n9, r05c_AlgLeft, "AlgLeft" ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eValue_b_1, eValue_e_1 );
      res = refalrts::splice_stvar( res, sType_1 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_b_1, eRanges_E_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_b_1, eRange_e_1 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_b_1, eRanges_B_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eRanges_B_b_1, eRanges_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eRanges_B_b_1;
    static struct r05_node *eRanges_B_e_1;
    static struct r05_node *eRanges_E_b_1;
    static struct r05_node *eRanges_E_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eRange_b_1;
    static struct r05_node *eRange_e_1;
    static struct r05_node *sType_1;
    static struct r05_node *eValue_b_1;
    static struct r05_node *eValue_e_1;
    static struct r05_node *sNum_2;
    // s.NumRanges e.Ranges_B ( s.Num e.Range ( & Symbol s.Type e.Value ) ) e.Ranges_E ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    eRanges_B_b_1 = 0;
    eRanges_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_0;
      struct r05_node *be_3 = be_0;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      struct r05_node *bb_5 = 0;
      struct r05_node *be_5 = 0;
      if( ! refalrts::brackets_right( bb_5, be_5, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( r05c_Symbol, bb_5, be_5 ) )
        continue;
      eRanges_E_b_1 = bb_3;
      eRanges_E_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) )
        continue;
      eRange_b_1 = bb_4;
      eRange_e_1 = be_4;
      if( ! refalrts::svar_left( sType_1, bb_5, be_5 ) )
        continue;
      eValue_b_1 = bb_5;
      eValue_e_1 = be_5;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return R05_NO_MEMORY;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return R05_NO_MEMORY;
      struct r05_node *n8 = 0;
      if( ! refalrts::alloc_name( n8, r05c_CmdSymbol, "CmdSymbol" ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_name( n9, r05c_AlgRight, "AlgRight" ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eValue_b_1, eValue_e_1 );
      res = refalrts::splice_stvar( res, sType_1 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_b_1, eRanges_E_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_b_1, eRange_e_1 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_b_1, eRanges_B_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eRanges_B_b_1, eRanges_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eRanges_B_b_1;
    static struct r05_node *eRanges_B_e_1;
    static struct r05_node *eRanges_E_b_1;
    static struct r05_node *eRanges_E_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eSubRange_b_1;
    static struct r05_node *eSubRange_e_1;
    static struct r05_node *eRange_b_1;
    static struct r05_node *eRange_e_1;
    static struct r05_node *sNumRanges_2;
    static struct r05_node *sNumRanges_3;
    static struct r05_node *sNum_2;
    // s.NumRanges e.Ranges_B ( s.Num ( & Brackets e.SubRange ) e.Range ) e.Ranges_E ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    eRanges_B_b_1 = 0;
    eRanges_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_0;
      struct r05_node *be_3 = be_0;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      eRanges_E_b_1 = bb_3;
      eRanges_E_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) )
        continue;
      struct r05_node *bb_5 = 0;
      struct r05_node *be_5 = 0;
      if( ! refalrts::brackets_left( bb_5, be_5, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( r05c_Brackets, bb_5, be_5 ) )
        continue;
      eSubRange_b_1 = bb_5;
      eSubRange_e_1 = be_5;
      eRange_b_1 = bb_4;
      eRange_e_1 = be_4;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      if( ! refalrts::copy_stvar( sNumRanges_2, sNumRanges_1 ) )
        return R05_NO_MEMORY;
      if( ! refalrts::copy_stvar( sNumRanges_3, sNumRanges_2 ) )
        return R05_NO_MEMORY;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return R05_NO_MEMORY;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
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
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return R05_NO_MEMORY;
      struct r05_node *n13 = 0;
      if( ! refalrts::alloc_name( n13, r05c_CmdBrackets, "CmdBrackets" ) )
        return R05_NO_MEMORY;
      struct r05_node *n14 = 0;
      if( ! refalrts::alloc_name( n14, r05c_AlgLeft, "AlgLeft" ) )
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
      refalrts::link_brackets( n11, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n12, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, sNumRanges_3 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eRanges_E_b_1, eRanges_E_e_1 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eRange_b_1, eRange_e_1 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eSubRange_b_1, eSubRange_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_2 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eRanges_B_b_1, eRanges_B_e_1 );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNumRanges_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eRanges_B_b_1, eRanges_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eRanges_B_b_1;
    static struct r05_node *eRanges_B_e_1;
    static struct r05_node *eSubRange_b_1;
    static struct r05_node *eSubRange_e_1;
    static struct r05_node *eRanges_E_b_1;
    static struct r05_node *eRanges_E_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eRange_b_1;
    static struct r05_node *eRange_e_1;
    static struct r05_node *sNumRanges_2;
    static struct r05_node *sNumRanges_3;
    static struct r05_node *sNum_2;
    // s.NumRanges e.Ranges_B ( s.Num e.Range ( & Brackets e.SubRange ) ) e.Ranges_E ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    eRanges_B_b_1 = 0;
    eRanges_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_0;
      struct r05_node *be_3 = be_0;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      struct r05_node *bb_5 = 0;
      struct r05_node *be_5 = 0;
      if( ! refalrts::brackets_right( bb_5, be_5, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( r05c_Brackets, bb_5, be_5 ) )
        continue;
      eSubRange_b_1 = bb_5;
      eSubRange_e_1 = be_5;
      eRanges_E_b_1 = bb_3;
      eRanges_E_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) )
        continue;
      eRange_b_1 = bb_4;
      eRange_e_1 = be_4;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      if( ! refalrts::copy_stvar( sNumRanges_2, sNumRanges_1 ) )
        return R05_NO_MEMORY;
      if( ! refalrts::copy_stvar( sNumRanges_3, sNumRanges_2 ) )
        return R05_NO_MEMORY;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return R05_NO_MEMORY;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
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
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return R05_NO_MEMORY;
      struct r05_node *n13 = 0;
      if( ! refalrts::alloc_name( n13, r05c_CmdBrackets, "CmdBrackets" ) )
        return R05_NO_MEMORY;
      struct r05_node *n14 = 0;
      if( ! refalrts::alloc_name( n14, r05c_AlgRight, "AlgRight" ) )
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
      refalrts::link_brackets( n11, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n12, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, sNumRanges_3 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eRanges_E_b_1, eRanges_E_e_1 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eSubRange_b_1, eSubRange_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_2 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eRange_b_1, eRange_e_1 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eRanges_B_b_1, eRanges_B_e_1 );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNumRanges_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eRanges_B_b_1, eRanges_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eRanges_B_b_1;
    static struct r05_node *eRanges_B_e_1;
    static struct r05_node *eRanges_E_b_1;
    static struct r05_node *eRanges_E_e_1;
    static struct r05_node *sNum_1;
    // s.NumRanges e.Ranges_B ( s.Num ) e.Ranges_E ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    eRanges_B_b_1 = 0;
    eRanges_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_0;
      struct r05_node *be_3 = be_0;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      eRanges_E_b_1 = bb_3;
      eRanges_E_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) )
        continue;
      if (! r05_empty_seq(bb_4, be_4))
        continue;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_name( n6, r05c_CmdEmpty, "CmdEmpty" ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_name( n7, r05c_AlgLeft, "AlgLeft" ) )
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
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_E_b_1, eRanges_E_e_1 );
      res = refalrts::splice_evar( res, eRanges_B_b_1, eRanges_B_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eRanges_B_b_1, eRanges_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eRanges_B_b_1;
    static struct r05_node *eRanges_B_e_1;
    static struct r05_node *eRanges_E_b_1;
    static struct r05_node *eRanges_E_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eRange_b_1;
    static struct r05_node *eRange_e_1;
    static struct r05_node *sMode_1;
    static struct r05_node *sMode_2;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    static struct r05_node *eVars_B_b_1;
    static struct r05_node *eVars_B_e_1;
    static struct r05_node *eVars_E_b_1;
    static struct r05_node *eVars_E_e_1;
    static struct r05_node *sCount_1;
    static struct r05_node *sNum_2;
    static struct r05_node *sCount_2;
    // s.NumRanges e.Ranges_B ( s.Num ( & TkVariable s.Mode e.Index ) e.Range ) e.Ranges_E ( e.Vars_B ( s.Count s.Mode e.Index ) e.Vars_E ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    eRanges_B_b_1 = 0;
    eRanges_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_0;
      struct r05_node *be_3 = be_0;
      struct r05_node *bb_4 = bb_2;
      struct r05_node *be_4 = be_2;
      struct r05_node *bb_5 = 0;
      struct r05_node *be_5 = 0;
      if( ! refalrts::brackets_left( bb_5, be_5, bb_3, be_3 ) )
        continue;
      eRanges_E_b_1 = bb_3;
      eRanges_E_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1, bb_5, be_5 ) )
        continue;
      struct r05_node *bb_6 = 0;
      struct r05_node *be_6 = 0;
      if( ! refalrts::brackets_left( bb_6, be_6, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( r05c_TkVariable, bb_6, be_6 ) )
        continue;
      eRange_b_1 = bb_5;
      eRange_e_1 = be_5;
      if( ! refalrts::svar_left( sMode_1, bb_6, be_6 ) )
        continue;
      eIndex_b_1 = bb_6;
      eIndex_e_1 = be_6;
      eVars_B_b_1 = 0;
      eVars_B_e_1 = 0;
      refalrts::start_e_loop();
      do {
        struct r05_node *bb_7 = bb_4;
        struct r05_node *be_7 = be_4;
        struct r05_node *bb_8 = 0;
        struct r05_node *be_8 = 0;
        if( ! refalrts::brackets_left( bb_8, be_8, bb_7, be_7 ) )
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_8, be_8 ) )
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_8, be_8 ) )
          continue;
        eVars_E_b_1 = bb_7;
        eVars_E_e_1 = be_7;
        if( ! refalrts::svar_left( sCount_1, bb_8, be_8 ) )
          continue;
        if (! r05_empty_seq(bb_8, be_8))
          continue;

        refalrts::reset_allocator();
        struct r05_node *res = arg_begin;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return R05_NO_MEMORY;
        if( ! refalrts::copy_stvar( sCount_2, sCount_1 ) )
          return R05_NO_MEMORY;
        struct r05_node *n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return R05_NO_MEMORY;
        struct r05_node *n1 = 0;
        if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
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
        if( ! refalrts::alloc_open_call( n6 ) )
          return R05_NO_MEMORY;
        struct r05_node *n7 = 0;
        if( ! refalrts::alloc_name( n7, r05c_Inc, "Inc" ) )
          return R05_NO_MEMORY;
        struct r05_node *n8 = 0;
        if( ! refalrts::alloc_close_call( n8 ) )
          return R05_NO_MEMORY;
        struct r05_node *n9 = 0;
        if( ! refalrts::alloc_close_bracket( n9 ) )
          return R05_NO_MEMORY;
        struct r05_node *n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return R05_NO_MEMORY;
        struct r05_node *n11 = 0;
        if( ! refalrts::alloc_open_bracket( n11 ) )
          return R05_NO_MEMORY;
        struct r05_node *n12 = 0;
        if( ! refalrts::alloc_open_bracket( n12 ) )
          return R05_NO_MEMORY;
        struct r05_node *n13 = 0;
        if( ! refalrts::alloc_name( n13, r05c_CmdRepeated, "CmdRepeated" ) )
          return R05_NO_MEMORY;
        struct r05_node *n14 = 0;
        if( ! refalrts::alloc_name( n14, r05c_AlgLeft, "AlgLeft" ) )
          return R05_NO_MEMORY;
        struct r05_node *n15 = 0;
        if( ! refalrts::alloc_open_call( n15 ) )
          return R05_NO_MEMORY;
        struct r05_node *n16 = 0;
        if( ! refalrts::alloc_name( n16, r05c_Inc, "Inc" ) )
          return R05_NO_MEMORY;
        struct r05_node *n17 = 0;
        if( ! refalrts::alloc_close_call( n17 ) )
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
        refalrts::push_stack( n20 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n20 );
        refalrts::link_brackets( n11, n19 );
        res = refalrts::splice_elem( res, n19 );
        refalrts::link_brackets( n12, n18 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = refalrts::splice_stvar( res, sMode_2 );
        refalrts::push_stack( n17 );
        refalrts::push_stack( n15 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_stvar( res, sCount_2 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n4, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
        refalrts::link_brackets( n5, n9 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = refalrts::splice_stvar( res, sMode_1 );
        refalrts::push_stack( n8 );
        refalrts::push_stack( n6 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_stvar( res, sCount_1 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_evar( res, eRanges_E_b_1, eRanges_E_e_1 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eRange_b_1, eRange_e_1 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eRanges_B_b_1, eRanges_B_e_1 );
        res = refalrts::splice_stvar( res, sNumRanges_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        r05_use(&res);
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return R05_SUCCESS;
      } while ( refalrts::open_evar_advance( eVars_B_b_1, eVars_B_e_1, bb_4, be_4 ) );
    } while ( refalrts::open_evar_advance( eRanges_B_b_1, eRanges_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eRanges_B_b_1;
    static struct r05_node *eRanges_B_e_1;
    static struct r05_node *eRanges_E_b_1;
    static struct r05_node *eRanges_E_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eRange_b_1;
    static struct r05_node *eRange_e_1;
    static struct r05_node *sMode_1;
    static struct r05_node *sMode_2;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    static struct r05_node *eVars_B_b_1;
    static struct r05_node *eVars_B_e_1;
    static struct r05_node *eVars_E_b_1;
    static struct r05_node *eVars_E_e_1;
    static struct r05_node *sCount_1;
    static struct r05_node *sNum_2;
    static struct r05_node *sCount_2;
    // s.NumRanges e.Ranges_B ( s.Num e.Range ( & TkVariable s.Mode e.Index ) ) e.Ranges_E ( e.Vars_B ( s.Count s.Mode e.Index ) e.Vars_E ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    eRanges_B_b_1 = 0;
    eRanges_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_0;
      struct r05_node *be_3 = be_0;
      struct r05_node *bb_4 = bb_2;
      struct r05_node *be_4 = be_2;
      struct r05_node *bb_5 = 0;
      struct r05_node *be_5 = 0;
      if( ! refalrts::brackets_left( bb_5, be_5, bb_3, be_3 ) )
        continue;
      struct r05_node *bb_6 = 0;
      struct r05_node *be_6 = 0;
      if( ! refalrts::brackets_right( bb_6, be_6, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( r05c_TkVariable, bb_6, be_6 ) )
        continue;
      eRanges_E_b_1 = bb_3;
      eRanges_E_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1, bb_5, be_5 ) )
        continue;
      eRange_b_1 = bb_5;
      eRange_e_1 = be_5;
      if( ! refalrts::svar_left( sMode_1, bb_6, be_6 ) )
        continue;
      eIndex_b_1 = bb_6;
      eIndex_e_1 = be_6;
      eVars_B_b_1 = 0;
      eVars_B_e_1 = 0;
      refalrts::start_e_loop();
      do {
        struct r05_node *bb_7 = bb_4;
        struct r05_node *be_7 = be_4;
        struct r05_node *bb_8 = 0;
        struct r05_node *be_8 = 0;
        if( ! refalrts::brackets_left( bb_8, be_8, bb_7, be_7 ) )
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_8, be_8 ) )
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_8, be_8 ) )
          continue;
        eVars_E_b_1 = bb_7;
        eVars_E_e_1 = be_7;
        if( ! refalrts::svar_left( sCount_1, bb_8, be_8 ) )
          continue;
        if (! r05_empty_seq(bb_8, be_8))
          continue;

        refalrts::reset_allocator();
        struct r05_node *res = arg_begin;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return R05_NO_MEMORY;
        if( ! refalrts::copy_stvar( sCount_2, sCount_1 ) )
          return R05_NO_MEMORY;
        struct r05_node *n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return R05_NO_MEMORY;
        struct r05_node *n1 = 0;
        if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
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
        if( ! refalrts::alloc_open_call( n6 ) )
          return R05_NO_MEMORY;
        struct r05_node *n7 = 0;
        if( ! refalrts::alloc_name( n7, r05c_Inc, "Inc" ) )
          return R05_NO_MEMORY;
        struct r05_node *n8 = 0;
        if( ! refalrts::alloc_close_call( n8 ) )
          return R05_NO_MEMORY;
        struct r05_node *n9 = 0;
        if( ! refalrts::alloc_close_bracket( n9 ) )
          return R05_NO_MEMORY;
        struct r05_node *n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return R05_NO_MEMORY;
        struct r05_node *n11 = 0;
        if( ! refalrts::alloc_open_bracket( n11 ) )
          return R05_NO_MEMORY;
        struct r05_node *n12 = 0;
        if( ! refalrts::alloc_open_bracket( n12 ) )
          return R05_NO_MEMORY;
        struct r05_node *n13 = 0;
        if( ! refalrts::alloc_name( n13, r05c_CmdRepeated, "CmdRepeated" ) )
          return R05_NO_MEMORY;
        struct r05_node *n14 = 0;
        if( ! refalrts::alloc_name( n14, r05c_AlgRight, "AlgRight" ) )
          return R05_NO_MEMORY;
        struct r05_node *n15 = 0;
        if( ! refalrts::alloc_open_call( n15 ) )
          return R05_NO_MEMORY;
        struct r05_node *n16 = 0;
        if( ! refalrts::alloc_name( n16, r05c_Inc, "Inc" ) )
          return R05_NO_MEMORY;
        struct r05_node *n17 = 0;
        if( ! refalrts::alloc_close_call( n17 ) )
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
        refalrts::push_stack( n20 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n20 );
        refalrts::link_brackets( n11, n19 );
        res = refalrts::splice_elem( res, n19 );
        refalrts::link_brackets( n12, n18 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = refalrts::splice_stvar( res, sMode_2 );
        refalrts::push_stack( n17 );
        refalrts::push_stack( n15 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_stvar( res, sCount_2 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n4, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
        refalrts::link_brackets( n5, n9 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = refalrts::splice_stvar( res, sMode_1 );
        refalrts::push_stack( n8 );
        refalrts::push_stack( n6 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_stvar( res, sCount_1 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_evar( res, eRanges_E_b_1, eRanges_E_e_1 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eRange_b_1, eRange_e_1 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eRanges_B_b_1, eRanges_B_e_1 );
        res = refalrts::splice_stvar( res, sNumRanges_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        r05_use(&res);
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return R05_SUCCESS;
      } while ( refalrts::open_evar_advance( eVars_B_b_1, eVars_B_e_1, bb_4, be_4 ) );
    } while ( refalrts::open_evar_advance( eRanges_B_b_1, eRanges_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eRanges_B_b_1;
    static struct r05_node *eRanges_B_e_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *eRanges_E_b_1;
    static struct r05_node *eRanges_E_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    // s.NumRanges e.Ranges_B ( s.Num ( & TkVariable 'e e.Index ) ) e.Ranges_E ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    eRanges_B_b_1 = 0;
    eRanges_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_0;
      struct r05_node *be_3 = be_0;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      struct r05_node *bb_5 = 0;
      struct r05_node *be_5 = 0;
      if( ! refalrts::brackets_right( bb_5, be_5, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( r05c_TkVariable, bb_5, be_5 ) )
        continue;
      if( ! refalrts::char_left( 'e', bb_5, be_5 ) )
        continue;
      eIndex_b_1 = bb_5;
      eIndex_e_1 = be_5;
      eRanges_E_b_1 = bb_3;
      eRanges_E_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) )
        continue;
      if (! r05_empty_seq(bb_4, be_4))
        continue;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return R05_NO_MEMORY;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_number( n4, 1UL ) )
        return R05_NO_MEMORY;
      struct r05_node *n5 = 0;
      if( ! refalrts::alloc_char( n5, 'e' ) )
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
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_name( n10, r05c_CmdClosedE, "CmdClosedE" ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_name( n11, r05c_AlgLeft, "AlgLeft" ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_char( n12, 'e' ) )
        return R05_NO_MEMORY;
      struct r05_node *n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
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
      refalrts::link_brackets( n8, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n9, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n2, n7 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n3, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_E_b_1, eRanges_E_e_1 );
      res = refalrts::splice_evar( res, eRanges_B_b_1, eRanges_B_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eRanges_B_b_1, eRanges_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eRanges_B_b_1;
    static struct r05_node *eRanges_B_e_1;
    static struct r05_node *eRanges_E_b_1;
    static struct r05_node *eRanges_E_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *eRange_b_1;
    static struct r05_node *eRange_e_1;
    static struct r05_node *sNum_2;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    // s.NumRanges e.Ranges_B ( s.Num ( & TkVariable 's e.Index ) e.Range ) e.Ranges_E ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    eRanges_B_b_1 = 0;
    eRanges_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_0;
      struct r05_node *be_3 = be_0;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      eRanges_E_b_1 = bb_3;
      eRanges_E_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) )
        continue;
      struct r05_node *bb_5 = 0;
      struct r05_node *be_5 = 0;
      if( ! refalrts::brackets_left( bb_5, be_5, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( r05c_TkVariable, bb_5, be_5 ) )
        continue;
      if( ! refalrts::char_left( 's', bb_5, be_5 ) )
        continue;
      eIndex_b_1 = bb_5;
      eIndex_e_1 = be_5;
      eRange_b_1 = bb_4;
      eRange_e_1 = be_4;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return R05_NO_MEMORY;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return R05_NO_MEMORY;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_char( n7, 's' ) )
        return R05_NO_MEMORY;
      struct r05_node *n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_name( n12, r05c_CmdVar, "CmdVar" ) )
        return R05_NO_MEMORY;
      struct r05_node *n13 = 0;
      if( ! refalrts::alloc_name( n13, r05c_AlgLeft, "AlgLeft" ) )
        return R05_NO_MEMORY;
      struct r05_node *n14 = 0;
      if( ! refalrts::alloc_char( n14, 's' ) )
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
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_b_1, eRanges_E_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_b_1, eRange_e_1 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_b_1, eRanges_B_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eRanges_B_b_1, eRanges_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eRanges_B_b_1;
    static struct r05_node *eRanges_B_e_1;
    static struct r05_node *eRanges_E_b_1;
    static struct r05_node *eRanges_E_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *eRange_b_1;
    static struct r05_node *eRange_e_1;
    static struct r05_node *sNum_2;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    // s.NumRanges e.Ranges_B ( s.Num ( & TkVariable 't e.Index ) e.Range ) e.Ranges_E ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    eRanges_B_b_1 = 0;
    eRanges_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_0;
      struct r05_node *be_3 = be_0;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      eRanges_E_b_1 = bb_3;
      eRanges_E_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) )
        continue;
      struct r05_node *bb_5 = 0;
      struct r05_node *be_5 = 0;
      if( ! refalrts::brackets_left( bb_5, be_5, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( r05c_TkVariable, bb_5, be_5 ) )
        continue;
      if( ! refalrts::char_left( 't', bb_5, be_5 ) )
        continue;
      eIndex_b_1 = bb_5;
      eIndex_e_1 = be_5;
      eRange_b_1 = bb_4;
      eRange_e_1 = be_4;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return R05_NO_MEMORY;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return R05_NO_MEMORY;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_char( n7, 't' ) )
        return R05_NO_MEMORY;
      struct r05_node *n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_name( n12, r05c_CmdVar, "CmdVar" ) )
        return R05_NO_MEMORY;
      struct r05_node *n13 = 0;
      if( ! refalrts::alloc_name( n13, r05c_AlgLeft, "AlgLeft" ) )
        return R05_NO_MEMORY;
      struct r05_node *n14 = 0;
      if( ! refalrts::alloc_char( n14, 't' ) )
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
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_b_1, eRanges_E_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_b_1, eRange_e_1 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_b_1, eRanges_B_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eRanges_B_b_1, eRanges_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eRanges_B_b_1;
    static struct r05_node *eRanges_B_e_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *eRanges_E_b_1;
    static struct r05_node *eRanges_E_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eRange_b_1;
    static struct r05_node *eRange_e_1;
    static struct r05_node *sNum_2;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    // s.NumRanges e.Ranges_B ( s.Num e.Range ( & TkVariable 's e.Index ) ) e.Ranges_E ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    eRanges_B_b_1 = 0;
    eRanges_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_0;
      struct r05_node *be_3 = be_0;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      struct r05_node *bb_5 = 0;
      struct r05_node *be_5 = 0;
      if( ! refalrts::brackets_right( bb_5, be_5, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( r05c_TkVariable, bb_5, be_5 ) )
        continue;
      if( ! refalrts::char_left( 's', bb_5, be_5 ) )
        continue;
      eIndex_b_1 = bb_5;
      eIndex_e_1 = be_5;
      eRanges_E_b_1 = bb_3;
      eRanges_E_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) )
        continue;
      eRange_b_1 = bb_4;
      eRange_e_1 = be_4;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return R05_NO_MEMORY;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return R05_NO_MEMORY;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_char( n7, 's' ) )
        return R05_NO_MEMORY;
      struct r05_node *n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_name( n12, r05c_CmdVar, "CmdVar" ) )
        return R05_NO_MEMORY;
      struct r05_node *n13 = 0;
      if( ! refalrts::alloc_name( n13, r05c_AlgRight, "AlgRight" ) )
        return R05_NO_MEMORY;
      struct r05_node *n14 = 0;
      if( ! refalrts::alloc_char( n14, 's' ) )
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
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_b_1, eRanges_E_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_b_1, eRange_e_1 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_b_1, eRanges_B_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eRanges_B_b_1, eRanges_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eRanges_B_b_1;
    static struct r05_node *eRanges_B_e_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *eRanges_E_b_1;
    static struct r05_node *eRanges_E_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eRange_b_1;
    static struct r05_node *eRange_e_1;
    static struct r05_node *sNum_2;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    // s.NumRanges e.Ranges_B ( s.Num e.Range ( & TkVariable 't e.Index ) ) e.Ranges_E ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    eRanges_B_b_1 = 0;
    eRanges_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_0;
      struct r05_node *be_3 = be_0;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      struct r05_node *bb_5 = 0;
      struct r05_node *be_5 = 0;
      if( ! refalrts::brackets_right( bb_5, be_5, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( r05c_TkVariable, bb_5, be_5 ) )
        continue;
      if( ! refalrts::char_left( 't', bb_5, be_5 ) )
        continue;
      eIndex_b_1 = bb_5;
      eIndex_e_1 = be_5;
      eRanges_E_b_1 = bb_3;
      eRanges_E_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) )
        continue;
      eRange_b_1 = bb_4;
      eRange_e_1 = be_4;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return R05_NO_MEMORY;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return R05_NO_MEMORY;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_char( n7, 't' ) )
        return R05_NO_MEMORY;
      struct r05_node *n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_name( n12, r05c_CmdVar, "CmdVar" ) )
        return R05_NO_MEMORY;
      struct r05_node *n13 = 0;
      if( ! refalrts::alloc_name( n13, r05c_AlgRight, "AlgRight" ) )
        return R05_NO_MEMORY;
      struct r05_node *n14 = 0;
      if( ! refalrts::alloc_char( n14, 't' ) )
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
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_b_1, eRanges_E_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_b_1, eRange_e_1 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_b_1, eRanges_B_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eRanges_B_b_1, eRanges_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eRanges_B_b_1;
    static struct r05_node *eRanges_B_e_1;
    static struct r05_node *eRanges_E_b_1;
    static struct r05_node *eRanges_E_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *eRange_b_1;
    static struct r05_node *eRange_e_1;
    static struct r05_node *sNum_2;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    // s.NumRanges e.Ranges_B ( s.Num ( & TkVariable 'e e.Index ) e.Range ) e.Ranges_E ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    eRanges_B_b_1 = 0;
    eRanges_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_0;
      struct r05_node *be_3 = be_0;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      eRanges_E_b_1 = bb_3;
      eRanges_E_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) )
        continue;
      struct r05_node *bb_5 = 0;
      struct r05_node *be_5 = 0;
      if( ! refalrts::brackets_left( bb_5, be_5, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( r05c_TkVariable, bb_5, be_5 ) )
        continue;
      if( ! refalrts::char_left( 'e', bb_5, be_5 ) )
        continue;
      eIndex_b_1 = bb_5;
      eIndex_e_1 = be_5;
      eRange_b_1 = bb_4;
      eRange_e_1 = be_4;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return R05_NO_MEMORY;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return R05_NO_MEMORY;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_DoGenPattern, "DoGenPattern" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_name( n3, r05c_SaveRanges, "SaveRanges" ) )
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
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_number( n10, 1UL ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_char( n11, 'e' ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
        return R05_NO_MEMORY;
      struct r05_node *n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return R05_NO_MEMORY;
      struct r05_node *n14 = 0;
      if( ! refalrts::alloc_open_bracket( n14 ) )
        return R05_NO_MEMORY;
      struct r05_node *n15 = 0;
      if( ! refalrts::alloc_open_bracket( n15 ) )
        return R05_NO_MEMORY;
      struct r05_node *n16 = 0;
      if( ! refalrts::alloc_name( n16, r05c_CmdOpenedE, "CmdOpenedE" ) )
        return R05_NO_MEMORY;
      struct r05_node *n17 = 0;
      if( ! refalrts::alloc_name( n17, r05c_AlgLeft, "AlgLeft" ) )
        return R05_NO_MEMORY;
      struct r05_node *n18 = 0;
      if( ! refalrts::alloc_char( n18, 'e' ) )
        return R05_NO_MEMORY;
      struct r05_node *n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return R05_NO_MEMORY;
      struct r05_node *n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return R05_NO_MEMORY;
      struct r05_node *n21 = 0;
      if( ! refalrts::alloc_close_call( n21 ) )
        return R05_NO_MEMORY;
      struct r05_node *n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n22 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::push_stack( n21 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n14, n20 );
      res = refalrts::splice_elem( res, n20 );
      refalrts::link_brackets( n15, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n8, n13 );
      res = refalrts::splice_elem( res, n13 );
      refalrts::link_brackets( n9, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eRanges_E_b_1, eRanges_E_e_1 );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eRange_b_1, eRange_e_1 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eRanges_B_b_1, eRanges_B_e_1 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNumRanges_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eRanges_B_b_1, eRanges_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    // s.NumRanges ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_SaveRanges(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    static struct r05_node *eScannedRanges_b_1;
    static struct r05_node *eScannedRanges_e_1;
    static struct r05_node *eRanges_b_1;
    static struct r05_node *eRanges_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eRange_b_1;
    static struct r05_node *eRange_e_1;
    static struct r05_node *sNumRanges_2;
    static struct r05_node *sNumRanges_3;
    // s.NumRanges ( e.ScannedRanges ) ( s.Num e.Range ) e.Ranges ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    eScannedRanges_b_1 = bb_3;
    eScannedRanges_e_1 = be_3;
    eRanges_b_1 = bb_0;
    eRanges_e_1 = be_0;
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) )
      break;
    eRange_b_1 = bb_4;
    eRange_e_1 = be_4;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sNumRanges_2, sNumRanges_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sNumRanges_3, sNumRanges_2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_SaveRanges, "SaveRanges" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
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
    if( ! refalrts::alloc_close_bracket( n7 ) )
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
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_name( n13, r05c_CmdSave, "CmdSave" ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
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
    refalrts::link_brackets( n11, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sNumRanges_3 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eRanges_b_1, eRanges_e_1 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eRange_b_1, eRange_e_1 );
    res = refalrts::splice_stvar( res, sNumRanges_2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eScannedRanges_b_1, eScannedRanges_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNumRanges_1 );
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
    static struct r05_node *eScannedRanges_b_1;
    static struct r05_node *eScannedRanges_e_1;
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sNumRanges_1;
    // s.NumRanges ( e.ScannedRanges ) ( e.Vars ) ( e.Commands )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eScannedRanges_b_1 = bb_3;
    eScannedRanges_e_1 = be_3;
    eVars_b_1 = bb_2;
    eVars_e_1 = be_2;
    eCommands_b_1 = bb_1;
    eCommands_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eScannedRanges_b_1, eScannedRanges_e_1 );
    res = refalrts::splice_stvar( res, sNumRanges_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_TextFromPattern(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eInner_b_1;
    static struct r05_node *eInner_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    // ( & Brackets e.Inner ) e.Tail
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Brackets, bb_1, be_1 ) )
      break;
    eInner_b_1 = bb_1;
    eInner_e_1 = be_1;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, " (", 2) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_TextFromPattern, "TextFromPattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, " )", 2) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_TextFromPattern, "TextFromPattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, n5, n6 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eInner_b_1, eInner_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sChar_1;
    // ( & Symbol & Char s.Char ) e.Tail
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Symbol, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( r05c_Char, bb_1, be_1 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, " \'", 2) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_TextFromPattern_Char, "TextFromPattern_Char" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_Symbol, "Symbol" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_Char, "Char" ) )
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
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sNumber_1;
    // ( & Symbol & Number s.Number ) e.Tail
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Symbol, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( r05c_Number, bb_1, be_1 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_StrFromInt, "StrFromInt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_TextFromPattern, "TextFromPattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sNumber_1 );
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
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    // ( & Symbol & Name e.Name ) e.Tail
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Symbol, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( r05c_Name, bb_1, be_1 ) )
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, " & ", 3) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_TextFromPattern, "TextFromPattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sMode_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    // ( & TkVariable s.Mode e.Index ) e.Tail
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkVariable, bb_1, be_1 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) )
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_char( n1, '.' ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_TextFromPattern, "TextFromPattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, sMode_1 );
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
    //
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_TextFromPattern_Char(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *sChar_1;
    // ( & Symbol & Char s.Char ) e.Tail
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Symbol, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( r05c_Char, bb_1, be_1 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_EscapeChar, "EscapeChar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_TextFromPattern_Char, "TextFromPattern_Char" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sChar_1 );
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
    //
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '\'' ) )
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
    static struct r05_node *eOther_b_1;
    static struct r05_node *eOther_e_1;
    // e.Other
    eOther_b_1 = bb_0;
    eOther_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TextFromPattern, "TextFromPattern" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eOther_b_1, eOther_e_1 );
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

static enum r05_fnresult r05c_GenResult(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    // e.Result
    eResult_b_1 = bb_0;
    eResult_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_number( n8, 0UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
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

enum r05_fnresult r05c_CmdAllocateElem(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdLinkBrackets(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdPushStack(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdInsertElem(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdInsertVar(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdInsertString(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ElSymbol(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ElString(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ElOpenBracket(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ElCloseBracket(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ElOpenCall(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ElCloseCall(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_TkString(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_DoGenResult(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eAllocCommands_b_1;
    static struct r05_node *eAllocCommands_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sCounter_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *sChar1_1;
    static struct r05_node *sChar2_1;
    // ( e.Vars ) ( e.AllocCommands ) ( e.Commands ) s.Counter ( & Symbol & Char s.Char1 ) ( & Symbol & Char s.Char2 ) e.Result
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
    eVars_b_1 = bb_1;
    eVars_e_1 = be_1;
    eAllocCommands_b_1 = bb_2;
    eAllocCommands_e_1 = be_2;
    eCommands_b_1 = bb_3;
    eCommands_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Symbol, bb_4, be_4 ) )
      break;
    if( ! refalrts::function_left( r05c_Char, bb_4, be_4 ) )
      break;
    struct r05_node *bb_5 = 0;
    struct r05_node *be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Symbol, bb_5, be_5 ) )
      break;
    if( ! refalrts::function_left( r05c_Char, bb_5, be_5 ) )
      break;
    eResult_b_1 = bb_0;
    eResult_e_1 = be_0;
    if( ! refalrts::svar_left( sChar1_1, bb_4, be_4 ) )
      break;
    if (! r05_empty_seq(bb_4, be_4))
      break;
    if( ! refalrts::svar_left( sChar2_1, bb_5, be_5 ) )
      break;
    if (! r05_empty_seq(bb_5, be_5))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_TkString, "TkString" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_number( n10, 2UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n12 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::link_brackets( n8, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sChar2_1 );
    res = refalrts::splice_stvar( res, sChar1_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_b_1, eAllocCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eAllocCommands_b_1;
    static struct r05_node *eAllocCommands_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sCounter_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *sValue_1;
    static struct r05_node *sCounter_2;
    static struct r05_node *sCounter_3;
    // ( e.Vars ) ( e.AllocCommands ) ( e.Commands ) s.Counter ( & Symbol & Char s.Value ) e.Result
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
    eVars_b_1 = bb_1;
    eVars_e_1 = be_1;
    eAllocCommands_b_1 = bb_2;
    eAllocCommands_e_1 = be_2;
    eCommands_b_1 = bb_3;
    eCommands_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Symbol, bb_4, be_4 ) )
      break;
    if( ! refalrts::function_left( r05c_Char, bb_4, be_4 ) )
      break;
    eResult_b_1 = bb_0;
    eResult_e_1 = be_0;
    if( ! refalrts::svar_left( sValue_1, bb_4, be_4 ) )
      break;
    if (! r05_empty_seq(bb_4, be_4))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, r05c_CmdAllocateElem, "CmdAllocateElem" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_ElSymbol, "ElSymbol" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Char, "Char" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_name( n13, r05c_CmdInsertElem, "CmdInsertElem" ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_open_call( n16 ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_name( n17, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return R05_NO_MEMORY;
    struct r05_node *n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n19 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n16 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n11, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n4, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n5, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sValue_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_b_1, eAllocCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eAllocCommands_b_1;
    static struct r05_node *eAllocCommands_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sCounter_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *sLen_1;
    static struct r05_node *eString_b_1;
    static struct r05_node *eString_e_1;
    static struct r05_node *sChar_1;
    // ( e.Vars ) ( e.AllocCommands ) ( e.Commands ) s.Counter ( & TkString s.Len e.String ) ( & Symbol & Char s.Char ) e.Result
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
    eVars_b_1 = bb_1;
    eVars_e_1 = be_1;
    eAllocCommands_b_1 = bb_2;
    eAllocCommands_e_1 = be_2;
    eCommands_b_1 = bb_3;
    eCommands_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkString, bb_4, be_4 ) )
      break;
    struct r05_node *bb_5 = 0;
    struct r05_node *be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Symbol, bb_5, be_5 ) )
      break;
    if( ! refalrts::function_left( r05c_Char, bb_5, be_5 ) )
      break;
    eResult_b_1 = bb_0;
    eResult_e_1 = be_0;
    if( ! refalrts::svar_left( sLen_1, bb_4, be_4 ) )
      break;
    eString_b_1 = bb_4;
    eString_e_1 = be_4;
    if( ! refalrts::svar_left( sChar_1, bb_5, be_5 ) )
      break;
    if (! r05_empty_seq(bb_5, be_5))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_TkString, "TkString" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_name( n11, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
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
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::link_brackets( n8, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_evar( res, eString_b_1, eString_e_1 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sLen_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_b_1, eAllocCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eAllocCommands_b_1;
    static struct r05_node *eAllocCommands_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sCounter_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *sLen_1;
    static struct r05_node *eString_b_1;
    static struct r05_node *eString_e_1;
    static struct r05_node *sCounter_2;
    static struct r05_node *sCounter_3;
    // ( e.Vars ) ( e.AllocCommands ) ( e.Commands ) s.Counter ( & TkString s.Len e.String ) e.Result
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
    eVars_b_1 = bb_1;
    eVars_e_1 = be_1;
    eAllocCommands_b_1 = bb_2;
    eAllocCommands_e_1 = be_2;
    eCommands_b_1 = bb_3;
    eCommands_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkString, bb_4, be_4 ) )
      break;
    eResult_b_1 = bb_0;
    eResult_e_1 = be_0;
    if( ! refalrts::svar_left( sLen_1, bb_4, be_4 ) )
      break;
    eString_b_1 = bb_4;
    eString_e_1 = be_4;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, r05c_CmdAllocateElem, "CmdAllocateElem" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_ElString, "ElString" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_name( n12, r05c_CmdInsertString, "CmdInsertString" ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_name( n16, r05c_Add, "Add" ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_number( n17, 2UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return R05_NO_MEMORY;
    struct r05_node *n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n19 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eString_b_1, eString_e_1 );
    res = refalrts::splice_stvar( res, sLen_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_b_1, eAllocCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eAllocCommands_b_1;
    static struct r05_node *eAllocCommands_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sCounter_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *sType_1;
    static struct r05_node *eValue_b_1;
    static struct r05_node *eValue_e_1;
    static struct r05_node *sCounter_2;
    static struct r05_node *sCounter_3;
    // ( e.Vars ) ( e.AllocCommands ) ( e.Commands ) s.Counter ( & Symbol s.Type e.Value ) e.Result
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
    eVars_b_1 = bb_1;
    eVars_e_1 = be_1;
    eAllocCommands_b_1 = bb_2;
    eAllocCommands_e_1 = be_2;
    eCommands_b_1 = bb_3;
    eCommands_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Symbol, bb_4, be_4 ) )
      break;
    eResult_b_1 = bb_0;
    eResult_e_1 = be_0;
    if( ! refalrts::svar_left( sType_1, bb_4, be_4 ) )
      break;
    eValue_b_1 = bb_4;
    eValue_e_1 = be_4;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, r05c_CmdAllocateElem, "CmdAllocateElem" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_ElSymbol, "ElSymbol" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_name( n12, r05c_CmdInsertElem, "CmdInsertElem" ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_name( n16, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n18 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eValue_b_1, eValue_e_1 );
    res = refalrts::splice_stvar( res, sType_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_b_1, eAllocCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eAllocCommands_b_1;
    static struct r05_node *eAllocCommands_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sCounter_1;
    static struct r05_node *eInBrackets_b_1;
    static struct r05_node *eInBrackets_e_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *sCounter_2;
    static struct r05_node *sCounter_3;
    static struct r05_node *sCounter_4;
    // ( e.Vars ) ( e.AllocCommands ) ( e.Commands ) s.Counter ( & Brackets e.InBrackets ) e.Result
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
    eVars_b_1 = bb_1;
    eVars_e_1 = be_1;
    eAllocCommands_b_1 = bb_2;
    eAllocCommands_e_1 = be_2;
    eCommands_b_1 = bb_3;
    eCommands_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Brackets, bb_4, be_4 ) )
      break;
    eInBrackets_b_1 = bb_4;
    eInBrackets_e_1 = be_4;
    eResult_b_1 = bb_0;
    eResult_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCounter_4, sCounter_3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, r05c_CmdAllocateElem, "CmdAllocateElem" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_ElOpenBracket, "ElOpenBracket" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_name( n12, r05c_CmdInsertElem, "CmdInsertElem" ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_name( n16, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return R05_NO_MEMORY;
    struct r05_node *n19 = 0;
    if( ! refalrts::alloc_name( n19, r05c_TkCloseBracket, "TkCloseBracket" ) )
      return R05_NO_MEMORY;
    struct r05_node *n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return R05_NO_MEMORY;
    struct r05_node *n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n21 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::link_brackets( n18, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_4 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eInBrackets_b_1, eInBrackets_e_1 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_b_1, eAllocCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eAllocCommands_b_1;
    static struct r05_node *eAllocCommands_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sCounter_1;
    static struct r05_node *eInBrackets_b_1;
    static struct r05_node *eInBrackets_e_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *sCounter_2;
    static struct r05_node *sCounter_3;
    static struct r05_node *sCounter_4;
    // ( e.Vars ) ( e.AllocCommands ) ( e.Commands ) s.Counter ( & CallBrackets e.InBrackets ) e.Result
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
    eVars_b_1 = bb_1;
    eVars_e_1 = be_1;
    eAllocCommands_b_1 = bb_2;
    eAllocCommands_e_1 = be_2;
    eCommands_b_1 = bb_3;
    eCommands_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_CallBrackets, bb_4, be_4 ) )
      break;
    eInBrackets_b_1 = bb_4;
    eInBrackets_e_1 = be_4;
    eResult_b_1 = bb_0;
    eResult_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCounter_4, sCounter_3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, r05c_CmdAllocateElem, "CmdAllocateElem" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_ElOpenCall, "ElOpenCall" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_name( n12, r05c_CmdInsertElem, "CmdInsertElem" ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_name( n16, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return R05_NO_MEMORY;
    struct r05_node *n19 = 0;
    if( ! refalrts::alloc_name( n19, r05c_TkCloseCall, "TkCloseCall" ) )
      return R05_NO_MEMORY;
    struct r05_node *n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return R05_NO_MEMORY;
    struct r05_node *n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n21 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::link_brackets( n18, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_4 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eInBrackets_b_1, eInBrackets_e_1 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_b_1, eAllocCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eAllocCommands_b_1;
    static struct r05_node *eAllocCommands_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sCounter_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *sOpenCounter_1;
    static struct r05_node *sCounter_2;
    static struct r05_node *sCounter_3;
    static struct r05_node *sCounter_4;
    // ( e.Vars ) ( e.AllocCommands ) ( e.Commands ) s.Counter ( & TkCloseBracket s.OpenCounter ) e.Result
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
    eVars_b_1 = bb_1;
    eVars_e_1 = be_1;
    eAllocCommands_b_1 = bb_2;
    eAllocCommands_e_1 = be_2;
    eCommands_b_1 = bb_3;
    eCommands_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkCloseBracket, bb_4, be_4 ) )
      break;
    eResult_b_1 = bb_0;
    eResult_e_1 = be_0;
    if( ! refalrts::svar_left( sOpenCounter_1, bb_4, be_4 ) )
      break;
    if (! r05_empty_seq(bb_4, be_4))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCounter_4, sCounter_3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, r05c_CmdAllocateElem, "CmdAllocateElem" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_ElCloseBracket, "ElCloseBracket" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_name( n12, r05c_CmdLinkBrackets, "CmdLinkBrackets" ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_name( n15, r05c_CmdInsertElem, "CmdInsertElem" ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return R05_NO_MEMORY;
    struct r05_node *n19 = 0;
    if( ! refalrts::alloc_name( n19, r05c_Inc, "Inc" ) )
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
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_4 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n10, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_stvar( res, sOpenCounter_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_b_1, eAllocCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eAllocCommands_b_1;
    static struct r05_node *eAllocCommands_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sCounter_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *sOpenCounter_1;
    static struct r05_node *sCounter_2;
    static struct r05_node *sCounter_3;
    static struct r05_node *sCounter_4;
    // ( e.Vars ) ( e.AllocCommands ) ( e.Commands ) s.Counter ( & TkCloseCall s.OpenCounter ) e.Result
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
    eVars_b_1 = bb_1;
    eVars_e_1 = be_1;
    eAllocCommands_b_1 = bb_2;
    eAllocCommands_e_1 = be_2;
    eCommands_b_1 = bb_3;
    eCommands_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkCloseCall, bb_4, be_4 ) )
      break;
    eResult_b_1 = bb_0;
    eResult_e_1 = be_0;
    if( ! refalrts::svar_left( sOpenCounter_1, bb_4, be_4 ) )
      break;
    if (! r05_empty_seq(bb_4, be_4))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCounter_4, sCounter_3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, r05c_CmdAllocateElem, "CmdAllocateElem" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_ElCloseCall, "ElCloseCall" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_name( n12, r05c_CmdPushStack, "CmdPushStack" ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_name( n15, r05c_CmdPushStack, "CmdPushStack" ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_name( n18, r05c_CmdInsertElem, "CmdInsertElem" ) )
      return R05_NO_MEMORY;
    struct r05_node *n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return R05_NO_MEMORY;
    struct r05_node *n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return R05_NO_MEMORY;
    struct r05_node *n21 = 0;
    if( ! refalrts::alloc_open_call( n21 ) )
      return R05_NO_MEMORY;
    struct r05_node *n22 = 0;
    if( ! refalrts::alloc_name( n22, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return R05_NO_MEMORY;
    struct r05_node *n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n24 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n23 );
    refalrts::push_stack( n21 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, sCounter_4 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n10, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n17, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sOpenCounter_1 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_b_1, eAllocCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static struct r05_node *eAllocCommands_b_1;
    static struct r05_node *eAllocCommands_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sCounter_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *sMode_1;
    static struct r05_node *sMode_2;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    static struct r05_node *eVars_B_b_1;
    static struct r05_node *eVars_B_e_1;
    static struct r05_node *eVars_E_b_1;
    static struct r05_node *eVars_E_e_1;
    static struct r05_node *sUsings_1;
    static struct r05_node *sUsings_2;
    // ( e.Vars_B ( s.Usings s.Mode e.Index ) e.Vars_E ) ( e.AllocCommands ) ( e.Commands ) s.Counter ( & TkVariable s.Mode e.Index ) e.Result
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
    eAllocCommands_b_1 = bb_2;
    eAllocCommands_e_1 = be_2;
    eCommands_b_1 = bb_3;
    eCommands_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkVariable, bb_4, be_4 ) )
      break;
    eResult_b_1 = bb_0;
    eResult_e_1 = be_0;
    if( ! refalrts::svar_left( sMode_1, bb_4, be_4 ) )
      break;
    eIndex_b_1 = bb_4;
    eIndex_e_1 = be_4;
    eVars_B_b_1 = 0;
    eVars_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_5 = bb_1;
      struct r05_node *be_5 = be_1;
      struct r05_node *bb_6 = 0;
      struct r05_node *be_6 = 0;
      if( ! refalrts::brackets_left( bb_6, be_6, bb_5, be_5 ) )
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_6, be_6 ) )
        continue;
      if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_6, be_6 ) )
        continue;
      eVars_E_b_1 = bb_5;
      eVars_E_e_1 = be_5;
      if( ! refalrts::svar_left( sUsings_1, bb_6, be_6 ) )
        continue;
      if (! r05_empty_seq(bb_6, be_6))
        continue;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
        return R05_NO_MEMORY;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_DoGenResult, "DoGenResult" ) )
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
      if( ! refalrts::alloc_name( n5, r05c_Inc, "Inc" ) )
        return R05_NO_MEMORY;
      struct r05_node *n6 = 0;
      if( ! refalrts::alloc_close_call( n6 ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return R05_NO_MEMORY;
      struct r05_node *n13 = 0;
      if( ! refalrts::alloc_name( n13, r05c_CmdInsertVar, "CmdInsertVar" ) )
        return R05_NO_MEMORY;
      struct r05_node *n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return R05_NO_MEMORY;
      struct r05_node *n15 = 0;
      if( ! refalrts::alloc_name( n15, r05c_Inc, "Inc" ) )
        return R05_NO_MEMORY;
      struct r05_node *n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return R05_NO_MEMORY;
      struct r05_node *n17 = 0;
      if( ! refalrts::alloc_close_bracket( n17 ) )
        return R05_NO_MEMORY;
      struct r05_node *n18 = 0;
      if( ! refalrts::alloc_close_bracket( n18 ) )
        return R05_NO_MEMORY;
      struct r05_node *n19 = 0;
      if( ! refalrts::alloc_close_call( n19 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n19 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
      res = refalrts::splice_stvar( res, sCounter_1 );
      refalrts::link_brackets( n11, n18 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      refalrts::link_brackets( n12, n17 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      refalrts::push_stack( n16 );
      refalrts::push_stack( n14 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, sUsings_2 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eAllocCommands_b_1, eAllocCommands_e_1 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n2, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
      refalrts::link_brackets( n3, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      refalrts::push_stack( n6 );
      refalrts::push_stack( n4 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_stvar( res, sUsings_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eVars_B_b_1, eVars_B_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eAllocCommands_b_1;
    static struct r05_node *eAllocCommands_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sCounter_1;
    static struct r05_node *eResult_b_1;
    static struct r05_node *eResult_e_1;
    static struct r05_node *sMode_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *sMode_2;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    // ( e.Vars ) ( e.AllocCommands ) ( e.Commands ) s.Counter ( & TkVariable s.Mode e.Index ) e.Result
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
    eVars_b_1 = bb_1;
    eVars_e_1 = be_1;
    eAllocCommands_b_1 = bb_2;
    eAllocCommands_e_1 = be_2;
    eCommands_b_1 = bb_3;
    eCommands_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_TkVariable, bb_4, be_4 ) )
      break;
    eResult_b_1 = bb_0;
    eResult_e_1 = be_0;
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
    if( ! refalrts::alloc_name( n1, r05c_DoGenResult, "DoGenResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_number( n4, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
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
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_name( n11, r05c_CmdInsertVar, "CmdInsertVar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_number( n12, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
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
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    refalrts::link_brackets( n9, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n10, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eAllocCommands_b_1, eAllocCommands_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    static struct r05_node *eAllocCommands_b_1;
    static struct r05_node *eAllocCommands_e_1;
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    static struct r05_node *sCounter_1;
    // ( e.Vars ) ( e.AllocCommands ) ( e.Commands ) s.Counter
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
    eVars_b_1 = bb_1;
    eVars_e_1 = be_1;
    eAllocCommands_b_1 = bb_2;
    eAllocCommands_e_1 = be_2;
    eCommands_b_1 = bb_3;
    eCommands_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
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
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eAllocCommands_b_1, eAllocCommands_e_1 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdEmptyResult(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdReturnResult(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_GeneralizeResult(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *ePatternVars_b_1;
    static struct r05_node *ePatternVars_e_1;
    static struct r05_node *ePatternCommands_b_1;
    static struct r05_node *ePatternCommands_e_1;
    static struct r05_node *eResultVars_b_1;
    static struct r05_node *eResultVars_e_1;
    static struct r05_node *eResultAllocCommands_b_1;
    static struct r05_node *eResultAllocCommands_e_1;
    static struct r05_node *eResultCommands_b_1;
    static struct r05_node *eResultCommands_e_1;
    static struct r05_node *ePatternCommands_b_2;
    static struct r05_node *ePatternCommands_e_2;
    static struct r05_node *ePatternCommands_b_3;
    static struct r05_node *ePatternCommands_e_3;
    // ( e.PatternVars ) ( e.PatternCommands ) ( e.ResultVars ) ( e.ResultAllocCommands ) ( e.ResultCommands )
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
    struct r05_node *bb_5 = 0;
    struct r05_node *be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    ePatternVars_b_1 = bb_1;
    ePatternVars_e_1 = be_1;
    ePatternCommands_b_1 = bb_2;
    ePatternCommands_e_1 = be_2;
    eResultVars_b_1 = bb_3;
    eResultVars_e_1 = be_3;
    eResultAllocCommands_b_1 = bb_4;
    eResultAllocCommands_e_1 = be_4;
    eResultCommands_b_1 = bb_5;
    eResultCommands_e_1 = be_5;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( ePatternCommands_b_2, ePatternCommands_e_2, ePatternCommands_b_1, ePatternCommands_e_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_evar( ePatternCommands_b_3, ePatternCommands_e_3, ePatternCommands_b_2, ePatternCommands_e_2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Fetch, "Fetch" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_ReplicateVars, "ReplicateVars" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_ReplicateVars, "ReplicateVars" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_name( n14, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_name( n15, r05c_RepeatedEVariables, "RepeatedEVariables" ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return R05_NO_MEMORY;
    struct r05_node *n19 = 0;
    if( ! refalrts::alloc_name( n19, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n20 = 0;
    if( ! refalrts::alloc_name( n20, r05c_ClosedEVariables, "ClosedEVariables" ) )
      return R05_NO_MEMORY;
    struct r05_node *n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return R05_NO_MEMORY;
    struct r05_node *n22 = 0;
    if( ! refalrts::alloc_open_call( n22 ) )
      return R05_NO_MEMORY;
    struct r05_node *n23 = 0;
    if( ! refalrts::alloc_name( n23, r05c_Seq, "Seq" ) )
      return R05_NO_MEMORY;
    struct r05_node *n24 = 0;
    if( ! refalrts::alloc_name( n24, r05c_MakeVarsSets, "MakeVarsSets" ) )
      return R05_NO_MEMORY;
    struct r05_node *n25 = 0;
    if( ! refalrts::alloc_open_bracket( n25 ) )
      return R05_NO_MEMORY;
    struct r05_node *n26 = 0;
    if( ! refalrts::alloc_name( n26, r05c_FilterCommonVarsAndPatternCommands, "FilterCommonVarsAndPatternCommands" ) )
      return R05_NO_MEMORY;
    struct r05_node *n27 = 0;
    if( ! refalrts::alloc_open_bracket( n27 ) )
      return R05_NO_MEMORY;
    struct r05_node *n28 = 0;
    if( ! refalrts::alloc_close_bracket( n28 ) )
      return R05_NO_MEMORY;
    struct r05_node *n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return R05_NO_MEMORY;
    struct r05_node *n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return R05_NO_MEMORY;
    struct r05_node *n31 = 0;
    if( ! refalrts::alloc_name( n31, r05c_ComposeSentenceCommands, "ComposeSentenceCommands" ) )
      return R05_NO_MEMORY;
    struct r05_node *n32 = 0;
    if( ! refalrts::alloc_open_bracket( n32 ) )
      return R05_NO_MEMORY;
    struct r05_node *n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return R05_NO_MEMORY;
    struct r05_node *n34 = 0;
    if( ! refalrts::alloc_close_bracket( n34 ) )
      return R05_NO_MEMORY;
    struct r05_node *n35 = 0;
    if( ! refalrts::alloc_close_call( n35 ) )
      return R05_NO_MEMORY;
    struct r05_node *n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n36 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n36 );
    refalrts::push_stack( n35 );
    refalrts::push_stack( n22 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n30, n34 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n32, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, eResultCommands_b_1, eResultCommands_e_1 );
    res = refalrts::splice_evar( res, eResultAllocCommands_b_1, eResultAllocCommands_e_1 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n25, n29 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::link_brackets( n27, n28 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, ePatternCommands_b_3, ePatternCommands_e_3 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, ePatternCommands_b_2, ePatternCommands_e_2 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n12, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, ePatternCommands_b_1, ePatternCommands_e_1 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n7, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eResultVars_b_1, eResultVars_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, ePatternVars_b_1, ePatternVars_e_1 );
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

static enum r05_fnresult r05c_ReplicateVar(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sMode_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    // ( 1 s.Mode e.Index )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::number_left( 1UL, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) )
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_number( n1, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
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
    static struct r05_node *sUsing_1;
    static struct r05_node *sMode_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *sUsing_2;
    static struct r05_node *sMode_2;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    // ( s.Using s.Mode e.Index )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::svar_left( sUsing_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) )
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sUsing_2, sUsing_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ReplicateVar, "ReplicateVar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_Dec, "Dec" ) )
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
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_stvar( res, sUsing_2 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sUsing_1 );
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

static enum r05_fnresult r05c_ReplicateVars(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eVars_b_1;
    static struct r05_node *eVars_e_1;
    // e.Vars
    eVars_b_1 = bb_0;
    eVars_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_ReplicateVar, "ReplicateVar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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

static enum r05_fnresult r05c_VarSetUnion(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eSet1_B_b_1;
    static struct r05_node *eSet1_B_e_1;
    static struct r05_node *tCommon_1;
    static struct r05_node *eSet1_E_b_1;
    static struct r05_node *eSet1_E_e_1;
    static struct r05_node *eSet2_B_b_1;
    static struct r05_node *eSet2_B_e_1;
    static struct r05_node *eSet2_E_b_1;
    static struct r05_node *eSet2_E_e_1;
    static struct r05_node *tCommon_2;
    // ( e.Set1_B t.Common e.Set1_E ) ( e.Set2_B t.Common e.Set2_E )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eSet1_B_b_1 = 0;
    eSet1_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_1;
      struct r05_node *be_3 = be_1;
      struct r05_node *bb_4 = bb_2;
      struct r05_node *be_4 = be_2;
      if( ! refalrts::tvar_left( tCommon_1, bb_3, be_3 ) )
        continue;
      eSet1_E_b_1 = bb_3;
      eSet1_E_e_1 = be_3;
      eSet2_B_b_1 = 0;
      eSet2_B_e_1 = 0;
      refalrts::start_e_loop();
      do {
        struct r05_node *bb_5 = bb_4;
        struct r05_node *be_5 = be_4;
        if( ! refalrts::repeated_stvar_left( tCommon_2, tCommon_1, bb_5, be_5 ) )
          continue;
        eSet2_E_b_1 = bb_5;
        eSet2_E_e_1 = be_5;

        refalrts::reset_allocator();
        struct r05_node *res = arg_begin;
        struct r05_node *n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return R05_NO_MEMORY;
        struct r05_node *n1 = 0;
        if( ! refalrts::alloc_name( n1, r05c_VarSetUnion, "VarSetUnion" ) )
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
        if( ! refalrts::alloc_close_call( n6 ) )
          return R05_NO_MEMORY;
        refalrts::push_stack( n6 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n6 );
        refalrts::link_brackets( n4, n5 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_evar( res, eSet1_B_b_1, eSet1_B_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_stvar( res, tCommon_1 );
        r05_use(&res);
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return R05_SUCCESS;
      } while ( refalrts::open_evar_advance( eSet2_B_b_1, eSet2_B_e_1, bb_4, be_4 ) );
    } while ( refalrts::open_evar_advance( eSet1_B_b_1, eSet1_B_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eSet1_b_1;
    static struct r05_node *eSet1_e_1;
    static struct r05_node *eSet2_b_1;
    static struct r05_node *eSet2_e_1;
    // ( e.Set1 ) ( e.Set2 )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eSet1_b_1 = bb_1;
    eSet1_e_1 = be_1;
    eSet2_b_1 = bb_2;
    eSet2_e_1 = be_2;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eSet2_b_1, eSet2_e_1 );
    res = refalrts::splice_evar( res, eSet1_b_1, eSet1_e_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_VarSetDifference(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eSet1_B_b_1;
    static struct r05_node *eSet1_B_e_1;
    static struct r05_node *eSet1_E_b_1;
    static struct r05_node *eSet1_E_e_1;
    static struct r05_node *eSet2_B_b_1;
    static struct r05_node *eSet2_B_e_1;
    static struct r05_node *eSet2_E_b_1;
    static struct r05_node *eSet2_E_e_1;
    static struct r05_node *tCommon_1;
    static struct r05_node *tCommon_2;
    // ( e.Set1_B t.Common e.Set1_E ) ( e.Set2_B t.Common e.Set2_E )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eSet1_B_b_1 = 0;
    eSet1_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_1;
      struct r05_node *be_3 = be_1;
      struct r05_node *bb_4 = bb_2;
      struct r05_node *be_4 = be_2;
      if( ! refalrts::tvar_left( tCommon_1, bb_3, be_3 ) )
        continue;
      eSet1_E_b_1 = bb_3;
      eSet1_E_e_1 = be_3;
      eSet2_B_b_1 = 0;
      eSet2_B_e_1 = 0;
      refalrts::start_e_loop();
      do {
        struct r05_node *bb_5 = bb_4;
        struct r05_node *be_5 = be_4;
        if( ! refalrts::repeated_stvar_left( tCommon_2, tCommon_1, bb_5, be_5 ) )
          continue;
        eSet2_E_b_1 = bb_5;
        eSet2_E_e_1 = be_5;

        refalrts::reset_allocator();
        struct r05_node *res = arg_begin;
        struct r05_node *n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return R05_NO_MEMORY;
        struct r05_node *n1 = 0;
        if( ! refalrts::alloc_name( n1, r05c_VarSetDifference, "VarSetDifference" ) )
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
        if( ! refalrts::alloc_close_call( n6 ) )
          return R05_NO_MEMORY;
        refalrts::push_stack( n6 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n6 );
        refalrts::link_brackets( n4, n5 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_evar( res, eSet1_B_b_1, eSet1_B_e_1 );
        r05_use(&res);
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return R05_SUCCESS;
      } while ( refalrts::open_evar_advance( eSet2_B_b_1, eSet2_B_e_1, bb_4, be_4 ) );
    } while ( refalrts::open_evar_advance( eSet1_B_b_1, eSet1_B_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eSet1_b_1;
    static struct r05_node *eSet1_e_1;
    // ( e.Set1 ) ( e.Set2 )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eSet1_b_1 = bb_1;
    eSet1_e_1 = be_1;
    // Unused closed variable e.Set2

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eSet1_b_1, eSet1_e_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ClosedEVariables(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *sNum_1;
    // ( & CmdClosedE & AlgLeft s.Num 'e e.Index )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_CmdClosedE, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( r05c_AlgLeft, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_number( n1, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
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
    static struct r05_node *tOther_1;
    // t.Other
    if( ! refalrts::tvar_left( tOther_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_RepeatedEVariables(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *sDirection_1;
    static struct r05_node *sNum_1;
    static struct r05_node *sCount_1;
    // ( & CmdRepeated s.Direction s.Num s.Count 'e e.Index )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_CmdRepeated, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::svar_left( sDirection_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sCount_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_number( n1, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
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
    static struct r05_node *tOther_1;
    // t.Other
    if( ! refalrts::tvar_left( tOther_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_FilterUnusedCmdClosedE(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *sNum_1;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    static struct r05_node *eUnuseds_B_b_1;
    static struct r05_node *eUnuseds_B_e_1;
    // e.Unuseds_B ( 1 'e e.Index ) e.Unuseds_E ( & CmdClosedE & AlgLeft s.Num 'e e.Index )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_CmdClosedE, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( r05c_AlgLeft, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;
    eUnuseds_B_b_1 = 0;
    eUnuseds_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_2 = bb_0;
      struct r05_node *be_2 = be_0;
      struct r05_node *bb_3 = 0;
      struct r05_node *be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) )
        continue;
      if( ! refalrts::number_left( 1UL, bb_3, be_3 ) )
        continue;
      if( ! refalrts::char_left( 'e', bb_3, be_3 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_3, be_3 ) )
        continue;
      if (! r05_empty_seq(bb_3, be_3))
        continue;
      // Unused closed variable e.Unuseds_E

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_CmdComment, "CmdComment" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_chars( n2, n3, " Unused closed variable e.", 26) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return R05_NO_MEMORY;
      refalrts::link_brackets( n0, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_evar( res, n2, n3 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eUnuseds_B_b_1, eUnuseds_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tOtherCommand_1;
    // e.Unuseds t.OtherCommand
    if( ! refalrts::tvar_right( tOtherCommand_1, bb_0, be_0 ) )
      break;
    // Unused closed variable e.Unuseds

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_stvar( res, tOtherCommand_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdDeclareEVar(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdDeclareVar(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_MakeDeclaration(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sUsings_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    // ( s.Usings 'e e.Index )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_CmdDeclareEVar, "CmdDeclareEVar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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
    static struct r05_node *sUsings_1;
    static struct r05_node *sMode_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    // ( s.Usings s.Mode e.Index )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) )
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_CmdDeclareVar, "CmdDeclareVar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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

enum r05_fnresult r05c_CmdCopyEVar(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdCopyVar(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_MakeCopyVar(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sUsings_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    // ( s.Usings 'e e.Index )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_CmdCopyEVar, "CmdCopyEVar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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
    static struct r05_node *sUsings_1;
    static struct r05_node *sMode_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    // ( s.Usings s.Mode e.Index )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) )
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_CmdCopyVar, "CmdCopyVar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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

static enum r05_fnresult r05c_MakeVarsSets(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *ePatternVars_b_1;
    static struct r05_node *ePatternVars_e_1;
    static struct r05_node *eResultVars_b_1;
    static struct r05_node *eResultVars_e_1;
    static struct r05_node *eRepeatedEs_b_1;
    static struct r05_node *eRepeatedEs_e_1;
    static struct r05_node *eClosedEs_b_1;
    static struct r05_node *eClosedEs_e_1;
    static struct r05_node *ePatternVars_b_2;
    static struct r05_node *ePatternVars_e_2;
    static struct r05_node *eResultVars_b_2;
    static struct r05_node *eResultVars_e_2;
    static struct r05_node *eResultVars_b_3;
    static struct r05_node *eResultVars_e_3;
    // ( e.PatternVars ) ( e.ResultVars ) ( e.RepeatedEs ) e.ClosedEs
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
    ePatternVars_b_1 = bb_1;
    ePatternVars_e_1 = be_1;
    eResultVars_b_1 = bb_2;
    eResultVars_e_1 = be_2;
    eRepeatedEs_b_1 = bb_3;
    eRepeatedEs_e_1 = be_3;
    eClosedEs_b_1 = bb_0;
    eClosedEs_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( ePatternVars_b_2, ePatternVars_e_2, ePatternVars_b_1, ePatternVars_e_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_evar( eResultVars_b_2, eResultVars_e_2, eResultVars_b_1, eResultVars_e_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_evar( eResultVars_b_3, eResultVars_e_3, eResultVars_b_2, eResultVars_e_2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_VarSetUnion, "VarSetUnion" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_name( n11, r05c_VarSetDifference, "VarSetDifference" ) )
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
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return R05_NO_MEMORY;
    struct r05_node *n19 = 0;
    if( ! refalrts::alloc_name( n19, r05c_VarSetDifference, "VarSetDifference" ) )
      return R05_NO_MEMORY;
    struct r05_node *n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return R05_NO_MEMORY;
    struct r05_node *n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return R05_NO_MEMORY;
    struct r05_node *n22 = 0;
    if( ! refalrts::alloc_open_bracket( n22 ) )
      return R05_NO_MEMORY;
    struct r05_node *n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return R05_NO_MEMORY;
    struct r05_node *n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n24 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n22, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eResultVars_b_3, eResultVars_e_3 );
    res = refalrts::splice_evar( res, eRepeatedEs_b_1, eRepeatedEs_e_1 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n20, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eClosedEs_b_1, eClosedEs_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n9, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, ePatternVars_b_2, ePatternVars_e_2 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eResultVars_b_2, eResultVars_e_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eResultVars_b_1, eResultVars_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, ePatternVars_b_1, ePatternVars_e_1 );
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

static enum r05_fnresult r05c_FilterCommonVarsAndPatternCommands(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *ePatternCommands_b_1;
    static struct r05_node *ePatternCommands_e_1;
    static struct r05_node *eCommonVars_b_1;
    static struct r05_node *eCommonVars_e_1;
    static struct r05_node *eCopiedVars_b_1;
    static struct r05_node *eCopiedVars_e_1;
    static struct r05_node *eUnusedClosedEs_b_1;
    static struct r05_node *eUnusedClosedEs_e_1;
    static struct r05_node *eUnusedClosedEs_b_2;
    static struct r05_node *eUnusedClosedEs_e_2;
    // ( e.PatternCommands ) ( e.CommonVars ) ( e.CopiedVars ) e.UnusedClosedEs
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
    ePatternCommands_b_1 = bb_1;
    ePatternCommands_e_1 = be_1;
    eCommonVars_b_1 = bb_2;
    eCommonVars_e_1 = be_2;
    eCopiedVars_b_1 = bb_3;
    eCopiedVars_e_1 = be_3;
    eUnusedClosedEs_b_1 = bb_0;
    eUnusedClosedEs_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eUnusedClosedEs_b_2, eUnusedClosedEs_e_2, eUnusedClosedEs_b_1, eUnusedClosedEs_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_VarSetDifference, "VarSetDifference" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
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
    if( ! refalrts::alloc_open_call( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_name( n12, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_name( n14, r05c_FilterUnusedCmdClosedE, "FilterUnusedCmdClosedE" ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, ePatternCommands_b_1, ePatternCommands_e_1 );
    refalrts::link_brackets( n13, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eUnusedClosedEs_b_2, eUnusedClosedEs_e_2 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eCopiedVars_b_1, eCopiedVars_e_1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eUnusedClosedEs_b_1, eUnusedClosedEs_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eCommonVars_b_1, eCommonVars_e_1 );
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

static enum r05_fnresult r05c_ComposeSentenceCommands(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eResultCommands_b_1;
    static struct r05_node *eResultCommands_e_1;
    static struct r05_node *eCommonVars_b_1;
    static struct r05_node *eCommonVars_e_1;
    static struct r05_node *eCopiedVars_b_1;
    static struct r05_node *eCopiedVars_e_1;
    static struct r05_node *ePatternCommands_b_1;
    static struct r05_node *ePatternCommands_e_1;
    // ( e.ResultCommands ) ( e.CommonVars ) ( e.CopiedVars ) e.PatternCommands
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
    eResultCommands_b_1 = bb_1;
    eResultCommands_e_1 = be_1;
    eCommonVars_b_1 = bb_2;
    eCommonVars_e_1 = be_2;
    eCopiedVars_b_1 = bb_3;
    eCopiedVars_e_1 = be_3;
    ePatternCommands_b_1 = bb_0;
    ePatternCommands_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_GenerateResult_OpenELoops, "GenerateResult_OpenELoops" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_MakeDeclaration, "MakeDeclaration" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_CmdEmptyResult, "CmdEmptyResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_name( n10, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_name( n11, r05c_MakeCopyVar, "MakeCopyVar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_name( n14, r05c_CmdReturnResult, "CmdReturnResult" ) )
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
    refalrts::link_brackets( n13, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eResultCommands_b_1, eResultCommands_e_1 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eCopiedVars_b_1, eCopiedVars_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n6, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, ePatternCommands_b_1, ePatternCommands_e_1 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommonVars_b_1, eCommonVars_e_1 );
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

static enum r05_fnresult r05c_GenerateResult_OpenELoops(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eCommands_B_b_1;
    static struct r05_node *eCommands_B_e_1;
    static struct r05_node *eCommands_E_b_1;
    static struct r05_node *eCommands_E_e_1;
    static struct r05_node *sBracketNum_1;
    static struct r05_node *eIndex_b_1;
    static struct r05_node *eIndex_e_1;
    static struct r05_node *sBracketNum_2;
    static struct r05_node *eIndex_b_2;
    static struct r05_node *eIndex_e_2;
    // e.Commands_B ( & CmdOpenedE & AlgLeft s.BracketNum 'e e.Index ) e.Commands_E
    eCommands_B_b_1 = 0;
    eCommands_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_1 = bb_0;
      struct r05_node *be_1 = be_0;
      struct r05_node *bb_2 = 0;
      struct r05_node *be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) )
        continue;
      if( ! refalrts::function_left( r05c_CmdOpenedE, bb_2, be_2 ) )
        continue;
      if( ! refalrts::function_left( r05c_AlgLeft, bb_2, be_2 ) )
        continue;
      eCommands_E_b_1 = bb_1;
      eCommands_E_e_1 = be_1;
      if( ! refalrts::svar_left( sBracketNum_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) )
        continue;
      eIndex_b_1 = bb_2;
      eIndex_e_1 = be_2;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      if( ! refalrts::copy_stvar( sBracketNum_2, sBracketNum_1 ) )
        return R05_NO_MEMORY;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return R05_NO_MEMORY;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_CmdOpenedE_Start, "CmdOpenedE_Start" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_name( n2, r05c_AlgLeft, "AlgLeft" ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_char( n3, 'e' ) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return R05_NO_MEMORY;
      struct r05_node *n5 = 0;
      if( ! refalrts::alloc_open_call( n5 ) )
        return R05_NO_MEMORY;
      struct r05_node *n6 = 0;
      if( ! refalrts::alloc_name( n6, r05c_GenerateResult_OpenELoops, "GenerateResult_OpenELoops" ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_close_call( n7 ) )
        return R05_NO_MEMORY;
      struct r05_node *n8 = 0;
      if( ! refalrts::alloc_open_bracket( n8 ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_name( n9, r05c_CmdOpenedE_End, "CmdOpenedE_End" ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_name( n10, r05c_AlgLeft, "AlgLeft" ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_char( n11, 'e' ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
        return R05_NO_MEMORY;
      refalrts::link_brackets( n8, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_stvar( res, sBracketNum_2 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::push_stack( n7 );
      refalrts::push_stack( n5 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n0, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_stvar( res, sBracketNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eCommands_B_b_1, eCommands_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eCommands_b_1;
    static struct r05_node *eCommands_e_1;
    // e.Commands
    eCommands_b_1 = bb_0;
    eCommands_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}


//End of file

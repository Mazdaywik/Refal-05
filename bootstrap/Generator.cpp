// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult AlgLeft(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult AlgRight(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdClosedE(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdCopyEVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdDeclareEVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdDeclareVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdEmptyResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdInsertElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdInsertVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdLinkBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdOpenedE_End(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdOpenedE_Start(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdPushStack(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdReturnResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdSave(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CmdVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElCloseBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElCloseCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElOpenBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElOpenCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EscapeChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GN_Entry(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GN_Local(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenCommonHeaders(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenCommonTailer(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenEEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenFnEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenFnEnd_Success(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenForward(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BracketsVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BracketsVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BracketsVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BreakerFromIndent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FuncArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NakedArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintAllocate_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintEVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintEVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintEVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintElemVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchSTVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SkipIndentAccum(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StrFromDirection(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SwAllocator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SwGenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SwInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult TextFromMemoryClass(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult VarMatchFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult GN_Local(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult GN_Entry(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult FuncArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    //
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'd' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult NakedArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    //
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'r' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult TextFromMemoryClass(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // & GN_Local
    if( ! refalrts::function_left( GN_Local, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // & GN_Entry
    if( ! refalrts::function_left( GN_Entry, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult SwGenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sMemoryClass_1;
    static refalrts::Iter sFnArguments_1;
    static refalrts::Iter eName_b_1;
    static refalrts::Iter eName_e_1;
    // s.MemoryClass s.FnArguments e.Name
    if( ! refalrts::svar_left( sMemoryClass_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sFnArguments_1, bb_0, be_0 ) )
      break;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, TextFromMemoryClass, "TextFromMemoryClass" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_close_bracket( n72 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n30, n72 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n0, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::push_stack( n25 );
    refalrts::push_stack( n24 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_stvar( res, sFnArguments_1 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sMemoryClass_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult GenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sMemoryClass_1;
    static refalrts::Iter eName_b_1;
    static refalrts::Iter eName_e_1;
    // s.MemoryClass e.Name
    if( ! refalrts::svar_left( sMemoryClass_1, bb_0, be_0 ) )
      break;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, SwGenFnStart, "SwGenFnStart" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, FuncArguments, "FuncArguments" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sMemoryClass_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult GenFnEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    //
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, '|' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, '<' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, '<' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, '8' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_close_bracket( n85 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_open_bracket( n86 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_close_bracket( n91 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_open_bracket( n92 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_close_bracket( n94 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_open_bracket( n95 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_close_bracket( n96 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n95, n96 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    refalrts::link_brackets( n92, n94 );
    res = refalrts::splice_elem( res, n94 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    refalrts::link_brackets( n86, n91 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    refalrts::link_brackets( n30, n85 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n0, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult GenFnEnd_Success(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    //
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_close_bracket( n48 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_open_bracket( n49 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_close_bracket( n50 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n49, n50 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    refalrts::link_brackets( n46, n48 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::link_brackets( n0, n45 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult GenEEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eName_b_1;
    static refalrts::Iter eName_e_1;
    // e.Name
    eName_b_1 = bb_0;
    eName_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, SwGenFnStart, "SwGenFnStart" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, GN_Entry, "GN_Entry" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, NakedArguments, "NakedArguments" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, GenFnEnd, "GenFnEnd" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult GenEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eName_b_1;
    static refalrts::Iter eName_e_1;
    // e.Name
    eName_b_1 = bb_0;
    eName_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, SwGenFnStart, "SwGenFnStart" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, GN_Local, "GN_Local" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, NakedArguments, "NakedArguments" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, GenFnEnd, "GenFnEnd" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult GenExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eName_b_1;
    static refalrts::Iter eName_e_1;
    // e.Name
    eName_b_1 = bb_0;
    eName_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, FuncArguments, "FuncArguments" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult GenForward(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eName_b_1;
    static refalrts::Iter eName_e_1;
    // e.Name
    eName_b_1 = bb_0;
    eName_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, FuncArguments, "FuncArguments" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult GenCommonHeaders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    //
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, '#' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_close_bracket( n68 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_open_bracket( n69 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_close_bracket( n70 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_open_bracket( n71 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_close_bracket( n72 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n71, n72 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    refalrts::link_brackets( n69, n70 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    refalrts::link_brackets( n46, n68 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::link_brackets( n0, n45 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult GenCommonTailer(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    //
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult GenSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eAlgorithm_b_1;
    static refalrts::Iter eAlgorithm_e_1;
    // e.Algorithm
    eAlgorithm_b_1 = bb_0;
    eAlgorithm_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_number( n30, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_open_call( n66 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_name( n67, BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_number( n68, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_close_call( n69 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_close_bracket( n81 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_open_bracket( n82 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_char( n94, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_char( n98, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_char( n99, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_char( n103, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_char( n104, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n105 = 0;
    if( ! refalrts::alloc_char( n105, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n106 = 0;
    if( ! refalrts::alloc_char( n106, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n107 = 0;
    if( ! refalrts::alloc_char( n107, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n108 = 0;
    if( ! refalrts::alloc_open_call( n108 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n109 = 0;
    if( ! refalrts::alloc_name( n109, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n110 = 0;
    if( ! refalrts::alloc_number( n110, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n111 = 0;
    if( ! refalrts::alloc_close_call( n111 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n112 = 0;
    if( ! refalrts::alloc_char( n112, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n113 = 0;
    if( ! refalrts::alloc_char( n113, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n114 = 0;
    if( ! refalrts::alloc_char( n114, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n115 = 0;
    if( ! refalrts::alloc_close_bracket( n115 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n116 = 0;
    if( ! refalrts::alloc_open_bracket( n116 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n117 = 0;
    if( ! refalrts::alloc_char( n117, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n118 = 0;
    if( ! refalrts::alloc_char( n118, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n119 = 0;
    if( ! refalrts::alloc_char( n119, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n120 = 0;
    if( ! refalrts::alloc_char( n120, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n121 = 0;
    if( ! refalrts::alloc_char( n121, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n122 = 0;
    if( ! refalrts::alloc_char( n122, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n123 = 0;
    if( ! refalrts::alloc_char( n123, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n124 = 0;
    if( ! refalrts::alloc_char( n124, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n125 = 0;
    if( ! refalrts::alloc_char( n125, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n126 = 0;
    if( ! refalrts::alloc_char( n126, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n127 = 0;
    if( ! refalrts::alloc_char( n127, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n128 = 0;
    if( ! refalrts::alloc_char( n128, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n129 = 0;
    if( ! refalrts::alloc_char( n129, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n130 = 0;
    if( ! refalrts::alloc_char( n130, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n131 = 0;
    if( ! refalrts::alloc_char( n131, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n132 = 0;
    if( ! refalrts::alloc_char( n132, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n133 = 0;
    if( ! refalrts::alloc_char( n133, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n134 = 0;
    if( ! refalrts::alloc_char( n134, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n135 = 0;
    if( ! refalrts::alloc_char( n135, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n136 = 0;
    if( ! refalrts::alloc_char( n136, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n137 = 0;
    if( ! refalrts::alloc_char( n137, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n138 = 0;
    if( ! refalrts::alloc_char( n138, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n139 = 0;
    if( ! refalrts::alloc_char( n139, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n140 = 0;
    if( ! refalrts::alloc_char( n140, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n141 = 0;
    if( ! refalrts::alloc_char( n141, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n142 = 0;
    if( ! refalrts::alloc_open_call( n142 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n143 = 0;
    if( ! refalrts::alloc_name( n143, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n144 = 0;
    if( ! refalrts::alloc_number( n144, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n145 = 0;
    if( ! refalrts::alloc_close_call( n145 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n146 = 0;
    if( ! refalrts::alloc_char( n146, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n147 = 0;
    if( ! refalrts::alloc_char( n147, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n148 = 0;
    if( ! refalrts::alloc_char( n148, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n149 = 0;
    if( ! refalrts::alloc_close_bracket( n149 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n150 = 0;
    if( ! refalrts::alloc_open_bracket( n150 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n151 = 0;
    if( ! refalrts::alloc_char( n151, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n152 = 0;
    if( ! refalrts::alloc_char( n152, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n153 = 0;
    if( ! refalrts::alloc_char( n153, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n154 = 0;
    if( ! refalrts::alloc_char( n154, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n155 = 0;
    if( ! refalrts::alloc_char( n155, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n156 = 0;
    if( ! refalrts::alloc_char( n156, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n157 = 0;
    if( ! refalrts::alloc_char( n157, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n158 = 0;
    if( ! refalrts::alloc_char( n158, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n159 = 0;
    if( ! refalrts::alloc_char( n159, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n160 = 0;
    if( ! refalrts::alloc_char( n160, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n161 = 0;
    if( ! refalrts::alloc_char( n161, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n162 = 0;
    if( ! refalrts::alloc_char( n162, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n163 = 0;
    if( ! refalrts::alloc_char( n163, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n164 = 0;
    if( ! refalrts::alloc_char( n164, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n165 = 0;
    if( ! refalrts::alloc_char( n165, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n166 = 0;
    if( ! refalrts::alloc_char( n166, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n167 = 0;
    if( ! refalrts::alloc_char( n167, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n168 = 0;
    if( ! refalrts::alloc_char( n168, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n169 = 0;
    if( ! refalrts::alloc_char( n169, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n170 = 0;
    if( ! refalrts::alloc_char( n170, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n171 = 0;
    if( ! refalrts::alloc_char( n171, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n172 = 0;
    if( ! refalrts::alloc_char( n172, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n173 = 0;
    if( ! refalrts::alloc_char( n173, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n174 = 0;
    if( ! refalrts::alloc_char( n174, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n175 = 0;
    if( ! refalrts::alloc_char( n175, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n176 = 0;
    if( ! refalrts::alloc_char( n176, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n177 = 0;
    if( ! refalrts::alloc_open_call( n177 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n178 = 0;
    if( ! refalrts::alloc_name( n178, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n179 = 0;
    if( ! refalrts::alloc_number( n179, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n180 = 0;
    if( ! refalrts::alloc_close_call( n180 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n181 = 0;
    if( ! refalrts::alloc_char( n181, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n182 = 0;
    if( ! refalrts::alloc_char( n182, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n183 = 0;
    if( ! refalrts::alloc_char( n183, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n184 = 0;
    if( ! refalrts::alloc_close_bracket( n184 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n185 = 0;
    if( ! refalrts::alloc_open_bracket( n185 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n186 = 0;
    if( ! refalrts::alloc_char( n186, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n187 = 0;
    if( ! refalrts::alloc_char( n187, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n188 = 0;
    if( ! refalrts::alloc_char( n188, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n189 = 0;
    if( ! refalrts::alloc_char( n189, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n190 = 0;
    if( ! refalrts::alloc_char( n190, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n191 = 0;
    if( ! refalrts::alloc_char( n191, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n192 = 0;
    if( ! refalrts::alloc_char( n192, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n193 = 0;
    if( ! refalrts::alloc_char( n193, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n194 = 0;
    if( ! refalrts::alloc_char( n194, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n195 = 0;
    if( ! refalrts::alloc_char( n195, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n196 = 0;
    if( ! refalrts::alloc_char( n196, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n197 = 0;
    if( ! refalrts::alloc_char( n197, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n198 = 0;
    if( ! refalrts::alloc_char( n198, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n199 = 0;
    if( ! refalrts::alloc_char( n199, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n200 = 0;
    if( ! refalrts::alloc_char( n200, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n201 = 0;
    if( ! refalrts::alloc_char( n201, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n202 = 0;
    if( ! refalrts::alloc_char( n202, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n203 = 0;
    if( ! refalrts::alloc_char( n203, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n204 = 0;
    if( ! refalrts::alloc_char( n204, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n205 = 0;
    if( ! refalrts::alloc_char( n205, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n206 = 0;
    if( ! refalrts::alloc_char( n206, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n207 = 0;
    if( ! refalrts::alloc_char( n207, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n208 = 0;
    if( ! refalrts::alloc_char( n208, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n209 = 0;
    if( ! refalrts::alloc_char( n209, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n210 = 0;
    if( ! refalrts::alloc_char( n210, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n211 = 0;
    if( ! refalrts::alloc_char( n211, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n212 = 0;
    if( ! refalrts::alloc_char( n212, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n213 = 0;
    if( ! refalrts::alloc_char( n213, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n214 = 0;
    if( ! refalrts::alloc_char( n214, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n215 = 0;
    if( ! refalrts::alloc_char( n215, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n216 = 0;
    if( ! refalrts::alloc_char( n216, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n217 = 0;
    if( ! refalrts::alloc_close_bracket( n217 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n218 = 0;
    if( ! refalrts::alloc_open_call( n218 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n219 = 0;
    if( ! refalrts::alloc_name( n219, SkipIndentAccum, "SkipIndentAccum" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n220 = 0;
    if( ! refalrts::alloc_open_call( n220 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n221 = 0;
    if( ! refalrts::alloc_name( n221, MapReduce, "MapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n222 = 0;
    if( ! refalrts::alloc_name( n222, GenCommand, "GenCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n223 = 0;
    if( ! refalrts::alloc_open_bracket( n223 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n224 = 0;
    if( ! refalrts::alloc_char( n224, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n225 = 0;
    if( ! refalrts::alloc_char( n225, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n226 = 0;
    if( ! refalrts::alloc_char( n226, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n227 = 0;
    if( ! refalrts::alloc_char( n227, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n228 = 0;
    if( ! refalrts::alloc_close_bracket( n228 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n229 = 0;
    if( ! refalrts::alloc_close_call( n229 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n230 = 0;
    if( ! refalrts::alloc_close_call( n230 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n231 = 0;
    if( ! refalrts::alloc_open_bracket( n231 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n232 = 0;
    if( ! refalrts::alloc_char( n232, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n233 = 0;
    if( ! refalrts::alloc_char( n233, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n234 = 0;
    if( ! refalrts::alloc_char( n234, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n235 = 0;
    if( ! refalrts::alloc_char( n235, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n236 = 0;
    if( ! refalrts::alloc_char( n236, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n237 = 0;
    if( ! refalrts::alloc_char( n237, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n238 = 0;
    if( ! refalrts::alloc_char( n238, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n239 = 0;
    if( ! refalrts::alloc_char( n239, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n240 = 0;
    if( ! refalrts::alloc_char( n240, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n241 = 0;
    if( ! refalrts::alloc_char( n241, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n242 = 0;
    if( ! refalrts::alloc_char( n242, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n243 = 0;
    if( ! refalrts::alloc_char( n243, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n244 = 0;
    if( ! refalrts::alloc_char( n244, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n245 = 0;
    if( ! refalrts::alloc_char( n245, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n246 = 0;
    if( ! refalrts::alloc_char( n246, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n247 = 0;
    if( ! refalrts::alloc_char( n247, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n248 = 0;
    if( ! refalrts::alloc_close_bracket( n248 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n249 = 0;
    if( ! refalrts::alloc_open_bracket( n249 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n250 = 0;
    if( ! refalrts::alloc_close_bracket( n250 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n249, n250 );
    res = refalrts::splice_elem( res, n250 );
    res = refalrts::splice_elem( res, n249 );
    refalrts::link_brackets( n231, n248 );
    res = refalrts::splice_elem( res, n248 );
    res = refalrts::splice_elem( res, n247 );
    res = refalrts::splice_elem( res, n246 );
    res = refalrts::splice_elem( res, n245 );
    res = refalrts::splice_elem( res, n244 );
    res = refalrts::splice_elem( res, n243 );
    res = refalrts::splice_elem( res, n242 );
    res = refalrts::splice_elem( res, n241 );
    res = refalrts::splice_elem( res, n240 );
    res = refalrts::splice_elem( res, n239 );
    res = refalrts::splice_elem( res, n238 );
    res = refalrts::splice_elem( res, n237 );
    res = refalrts::splice_elem( res, n236 );
    res = refalrts::splice_elem( res, n235 );
    res = refalrts::splice_elem( res, n234 );
    res = refalrts::splice_elem( res, n233 );
    res = refalrts::splice_elem( res, n232 );
    res = refalrts::splice_elem( res, n231 );
    refalrts::push_stack( n230 );
    refalrts::push_stack( n218 );
    res = refalrts::splice_elem( res, n230 );
    refalrts::push_stack( n229 );
    refalrts::push_stack( n220 );
    res = refalrts::splice_elem( res, n229 );
    res = refalrts::splice_evar( res, eAlgorithm_b_1, eAlgorithm_e_1 );
    refalrts::link_brackets( n223, n228 );
    res = refalrts::splice_elem( res, n228 );
    res = refalrts::splice_elem( res, n227 );
    res = refalrts::splice_elem( res, n226 );
    res = refalrts::splice_elem( res, n225 );
    res = refalrts::splice_elem( res, n224 );
    res = refalrts::splice_elem( res, n223 );
    res = refalrts::splice_elem( res, n222 );
    res = refalrts::splice_elem( res, n221 );
    res = refalrts::splice_elem( res, n220 );
    res = refalrts::splice_elem( res, n219 );
    res = refalrts::splice_elem( res, n218 );
    refalrts::link_brackets( n185, n217 );
    res = refalrts::splice_elem( res, n217 );
    res = refalrts::splice_elem( res, n216 );
    res = refalrts::splice_elem( res, n215 );
    res = refalrts::splice_elem( res, n214 );
    res = refalrts::splice_elem( res, n213 );
    res = refalrts::splice_elem( res, n212 );
    res = refalrts::splice_elem( res, n211 );
    res = refalrts::splice_elem( res, n210 );
    res = refalrts::splice_elem( res, n209 );
    res = refalrts::splice_elem( res, n208 );
    res = refalrts::splice_elem( res, n207 );
    res = refalrts::splice_elem( res, n206 );
    res = refalrts::splice_elem( res, n205 );
    res = refalrts::splice_elem( res, n204 );
    res = refalrts::splice_elem( res, n203 );
    res = refalrts::splice_elem( res, n202 );
    res = refalrts::splice_elem( res, n201 );
    res = refalrts::splice_elem( res, n200 );
    res = refalrts::splice_elem( res, n199 );
    res = refalrts::splice_elem( res, n198 );
    res = refalrts::splice_elem( res, n197 );
    res = refalrts::splice_elem( res, n196 );
    res = refalrts::splice_elem( res, n195 );
    res = refalrts::splice_elem( res, n194 );
    res = refalrts::splice_elem( res, n193 );
    res = refalrts::splice_elem( res, n192 );
    res = refalrts::splice_elem( res, n191 );
    res = refalrts::splice_elem( res, n190 );
    res = refalrts::splice_elem( res, n189 );
    res = refalrts::splice_elem( res, n188 );
    res = refalrts::splice_elem( res, n187 );
    res = refalrts::splice_elem( res, n186 );
    res = refalrts::splice_elem( res, n185 );
    refalrts::link_brackets( n150, n184 );
    res = refalrts::splice_elem( res, n184 );
    res = refalrts::splice_elem( res, n183 );
    res = refalrts::splice_elem( res, n182 );
    res = refalrts::splice_elem( res, n181 );
    refalrts::push_stack( n180 );
    refalrts::push_stack( n177 );
    res = refalrts::splice_elem( res, n180 );
    res = refalrts::splice_elem( res, n179 );
    res = refalrts::splice_elem( res, n178 );
    res = refalrts::splice_elem( res, n177 );
    res = refalrts::splice_elem( res, n176 );
    res = refalrts::splice_elem( res, n175 );
    res = refalrts::splice_elem( res, n174 );
    res = refalrts::splice_elem( res, n173 );
    res = refalrts::splice_elem( res, n172 );
    res = refalrts::splice_elem( res, n171 );
    res = refalrts::splice_elem( res, n170 );
    res = refalrts::splice_elem( res, n169 );
    res = refalrts::splice_elem( res, n168 );
    res = refalrts::splice_elem( res, n167 );
    res = refalrts::splice_elem( res, n166 );
    res = refalrts::splice_elem( res, n165 );
    res = refalrts::splice_elem( res, n164 );
    res = refalrts::splice_elem( res, n163 );
    res = refalrts::splice_elem( res, n162 );
    res = refalrts::splice_elem( res, n161 );
    res = refalrts::splice_elem( res, n160 );
    res = refalrts::splice_elem( res, n159 );
    res = refalrts::splice_elem( res, n158 );
    res = refalrts::splice_elem( res, n157 );
    res = refalrts::splice_elem( res, n156 );
    res = refalrts::splice_elem( res, n155 );
    res = refalrts::splice_elem( res, n154 );
    res = refalrts::splice_elem( res, n153 );
    res = refalrts::splice_elem( res, n152 );
    res = refalrts::splice_elem( res, n151 );
    res = refalrts::splice_elem( res, n150 );
    refalrts::link_brackets( n116, n149 );
    res = refalrts::splice_elem( res, n149 );
    res = refalrts::splice_elem( res, n148 );
    res = refalrts::splice_elem( res, n147 );
    res = refalrts::splice_elem( res, n146 );
    refalrts::push_stack( n145 );
    refalrts::push_stack( n142 );
    res = refalrts::splice_elem( res, n145 );
    res = refalrts::splice_elem( res, n144 );
    res = refalrts::splice_elem( res, n143 );
    res = refalrts::splice_elem( res, n142 );
    res = refalrts::splice_elem( res, n141 );
    res = refalrts::splice_elem( res, n140 );
    res = refalrts::splice_elem( res, n139 );
    res = refalrts::splice_elem( res, n138 );
    res = refalrts::splice_elem( res, n137 );
    res = refalrts::splice_elem( res, n136 );
    res = refalrts::splice_elem( res, n135 );
    res = refalrts::splice_elem( res, n134 );
    res = refalrts::splice_elem( res, n133 );
    res = refalrts::splice_elem( res, n132 );
    res = refalrts::splice_elem( res, n131 );
    res = refalrts::splice_elem( res, n130 );
    res = refalrts::splice_elem( res, n129 );
    res = refalrts::splice_elem( res, n128 );
    res = refalrts::splice_elem( res, n127 );
    res = refalrts::splice_elem( res, n126 );
    res = refalrts::splice_elem( res, n125 );
    res = refalrts::splice_elem( res, n124 );
    res = refalrts::splice_elem( res, n123 );
    res = refalrts::splice_elem( res, n122 );
    res = refalrts::splice_elem( res, n121 );
    res = refalrts::splice_elem( res, n120 );
    res = refalrts::splice_elem( res, n119 );
    res = refalrts::splice_elem( res, n118 );
    res = refalrts::splice_elem( res, n117 );
    res = refalrts::splice_elem( res, n116 );
    refalrts::link_brackets( n82, n115 );
    res = refalrts::splice_elem( res, n115 );
    res = refalrts::splice_elem( res, n114 );
    res = refalrts::splice_elem( res, n113 );
    res = refalrts::splice_elem( res, n112 );
    refalrts::push_stack( n111 );
    refalrts::push_stack( n108 );
    res = refalrts::splice_elem( res, n111 );
    res = refalrts::splice_elem( res, n110 );
    res = refalrts::splice_elem( res, n109 );
    res = refalrts::splice_elem( res, n108 );
    res = refalrts::splice_elem( res, n107 );
    res = refalrts::splice_elem( res, n106 );
    res = refalrts::splice_elem( res, n105 );
    res = refalrts::splice_elem( res, n104 );
    res = refalrts::splice_elem( res, n103 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    res = refalrts::splice_elem( res, n99 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    refalrts::link_brackets( n46, n81 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    refalrts::push_stack( n69 );
    refalrts::push_stack( n66 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::link_brackets( n8, n45 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::push_stack( n31 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n0, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult SkipIndentAccum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eGenerated_b_1;
    static refalrts::Iter eGenerated_e_1;
    // ( '    ' ) e.Generated
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( ' ', bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( ' ', bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( ' ', bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( ' ', bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
    eGenerated_b_1 = bb_0;
    eGenerated_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult BracketsVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sBracketNumber_1;
    // s.BracketNumber
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult BracketsVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sBracketNumber_1;
    // s.BracketNumber
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult BracketsVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter sBracketNumber_2;
    // s.BracketNumber
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sBracketNumber_2, sBracketNumber_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sBracketNumber_2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult GenCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter eText_b_1;
    static refalrts::Iter eText_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdComment e.Text )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdComment, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    eText_b_1 = bb_2;
    eText_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eText_b_1, eText_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter eVarInfo_b_1;
    static refalrts::Iter eVarInfo_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter eIndent_b_3;
    static refalrts::Iter eIndent_e_3;
    static refalrts::Iter eVarInfo_b_2;
    static refalrts::Iter eVarInfo_e_2;
    // ( e.Indent ) ( & CmdDeclareEVar e.VarInfo )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdDeclareEVar, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    eVarInfo_b_1 = bb_2;
    eVarInfo_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eVarInfo_b_2, eVarInfo_e_2, eVarInfo_b_1, eVarInfo_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_open_call( n53 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_name( n54, PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_close_call( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_close_bracket( n57 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n30, n57 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    refalrts::push_stack( n55 );
    refalrts::push_stack( n53 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_evar( res, eVarInfo_b_2, eVarInfo_e_2 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n2, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter eVarInfo_b_1;
    static refalrts::Iter eVarInfo_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdDeclareVar e.VarInfo )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdDeclareVar, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    eVarInfo_b_1 = bb_2;
    eVarInfo_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter sChar_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdChar s.Direction s.BracketNumber s.Char )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdChar, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sChar_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, PrintMatchChar, "PrintMatchChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter sNumber_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdNumber s.Direction s.BracketNumber s.Number )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdNumber, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, PrintMatchNumber, "PrintMatchNumber" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter eName_b_1;
    static refalrts::Iter eName_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdName s.Direction s.BracketNumber e.Name )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdName, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) )
      break;
    eName_b_1 = bb_2;
    eName_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, PrintMatchName, "PrintMatchName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter sInnerBrackets_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter eIndent_b_3;
    static refalrts::Iter eIndent_e_3;
    static refalrts::Iter eIndent_b_4;
    static refalrts::Iter eIndent_e_4;
    static refalrts::Iter sInnerBrackets_2;
    static refalrts::Iter sInnerBrackets_3;
    // ( e.Indent ) ( & CmdBrackets s.Direction s.BracketNumber s.InnerBrackets )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdBrackets, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sInnerBrackets_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sInnerBrackets_2, sInnerBrackets_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sInnerBrackets_3, sInnerBrackets_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_open_call( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_name( n44, BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_call( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_close_bracket( n51 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_open_call( n52 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_name( n53, PrintMatchBrackets, "PrintMatchBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_open_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_close_bracket( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_close_call( n56 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n56 );
    refalrts::push_stack( n52 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_stvar( res, sInnerBrackets_3 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n54, n55 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    refalrts::link_brackets( n27, n51 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::push_stack( n45 );
    refalrts::push_stack( n43 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_stvar( res, sInnerBrackets_2 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::link_brackets( n2, n26 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sInnerBrackets_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdEmpty s.Direction s.BracketNumber )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdEmpty, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, PrintMatchEmpty, "PrintMatchEmpty" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter sMode_1;
    static refalrts::Iter eInfo_b_1;
    static refalrts::Iter eInfo_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdVar s.Direction s.BracketNumber s.Mode e.Info )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdVar, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) )
      break;
    eInfo_b_1 = bb_2;
    eInfo_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, PrintMatchSTVar, "PrintMatchSTVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eInfo_b_1, eInfo_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter eVarInfo_b_1;
    static refalrts::Iter eVarInfo_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdRepeated s.Direction s.BracketNumber e.VarInfo )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdRepeated, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) )
      break;
    eVarInfo_b_1 = bb_2;
    eVarInfo_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, PrintMatchRepeated, "PrintMatchRepeated" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter eIndent_b_3;
    static refalrts::Iter eIndent_e_3;
    static refalrts::Iter eIndex_b_2;
    static refalrts::Iter eIndex_e_2;
    static refalrts::Iter sBracketNumber_2;
    // ( e.Indent ) ( & CmdClosedE & AlgLeft s.BracketNumber 'e e.Index )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdClosedE, bb_2, be_2 ) )
      break;
    if( ! refalrts::function_left( AlgLeft, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) )
      break;
    eIndex_b_1 = bb_2;
    eIndex_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_2, sBracketNumber_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_number( n5, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_number( n19, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n16, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sBracketNumber_2 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n17 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n2, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter eIndent_b_3;
    static refalrts::Iter eIndent_e_3;
    static refalrts::Iter eIndent_b_4;
    static refalrts::Iter eIndent_e_4;
    static refalrts::Iter eIndent_b_5;
    static refalrts::Iter eIndent_e_5;
    static refalrts::Iter eIndex_b_2;
    static refalrts::Iter eIndex_e_2;
    // ( e.Indent ) ( & CmdOpenedE_Start & AlgLeft s.BracketNumber 'e e.Index )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdOpenedE_Start, bb_2, be_2 ) )
      break;
    if( ! refalrts::function_left( AlgLeft, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) )
      break;
    eIndex_b_1 = bb_2;
    eIndex_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_5, eIndent_e_5, eIndent_b_4, eIndent_e_4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_number( n7, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_number( n19, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_close_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_open_bracket( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_close_bracket( n60 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n55, n60 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_evar( res, eIndent_b_5, eIndent_e_5 );
    res = refalrts::splice_elem( res, n55 );
    refalrts::link_brackets( n28, n54 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n16, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n17 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n4, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent '  ' ) ( & CmdOpenedE_End & AlgLeft s.BracketNumber 'e e.Index )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_right( ' ', bb_1, be_1 ) )
      break;
    if( ! refalrts::char_right( ' ', bb_1, be_1 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdOpenedE_End, bb_2, be_2 ) )
      break;
    if( ! refalrts::function_left( AlgLeft, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) )
      break;
    eIndex_b_1 = bb_2;
    eIndex_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_open_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_name( n43, PrintEVars, "PrintEVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_number( n44, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_close_call( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_open_call( n49 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_name( n50, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_close_call( n51 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_close_bracket( n57 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n57 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    refalrts::push_stack( n51 );
    refalrts::push_stack( n49 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    refalrts::push_stack( n46 );
    refalrts::push_stack( n42 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sOldBracketNumber_1;
    static refalrts::Iter sNewBracketNumber_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter eIndent_b_3;
    static refalrts::Iter eIndent_e_3;
    static refalrts::Iter sNewBracketNumber_2;
    static refalrts::Iter sOldBracketNumber_2;
    // ( e.Indent ) ( & CmdSave s.OldBracketNumber s.NewBracketNumber )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdSave, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sOldBracketNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sNewBracketNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNewBracketNumber_2, sNewBracketNumber_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sOldBracketNumber_2, sOldBracketNumber_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_name( n25, BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_open_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_open_call( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_name( n46, BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_close_call( n47 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_open_call( n51 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_name( n52, BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_close_call( n53 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_close_bracket( n55 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n29, n55 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    refalrts::push_stack( n53 );
    refalrts::push_stack( n51 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_stvar( res, sOldBracketNumber_2 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    refalrts::push_stack( n47 );
    refalrts::push_stack( n45 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_stvar( res, sNewBracketNumber_2 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::link_brackets( n2, n28 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n24 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_stvar( res, sOldBracketNumber_1 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sNewBracketNumber_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter eIndent_b_3;
    static refalrts::Iter eIndent_e_3;
    // ( e.Indent ) ( & CmdEmptyResult )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdEmptyResult, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_close_bracket( n66 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n34, n66 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n4, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sUsings_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter eIndent_b_3;
    static refalrts::Iter eIndent_e_3;
    static refalrts::Iter sUsings_2;
    static refalrts::Iter eIndex_b_2;
    static refalrts::Iter eIndex_e_2;
    // ( e.Indent ) ( & CmdCopyEVar s.Usings 'e e.Index )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdCopyEVar, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) )
      break;
    eIndex_b_1 = bb_2;
    eIndex_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_name( n31, PrintEVars, "PrintEVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_name( n37, PrintEVars, "PrintEVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_name( n39, Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_close_bracket( n47 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_open_bracket( n48 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_close_bracket( n78 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n48, n78 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n48 );
    refalrts::link_brackets( n2, n47 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    refalrts::push_stack( n42 );
    refalrts::push_stack( n36 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n41 );
    refalrts::push_stack( n40 );
    refalrts::push_stack( n38 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::push_stack( n33 );
    refalrts::push_stack( n30 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sUsings_1;
    static refalrts::Iter sMode_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter eIndent_b_3;
    static refalrts::Iter eIndent_e_3;
    static refalrts::Iter sUsings_2;
    static refalrts::Iter sMode_2;
    static refalrts::Iter eIndex_b_2;
    static refalrts::Iter eIndex_e_2;
    // ( e.Indent ) ( & CmdCopyVar s.Usings s.Mode e.Index )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdCopyVar, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) )
      break;
    eIndex_b_1 = bb_2;
    eIndex_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_name( n32, PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_name( n37, PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_name( n39, Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_call( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_close_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_open_bracket( n47 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_close_bracket( n77 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n47, n77 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n47 );
    refalrts::link_brackets( n2, n46 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    refalrts::push_stack( n41 );
    refalrts::push_stack( n36 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    refalrts::push_stack( n40 );
    refalrts::push_stack( n38 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::push_stack( n33 );
    refalrts::push_stack( n31 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sElemNumber_1;
    static refalrts::Iter eElemInfo_b_1;
    static refalrts::Iter eElemInfo_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter eIndent_b_3;
    static refalrts::Iter eIndent_e_3;
    static refalrts::Iter sElemNumber_2;
    // ( e.Indent ) ( & CmdAllocateElem s.ElemNumber e.ElemInfo )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdAllocateElem, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sElemNumber_1, bb_2, be_2 ) )
      break;
    eElemInfo_b_1 = bb_2;
    eElemInfo_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sElemNumber_2, sElemNumber_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_name( n28, PrintAllocateElem, "PrintAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_open_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n31 );
    refalrts::push_stack( n27 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, eElemInfo_b_1, eElemInfo_e_1 );
    res = refalrts::splice_stvar( res, sElemNumber_2 );
    refalrts::link_brackets( n29, n30 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::link_brackets( n2, n26 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sLeft_1;
    static refalrts::Iter sRight_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdLinkBrackets s.Left s.Right )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdLinkBrackets, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sLeft_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sRight_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_name( n34, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n39 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    refalrts::push_stack( n35 );
    refalrts::push_stack( n33 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_stvar( res, sRight_1 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_stvar( res, sLeft_1 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sElemNumber_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdPushStack s.ElemNumber )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdPushStack, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sElemNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sElemNumber_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdInsertElem s.ElemNumber )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdInsertElem, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sElemNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n43 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::push_stack( n39 );
    refalrts::push_stack( n37 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sUsings_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdInsertVar s.Usings 'e e.Index )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdInsertVar, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) )
      break;
    eIndex_b_1 = bb_2;
    eIndex_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, PrintEVars, "PrintEVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_bracket( n44 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n44 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    refalrts::push_stack( n40 );
    refalrts::push_stack( n37 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sUsings_1;
    static refalrts::Iter sMode_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdInsertVar s.Usings s.Mode e.Index )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdInsertVar, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) )
      break;
    eIndex_b_1 = bb_2;
    eIndex_e_1 = be_2;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_name( n39, PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_bracket( n44 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n44 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    refalrts::push_stack( n40 );
    refalrts::push_stack( n38 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter eIndent_b_3;
    static refalrts::Iter eIndent_e_3;
    static refalrts::Iter eIndent_b_4;
    static refalrts::Iter eIndent_e_4;
    // ( e.Indent ) ( & CmdReturnResult )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdReturnResult, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_close_bracket( n77 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_open_bracket( n78 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_char( n94, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_char( n98, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_char( n99, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_char( n103, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_char( n104, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n105 = 0;
    if( ! refalrts::alloc_close_bracket( n105 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n78, n105 );
    res = refalrts::splice_elem( res, n105 );
    res = refalrts::splice_elem( res, n104 );
    res = refalrts::splice_elem( res, n103 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    res = refalrts::splice_elem( res, n99 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n78 );
    refalrts::link_brackets( n25, n77 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n2, n24 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sUsings_1;
    static refalrts::Iter sMode_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    // s.Usings s.Mode e.Index
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) )
      break;
    eIndex_b_1 = bb_0;
    eIndex_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintEVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sUsings_1;
    static refalrts::Iter sMode_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    // s.Usings s.Mode e.Index
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) )
      break;
    eIndex_b_1 = bb_0;
    eIndex_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintEVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sUsings_1;
    static refalrts::Iter sMode_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    // s.Usings s.Mode e.Index
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) )
      break;
    eIndex_b_1 = bb_0;
    eIndex_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintEVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sUsings_1;
    static refalrts::Iter sMode_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    static refalrts::Iter sUsings_2;
    static refalrts::Iter sMode_2;
    static refalrts::Iter eIndex_b_2;
    static refalrts::Iter eIndex_e_2;
    // s.Usings s.Mode e.Index
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) )
      break;
    eIndex_b_1 = bb_0;
    eIndex_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sChar_1;
    // s.Char
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, EscapeChar, "EscapeChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintMatchChar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter sChar_1;
    // ( e.Indent ) s.Direction s.BracketNumber s.Char
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, Escape, "Escape" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n15 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintMatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter sNumber_1;
    // ( e.Indent ) s.Direction s.BracketNumber s.Number
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n17 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n4, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintMatchName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter eName_b_1;
    static refalrts::Iter eName_e_1;
    // ( e.Indent ) s.Direction s.BracketNumber e.Name
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) )
      break;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    refalrts::link_brackets( n4, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintMatchBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter sInnerNum_1;
    // ( e.Indent ) s.Direction s.BracketNumber s.InnerNum
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sInnerNum_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n17 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sInnerNum_1 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n4, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult BreakerFromIndent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // '    '
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, ';' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // e.OtherIndent
    // Unused closed variable e.OtherIndent

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ';' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintMatchEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter eIndent_b_3;
    static refalrts::Iter eIndent_e_3;
    // ( e.Indent ) s.BracketNumber
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'q' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_open_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_name( n40, BreakerFromIndent, "BreakerFromIndent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_call( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_bracket( n42 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n36, n42 );
    res = refalrts::splice_elem( res, n42 );
    refalrts::push_stack( n41 );
    refalrts::push_stack( n39 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n36 );
    refalrts::link_brackets( n0, n35 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult StrFromDirection(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // & AlgLeft
    if( ! refalrts::function_left( AlgLeft, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // & AlgRight
    if( ! refalrts::function_left( AlgRight, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult VarMatchFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // 's'
    if( ! refalrts::char_left( 's', bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // 't'
    if( ! refalrts::char_left( 't', bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintMatchSTVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter sMode_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    static refalrts::Iter sMode_2;
    // ( e.Indent ) s.Direction s.BracketNumber s.Mode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) )
      break;
    eIndex_b_1 = bb_0;
    eIndex_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, VarMatchFunction, "VarMatchFunction" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_number( n11, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintMatchRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter sUsings_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    static refalrts::Iter sUsings_2;
    static refalrts::Iter eIndex_b_2;
    static refalrts::Iter eIndex_e_2;
    // ( e.Indent ) s.Direction s.BracketNumber s.Usings 'e e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_0, be_0 ) )
      break;
    eIndex_b_1 = bb_0;
    eIndex_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, PrintEVars, "PrintEVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, PrintEVars, "PrintEVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_name( n28, Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_call( n32 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n32 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::push_stack( n31 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::push_stack( n29 );
    refalrts::push_stack( n27 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n19 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n4, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter sUsings_1;
    static refalrts::Iter sMode_1;
    static refalrts::Iter eIndex_b_1;
    static refalrts::Iter eIndex_e_1;
    static refalrts::Iter sUsings_2;
    static refalrts::Iter sMode_2;
    static refalrts::Iter eIndex_b_2;
    static refalrts::Iter eIndex_e_2;
    // ( e.Indent ) s.Direction s.BracketNumber s.Usings s.Mode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) )
      break;
    eIndex_b_1 = bb_0;
    eIndex_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, PrintMatch, "PrintMatch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_name( n21, PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_name( n28, Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n31 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    refalrts::push_stack( n29 );
    refalrts::push_stack( n27 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n20 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n4, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintMatch(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sDirection_1;
    static refalrts::Iter sBracketNumber_1;
    static refalrts::Iter eFunction_b_1;
    static refalrts::Iter eFunction_e_1;
    static refalrts::Iter eTextRep_b_1;
    static refalrts::Iter eTextRep_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter eIndent_b_3;
    static refalrts::Iter eIndent_e_3;
    // ( e.Indent ) s.Direction s.BracketNumber ( e.Function ) e.TextRep
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eFunction_b_1 = bb_2;
    eFunction_e_1 = be_2;
    eTextRep_b_1 = bb_0;
    eTextRep_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, StrFromDirection, "StrFromDirection" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_name( n37, BreakerFromIndent, "BreakerFromIndent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n33, n39 );
    res = refalrts::splice_elem( res, n39 );
    refalrts::push_stack( n38 );
    refalrts::push_stack( n36 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n0, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eTextRep_b_1, eTextRep_e_1 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eFunction_b_1, eFunction_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintElemVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sNumber_1;
    // s.Number
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter sElemNumber_1;
    static refalrts::Iter sElementType_1;
    static refalrts::Iter eInfo_b_1;
    static refalrts::Iter eInfo_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter sElementType_2;
    // ( e.Indent ) s.ElemNumber s.ElementType e.Info
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sElemNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sElementType_1, bb_0, be_0 ) )
      break;
    eInfo_b_1 = bb_0;
    eInfo_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sElementType_2, sElementType_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, PrintAllocate_Aux, "PrintAllocate_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, SwAllocator, "SwAllocator" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, SwInfo, "SwInfo" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n15, n45 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n9, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eInfo_b_1, eInfo_e_1 );
    res = refalrts::splice_stvar( res, sElementType_2 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sElementType_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult PrintAllocate_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eIndent_b_1;
    static refalrts::Iter eIndent_e_1;
    static refalrts::Iter eConstructor_b_1;
    static refalrts::Iter eConstructor_e_1;
    static refalrts::Iter eValue_b_1;
    static refalrts::Iter eValue_e_1;
    static refalrts::Iter sElemNumber_1;
    // ( e.Indent ) s.ElemNumber ( e.Constructor ) ( e.Value )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    eConstructor_b_1 = bb_3;
    eConstructor_e_1 = be_3;
    eValue_b_1 = bb_2;
    eValue_e_1 = be_2;
    if( ! refalrts::svar_left( sElemNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n26 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eValue_b_1, eValue_e_1 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n19 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eConstructor_b_1, eConstructor_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult SwAllocator(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // & ElChar
    if( ! refalrts::function_left( ElChar, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // & ElName
    if( ! refalrts::function_left( ElName, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // & ElNumber
    if( ! refalrts::function_left( ElNumber, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'r' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // & ElOpenBracket
    if( ! refalrts::function_left( ElOpenBracket, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // & ElCloseBracket
    if( ! refalrts::function_left( ElCloseBracket, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // & ElOpenCall
    if( ! refalrts::function_left( ElOpenCall, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    // & ElCloseCall
    if( ! refalrts::function_left( ElCloseCall, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'l' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult SwInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sChar_1;
    // & ElChar s.Char
    if( ! refalrts::function_left( ElChar, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, Escape, "Escape" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '\'' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eName_b_1;
    static refalrts::Iter eName_e_1;
    static refalrts::Iter eName_b_2;
    static refalrts::Iter eName_e_2;
    // & ElName e.Name
    if( ! refalrts::function_left( ElName, bb_0, be_0 ) )
      break;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '\"' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sNumber_1;
    // & ElNumber s.Number
    if( ! refalrts::function_left( ElNumber, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'L' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sOther_1;
    // s.Other
    if( ! refalrts::svar_left( sOther_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}


//End of file

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
extern refalrts::FnResult CmdInsertString(refalrts::Iter arg_begin, refalrts::Iter arg_end);
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
extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElCloseBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElCloseCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElOpenBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElOpenCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ElString(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EscapeChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GN_Entry(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GN_Local(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenFnEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenFnEnd_Success(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenForward(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenNative(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenPostprocess(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenThisIsGeneratedFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BeginNative(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BracketsVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BracketsVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BracketsVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BreakerFromIndent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult EndNative(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult EnumerateLines(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FuncArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenCommonHeaders(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenCommonTailer(refalrts::Iter arg_begin, refalrts::Iter arg_end);
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
static refalrts::FnResult PrintStringVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SkipIndentAccum(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StrFromDirection(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SwAllocator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SwGenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SwInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult TextFromMemoryClass(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult VarMatchFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult GN_Local(refalrts::Iter, refalrts::Iter) {
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult GN_Entry(refalrts::Iter, refalrts::Iter) {
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "refalrts::Iter arg_begin, refalrts::Iter arg_end", 48) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "refalrts::Iter, refalrts::Iter", 30) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "static ", 7) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "refalrts::FnResult ", 19) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_chars( n9, n10, ") {", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, n9, n10 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sFnArguments_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_evar( res, n4, n5 );
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

refalrts::FnResult GenThisIsGeneratedFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_chars( n1, n2, "  refalrts::this_is_generated_function();", 41) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, n1, n2 );
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_chars( n1, n2, "  return refalrts::FnResult(", 28) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "    refalrts::cRecognitionImpossible | (__LINE__ << 8)", 54) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_chars( n9, n10, "  );", 4) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n15, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n8, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, n9, n10 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, n5, n6 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, n1, n2 );
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_chars( n1, n2, "  //return refalrts::cRecognitionImpossible;", 44) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, n1, n2 );
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
    static refalrts::Iter sScopeClass_1;
    static refalrts::Iter eName_b_1;
    static refalrts::Iter eName_e_1;
    // s.ScopeClass e.Name
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
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
    if( ! refalrts::alloc_name( n2, NakedArguments, "NakedArguments" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, GenFnEnd, "GenFnEnd" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_chars( n1, n2, "extern refalrts::FnResult ", 26) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, FuncArguments, "FuncArguments" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_chars( n7, n8, ");", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, n7, n8 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_evar( res, n1, n2 );
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_chars( n1, n2, "static refalrts::FnResult ", 26) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, FuncArguments, "FuncArguments" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_chars( n7, n8, ");", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, n7, n8 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_evar( res, n1, n2 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult GenCommonHeaders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_chars( n1, n2, "// Automatically generated file. Don\'t edit!", 44) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "#include \"refalrts.h\"", 21) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, n5, n6 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, n1, n2 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult GenCommonTailer(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "//End of file", 13) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_chars( n1, n2, "  do {", 6) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "    refalrts::Iter ", 19) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_number( n9, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_chars( n11, n12, " = arg_begin;", 13) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_chars( n15, n16, "    refalrts::Iter ", 19) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_number( n19, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_chars( n21, n22, " = arg_end;", 11) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_chars( n25, n26, "    refalrts::move_left( ", 25) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_name( n28, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_number( n29, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_chars( n31, n32, " );", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_chars( n35, n36, "    refalrts::move_left( ", 25) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_number( n39, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_chars( n41, n42, " );", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_open_bracket( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_chars( n45, n46, "    refalrts::move_right( ", 26) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_open_call( n47 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_name( n48, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_number( n49, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_close_call( n50 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_chars( n51, n52, " );", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_close_bracket( n53 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_open_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_chars( n55, n56, "    refalrts::start_sentence();", 31) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_close_bracket( n57 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_open_call( n58 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_name( n59, SkipIndentAccum, "SkipIndentAccum" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_open_call( n60 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_name( n61, MapReduce, "MapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_name( n62, GenCommand, "GenCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_open_bracket( n63 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_chars( n64, n65, "    ", 4) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_close_bracket( n66 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_close_call( n67 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_close_call( n68 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_open_bracket( n69 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_chars( n70, n71, "  } while ( 0 );", 16) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_close_bracket( n72 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_open_bracket( n73 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_close_bracket( n74 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n73, n74 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    refalrts::link_brackets( n69, n72 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_evar( res, n70, n71 );
    res = refalrts::splice_elem( res, n69 );
    refalrts::push_stack( n68 );
    refalrts::push_stack( n58 );
    res = refalrts::splice_elem( res, n68 );
    refalrts::push_stack( n67 );
    refalrts::push_stack( n60 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_evar( res, eAlgorithm_b_1, eAlgorithm_e_1 );
    refalrts::link_brackets( n63, n66 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_evar( res, n64, n65 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    refalrts::link_brackets( n54, n57 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_evar( res, n55, n56 );
    res = refalrts::splice_elem( res, n54 );
    refalrts::link_brackets( n44, n53 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_evar( res, n51, n52 );
    refalrts::push_stack( n50 );
    refalrts::push_stack( n47 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_evar( res, n45, n46 );
    res = refalrts::splice_elem( res, n44 );
    refalrts::link_brackets( n34, n43 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_evar( res, n41, n42 );
    refalrts::push_stack( n40 );
    refalrts::push_stack( n37 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, n35, n36 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n24, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, n31, n32 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n27 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, n25, n26 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n14, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, n21, n22 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n17 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, n15, n16 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n4, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, n11, n12 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, n5, n6 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, n1, n2 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "bb_", 3) )
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
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "be_", 3) )
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
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, ", ", 2) )
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
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "//", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eText_b_1, eText_e_1 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "static refalrts::Iter ", 22) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_chars( n11, n12, "static refalrts::Iter ", 22) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n10, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eVarInfo_b_2, eVarInfo_e_2 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, n11, n12 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n2, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "static refalrts::Iter ", 22) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "refalrts::Iter ", 15) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_chars( n8, n9, " = 0;", 5) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_chars( n12, n13, "refalrts::Iter ", 15) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_chars( n17, n18, " = 0;", 5) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_name( n21, PrintMatchBrackets, "PrintMatchBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_open_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n24 );
    refalrts::push_stack( n20 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_stvar( res, sInnerBrackets_3 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n22, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n11, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, n17, n18 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sInnerBrackets_2 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, n12, n13 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, n8, n9 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sInnerBrackets_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_chars( n8, n9, " = ", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_number( n18, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_chars( n21, n22, " = ", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n15, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::push_stack( n25 );
    refalrts::push_stack( n23 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_stvar( res, sBracketNumber_2 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, n21, n22 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n16 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n2, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, n8, n9 );
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_chars( n1, n2, "  ", 2) )
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
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_chars( n10, n11, " = 0;", 5) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_number( n16, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_chars( n19, n20, " = 0;", 5) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_open_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_chars( n23, n24, "refalrts::start_e_loop();", 25) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_chars( n27, n28, "do {", 4) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n26, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, n27, n28 );
    res = refalrts::splice_evar( res, eIndent_b_5, eIndent_e_5 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::link_brackets( n22, n25 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, n23, n24 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n13, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, n19, n20 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, n10, n11 );
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
    res = refalrts::splice_evar( res, n1, n2 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "} while ( refalrts::open_evar_advance( ", 39) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintEVars, "PrintEVars" ) )
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
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_chars( n10, n11, ", ", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_chars( n15, n16, " ) );", 5) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, n15, n16 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, n10, n11 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "refalrts::Iter ", 15) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_chars( n8, n9, " = ", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_chars( n16, n17, "refalrts::Iter ", 15) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_chars( n21, n22, " = ", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n15, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::push_stack( n25 );
    refalrts::push_stack( n23 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_stvar( res, sOldBracketNumber_2 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, n21, n22 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sNewBracketNumber_2 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, n16, n17 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n2, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sOldBracketNumber_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, n8, n9 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sNewBracketNumber_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "refalrts::reset_allocator();", 28) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_chars( n9, n10, "refalrts::Iter res = arg_begin;", 31) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n8, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, n9, n10 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, n5, n6 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "if( ! refalrts::copy_evar( ", 27) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintEVars, "PrintEVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_chars( n9, n10, ", ", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, PrintEVars, "PrintEVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_chars( n18, n19, " ) )", 4) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_chars( n22, n23, "  return refalrts::cNoMemory;", 29) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n21, n24 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, n22, n23 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n2, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, n18, n19 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, n9, n10 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "if( ! refalrts::copy_stvar( ", 28) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_chars( n8, n9, ", ", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_chars( n16, n17, " ) )", 4) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_chars( n20, n21, "  return refalrts::cNoMemory;", 29) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n19, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, n20, n21 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n2, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, n16, n17 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, n8, n9 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    static refalrts::Iter sStringNumber_1;
    static refalrts::Iter sLen_1;
    static refalrts::Iter eString_b_1;
    static refalrts::Iter eString_e_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    static refalrts::Iter eIndent_b_3;
    static refalrts::Iter eIndent_e_3;
    static refalrts::Iter eIndent_b_4;
    static refalrts::Iter eIndent_e_4;
    static refalrts::Iter eIndent_b_5;
    static refalrts::Iter eIndent_e_5;
    static refalrts::Iter sStringNumber_2;
    static refalrts::Iter sStringNumber_3;
    // ( e.Indent ) ( & CmdAllocateElem s.StringNumber & ElString s.Len e.String )
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
    if( ! refalrts::svar_left( sStringNumber_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::function_left( ElString, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sLen_1, bb_2, be_2 ) )
      break;
    eString_b_1 = bb_2;
    eString_e_1 = be_2;

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
    if( ! refalrts::copy_stvar( sStringNumber_2, sStringNumber_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sStringNumber_3, sStringNumber_2 ) )
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "refalrts::Iter ", 15) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_chars( n8, n9, " = 0;", 5) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_chars( n12, n13, "refalrts::Iter ", 15) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_chars( n20, n21, " = 0;", 5) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_chars( n24, n25, "if( ! refalrts::alloc_chars( ", 29) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, PrintStringVar, "PrintStringVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_chars( n29, n30, ", \"", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_name( n32, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_name( n33, EscapeChar, "EscapeChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_chars( n35, n36, "\", ", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_chars( n40, n41, ") )", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_bracket( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_open_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_chars( n44, n45, "  return refalrts::cNoMemory;", 29) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_close_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n43, n46 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_evar( res, n44, n45 );
    res = refalrts::splice_evar( res, eIndent_b_5, eIndent_e_5 );
    res = refalrts::splice_elem( res, n43 );
    refalrts::link_brackets( n23, n42 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_evar( res, n40, n41 );
    refalrts::push_stack( n39 );
    refalrts::push_stack( n37 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_stvar( res, sLen_1 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, n35, n36 );
    refalrts::push_stack( n34 );
    refalrts::push_stack( n31 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, eString_b_1, eString_e_1 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, n29, n30 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n26 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, sStringNumber_3 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, n24, n25 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n11, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, n20, n21 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n16 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_stvar( res, sStringNumber_2 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, n12, n13 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, n8, n9 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sStringNumber_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "refalrts::Iter ", 15) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_chars( n8, n9, " = 0;", 5) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, PrintAllocateElem, "PrintAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n15 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eElemInfo_b_1, eElemInfo_e_1 );
    res = refalrts::splice_stvar( res, sElemNumber_2 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, n8, n9 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "refalrts::link_brackets( ", 25) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_chars( n8, n9, ", ", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_chars( n13, n14, " );", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, n13, n14 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sRight_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, n8, n9 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sLeft_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "refalrts::push_stack( ", 22) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_chars( n8, n9, " );", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, n8, n9 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "res = refalrts::splice_elem( res, ", 34) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_chars( n8, n9, " );", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, n8, n9 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "res = refalrts::splice_evar( res, ", 34) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintEVars, "PrintEVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_chars( n9, n10, " );", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, n9, n10 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "res = refalrts::splice_stvar( res, ", 35) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_chars( n8, n9, " );", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, n8, n9 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    static refalrts::Iter sStringNumber_1;
    static refalrts::Iter eIndent_b_2;
    static refalrts::Iter eIndent_e_2;
    // ( e.Indent ) ( & CmdInsertString s.StringNumber )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( CmdInsertString, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    eIndent_e_1 = be_1;
    if( ! refalrts::svar_left( sStringNumber_1, bb_2, be_2 ) )
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "res = refalrts::splice_evar( res, ", 34) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintStringVar, "PrintStringVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_chars( n8, n9, " );", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, n8, n9 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sStringNumber_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "refalrts::use( res );", 21) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_chars( n7, n8, "refalrts::splice_to_freelist( arg_begin, arg_end );", 51) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_chars( n11, n12, "return refalrts::cSuccess;", 26) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n10, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, n11, n12 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n6, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, n7, n8 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "_b_", 3) )
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
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "_e_", 3) )
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
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, ", ", 2) )
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
    res = refalrts::splice_evar( res, n3, n4 );
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
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "char", 4) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, Escape, "Escape" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, n5, n6 );
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
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "number", 6) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_chars( n11, n12, "UL", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, n11, n12 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, n5, n6 );
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
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "function", 8) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, n5, n6 );
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
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "brackets", 8) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sInnerNum_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, n5, n6 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "break;", 6) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "continue;", 9) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_chars( n1, n2, "if( ! refalrts::empty_seq( ", 27) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_chars( n6, n7, " ) )", 4) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_chars( n10, n11, "  ", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, BreakerFromIndent, "BreakerFromIndent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n9, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, n10, n11 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, n6, n7 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, n1, n2 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "left", 4) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "right", 5) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "svar", 4) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "tvar", 4) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "repeated_evar", 13) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, PrintEVars, "PrintEVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_chars( n12, n13, ", ", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, PrintEVars, "PrintEVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n21 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n16 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, n12, n13 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, n5, n6 );
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
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "repeated_stvar", 14) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_chars( n11, n12, ", ", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n19 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, n11, n12 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, n5, n6 );
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_chars( n1, n2, "if( ! refalrts::", 16) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, StrFromDirection, "StrFromDirection" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_chars( n7, n8, "( ", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_chars( n9, n10, ", ", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, BracketsVars, "BracketsVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_chars( n14, n15, " ) )", 4) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_chars( n18, n19, "  ", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_name( n21, BreakerFromIndent, "BreakerFromIndent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n17, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n20 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, n18, n19 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n0, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, n14, n15 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sBracketNumber_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, n9, n10 );
    res = refalrts::splice_evar( res, eTextRep_b_1, eTextRep_e_1 );
    res = refalrts::splice_evar( res, n7, n8 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunction_b_1, eFunction_e_1 );
    res = refalrts::splice_evar( res, n1, n2 );
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

static refalrts::FnResult PrintStringVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sNumber_1;
    static refalrts::Iter sNumber_2;
    // s.Number
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sNumber_2, sNumber_1 ) )
      return refalrts::cNoMemory;
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
    refalrts::Iter n4 = 0;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, ", n", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sNumber_2 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
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
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_chars( n16, n17, "  return refalrts::cNoMemory;", 29) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n15, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, n16, n17 );
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_chars( n1, n2, "if( ! refalrts::", 16) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_chars( n3, n4, "( ", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_chars( n8, n9, " ) )", 4) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, n8, n9 );
    res = refalrts::splice_evar( res, eValue_b_1, eValue_e_1 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, n3, n4 );
    res = refalrts::splice_evar( res, eConstructor_b_1, eConstructor_e_1 );
    res = refalrts::splice_evar( res, n1, n2 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "alloc_char", 10) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "alloc_name", 10) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "alloc_number", 12) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "alloc_open_bracket", 18) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "alloc_close_bracket", 19) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "alloc_open_call", 15) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "alloc_close_call", 16) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, ", \'", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Escape, "Escape" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '\'' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, ", ", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, ", \"", 3) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '\"' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    res = refalrts::splice_evar( res, n2, n3 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_evar( res, n0, n1 );
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, ", ", 2) )
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
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "UL", 2) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, n5, n6 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, n0, n1 );
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

static refalrts::FnResult BeginNative(refalrts::Iter, refalrts::Iter) {
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult EndNative(refalrts::Iter, refalrts::Iter) {
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult GenNative(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sNativeLineNo_1;
    static refalrts::Iter eCode_b_1;
    static refalrts::Iter eCode_e_1;
    // s.NativeLineNo e.Code
    if( ! refalrts::svar_left( sNativeLineNo_1, bb_0, be_0 ) )
      break;
    eCode_b_1 = bb_0;
    eCode_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, BeginNative, "BeginNative" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, EndNative, "EndNative" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eCode_b_1, eCode_e_1 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNativeLineNo_1 );
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

refalrts::FnResult GenPostprocess(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eSrcName_b_1;
    static refalrts::Iter eSrcName_e_1;
    static refalrts::Iter eOutputName_b_1;
    static refalrts::Iter eOutputName_e_1;
    static refalrts::Iter eLines_B_b_1;
    static refalrts::Iter eLines_B_e_1;
    static refalrts::Iter eLines_E_b_1;
    static refalrts::Iter eLines_E_e_1;
    // ( e.SrcName ) ( e.OutputName ) e.Lines_B ( & EndNative ) e.Lines_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eSrcName_b_1 = bb_1;
    eSrcName_e_1 = be_1;
    eOutputName_b_1 = bb_2;
    eOutputName_e_1 = be_2;
    eLines_B_b_1 = 0;
    eLines_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      refalrts::Iter bb_3 = bb_0;
      refalrts::Iter be_3 = be_0;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( EndNative, bb_4, be_4 ) )
        continue;
      if( ! refalrts::empty_seq( bb_4, be_4 ) )
        continue;
      eLines_E_b_1 = bb_3;
      eLines_E_e_1 = be_3;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, DelAccumulator, "DelAccumulator" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, MapReduce, "MapReduce" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_name( n5, EnumerateLines, "EnumerateLines" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_open_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_number( n11, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, GenCommonHeaders, "GenCommonHeaders" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_open_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_name( n16, EndNative, "EndNative" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_bracket( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_call( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, GenCommonTailer, "GenCommonTailer" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_call( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_call( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n22 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::push_stack( n21 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::push_stack( n20 );
      refalrts::push_stack( n18 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, eLines_E_b_1, eLines_E_e_1 );
      refalrts::link_brackets( n15, n17 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eLines_B_b_1, eLines_B_e_1 );
      refalrts::push_stack( n14 );
      refalrts::push_stack( n12 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n4, n10 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eSrcName_b_1, eSrcName_e_1 );
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
    } while ( refalrts::open_evar_advance( eLines_B_b_1, eLines_B_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eLines_b_1;
    static refalrts::Iter eLines_e_1;
    // ( e.SrcName ) ( e.OutputName ) e.Lines
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    // Unused closed variable e.SrcName
    // Unused closed variable e.OutputName
    eLines_b_1 = bb_0;
    eLines_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, GenCommonHeaders, "GenCommonHeaders" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, GenCommonTailer, "GenCommonTailer" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eLines_b_1, eLines_e_1 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
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

static refalrts::FnResult EnumerateLines(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eSrcName_b_1;
    static refalrts::Iter eSrcName_e_1;
    static refalrts::Iter sLineNo_1;
    static refalrts::Iter sNativeLineNo_1;
    // ( e.SrcName ) ( e.OutputName ) s.LineNo ( & BeginNative s.NativeLineNo )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( BeginNative, bb_3, be_3 ) )
      break;
    eSrcName_b_1 = bb_1;
    eSrcName_e_1 = be_1;
    // Unused closed variable e.OutputName
    if( ! refalrts::svar_left( sLineNo_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNativeLineNo_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::empty_seq( bb_3, be_3 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "#line ", 6) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_chars( n12, n13, " \"", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n3, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eSrcName_b_1, eSrcName_e_1 );
    res = refalrts::splice_evar( res, n12, n13 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sNativeLineNo_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sLineNo_1 );
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
    static refalrts::Iter eOutputName_b_1;
    static refalrts::Iter eOutputName_e_1;
    static refalrts::Iter sLineNo_1;
    static refalrts::Iter sLineNo_2;
    // ( e.SrcName ) ( e.OutputName ) s.LineNo ( & EndNative )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( EndNative, bb_3, be_3 ) )
      break;
    if( ! refalrts::empty_seq( bb_3, be_3 ) )
      break;
    // Unused closed variable e.SrcName
    eOutputName_b_1 = bb_2;
    eOutputName_e_1 = be_2;
    if( ! refalrts::svar_left( sLineNo_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sLineNo_2, sLineNo_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "#line ", 6) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_chars( n12, n13, " \"", 2) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, '\"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n3, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
    res = refalrts::splice_evar( res, n12, n13 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sLineNo_2 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sLineNo_1 );
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
    static refalrts::Iter eLine_b_1;
    static refalrts::Iter eLine_e_1;
    static refalrts::Iter sLineNo_1;
    // ( e.SrcName ) ( e.OutputName ) s.LineNo ( e.Line )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    // Unused closed variable e.SrcName
    // Unused closed variable e.OutputName
    eLine_b_1 = bb_3;
    eLine_e_1 = be_3;
    if( ! refalrts::svar_left( sLineNo_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sLineNo_1 );
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


//End of file

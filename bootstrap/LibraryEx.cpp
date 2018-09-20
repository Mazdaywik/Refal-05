// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult FReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FOpen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FClose(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FWriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Sub(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Success(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult IntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Arg(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Apply(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoMapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MapReduce_AddScanned(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult UnBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoLoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult WriteBracketLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FastIntFromStr_Guard(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FastIntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SwDoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Type(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Trim(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Trim_R(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Seq_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Id(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Apply(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sFn_1;
    static refalrts::Iter eArgument_b_1;
    static refalrts::Iter eArgument_e_1;
    // s.Fn e.Argument
    if( ! refalrts::svar_left( sFn_1, bb_0, be_0 ) )
      break;
    eArgument_b_1 = bb_0;
    eArgument_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n1 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eArgument_b_1, eArgument_e_1 );
    res = refalrts::splice_stvar( res, sFn_1 );
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
    static refalrts::Iter eArgument_b_1;
    static refalrts::Iter eArgument_e_1;
    static refalrts::Iter tClosure_1;
    static refalrts::Iter eBounded_b_1;
    static refalrts::Iter eBounded_e_1;
    // ( t.Closure e.Bounded ) e.Argument
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eArgument_b_1 = bb_0;
    eArgument_e_1 = be_0;
    if( ! refalrts::tvar_left( tClosure_1, bb_1, be_1 ) )
      break;
    eBounded_b_1 = bb_1;
    eBounded_e_1 = be_1;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eArgument_b_1, eArgument_e_1 );
    res = refalrts::splice_evar( res, eBounded_b_1, eBounded_e_1 );
    res = refalrts::splice_stvar( res, tClosure_1 );
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

refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter tFn_1;
    static refalrts::Iter tNext_1;
    static refalrts::Iter eTail_b_1;
    static refalrts::Iter eTail_e_1;
    static refalrts::Iter tFn_2;
    // t.Fn t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( tFn_2, tFn_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tFn_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tNext_1 );
    res = refalrts::splice_stvar( res, tFn_1 );
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
    static refalrts::Iter tFn_1;
    // t.Fn
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) )
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

refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter tFn_1;
    static refalrts::Iter tAcc_1;
    static refalrts::Iter tNext_1;
    static refalrts::Iter eTail_b_1;
    static refalrts::Iter eTail_e_1;
    static refalrts::Iter tFn_2;
    // t.Fn t.Acc t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( tFn_2, tFn_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Reduce, "Reduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tNext_1 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    res = refalrts::splice_stvar( res, tFn_2 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tFn_1 );
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
    static refalrts::Iter tAcc_1;
    static refalrts::Iter tFn_1;
    // t.Fn t.Acc
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tAcc_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter tFunction_1;
    static refalrts::Iter eArgument_b_1;
    static refalrts::Iter eArgument_e_1;
    // e.Argument t.Function
    if( ! refalrts::tvar_right( tFunction_1, bb_0, be_0 ) )
      break;
    eArgument_b_1 = bb_0;
    eArgument_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eArgument_b_1, eArgument_e_1 );
    res = refalrts::splice_stvar( res, tFunction_1 );
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

refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter tFn_1;
    static refalrts::Iter tAcc_1;
    static refalrts::Iter eTail_b_1;
    static refalrts::Iter eTail_e_1;
    // t.Fn t.Acc e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoMapReduce, "DoMapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    res = refalrts::splice_stvar( res, tFn_1 );
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

static refalrts::FnResult DoMapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter tFn_1;
    static refalrts::Iter tAcc_1;
    static refalrts::Iter eScanned_b_1;
    static refalrts::Iter eScanned_e_1;
    static refalrts::Iter tNext_1;
    static refalrts::Iter eTail_b_1;
    static refalrts::Iter eTail_e_1;
    static refalrts::Iter tFn_2;
    // t.Fn t.Acc ( e.Scanned ) t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eScanned_b_1 = bb_1;
    eScanned_e_1 = be_1;
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( tFn_2, tFn_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoMapReduce, "DoMapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, MapReduce_AddScanned, "MapReduce_AddScanned" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, tNext_1 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    res = refalrts::splice_stvar( res, tFn_2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tFn_1 );
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
    static refalrts::Iter eScanned_b_1;
    static refalrts::Iter eScanned_e_1;
    static refalrts::Iter tAcc_1;
    static refalrts::Iter tFn_1;
    // t.Fn t.Acc ( e.Scanned )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eScanned_b_1 = bb_1;
    eScanned_e_1 = be_1;
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult MapReduce_AddScanned(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eScanned_b_1;
    static refalrts::Iter eScanned_e_1;
    static refalrts::Iter tAcc_1;
    static refalrts::Iter eStepScanned_b_1;
    static refalrts::Iter eStepScanned_e_1;
    // t.Acc e.StepScanned ( e.Scanned )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eScanned_b_1 = bb_1;
    eScanned_e_1 = be_1;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) )
      break;
    eStepScanned_b_1 = bb_0;
    eStepScanned_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eStepScanned_b_1, eStepScanned_e_1 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult UnBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eExpr_b_1;
    static refalrts::Iter eExpr_e_1;
    // ( e.Expr )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eExpr_b_1 = bb_1;
    eExpr_e_1 = be_1;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eExpr_b_1, eExpr_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eTail_b_1;
    static refalrts::Iter eTail_e_1;
    static refalrts::Iter tAcc_1;
    // t.Acc e.Tail
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eFileName_b_1;
    static refalrts::Iter eFileName_e_1;
    // e.FileName
    eFileName_b_1 = bb_0;
    eFileName_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoLoadFile, "DoLoadFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, FReadLine, "FReadLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, FOpen, "FOpen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

static refalrts::FnResult DoLoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter tFile_1;
    // t.File 0
    if( ! refalrts::number_right( 0UL, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, FClose, "FClose" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tFile_1 );
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
    static refalrts::Iter tFile_1;
    static refalrts::Iter eLine_b_1;
    static refalrts::Iter eLine_e_1;
    // t.File e.Line 0
    if( ! refalrts::number_right( 0UL, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    if( ! refalrts::alloc_name( n3, FClose, "FClose" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tFile_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    static refalrts::Iter tFile_1;
    static refalrts::Iter eLine_b_1;
    static refalrts::Iter eLine_e_1;
    // t.File e.Line
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    if( ! refalrts::alloc_name( n3, DoLoadFile, "DoLoadFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, FReadLine, "FReadLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, tFile_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eFileName_b_1;
    static refalrts::Iter eFileName_e_1;
    static refalrts::Iter eLines_b_1;
    static refalrts::Iter eLines_e_1;
    // ( e.FileName ) e.Lines
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    eFileName_e_1 = be_1;
    eLines_b_1 = bb_0;
    eLines_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, FClose, "FClose" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Reduce, "Reduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, WriteBracketLine, "WriteBracketLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, FOpen, "FOpen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eLines_b_1, eLines_e_1 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

static refalrts::FnResult WriteBracketLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eLine_b_1;
    static refalrts::Iter eLine_e_1;
    static refalrts::Iter tFile_1;
    // t.File ( e.Line )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_1;
    eLine_e_1 = be_1;
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, FWriteLine, "FWriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_stvar( res, tFile_1 );
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

refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sNum_1;
    // s.Num
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Add, "Add" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_number( n2, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNum_1 );
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

refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sNum_1;
    // s.Num
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Sub, "Sub" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_number( n2, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNum_1 );
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

static refalrts::FnResult FastIntFromStr_Guard(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sNumber_1;
    // & Success s.Number
    if( ! refalrts::function_left( Success, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sNumber_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult FastIntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eDigits_b_1;
    static refalrts::Iter eDigits_e_1;
    // e.Digits
    eDigits_b_1 = bb_0;
    eDigits_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, FastIntFromStr_Guard, "FastIntFromStr_Guard" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, IntFromStr, "IntFromStr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eDigits_b_1, eDigits_e_1 );
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

refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, DoArgList, "DoArgList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_number( n2, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
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

static refalrts::FnResult DoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sNext_1;
    static refalrts::Iter sNext_2;
    // s.Next
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sNext_2, sNext_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, SwDoArgList, "SwDoArgList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, Arg, "Arg" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sNext_2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNext_1 );
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

static refalrts::FnResult SwDoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter sNext_1;
    // s.Next
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    static refalrts::Iter sNext_1;
    static refalrts::Iter eArg_b_1;
    static refalrts::Iter eArg_e_1;
    // s.Next e.Arg
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) )
      break;
    eArg_b_1 = bb_0;
    eArg_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    if( ! refalrts::alloc_name( n3, DoArgList, "DoArgList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNext_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eArg_b_1, eArg_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult Type(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'A e.X
    if( ! refalrts::char_left( 'A', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuA", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'B e.X
    if( ! refalrts::char_left( 'B', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuB", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'C e.X
    if( ! refalrts::char_left( 'C', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuC", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'D e.X
    if( ! refalrts::char_left( 'D', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuD", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'E e.X
    if( ! refalrts::char_left( 'E', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuE", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'F e.X
    if( ! refalrts::char_left( 'F', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuF", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'G e.X
    if( ! refalrts::char_left( 'G', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuG", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'H e.X
    if( ! refalrts::char_left( 'H', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuH", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'I e.X
    if( ! refalrts::char_left( 'I', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuI", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'J e.X
    if( ! refalrts::char_left( 'J', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuJ", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'K e.X
    if( ! refalrts::char_left( 'K', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuK", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'L e.X
    if( ! refalrts::char_left( 'L', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuL", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'M e.X
    if( ! refalrts::char_left( 'M', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuM", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'N e.X
    if( ! refalrts::char_left( 'N', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuN", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'O e.X
    if( ! refalrts::char_left( 'O', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuO", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'P e.X
    if( ! refalrts::char_left( 'P', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuP", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'Q e.X
    if( ! refalrts::char_left( 'Q', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuQ", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'R e.X
    if( ! refalrts::char_left( 'R', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuR", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'S e.X
    if( ! refalrts::char_left( 'S', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuS", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'T e.X
    if( ! refalrts::char_left( 'T', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuT", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'U e.X
    if( ! refalrts::char_left( 'U', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuU", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'V e.X
    if( ! refalrts::char_left( 'V', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuV", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'W e.X
    if( ! refalrts::char_left( 'W', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuW", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'X e.X
    if( ! refalrts::char_left( 'X', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuX", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'Y e.X
    if( ! refalrts::char_left( 'Y', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuY", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'Z e.X
    if( ! refalrts::char_left( 'Z', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuZ", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'a e.X
    if( ! refalrts::char_left( 'a', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lla", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'b e.X
    if( ! refalrts::char_left( 'b', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llb", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'c e.X
    if( ! refalrts::char_left( 'c', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llc", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'd e.X
    if( ! refalrts::char_left( 'd', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lld", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'e e.X
    if( ! refalrts::char_left( 'e', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lle", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'f e.X
    if( ! refalrts::char_left( 'f', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llf", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'g e.X
    if( ! refalrts::char_left( 'g', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llg", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'h e.X
    if( ! refalrts::char_left( 'h', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llh", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'i e.X
    if( ! refalrts::char_left( 'i', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lli", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'j e.X
    if( ! refalrts::char_left( 'j', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llj", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'k e.X
    if( ! refalrts::char_left( 'k', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llk", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'l e.X
    if( ! refalrts::char_left( 'l', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lll", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'm e.X
    if( ! refalrts::char_left( 'm', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llm", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'n e.X
    if( ! refalrts::char_left( 'n', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lln", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'o e.X
    if( ! refalrts::char_left( 'o', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llo", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'p e.X
    if( ! refalrts::char_left( 'p', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llp", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'q e.X
    if( ! refalrts::char_left( 'q', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llq", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'r e.X
    if( ! refalrts::char_left( 'r', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llr", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 's e.X
    if( ! refalrts::char_left( 's', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lls", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 't e.X
    if( ! refalrts::char_left( 't', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llt", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'u e.X
    if( ! refalrts::char_left( 'u', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llu", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'v e.X
    if( ! refalrts::char_left( 'v', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llv", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'w e.X
    if( ! refalrts::char_left( 'w', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llw", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'x e.X
    if( ! refalrts::char_left( 'x', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llx", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'y e.X
    if( ! refalrts::char_left( 'y', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lly", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // 'z e.X
    if( ! refalrts::char_left( 'z', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llz", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // '0 e.X
    if( ! refalrts::char_left( '0', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D00", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // '1 e.X
    if( ! refalrts::char_left( '1', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D01", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // '2 e.X
    if( ! refalrts::char_left( '2', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D02", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // '3 e.X
    if( ! refalrts::char_left( '3', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D03", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // '4 e.X
    if( ! refalrts::char_left( '4', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D04", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // '5 e.X
    if( ! refalrts::char_left( '5', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D05", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // '6 e.X
    if( ! refalrts::char_left( '6', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D06", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // '7 e.X
    if( ! refalrts::char_left( '7', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D07", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // '8 e.X
    if( ! refalrts::char_left( '8', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D08", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static refalrts::Iter eX_b_1;
    static refalrts::Iter eX_e_1;
    // '9 e.X
    if( ! refalrts::char_left( '9', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D09", 3) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    //
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "*0", 2) )
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
    static refalrts::Iter eOther_b_1;
    static refalrts::Iter eOther_e_1;
    // e.Other
    eOther_b_1 = bb_0;
    eOther_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "??", 2) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eOther_b_1, eOther_e_1 );
    res = refalrts::splice_evar( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult Trim(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eLine_b_1;
    static refalrts::Iter eLine_e_1;
    // '  e.Line
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Trim, "Trim" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    // '\t e.Line
    if( ! refalrts::char_left( '\t', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Trim, "Trim" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    // '\r e.Line
    if( ! refalrts::char_left( '\r', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Trim, "Trim" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    // '\n e.Line
    if( ! refalrts::char_left( '\n', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Trim, "Trim" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    // e.Line
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Trim_R, "Trim_R" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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

static refalrts::FnResult Trim_R(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eLine_b_1;
    static refalrts::Iter eLine_e_1;
    // e.Line ' '
    if( ! refalrts::char_right( ' ', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Trim_R, "Trim_R" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    // e.Line '\t'
    if( ! refalrts::char_right( '\t', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Trim_R, "Trim_R" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    // e.Line '\r'
    if( ! refalrts::char_right( '\r', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Trim_R, "Trim_R" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    // e.Line '\n'
    if( ! refalrts::char_right( '\n', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Trim_R, "Trim_R" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    // e.Line
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter tFunc_1;
    // t.Func
    if( ! refalrts::tvar_left( tFunc_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tFunc_1 );
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
    static refalrts::Iter tFunc_1;
    static refalrts::Iter eFuncs_b_1;
    static refalrts::Iter eFuncs_e_1;
    // t.Func e.Funcs
    if( ! refalrts::tvar_left( tFunc_1, bb_0, be_0 ) )
      break;
    eFuncs_b_1 = bb_0;
    eFuncs_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Seq_Aux, "Seq_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFuncs_b_1, eFuncs_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tFunc_1 );
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
    //
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, Id, "Id" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Seq_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter tFunc_1;
    static refalrts::Iter eFuncs_b_1;
    static refalrts::Iter eFuncs_e_1;
    static refalrts::Iter eArg_b_1;
    static refalrts::Iter eArg_e_1;
    // t.Func ( e.Funcs ) e.Arg
    if( ! refalrts::tvar_left( tFunc_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFuncs_b_1 = bb_1;
    eFuncs_e_1 = be_1;
    eArg_b_1 = bb_0;
    eArg_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, Seq, "Seq" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFuncs_b_1, eFuncs_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eArg_b_1, eArg_e_1 );
    res = refalrts::splice_stvar( res, tFunc_1 );
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

static refalrts::FnResult Id(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    refalrts::start_sentence();
    static refalrts::Iter eArg_b_1;
    static refalrts::Iter eArg_e_1;
    // e.Arg
    eArg_b_1 = bb_0;
    eArg_e_1 = be_0;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eArg_b_1, eArg_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}


//End of file

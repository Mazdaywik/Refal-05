// Automatically generated file. Don't edit!
#include "refalrts.h"


extern enum r05_fnresult r05c_FReadLine(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_FOpen(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_FClose(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_FWriteLine(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Add(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Sub(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Success(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_IntFromStr(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Arg(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Apply(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Map(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Reduce(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Fetch(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_MapReduce(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_DoMapReduce(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_MapReduce_AddScanned(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_UnBracket(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_DelAccumulator(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_LoadFile(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_DoLoadFile(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_SaveFile(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_WriteBracketLine(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Inc(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Dec(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_FastIntFromStr_Guard(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_FastIntFromStr(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ArgList(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_DoArgList(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_SwDoArgList(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Type(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Trim(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Trim_R(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Seq(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Seq_Aux(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Id(struct r05_node *arg_begin, struct r05_node *arg_end);

enum r05_fnresult r05c_Apply(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sFn_1;
    static struct r05_node *eArgument_b_1;
    static struct r05_node *eArgument_e_1;
    // s.Fn e.Argument
    if( ! refalrts::svar_left( sFn_1, bb_0, be_0 ) )
      break;
    eArgument_b_1 = bb_0;
    eArgument_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_call( n1 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n1 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eArgument_b_1, eArgument_e_1 );
    res = refalrts::splice_stvar( res, sFn_1 );
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
    static struct r05_node *eArgument_b_1;
    static struct r05_node *eArgument_e_1;
    static struct r05_node *tClosure_1;
    static struct r05_node *eBounded_b_1;
    static struct r05_node *eBounded_e_1;
    // ( t.Closure e.Bounded ) e.Argument
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eArgument_b_1 = bb_0;
    eArgument_e_1 = be_0;
    if( ! refalrts::tvar_left( tClosure_1, bb_1, be_1 ) )
      break;
    eBounded_b_1 = bb_1;
    eBounded_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Apply, "Apply" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eArgument_b_1, eArgument_e_1 );
    res = refalrts::splice_evar( res, eBounded_b_1, eBounded_e_1 );
    res = refalrts::splice_stvar( res, tClosure_1 );
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

enum r05_fnresult r05c_Map(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tFn_1;
    static struct r05_node *tNext_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tFn_2;
    // t.Fn t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tFn_2, tFn_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Apply, "Apply" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
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
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tFn_1;
    // t.Fn
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) )
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

enum r05_fnresult r05c_Reduce(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tFn_1;
    static struct r05_node *tAcc_1;
    static struct r05_node *tNext_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tFn_2;
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
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tFn_2, tFn_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Reduce, "Reduce" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Apply, "Apply" ) )
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
    res = refalrts::splice_stvar( res, tNext_1 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    res = refalrts::splice_stvar( res, tFn_2 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tFn_1 );
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
    static struct r05_node *tAcc_1;
    static struct r05_node *tFn_1;
    // t.Fn t.Acc
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_stvar( res, tAcc_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Fetch(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tFunction_1;
    static struct r05_node *eArgument_b_1;
    static struct r05_node *eArgument_e_1;
    // e.Argument t.Function
    if( ! refalrts::tvar_right( tFunction_1, bb_0, be_0 ) )
      break;
    eArgument_b_1 = bb_0;
    eArgument_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Apply, "Apply" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eArgument_b_1, eArgument_e_1 );
    res = refalrts::splice_stvar( res, tFunction_1 );
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

enum r05_fnresult r05c_MapReduce(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tFn_1;
    static struct r05_node *tAcc_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    // t.Fn t.Acc e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoMapReduce, "DoMapReduce" ) )
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
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    res = refalrts::splice_stvar( res, tFn_1 );
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

static enum r05_fnresult r05c_DoMapReduce(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tFn_1;
    static struct r05_node *tAcc_1;
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *tNext_1;
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tFn_2;
    // t.Fn t.Acc ( e.Scanned ) t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eScanned_b_1 = bb_1;
    eScanned_e_1 = be_1;
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tFn_2, tFn_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoMapReduce, "DoMapReduce" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_MapReduce_AddScanned, "MapReduce_AddScanned" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_Apply, "Apply" ) )
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
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
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
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *tAcc_1;
    static struct r05_node *tFn_1;
    // t.Fn t.Acc ( e.Scanned )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eScanned_b_1 = bb_1;
    eScanned_e_1 = be_1;
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_MapReduce_AddScanned(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eScanned_b_1;
    static struct r05_node *eScanned_e_1;
    static struct r05_node *tAcc_1;
    static struct r05_node *eStepScanned_b_1;
    static struct r05_node *eStepScanned_e_1;
    // t.Acc e.StepScanned ( e.Scanned )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eScanned_b_1 = bb_1;
    eScanned_e_1 = be_1;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) )
      break;
    eStepScanned_b_1 = bb_0;
    eStepScanned_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eStepScanned_b_1, eStepScanned_e_1 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_UnBracket(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eExpr_b_1;
    static struct r05_node *eExpr_e_1;
    // ( e.Expr )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eExpr_b_1 = bb_1;
    eExpr_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eExpr_b_1, eExpr_e_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_DelAccumulator(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eTail_b_1;
    static struct r05_node *eTail_e_1;
    static struct r05_node *tAcc_1;
    // t.Acc e.Tail
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) )
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_LoadFile(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eFileName_b_1;
    static struct r05_node *eFileName_e_1;
    // e.FileName
    eFileName_b_1 = bb_0;
    eFileName_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoLoadFile, "DoLoadFile" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_FReadLine, "FReadLine" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_FOpen, "FOpen" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
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
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_DoLoadFile(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tFile_1;
    // t.File 0
    if( ! refalrts::number_right( 0UL, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_FClose, "FClose" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tFile_1 );
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
    static struct r05_node *tFile_1;
    static struct r05_node *eLine_b_1;
    static struct r05_node *eLine_e_1;
    // t.File e.Line 0
    if( ! refalrts::number_right( 0UL, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

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
    if( ! refalrts::alloc_name( n3, r05c_FClose, "FClose" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
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
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tFile_1;
    static struct r05_node *eLine_b_1;
    static struct r05_node *eLine_e_1;
    // t.File e.Line
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

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
    if( ! refalrts::alloc_name( n3, r05c_DoLoadFile, "DoLoadFile" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_FReadLine, "FReadLine" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
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
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_SaveFile(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eFileName_b_1;
    static struct r05_node *eFileName_e_1;
    static struct r05_node *eLines_b_1;
    static struct r05_node *eLines_e_1;
    // ( e.FileName ) e.Lines
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFileName_b_1 = bb_1;
    eFileName_e_1 = be_1;
    eLines_b_1 = bb_0;
    eLines_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_FClose, "FClose" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Reduce, "Reduce" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_WriteBracketLine, "WriteBracketLine" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_FOpen, "FOpen" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_char( n7, 'w' ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
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
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_WriteBracketLine(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eLine_b_1;
    static struct r05_node *eLine_e_1;
    static struct r05_node *tFile_1;
    // t.File ( e.Line )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_1;
    eLine_e_1 = be_1;
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_FWriteLine, "FWriteLine" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_stvar( res, tFile_1 );
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

enum r05_fnresult r05c_Inc(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sNum_1;
    // s.Num
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Add, "Add" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_number( n2, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNum_1 );
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

enum r05_fnresult r05c_Dec(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sNum_1;
    // s.Num
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Sub, "Sub" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_number( n2, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNum_1 );
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

static enum r05_fnresult r05c_FastIntFromStr_Guard(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sNumber_1;
    // & Success s.Number
    if( ! refalrts::function_left( r05c_Success, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_stvar( res, sNumber_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_FastIntFromStr(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eDigits_b_1;
    static struct r05_node *eDigits_e_1;
    // e.Digits
    eDigits_b_1 = bb_0;
    eDigits_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_FastIntFromStr_Guard, "FastIntFromStr_Guard" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_IntFromStr, "IntFromStr" ) )
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
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eDigits_b_1, eDigits_e_1 );
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

enum r05_fnresult r05c_ArgList(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
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
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoArgList, "DoArgList" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_number( n2, 0UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
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

static enum r05_fnresult r05c_DoArgList(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sNext_1;
    static struct r05_node *sNext_2;
    // s.Next
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sNext_2, sNext_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_SwDoArgList, "SwDoArgList" ) )
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
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_Arg, "Arg" ) )
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
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_SwDoArgList(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sNext_1;
    // s.Next
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sNext_1;
    static struct r05_node *eArg_b_1;
    static struct r05_node *eArg_e_1;
    // s.Next e.Arg
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) )
      break;
    eArg_b_1 = bb_0;
    eArg_e_1 = be_0;

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
    if( ! refalrts::alloc_name( n3, r05c_DoArgList, "DoArgList" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
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
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Type(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'A e.X
    if( ! refalrts::char_left( 'A', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuA", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'B e.X
    if( ! refalrts::char_left( 'B', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuB", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'C e.X
    if( ! refalrts::char_left( 'C', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuC", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'D e.X
    if( ! refalrts::char_left( 'D', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuD", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'E e.X
    if( ! refalrts::char_left( 'E', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuE", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'F e.X
    if( ! refalrts::char_left( 'F', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuF", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'G e.X
    if( ! refalrts::char_left( 'G', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuG", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'H e.X
    if( ! refalrts::char_left( 'H', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuH", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'I e.X
    if( ! refalrts::char_left( 'I', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuI", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'J e.X
    if( ! refalrts::char_left( 'J', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuJ", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'K e.X
    if( ! refalrts::char_left( 'K', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuK", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'L e.X
    if( ! refalrts::char_left( 'L', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuL", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'M e.X
    if( ! refalrts::char_left( 'M', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuM", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'N e.X
    if( ! refalrts::char_left( 'N', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuN", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'O e.X
    if( ! refalrts::char_left( 'O', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuO", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'P e.X
    if( ! refalrts::char_left( 'P', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuP", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'Q e.X
    if( ! refalrts::char_left( 'Q', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuQ", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'R e.X
    if( ! refalrts::char_left( 'R', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuR", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'S e.X
    if( ! refalrts::char_left( 'S', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuS", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'T e.X
    if( ! refalrts::char_left( 'T', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuT", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'U e.X
    if( ! refalrts::char_left( 'U', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuU", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'V e.X
    if( ! refalrts::char_left( 'V', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuV", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'W e.X
    if( ! refalrts::char_left( 'W', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuW", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'X e.X
    if( ! refalrts::char_left( 'X', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuX", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'Y e.X
    if( ! refalrts::char_left( 'Y', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuY", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'Z e.X
    if( ! refalrts::char_left( 'Z', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LuZ", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'a e.X
    if( ! refalrts::char_left( 'a', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lla", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'b e.X
    if( ! refalrts::char_left( 'b', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llb", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'c e.X
    if( ! refalrts::char_left( 'c', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llc", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'd e.X
    if( ! refalrts::char_left( 'd', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lld", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'e e.X
    if( ! refalrts::char_left( 'e', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lle", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'f e.X
    if( ! refalrts::char_left( 'f', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llf", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'g e.X
    if( ! refalrts::char_left( 'g', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llg", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'h e.X
    if( ! refalrts::char_left( 'h', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llh", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'i e.X
    if( ! refalrts::char_left( 'i', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lli", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'j e.X
    if( ! refalrts::char_left( 'j', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llj", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'k e.X
    if( ! refalrts::char_left( 'k', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llk", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'l e.X
    if( ! refalrts::char_left( 'l', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lll", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'm e.X
    if( ! refalrts::char_left( 'm', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llm", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'n e.X
    if( ! refalrts::char_left( 'n', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lln", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'o e.X
    if( ! refalrts::char_left( 'o', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llo", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'p e.X
    if( ! refalrts::char_left( 'p', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llp", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'q e.X
    if( ! refalrts::char_left( 'q', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llq", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'r e.X
    if( ! refalrts::char_left( 'r', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llr", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 's e.X
    if( ! refalrts::char_left( 's', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lls", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 't e.X
    if( ! refalrts::char_left( 't', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llt", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'u e.X
    if( ! refalrts::char_left( 'u', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llu", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'v e.X
    if( ! refalrts::char_left( 'v', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llv", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'w e.X
    if( ! refalrts::char_left( 'w', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llw", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'x e.X
    if( ! refalrts::char_left( 'x', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llx", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'y e.X
    if( ! refalrts::char_left( 'y', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Lly", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // 'z e.X
    if( ! refalrts::char_left( 'z', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Llz", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // '0 e.X
    if( ! refalrts::char_left( '0', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D00", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // '1 e.X
    if( ! refalrts::char_left( '1', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D01", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // '2 e.X
    if( ! refalrts::char_left( '2', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D02", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // '3 e.X
    if( ! refalrts::char_left( '3', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D03", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // '4 e.X
    if( ! refalrts::char_left( '4', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D04", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // '5 e.X
    if( ! refalrts::char_left( '5', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D05", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // '6 e.X
    if( ! refalrts::char_left( '6', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D06", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // '7 e.X
    if( ! refalrts::char_left( '7', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D07", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // '8 e.X
    if( ! refalrts::char_left( '8', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D08", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    static struct r05_node *eX_b_1;
    static struct r05_node *eX_e_1;
    // '9 e.X
    if( ! refalrts::char_left( '9', bb_0, be_0 ) )
      break;
    eX_b_1 = bb_0;
    eX_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "D09", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
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
    //
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "*0", 2) )
      return R05_NO_MEMORY;
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
    static struct r05_node *eOther_b_1;
    static struct r05_node *eOther_e_1;
    // e.Other
    eOther_b_1 = bb_0;
    eOther_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "??", 2) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eOther_b_1, eOther_e_1 );
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Trim(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eLine_b_1;
    static struct r05_node *eLine_e_1;
    // '  e.Line
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Trim, "Trim" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    static struct r05_node *eLine_b_1;
    static struct r05_node *eLine_e_1;
    // '\t e.Line
    if( ! refalrts::char_left( '\t', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Trim, "Trim" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    static struct r05_node *eLine_b_1;
    static struct r05_node *eLine_e_1;
    // '\r e.Line
    if( ! refalrts::char_left( '\r', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Trim, "Trim" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    static struct r05_node *eLine_b_1;
    static struct r05_node *eLine_e_1;
    // '\n e.Line
    if( ! refalrts::char_left( '\n', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Trim, "Trim" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    static struct r05_node *eLine_b_1;
    static struct r05_node *eLine_e_1;
    // e.Line
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Trim_R, "Trim_R" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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

static enum r05_fnresult r05c_Trim_R(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eLine_b_1;
    static struct r05_node *eLine_e_1;
    // e.Line ' '
    if( ! refalrts::char_right( ' ', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Trim_R, "Trim_R" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    static struct r05_node *eLine_b_1;
    static struct r05_node *eLine_e_1;
    // e.Line '\t'
    if( ! refalrts::char_right( '\t', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Trim_R, "Trim_R" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    static struct r05_node *eLine_b_1;
    static struct r05_node *eLine_e_1;
    // e.Line '\r'
    if( ! refalrts::char_right( '\r', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Trim_R, "Trim_R" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    static struct r05_node *eLine_b_1;
    static struct r05_node *eLine_e_1;
    // e.Line '\n'
    if( ! refalrts::char_right( '\n', bb_0, be_0 ) )
      break;
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Trim_R, "Trim_R" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
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
    static struct r05_node *eLine_b_1;
    static struct r05_node *eLine_e_1;
    // e.Line
    eLine_b_1 = bb_0;
    eLine_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Seq(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tFunc_1;
    // t.Func
    if( ! refalrts::tvar_left( tFunc_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_stvar( res, tFunc_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tFunc_1;
    static struct r05_node *eFuncs_b_1;
    static struct r05_node *eFuncs_e_1;
    // t.Func e.Funcs
    if( ! refalrts::tvar_left( tFunc_1, bb_0, be_0 ) )
      break;
    eFuncs_b_1 = bb_0;
    eFuncs_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Seq_Aux, "Seq_Aux" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFuncs_b_1, eFuncs_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tFunc_1 );
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
    if( ! refalrts::alloc_name( n0, r05c_Id, "Id" ) )
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

static enum r05_fnresult r05c_Seq_Aux(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tFunc_1;
    static struct r05_node *eFuncs_b_1;
    static struct r05_node *eFuncs_e_1;
    static struct r05_node *eArg_b_1;
    static struct r05_node *eArg_e_1;
    // t.Func ( e.Funcs ) e.Arg
    if( ! refalrts::tvar_left( tFunc_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFuncs_b_1 = bb_1;
    eFuncs_e_1 = be_1;
    eArg_b_1 = bb_0;
    eArg_e_1 = be_0;

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
    if( ! refalrts::alloc_name( n3, r05c_Apply, "Apply" ) )
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
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Id(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eArg_b_1;
    static struct r05_node *eArg_e_1;
    // e.Arg
    eArg_b_1 = bb_0;
    eArg_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eArg_b_1, eArg_e_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}


//End of file

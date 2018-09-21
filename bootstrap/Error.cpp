// Automatically generated file. Don't edit!
#include "refalrts.h"


extern enum r05_fnresult r05c_StrFromInt(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_WriteLine(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkError(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkUnexpected(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_StrFromToken(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Map(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ErrorList(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_Create(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_AddError(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_AddErrorAt(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_StrFromSrcPos(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_AddUnexpected(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_NoErrors(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_HasErrors(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_Destroy(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_WriteBracketedLine(struct r05_node *arg_begin, struct r05_node *arg_end);

static enum r05_fnresult r05c_ErrorList(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_EL_Create(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    // e.FileName
    eFileName_b_1 = bb_0;
    eFileName_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ErrorList, "ErrorList" ) )
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
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

enum r05_fnresult r05c_EL_AddError(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eErrors_b_1;
    struct r05_node *eErrors_e_1;
    struct r05_node *eMessage_b_1;
    struct r05_node *eMessage_e_1;
    // ( & ErrorList ( e.FileName ) e.Errors ) e.Message
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_ErrorList, &bb_1, &be_1))
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if (! r05_brackets_left(&bb_2, &be_2, &bb_1, &be_1))
      break;
    eFileName_b_1 = bb_2;
    eFileName_e_1 = be_2;
    eErrors_b_1 = bb_1;
    eErrors_e_1 = be_1;
    eMessage_b_1 = bb_0;
    eMessage_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ErrorList, "ErrorList" ) )
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
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "  ERROR: ", 9) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eMessage_b_1, eMessage_e_1 );
    res = refalrts::splice_evar( res, n5, n6 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eErrors_b_1, eErrors_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

enum r05_fnresult r05c_EL_AddErrorAt(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eErrors_b_1;
    struct r05_node *eErrors_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eMessage_b_1;
    struct r05_node *eMessage_e_1;
    struct r05_node *eFileName_b_2;
    struct r05_node *eFileName_e_2;
    // ( & ErrorList ( e.FileName ) e.Errors ) t.SrcPos e.Message
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_ErrorList, &bb_1, &be_1))
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if (! r05_brackets_left(&bb_2, &be_2, &bb_1, &be_1))
      break;
    eFileName_b_1 = bb_2;
    eFileName_e_1 = be_2;
    eErrors_b_1 = bb_1;
    eErrors_e_1 = be_1;
    if (! r05_tvar_left(&tSrcPos_1, &bb_0, &be_0))
      break;
    eMessage_b_1 = bb_0;
    eMessage_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ErrorList, "ErrorList" ) )
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
    if( ! refalrts::alloc_char( n5, ':' ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_StrFromSrcPos, "StrFromSrcPos" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_chars( n9, n10, ":ERROR: ", 8) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n4, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eMessage_b_1, eMessage_e_1 );
    res = refalrts::splice_evar( res, n9, n10 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eErrors_b_1, eErrors_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

static enum r05_fnresult r05c_StrFromSrcPos(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sLine_1;
    struct r05_node *sCol_1;
    // ( s.Line s.Col )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if (! r05_svar_left(&sLine_1, &bb_1, &be_1))
      break;
    if (! r05_svar_left(&sCol_1, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_StrFromInt, "StrFromInt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_char( n3, ':' ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_StrFromInt, "StrFromInt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sLine_1 );
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

enum r05_fnresult r05c_EL_AddUnexpected(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *tErrorList_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eMessage_b_1;
    struct r05_node *eMessage_e_1;
    // t.ErrorList ( & TkError t.SrcPos e.Message ) e.Expected
    if (! r05_tvar_left(&tErrorList_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_TkError, &bb_1, &be_1))
      break;
    // Unused closed variable e.Expected
    if (! r05_tvar_left(&tSrcPos_1, &bb_1, &be_1))
      break;
    eMessage_b_1 = bb_1;
    eMessage_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_EL_AddErrorAt, "EL_AddErrorAt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eMessage_b_1, eMessage_e_1 );
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
    struct r05_node *tErrorList_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eUnexpected_b_1;
    struct r05_node *eUnexpected_e_1;
    // t.ErrorList ( & TkUnexpected t.SrcPos e.Unexpected ) e.Expected
    if (! r05_tvar_left(&tErrorList_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_TkUnexpected, &bb_1, &be_1))
      break;
    // Unused closed variable e.Expected
    if (! r05_tvar_left(&tSrcPos_1, &bb_1, &be_1))
      break;
    eUnexpected_b_1 = bb_1;
    eUnexpected_e_1 = be_1;

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
    if( ! refalrts::alloc_chars( n2, n3, "Unknown characters \"", 20) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_char( n4, '\"' ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eUnexpected_b_1, eUnexpected_e_1 );
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
    struct r05_node *tErrorList_1;
    struct r05_node *eExpected_b_1;
    struct r05_node *eExpected_e_1;
    struct r05_node *sUnexpected_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eInfo_b_1;
    struct r05_node *eInfo_e_1;
    // t.ErrorList ( s.Unexpected t.SrcPos e.Info ) e.Expected
    if (! r05_tvar_left(&tErrorList_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eExpected_b_1 = bb_0;
    eExpected_e_1 = be_0;
    if (! r05_svar_left(&sUnexpected_1, &bb_1, &be_1))
      break;
    if (! r05_tvar_left(&tSrcPos_1, &bb_1, &be_1))
      break;
    eInfo_b_1 = bb_1;
    eInfo_e_1 = be_1;

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
    if( ! refalrts::alloc_chars( n2, n3, "Unexpected ", 11) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_StrFromToken, "StrFromToken" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_chars( n7, n8, ", expected ", 11) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eExpected_b_1, eExpected_e_1 );
    res = refalrts::splice_evar( res, n7, n8 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eInfo_b_1, eInfo_e_1 );
    res = refalrts::splice_stvar( res, sUnexpected_1 );
    res = refalrts::splice_elem( res, n5 );
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

enum r05_fnresult r05c_EL_NoErrors(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_EL_HasErrors(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_EL_Destroy(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // ( & ErrorList ( e.FileName ) )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_ErrorList, &bb_1, &be_1))
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if (! r05_brackets_left(&bb_2, &be_2, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    // Unused closed variable e.FileName

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_EL_NoErrors, "EL_NoErrors" ) )
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
    struct r05_node *eErrors_b_1;
    struct r05_node *eErrors_e_1;
    // ( & ErrorList ( e.FileName ) e.Errors )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_ErrorList, &bb_1, &be_1))
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if (! r05_brackets_left(&bb_2, &be_2, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    // Unused closed variable e.FileName
    eErrors_b_1 = bb_1;
    eErrors_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_WriteBracketedLine, "WriteBracketedLine" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_EL_HasErrors, "EL_HasErrors" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eErrors_b_1, eErrors_e_1 );
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

static enum r05_fnresult r05c_WriteBracketedLine(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    // ( e.Line )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eLine_b_1 = bb_1;
    eLine_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_WriteLine, "WriteLine" ) )
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


//End of file

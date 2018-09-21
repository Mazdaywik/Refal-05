// Automatically generated file. Don't edit!
#include "refalrts.h"


extern enum r05_fnresult r05c_Compare(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Ord(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Div(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Mod(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_OctDigit(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EscapeChar(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_EscapeChar_Aux(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_EscapeChar_SwCompare(struct r05_node *arg_begin, struct r05_node *arg_end);

static enum r05_fnresult r05c_OctDigit(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 0
    if( ! refalrts::number_left( 0UL, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '0' ) )
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
    // 1
    if( ! refalrts::number_left( 1UL, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '1' ) )
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
    // 2
    if( ! refalrts::number_left( 2UL, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '2' ) )
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
    // 3
    if( ! refalrts::number_left( 3UL, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '3' ) )
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
    // 4
    if( ! refalrts::number_left( 4UL, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '4' ) )
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
    // 5
    if( ! refalrts::number_left( 5UL, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '5' ) )
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
    // 6
    if( ! refalrts::number_left( 6UL, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '6' ) )
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
    // 7
    if( ! refalrts::number_left( 7UL, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '7' ) )
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

enum r05_fnresult r05c_EscapeChar(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '\n'
    if( ! refalrts::char_left( '\n', bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\\n", 2) )
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
    // '\t'
    if( ! refalrts::char_left( '\t', bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\\t", 2) )
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
    // '\r'
    if( ! refalrts::char_left( '\r', bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\\r", 2) )
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
    // '\''
    if( ! refalrts::char_left( '\'', bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\\\'", 2) )
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
    // '\"'
    if( ! refalrts::char_left( '\"', bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\\\"", 2) )
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
    // '\\'
    if( ! refalrts::char_left( '\\', bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\\\\", 2) )
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
    static struct r05_node *sOther_1;
    static struct r05_node *sOther_2;
    // s.Other
    if( ! refalrts::svar_left( sOther_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sOther_2, sOther_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_EscapeChar_Aux, "EscapeChar_Aux" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Ord, "Ord" ) )
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
    res = refalrts::splice_stvar( res, sOther_2 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sOther_1 );
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

static enum r05_fnresult r05c_EscapeChar_Aux(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sOther_1;
    static struct r05_node *sCode_1;
    static struct r05_node *sCode_2;
    static struct r05_node *sCode_3;
    // s.Other s.Code
    if( ! refalrts::svar_left( sOther_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCode_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sCode_2, sCode_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCode_3, sCode_2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_EscapeChar_SwCompare, "EscapeChar_SwCompare" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Compare, "Compare" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_number( n4, 31UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_Compare, "Compare" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_number( n8, 128UL ) )
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
    res = refalrts::splice_stvar( res, sCode_3 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sCode_2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sCode_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sOther_1 );
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

static enum r05_fnresult r05c_EscapeChar_SwCompare(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sOther_1;
    static struct r05_node *sCode_1;
    // s.Other '-- s.Code
    if( ! refalrts::svar_left( sOther_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( '-', bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( '-', bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCode_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_stvar( res, sOther_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *sCode_1;
    static struct r05_node *sOther_1;
    static struct r05_node *sCompare1_1;
    static struct r05_node *sCompare2_1;
    static struct r05_node *sCode_2;
    static struct r05_node *sCode_3;
    // s.Other s.Compare1 s.Compare2 s.Code
    if( ! refalrts::svar_left( sOther_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCompare1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCompare2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCode_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sCode_2, sCode_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCode_3, sCode_2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_OctDigit, "OctDigit" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_Div, "Div" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_number( n5, 64UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_OctDigit, "OctDigit" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_name( n11, r05c_Mod, "Mod" ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_name( n13, r05c_Div, "Div" ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_number( n14, 8UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_number( n16, 8UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return R05_NO_MEMORY;
    struct r05_node *n19 = 0;
    if( ! refalrts::alloc_open_call( n19 ) )
      return R05_NO_MEMORY;
    struct r05_node *n20 = 0;
    if( ! refalrts::alloc_name( n20, r05c_OctDigit, "OctDigit" ) )
      return R05_NO_MEMORY;
    struct r05_node *n21 = 0;
    if( ! refalrts::alloc_open_call( n21 ) )
      return R05_NO_MEMORY;
    struct r05_node *n22 = 0;
    if( ! refalrts::alloc_name( n22, r05c_Mod, "Mod" ) )
      return R05_NO_MEMORY;
    struct r05_node *n23 = 0;
    if( ! refalrts::alloc_number( n23, 8UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return R05_NO_MEMORY;
    struct r05_node *n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n25 );
    refalrts::push_stack( n19 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::push_stack( n24 );
    refalrts::push_stack( n21 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, sCode_3 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sCode_2 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sCode_1 );
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


//End of file

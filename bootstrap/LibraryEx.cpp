/* Automatically generated file. Don't edit! */
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
  r05_this_is_generated_function();
  do {
    struct r05_node *sFn_1;
    struct r05_node *eArgument_b_1;
    struct r05_node *eArgument_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* s.Fn e.Argument */
    if (! r05_svar_left(&sFn_1, &bb[0], &be[0]))
      break;
    eArgument_b_1 = bb[0];
    eArgument_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_svar(sFn_1);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eArgument_b_1, eArgument_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eArgument_b_1;
    struct r05_node *eArgument_e_1;
    struct r05_node *tClosure_1;
    struct r05_node *eBounded_b_1;
    struct r05_node *eBounded_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( t.Closure e.Bounded  ) e.Argument */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eArgument_b_1 = bb[0];
    eArgument_e_1 = be[0];
    if (! r05_tvar_left(&tClosure_1, &bb[1], &be[1]))
      break;
    eBounded_b_1 = bb[1];
    eBounded_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Apply, "Apply");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tClosure_1);
    r05_splice_evar(n[1], eBounded_b_1, eBounded_e_1);
    r05_splice_evar(n[1], eArgument_b_1, eArgument_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Map(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tFn_1;
    struct r05_node *tNext_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[6] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Fn t.Next e.Tail */
    if (! r05_tvar_left(&tFn_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tNext_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Apply, "Apply");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_Map, "Map");
    r05_alloc_tvar(tFn_1);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_close_call(n[5]);
    r05_push_stack(n[5]);
    r05_push_stack(n[3]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tFn_1);
    r05_splice_tvar(n[1], tNext_1);
    r05_splice_evar(n[4], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tFn_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Fn */
    if (! r05_tvar_left(&tFn_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Reduce(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tFn_1;
    struct r05_node *tAcc_1;
    struct r05_node *tNext_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[7] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Fn t.Acc t.Next e.Tail */
    if (! r05_tvar_left(&tFn_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tAcc_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tNext_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Reduce, "Reduce");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_Apply, "Apply");
    r05_alloc_tvar(tFn_1);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_call(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_push_stack(n[6]);
    r05_push_stack(n[0]);
    r05_push_stack(n[4]);
    r05_push_stack(n[2]);
    r05_splice_tvar(n[1], tFn_1);
    r05_splice_tvar(n[3], tAcc_1);
    r05_splice_tvar(n[3], tNext_1);
    r05_splice_evar(n[5], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tFn_1;
    struct r05_node *tAcc_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Fn t.Acc */
    if (! r05_tvar_left(&tFn_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tAcc_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_splice_tvar(n[0], tAcc_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Fetch(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tFunction_1;
    struct r05_node *eArgument_b_1;
    struct r05_node *eArgument_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Argument t.Function */
    if (! r05_tvar_right(&tFunction_1, &bb[0], &be[0]))
      break;
    eArgument_b_1 = bb[0];
    eArgument_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Apply, "Apply");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tFunction_1);
    r05_splice_evar(n[1], eArgument_b_1, eArgument_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_MapReduce(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tFn_1;
    struct r05_node *tAcc_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[6] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Fn t.Acc e.Tail */
    if (! r05_tvar_left(&tFn_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tAcc_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_DoMapReduce, "DoMapReduce");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_close_call(n[5]);
    r05_push_stack(n[5]);
    r05_push_stack(n[0]);
    r05_link_brackets(n[2], n[3]);
    r05_splice_tvar(n[1], tFn_1);
    r05_splice_tvar(n[1], tAcc_1);
    r05_splice_evar(n[4], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_DoMapReduce(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tFn_1;
    struct r05_node *tAcc_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *tNext_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[12] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Fn t.Acc ( e.Scanned  ) t.Next e.Tail */
    if (! r05_tvar_left(&tFn_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tAcc_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eScanned_b_1 = bb[1];
    eScanned_e_1 = be[1];
    if (! r05_tvar_left(&tNext_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_DoMapReduce, "DoMapReduce");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_MapReduce_AddScanned, "MapReduce_AddScanned");
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_Apply, "Apply");
    r05_alloc_tvar(tFn_1);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_close_call(n[5]);
    r05_alloc_open_bracket(n[6]);
    r05_alloc_insert_pos(n[7]);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_close_call(n[9]);
    r05_alloc_insert_pos(n[10]);
    r05_alloc_close_call(n[11]);
    r05_push_stack(n[11]);
    r05_push_stack(n[0]);
    r05_push_stack(n[9]);
    r05_push_stack(n[2]);
    r05_link_brackets(n[6], n[8]);
    r05_push_stack(n[5]);
    r05_push_stack(n[3]);
    r05_splice_tvar(n[1], tFn_1);
    r05_splice_tvar(n[4], tAcc_1);
    r05_splice_tvar(n[4], tNext_1);
    r05_splice_evar(n[7], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[10], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *tFn_1;
    struct r05_node *tAcc_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Fn t.Acc ( e.Scanned  ) */
    if (! r05_brackets_right(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eScanned_b_1 = bb[1];
    eScanned_e_1 = be[1];
    if (! r05_tvar_left(&tFn_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tAcc_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_splice_tvar(n[0], tAcc_1);
    r05_splice_evar(n[0], eScanned_b_1, eScanned_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_MapReduce_AddScanned(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *tAcc_1;
    struct r05_node *eStepScanned_b_1;
    struct r05_node *eStepScanned_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[4] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Acc e.StepScanned ( e.Scanned  ) */
    if (! r05_brackets_right(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eScanned_b_1 = bb[1];
    eScanned_e_1 = be[1];
    if (! r05_tvar_left(&tAcc_1, &bb[0], &be[0]))
      break;
    eStepScanned_b_1 = bb[0];
    eStepScanned_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_tvar(n[0], tAcc_1);
    r05_splice_evar(n[2], eScanned_b_1, eScanned_e_1);
    r05_splice_evar(n[2], eStepScanned_b_1, eStepScanned_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_UnBracket(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eExpr_b_1;
    struct r05_node *eExpr_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.Expr  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eExpr_b_1 = bb[1];
    eExpr_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eExpr_b_1, eExpr_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_DelAccumulator(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tAcc_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Acc e.Tail */
    if (! r05_tvar_left(&tAcc_1, &bb[0], &be[0]))
      break;
    eTail_b_1 = bb[0];
    eTail_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eTail_b_1, eTail_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_LoadFile(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[7] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.FileName */
    eFileName_b_1 = bb[0];
    eFileName_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_DoLoadFile, "DoLoadFile");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_FReadLine, "FReadLine");
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_FOpen, "FOpen");
    r05_alloc_char('r');
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_call(n[4]);
    r05_alloc_close_call(n[5]);
    r05_alloc_close_call(n[6]);
    r05_push_stack(n[6]);
    r05_push_stack(n[0]);
    r05_push_stack(n[5]);
    r05_push_stack(n[1]);
    r05_push_stack(n[4]);
    r05_push_stack(n[2]);
    r05_splice_evar(n[3], eFileName_b_1, eFileName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_DoLoadFile(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tFile_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.File 0 */
    if (! r05_number_right(0UL, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tFile_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_FClose, "FClose");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tFile_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tFile_1;
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[6] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.File e.Line 0 */
    if (! r05_number_right(0UL, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tFile_1, &bb[0], &be[0]))
      break;
    eLine_b_1 = bb[0];
    eLine_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_FClose, "FClose");
    r05_alloc_insert_pos(n[4]);
    r05_alloc_close_call(n[5]);
    r05_push_stack(n[5]);
    r05_push_stack(n[3]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], eLine_b_1, eLine_e_1);
    r05_splice_tvar(n[4], tFile_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tFile_1;
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.File e.Line */
    if (! r05_tvar_left(&tFile_1, &bb[0], &be[0]))
      break;
    eLine_b_1 = bb[0];
    eLine_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_DoLoadFile, "DoLoadFile");
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_FReadLine, "FReadLine");
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_alloc_close_call(n[7]);
    r05_push_stack(n[7]);
    r05_push_stack(n[3]);
    r05_push_stack(n[6]);
    r05_push_stack(n[4]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], eLine_b_1, eLine_e_1);
    r05_splice_tvar(n[5], tFile_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_SaveFile(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eLines_b_1;
    struct r05_node *eLines_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.FileName  ) e.Lines */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eFileName_b_1 = bb[1];
    eFileName_e_1 = be[1];
    eLines_b_1 = bb[0];
    eLines_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_FClose, "FClose");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_Reduce, "Reduce");
    r05_alloc_function(r05c_WriteBracketLine, "WriteBracketLine");
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_FOpen, "FOpen");
    r05_alloc_char('w');
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_call(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_alloc_close_call(n[7]);
    r05_push_stack(n[7]);
    r05_push_stack(n[0]);
    r05_push_stack(n[6]);
    r05_push_stack(n[1]);
    r05_push_stack(n[4]);
    r05_push_stack(n[2]);
    r05_splice_evar(n[3], eFileName_b_1, eFileName_e_1);
    r05_splice_evar(n[5], eLines_b_1, eLines_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_WriteBracketLine(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *tFile_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.File ( e.Line  ) */
    if (! r05_brackets_right(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eLine_b_1 = bb[1];
    eLine_e_1 = be[1];
    if (! r05_tvar_left(&tFile_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_FWriteLine, "FWriteLine");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tFile_1);
    r05_splice_evar(n[1], eLine_b_1, eLine_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Inc(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *sNum_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[2] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* s.Num */
    if (! r05_svar_left(&sNum_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Add, "Add");
    r05_alloc_svar(sNum_1);
    r05_alloc_number(1UL);
    r05_alloc_close_call(n[1]);
    r05_push_stack(n[1]);
    r05_push_stack(n[0]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Dec(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *sNum_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[2] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* s.Num */
    if (! r05_svar_left(&sNum_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Sub, "Sub");
    r05_alloc_svar(sNum_1);
    r05_alloc_number(1UL);
    r05_alloc_close_call(n[1]);
    r05_push_stack(n[1]);
    r05_push_stack(n[0]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_FastIntFromStr_Guard(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *sNumber_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & Success s.Number */
    if (! r05_function_left(r05c_Success, &bb[0], &be[0]))
      break;
    if (! r05_svar_left(&sNumber_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_svar(sNumber_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_FastIntFromStr(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eDigits_b_1;
    struct r05_node *eDigits_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Digits */
    eDigits_b_1 = bb[0];
    eDigits_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_FastIntFromStr_Guard, "FastIntFromStr_Guard");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_IntFromStr, "IntFromStr");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_call(n[3]);
    r05_alloc_close_call(n[4]);
    r05_push_stack(n[4]);
    r05_push_stack(n[0]);
    r05_push_stack(n[3]);
    r05_push_stack(n[1]);
    r05_splice_evar(n[2], eDigits_b_1, eDigits_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ArgList(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[2] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* */
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_DoArgList, "DoArgList");
    r05_alloc_number(0UL);
    r05_alloc_close_call(n[1]);
    r05_push_stack(n[1]);
    r05_push_stack(n[0]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_DoArgList(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *sNext_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[6] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* s.Next */
    if (! r05_svar_left(&sNext_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_SwDoArgList, "SwDoArgList");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_Inc, "Inc");
    r05_alloc_svar(sNext_1);
    r05_alloc_close_call(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_Arg, "Arg");
    r05_alloc_svar(sNext_1);
    r05_alloc_close_call(n[4]);
    r05_alloc_close_call(n[5]);
    r05_push_stack(n[5]);
    r05_push_stack(n[0]);
    r05_push_stack(n[4]);
    r05_push_stack(n[3]);
    r05_push_stack(n[2]);
    r05_push_stack(n[1]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_SwDoArgList(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *sNext_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* s.Next */
    if (! r05_svar_left(&sNext_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *sNext_1;
    struct r05_node *eArg_b_1;
    struct r05_node *eArg_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* s.Next e.Arg */
    if (! r05_svar_left(&sNext_1, &bb[0], &be[0]))
      break;
    eArg_b_1 = bb[0];
    eArg_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_DoArgList, "DoArgList");
    r05_alloc_svar(sNext_1);
    r05_alloc_close_call(n[4]);
    r05_push_stack(n[4]);
    r05_push_stack(n[3]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], eArg_b_1, eArg_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Type(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'A' e.X */
    if (! r05_char_left('A', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuA", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'B' e.X */
    if (! r05_char_left('B', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuB", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'C' e.X */
    if (! r05_char_left('C', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuC", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'D' e.X */
    if (! r05_char_left('D', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuD", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'E' e.X */
    if (! r05_char_left('E', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuE", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'F' e.X */
    if (! r05_char_left('F', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuF", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'G' e.X */
    if (! r05_char_left('G', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuG", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'H' e.X */
    if (! r05_char_left('H', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuH", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'I' e.X */
    if (! r05_char_left('I', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuI", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'J' e.X */
    if (! r05_char_left('J', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuJ", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'K' e.X */
    if (! r05_char_left('K', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuK", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'L' e.X */
    if (! r05_char_left('L', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuL", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'M' e.X */
    if (! r05_char_left('M', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuM", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'N' e.X */
    if (! r05_char_left('N', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuN", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'O' e.X */
    if (! r05_char_left('O', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuO", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'P' e.X */
    if (! r05_char_left('P', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuP", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'Q' e.X */
    if (! r05_char_left('Q', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuQ", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'R' e.X */
    if (! r05_char_left('R', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuR", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'S' e.X */
    if (! r05_char_left('S', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuS", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'T' e.X */
    if (! r05_char_left('T', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuT", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'U' e.X */
    if (! r05_char_left('U', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuU", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'V' e.X */
    if (! r05_char_left('V', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuV", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'W' e.X */
    if (! r05_char_left('W', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuW", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'X' e.X */
    if (! r05_char_left('X', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuX", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'Y' e.X */
    if (! r05_char_left('Y', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuY", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'Z' e.X */
    if (! r05_char_left('Z', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("LuZ", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'a' e.X */
    if (! r05_char_left('a', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Lla", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'b' e.X */
    if (! r05_char_left('b', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llb", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'c' e.X */
    if (! r05_char_left('c', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llc", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'd' e.X */
    if (! r05_char_left('d', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Lld", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'e' e.X */
    if (! r05_char_left('e', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Lle", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'f' e.X */
    if (! r05_char_left('f', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llf", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'g' e.X */
    if (! r05_char_left('g', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llg", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'h' e.X */
    if (! r05_char_left('h', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llh", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'i' e.X */
    if (! r05_char_left('i', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Lli", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'j' e.X */
    if (! r05_char_left('j', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llj", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'k' e.X */
    if (! r05_char_left('k', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llk", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'l' e.X */
    if (! r05_char_left('l', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Lll", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'm' e.X */
    if (! r05_char_left('m', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llm", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'n' e.X */
    if (! r05_char_left('n', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Lln", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'o' e.X */
    if (! r05_char_left('o', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llo", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'p' e.X */
    if (! r05_char_left('p', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llp", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'q' e.X */
    if (! r05_char_left('q', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llq", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'r' e.X */
    if (! r05_char_left('r', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llr", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 's' e.X */
    if (! r05_char_left('s', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Lls", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 't' e.X */
    if (! r05_char_left('t', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llt", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'u' e.X */
    if (! r05_char_left('u', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llu", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'v' e.X */
    if (! r05_char_left('v', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llv", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'w' e.X */
    if (! r05_char_left('w', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llw", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'x' e.X */
    if (! r05_char_left('x', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llx", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'y' e.X */
    if (! r05_char_left('y', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Lly", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'z' e.X */
    if (! r05_char_left('z', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("Llz", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* '0' e.X */
    if (! r05_char_left('0', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("D00", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* '1' e.X */
    if (! r05_char_left('1', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("D01", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* '2' e.X */
    if (! r05_char_left('2', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("D02", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* '3' e.X */
    if (! r05_char_left('3', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("D03", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* '4' e.X */
    if (! r05_char_left('4', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("D04", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* '5' e.X */
    if (! r05_char_left('5', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("D05", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* '6' e.X */
    if (! r05_char_left('6', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("D06", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* '7' e.X */
    if (! r05_char_left('7', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("D07", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* '8' e.X */
    if (! r05_char_left('8', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("D08", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eX_b_1;
    struct r05_node *eX_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* '9' e.X */
    if (! r05_char_left('9', &bb[0], &be[0]))
      break;
    eX_b_1 = bb[0];
    eX_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("D09", 3);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eX_b_1, eX_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* */
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_chars("*0", 2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eOther_b_1;
    struct r05_node *eOther_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Other */
    eOther_b_1 = bb[0];
    eOther_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_chars("??", 2);
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eOther_b_1, eOther_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Trim(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ' ' e.Line */
    if (! r05_char_left(' ', &bb[0], &be[0]))
      break;
    eLine_b_1 = bb[0];
    eLine_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Trim, "Trim");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eLine_b_1, eLine_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* '\t' e.Line */
    if (! r05_char_left('\t', &bb[0], &be[0]))
      break;
    eLine_b_1 = bb[0];
    eLine_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Trim, "Trim");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eLine_b_1, eLine_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* '\r' e.Line */
    if (! r05_char_left('\r', &bb[0], &be[0]))
      break;
    eLine_b_1 = bb[0];
    eLine_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Trim, "Trim");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eLine_b_1, eLine_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* '\n' e.Line */
    if (! r05_char_left('\n', &bb[0], &be[0]))
      break;
    eLine_b_1 = bb[0];
    eLine_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Trim, "Trim");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eLine_b_1, eLine_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Line */
    eLine_b_1 = bb[0];
    eLine_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Trim_R, "Trim_R");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eLine_b_1, eLine_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Trim_R(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Line ' ' */
    if (! r05_char_right(' ', &bb[0], &be[0]))
      break;
    eLine_b_1 = bb[0];
    eLine_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Trim_R, "Trim_R");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eLine_b_1, eLine_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Line '\t' */
    if (! r05_char_right('\t', &bb[0], &be[0]))
      break;
    eLine_b_1 = bb[0];
    eLine_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Trim_R, "Trim_R");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eLine_b_1, eLine_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Line '\r' */
    if (! r05_char_right('\r', &bb[0], &be[0]))
      break;
    eLine_b_1 = bb[0];
    eLine_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Trim_R, "Trim_R");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eLine_b_1, eLine_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Line '\n' */
    if (! r05_char_right('\n', &bb[0], &be[0]))
      break;
    eLine_b_1 = bb[0];
    eLine_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Trim_R, "Trim_R");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eLine_b_1, eLine_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Line */
    eLine_b_1 = bb[0];
    eLine_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eLine_b_1, eLine_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Seq(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tFunc_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Func */
    if (! r05_tvar_left(&tFunc_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_splice_tvar(n[0], tFunc_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tFunc_1;
    struct r05_node *eFuncs_b_1;
    struct r05_node *eFuncs_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[6] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Func e.Funcs */
    if (! r05_tvar_left(&tFunc_1, &bb[0], &be[0]))
      break;
    eFuncs_b_1 = bb[0];
    eFuncs_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_Seq_Aux, "Seq_Aux");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_close_bracket(n[5]);
    r05_link_brackets(n[0], n[5]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_tvar(n[1], tFunc_1);
    r05_splice_evar(n[3], eFuncs_b_1, eFuncs_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* */
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_function(r05c_Id, "Id");
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Seq_Aux(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tFunc_1;
    struct r05_node *eFuncs_b_1;
    struct r05_node *eFuncs_e_1;
    struct r05_node *eArg_b_1;
    struct r05_node *eArg_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Func ( e.Funcs  ) e.Arg */
    if (! r05_tvar_left(&tFunc_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eFuncs_b_1 = bb[1];
    eFuncs_e_1 = be[1];
    eArg_b_1 = bb[0];
    eArg_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Fetch, "Fetch");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_Apply, "Apply");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_call(n[3]);
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_Seq, "Seq");
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_alloc_close_call(n[7]);
    r05_push_stack(n[7]);
    r05_push_stack(n[0]);
    r05_push_stack(n[6]);
    r05_push_stack(n[4]);
    r05_push_stack(n[3]);
    r05_push_stack(n[1]);
    r05_splice_tvar(n[2], tFunc_1);
    r05_splice_evar(n[2], eArg_b_1, eArg_e_1);
    r05_splice_evar(n[5], eFuncs_b_1, eFuncs_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Id(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eArg_b_1;
    struct r05_node *eArg_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Arg */
    eArg_b_1 = bb[0];
    eArg_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eArg_b_1, eArg_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}


/* End of file */

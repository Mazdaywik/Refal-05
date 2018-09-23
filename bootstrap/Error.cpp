/* Automatically generated file. Don't edit! */
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
  r05_this_is_generated_function();
  do {
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.FileName */
    eFileName_b_1 = bb[0];
    eFileName_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_ErrorList, "ErrorList");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_link_brackets(n[0], n[4]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_evar(n[2], eFileName_b_1, eFileName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_EL_AddError(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eErrors_b_1;
    struct r05_node *eErrors_e_1;
    struct r05_node *eMessage_b_1;
    struct r05_node *eMessage_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[9] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & ErrorList ( e.FileName  ) e.Errors  ) e.Message */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_ErrorList, &bb[1], &be[1]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    eFileName_b_1 = bb[2];
    eFileName_e_1 = be[2];
    eErrors_b_1 = bb[1];
    eErrors_e_1 = be[1];
    eMessage_b_1 = bb[0];
    eMessage_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_ErrorList, "ErrorList");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_chars("  ERROR: ", 9);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_alloc_close_bracket(n[8]);
    r05_link_brackets(n[0], n[8]);
    r05_link_brackets(n[5], n[7]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_evar(n[2], eFileName_b_1, eFileName_e_1);
    r05_splice_evar(n[4], eErrors_b_1, eErrors_e_1);
    r05_splice_evar(n[6], eMessage_b_1, eMessage_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_EL_AddErrorAt(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eErrors_b_1;
    struct r05_node *eErrors_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eMessage_b_1;
    struct r05_node *eMessage_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[12] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & ErrorList ( e.FileName  ) e.Errors  ) t.SrcPos e.Message */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_ErrorList, &bb[1], &be[1]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    eFileName_b_1 = bb[2];
    eFileName_e_1 = be[2];
    eErrors_b_1 = bb[1];
    eErrors_e_1 = be[1];
    if (! r05_tvar_left(&tSrcPos_1, &bb[0], &be[0]))
      break;
    eMessage_b_1 = bb[0];
    eMessage_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_ErrorList, "ErrorList");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_evar(eFileName_b_1, eFileName_e_1);
    r05_alloc_char(':');
    r05_alloc_open_call(n[6]);
    r05_alloc_function(r05c_StrFromSrcPos, "StrFromSrcPos");
    r05_alloc_insert_pos(n[7]);
    r05_alloc_close_call(n[8]);
    r05_alloc_chars(":ERROR: ", 8);
    r05_alloc_insert_pos(n[9]);
    r05_alloc_close_bracket(n[10]);
    r05_alloc_close_bracket(n[11]);
    r05_link_brackets(n[0], n[11]);
    r05_link_brackets(n[5], n[10]);
    r05_push_stack(n[8]);
    r05_push_stack(n[6]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_evar(n[2], eFileName_b_1, eFileName_e_1);
    r05_splice_evar(n[4], eErrors_b_1, eErrors_e_1);
    r05_splice_tvar(n[7], tSrcPos_1);
    r05_splice_evar(n[9], eMessage_b_1, eMessage_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_StrFromSrcPos(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *sLine_1;
    struct r05_node *sCol_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[4] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( s.Line s.Col  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    if (! r05_svar_left(&sLine_1, &bb[1], &be[1]))
      break;
    if (! r05_svar_left(&sCol_1, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_StrFromInt, "StrFromInt");
    r05_alloc_svar(sLine_1);
    r05_alloc_close_call(n[1]);
    r05_alloc_char(':');
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_StrFromInt, "StrFromInt");
    r05_alloc_svar(sCol_1);
    r05_alloc_close_call(n[3]);
    r05_push_stack(n[3]);
    r05_push_stack(n[2]);
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

enum r05_fnresult r05c_EL_AddUnexpected(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eMessage_b_1;
    struct r05_node *eMessage_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList ( & TkError t.SrcPos e.Message  ) e.Expected */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkError, &bb[1], &be[1]))
      break;
    /* Unused closed variable e.Expected*/
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    eMessage_b_1 = bb[1];
    eMessage_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSrcPos_1);
    r05_splice_evar(n[1], eMessage_b_1, eMessage_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eUnexpected_b_1;
    struct r05_node *eUnexpected_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[4] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList ( & TkUnexpected t.SrcPos e.Unexpected  ) e.Expected */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_TkUnexpected, &bb[1], &be[1]))
      break;
    /* Unused closed variable e.Expected*/
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    eUnexpected_b_1 = bb[1];
    eUnexpected_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_chars("Unknown characters \"", 20);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_char('\"');
    r05_alloc_close_call(n[3]);
    r05_push_stack(n[3]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSrcPos_1);
    r05_splice_evar(n[2], eUnexpected_b_1, eUnexpected_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *eExpected_b_1;
    struct r05_node *eExpected_e_1;
    struct r05_node *sUnexpected_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eInfo_b_1;
    struct r05_node *eInfo_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[7] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList ( s.Unexpected t.SrcPos e.Info  ) e.Expected */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eExpected_b_1 = bb[0];
    eExpected_e_1 = be[0];
    if (! r05_svar_left(&sUnexpected_1, &bb[1], &be[1]))
      break;
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    eInfo_b_1 = bb[1];
    eInfo_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_chars("Unexpected ", 11);
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_StrFromToken, "StrFromToken");
    r05_alloc_svar(sUnexpected_1);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_call(n[4]);
    r05_alloc_chars(", expected ", 11);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_push_stack(n[6]);
    r05_push_stack(n[0]);
    r05_push_stack(n[4]);
    r05_push_stack(n[2]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSrcPos_1);
    r05_splice_evar(n[3], eInfo_b_1, eInfo_e_1);
    r05_splice_evar(n[5], eExpected_b_1, eExpected_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
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
  r05_this_is_generated_function();
  do {
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & ErrorList ( e.FileName  )  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_ErrorList, &bb[1], &be[1]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    /* Unused closed variable e.FileName*/

    r05_reset_allocator();
    r05_alloc_function(r05c_EL_NoErrors, "EL_NoErrors");
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eErrors_b_1;
    struct r05_node *eErrors_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & ErrorList ( e.FileName  ) e.Errors  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_ErrorList, &bb[1], &be[1]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    /* Unused closed variable e.FileName*/
    eErrors_b_1 = bb[1];
    eErrors_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Map, "Map");
    r05_alloc_function(r05c_WriteBracketedLine, "WriteBracketedLine");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_alloc_function(r05c_EL_HasErrors, "EL_HasErrors");
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eErrors_b_1, eErrors_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_WriteBracketedLine(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.Line  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eLine_b_1 = bb[1];
    eLine_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_WriteLine, "WriteLine");
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


/* End of file */

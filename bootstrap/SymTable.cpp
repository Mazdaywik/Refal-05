/* Automatically generated file. Don't edit! */
#include "refalrts.h"


extern enum r05_fnresult r05c_Map(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Reduce(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EL_AddErrorAt(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_GN_Entry(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_SymTable(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_Create(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_Destroy(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Declared(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Defined(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_PatchReferences(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_PatchReferences_FilterThis(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_AddDefined(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_AddDeclared(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_AddFunctionCall(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_CheckUnresolved(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_AddUnresolved(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_AllFunctions(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_FunctionFromKnown(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ST_GetAnyName(struct r05_node *arg_begin, struct r05_node *arg_end);

static enum r05_fnresult r05c_SymTable(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ST_Create(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[4] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* */
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_SymTable, "SymTable");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_link_brackets(n[0], n[3]);
    r05_link_brackets(n[1], n[2]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ST_Destroy(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & SymTable e.Names ( e.References  )  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_SymTable, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    /* Unused closed variable e.Names*/
    /* Unused closed variable e.References*/

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Declared(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Defined(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_PatchReferences(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eReferences_b_1;
    struct r05_node *eReferences_e_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.References  ) e.Name */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eReferences_b_1 = bb[1];
    eReferences_e_1 = be[1];
    eName_b_1 = bb[0];
    eName_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_Map, "Map");
    r05_alloc_open_bracket(n[2]);
    r05_alloc_function(r05c_PatchReferences_FilterThis, "PatchReferences_FilterThis");
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_link_brackets(n[0], n[7]);
    r05_push_stack(n[6]);
    r05_push_stack(n[1]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_evar(n[3], eName_b_1, eName_e_1);
    r05_splice_evar(n[5], eReferences_b_1, eReferences_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_PatchReferences_FilterThis(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eName_b_2;
    struct r05_node *eName_e_2;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Name ( t.SrcPos e.Name  ) */
    if (! r05_brackets_right(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eName_b_1 = bb[0];
    eName_e_1 = be[0];
    if (! r05_repeated_evar_right(&eName_b_2, &eName_e_2, eName_b_1, eName_e_1, &bb[1], &be[1]))
      break;
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tSrcPos_1;
    struct r05_node *eOtherName_b_1;
    struct r05_node *eOtherName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Name ( t.SrcPos e.OtherName  ) */
    if (! r05_brackets_right(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    /* Unused closed variable e.Name*/
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    eOtherName_b_1 = bb[1];
    eOtherName_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_tvar(n[1], tSrcPos_1);
    r05_splice_evar(n[1], eOtherName_b_1, eOtherName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ST_AddDefined(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *eReferences_b_1;
    struct r05_node *eReferences_e_1;
    struct r05_node *sScopeClass_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eName_b_2;
    struct r05_node *eName_e_2;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *eNames_B_b_1;
    struct r05_node *eNames_B_e_1;
    struct r05_node *eNames_E_b_1;
    struct r05_node *eNames_E_e_1;
    struct r05_node *sAnyScopeClass_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[14] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList ( & SymTable e.Names_B ( & Defined s.AnyScopeClass e.Name  ) e.Names_E ( e.References  )  ) s.ScopeClass t.SrcPos e.Name */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_SymTable, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    eReferences_b_1 = bb[2];
    eReferences_e_1 = be[2];
    if (! r05_svar_left(&sScopeClass_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSrcPos_1, &bb[0], &be[0]))
      break;
    eName_b_1 = bb[0];
    eName_e_1 = be[0];
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[3] = bb[1];
      be[3] = be[1];
      if (! r05_brackets_left(&bb[4], &be[4], &bb[3], &be[3]))
        continue;
      if (! r05_function_left(r05c_Defined, &bb[4], &be[4]))
        continue;
      if (! r05_repeated_evar_right(&eName_b_2, &eName_e_2, eName_b_1, eName_e_1, &bb[4], &be[4]))
        continue;
      eNames_E_b_1 = bb[3];
      eNames_E_e_1 = be[3];
      if (! r05_svar_left(&sAnyScopeClass_1, &bb[4], &be[4]))
        continue;
      if (! r05_empty_seq(bb[4], be[4]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(n[0]);
      r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
      r05_alloc_insert_pos(n[1]);
      r05_alloc_chars("Function ", 9);
      r05_alloc_insert_pos(n[2]);
      r05_alloc_chars(" already defined", 16);
      r05_alloc_close_call(n[3]);
      r05_alloc_open_bracket(n[4]);
      r05_alloc_function(r05c_SymTable, "SymTable");
      r05_alloc_insert_pos(n[5]);
      r05_alloc_open_bracket(n[6]);
      r05_alloc_function(r05c_Defined, "Defined");
      r05_alloc_svar(sAnyScopeClass_1);
      r05_alloc_insert_pos(n[7]);
      r05_alloc_close_bracket(n[8]);
      r05_alloc_insert_pos(n[9]);
      r05_alloc_open_bracket(n[10]);
      r05_alloc_insert_pos(n[11]);
      r05_alloc_close_bracket(n[12]);
      r05_alloc_close_bracket(n[13]);
      r05_link_brackets(n[4], n[13]);
      r05_link_brackets(n[10], n[12]);
      r05_link_brackets(n[6], n[8]);
      r05_push_stack(n[3]);
      r05_push_stack(n[0]);
      r05_splice_tvar(n[1], tErrorList_1);
      r05_splice_tvar(n[1], tSrcPos_1);
      r05_splice_evar(n[2], eName_b_2, eName_e_2);
      r05_splice_evar(n[5], eNames_B_b_1, eNames_B_e_1);
      r05_splice_evar(n[7], eName_b_1, eName_e_1);
      r05_splice_evar(n[9], eNames_E_b_1, eNames_E_e_1);
      r05_splice_evar(n[11], eReferences_b_1, eReferences_e_1);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eNames_B_b_1, &eNames_B_e_1, &bb[1], &be[1]));
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *eReferences_b_1;
    struct r05_node *eReferences_e_1;
    struct r05_node *sScopeClass_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eName_b_2;
    struct r05_node *eName_e_2;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *eNames_B_b_1;
    struct r05_node *eNames_B_e_1;
    struct r05_node *eNames_E_b_1;
    struct r05_node *eNames_E_e_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[14] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList ( & SymTable e.Names_B ( & Declared e.Name  ) e.Names_E ( e.References  )  ) s.ScopeClass t.SrcPos e.Name */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_SymTable, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    eReferences_b_1 = bb[2];
    eReferences_e_1 = be[2];
    if (! r05_svar_left(&sScopeClass_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSrcPos_1, &bb[0], &be[0]))
      break;
    eName_b_1 = bb[0];
    eName_e_1 = be[0];
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[3] = bb[1];
      be[3] = be[1];
      if (! r05_brackets_left(&bb[4], &be[4], &bb[3], &be[3]))
        continue;
      if (! r05_function_left(r05c_Declared, &bb[4], &be[4]))
        continue;
      if (! r05_repeated_evar_left(&eName_b_2, &eName_e_2, eName_b_1, eName_e_1, &bb[4], &be[4]))
        continue;
      if (! r05_empty_seq(bb[4], be[4]))
        continue;
      eNames_E_b_1 = bb[3];
      eNames_E_e_1 = be[3];

      r05_reset_allocator();
      r05_alloc_insert_pos(n[0]);
      r05_alloc_open_bracket(n[1]);
      r05_alloc_function(r05c_SymTable, "SymTable");
      r05_alloc_insert_pos(n[2]);
      r05_alloc_open_bracket(n[3]);
      r05_alloc_function(r05c_Defined, "Defined");
      r05_alloc_svar(sScopeClass_1);
      r05_alloc_insert_pos(n[4]);
      r05_alloc_close_bracket(n[5]);
      r05_alloc_insert_pos(n[6]);
      r05_alloc_open_call(n[7]);
      r05_alloc_function(r05c_PatchReferences, "PatchReferences");
      r05_alloc_open_bracket(n[8]);
      r05_alloc_insert_pos(n[9]);
      r05_alloc_close_bracket(n[10]);
      r05_alloc_insert_pos(n[11]);
      r05_alloc_close_call(n[12]);
      r05_alloc_close_bracket(n[13]);
      r05_link_brackets(n[1], n[13]);
      r05_push_stack(n[12]);
      r05_push_stack(n[7]);
      r05_link_brackets(n[8], n[10]);
      r05_link_brackets(n[3], n[5]);
      r05_splice_tvar(n[0], tErrorList_1);
      r05_splice_evar(n[2], eNames_B_b_1, eNames_B_e_1);
      r05_splice_evar(n[4], eName_b_2, eName_e_2);
      r05_splice_evar(n[6], eNames_E_b_1, eNames_E_e_1);
      r05_splice_evar(n[9], eReferences_b_1, eReferences_e_1);
      r05_splice_evar(n[11], eName_b_1, eName_e_1);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eNames_B_b_1, &eNames_B_e_1, &bb[1], &be[1]));
  } while ( 0 );

  do {
    struct r05_node *tErrorList_1;
    struct r05_node *eNames_b_1;
    struct r05_node *eNames_e_1;
    struct r05_node *eReferences_b_1;
    struct r05_node *eReferences_e_1;
    struct r05_node *sScopeClass_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[12] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList ( & SymTable e.Names ( e.References  )  ) s.ScopeClass t.SrcPos e.Name */
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_SymTable, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    eNames_b_1 = bb[1];
    eNames_e_1 = be[1];
    eReferences_b_1 = bb[2];
    eReferences_e_1 = be[2];
    if (! r05_svar_left(&sScopeClass_1, &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tSrcPos_1, &bb[0], &be[0]))
      break;
    eName_b_1 = bb[0];
    eName_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_alloc_open_bracket(n[1]);
    r05_alloc_function(r05c_SymTable, "SymTable");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_open_bracket(n[3]);
    r05_alloc_function(r05c_Defined, "Defined");
    r05_alloc_svar(sScopeClass_1);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_close_bracket(n[5]);
    r05_alloc_open_call(n[6]);
    r05_alloc_function(r05c_PatchReferences, "PatchReferences");
    r05_alloc_open_bracket(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_evar(eName_b_1, eName_e_1);
    r05_alloc_close_call(n[10]);
    r05_alloc_close_bracket(n[11]);
    r05_link_brackets(n[1], n[11]);
    r05_push_stack(n[10]);
    r05_push_stack(n[6]);
    r05_link_brackets(n[7], n[9]);
    r05_link_brackets(n[3], n[5]);
    r05_splice_tvar(n[0], tErrorList_1);
    r05_splice_evar(n[2], eNames_b_1, eNames_e_1);
    r05_splice_evar(n[4], eName_b_1, eName_e_1);
    r05_splice_evar(n[8], eReferences_b_1, eReferences_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ST_AddDeclared(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eReferences_b_1;
    struct r05_node *eReferences_e_1;
    struct r05_node *eName_b_2;
    struct r05_node *eName_e_2;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *eNames_B_b_1;
    struct r05_node *eNames_B_e_1;
    struct r05_node *eNames_E_b_1;
    struct r05_node *eNames_E_e_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[10] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & SymTable e.Names_B ( & Declared e.Name  ) e.Names_E ( e.References  )  ) e.Name */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_SymTable, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    eReferences_b_1 = bb[2];
    eReferences_e_1 = be[2];
    eName_b_1 = bb[0];
    eName_e_1 = be[0];
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[3] = bb[1];
      be[3] = be[1];
      if (! r05_brackets_left(&bb[4], &be[4], &bb[3], &be[3]))
        continue;
      if (! r05_function_left(r05c_Declared, &bb[4], &be[4]))
        continue;
      if (! r05_repeated_evar_left(&eName_b_2, &eName_e_2, eName_b_1, eName_e_1, &bb[4], &be[4]))
        continue;
      if (! r05_empty_seq(bb[4], be[4]))
        continue;
      eNames_E_b_1 = bb[3];
      eNames_E_e_1 = be[3];

      r05_reset_allocator();
      r05_alloc_open_bracket(n[0]);
      r05_alloc_function(r05c_SymTable, "SymTable");
      r05_alloc_insert_pos(n[1]);
      r05_alloc_open_bracket(n[2]);
      r05_alloc_function(r05c_Declared, "Declared");
      r05_alloc_insert_pos(n[3]);
      r05_alloc_close_bracket(n[4]);
      r05_alloc_insert_pos(n[5]);
      r05_alloc_open_bracket(n[6]);
      r05_alloc_insert_pos(n[7]);
      r05_alloc_close_bracket(n[8]);
      r05_alloc_close_bracket(n[9]);
      r05_link_brackets(n[0], n[9]);
      r05_link_brackets(n[6], n[8]);
      r05_link_brackets(n[2], n[4]);
      r05_splice_evar(n[1], eNames_B_b_1, eNames_B_e_1);
      r05_splice_evar(n[3], eName_b_2, eName_e_2);
      r05_splice_evar(n[5], eNames_E_b_1, eNames_E_e_1);
      r05_splice_evar(n[7], eReferences_b_1, eReferences_e_1);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eNames_B_b_1, &eNames_B_e_1, &bb[1], &be[1]));
  } while ( 0 );

  do {
    struct r05_node *eReferences_b_1;
    struct r05_node *eReferences_e_1;
    struct r05_node *eName_b_2;
    struct r05_node *eName_e_2;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *eNames_B_b_1;
    struct r05_node *eNames_B_e_1;
    struct r05_node *eNames_E_b_1;
    struct r05_node *eNames_E_e_1;
    struct r05_node *sScopeClass_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[10] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & SymTable e.Names_B ( & Defined s.ScopeClass e.Name  ) e.Names_E ( e.References  )  ) e.Name */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_SymTable, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    eReferences_b_1 = bb[2];
    eReferences_e_1 = be[2];
    eName_b_1 = bb[0];
    eName_e_1 = be[0];
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[3] = bb[1];
      be[3] = be[1];
      if (! r05_brackets_left(&bb[4], &be[4], &bb[3], &be[3]))
        continue;
      if (! r05_function_left(r05c_Defined, &bb[4], &be[4]))
        continue;
      if (! r05_repeated_evar_right(&eName_b_2, &eName_e_2, eName_b_1, eName_e_1, &bb[4], &be[4]))
        continue;
      eNames_E_b_1 = bb[3];
      eNames_E_e_1 = be[3];
      if (! r05_svar_left(&sScopeClass_1, &bb[4], &be[4]))
        continue;
      if (! r05_empty_seq(bb[4], be[4]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(n[0]);
      r05_alloc_function(r05c_SymTable, "SymTable");
      r05_alloc_insert_pos(n[1]);
      r05_alloc_open_bracket(n[2]);
      r05_alloc_function(r05c_Defined, "Defined");
      r05_alloc_svar(sScopeClass_1);
      r05_alloc_insert_pos(n[3]);
      r05_alloc_close_bracket(n[4]);
      r05_alloc_insert_pos(n[5]);
      r05_alloc_open_bracket(n[6]);
      r05_alloc_insert_pos(n[7]);
      r05_alloc_close_bracket(n[8]);
      r05_alloc_close_bracket(n[9]);
      r05_link_brackets(n[0], n[9]);
      r05_link_brackets(n[6], n[8]);
      r05_link_brackets(n[2], n[4]);
      r05_splice_evar(n[1], eNames_B_b_1, eNames_B_e_1);
      r05_splice_evar(n[3], eName_b_2, eName_e_2);
      r05_splice_evar(n[5], eNames_E_b_1, eNames_E_e_1);
      r05_splice_evar(n[7], eReferences_b_1, eReferences_e_1);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eNames_B_b_1, &eNames_B_e_1, &bb[1], &be[1]));
  } while ( 0 );

  do {
    struct r05_node *eNames_b_1;
    struct r05_node *eNames_e_1;
    struct r05_node *eReferences_b_1;
    struct r05_node *eReferences_e_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[11] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & SymTable e.Names ( e.References  )  ) e.Name */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_SymTable, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    eNames_b_1 = bb[1];
    eNames_e_1 = be[1];
    eReferences_b_1 = bb[2];
    eReferences_e_1 = be[2];
    eName_b_1 = bb[0];
    eName_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_SymTable, "SymTable");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_function(r05c_Declared, "Declared");
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_open_call(n[5]);
    r05_alloc_function(r05c_PatchReferences, "PatchReferences");
    r05_alloc_open_bracket(n[6]);
    r05_alloc_insert_pos(n[7]);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_evar(eName_b_1, eName_e_1);
    r05_alloc_close_call(n[9]);
    r05_alloc_close_bracket(n[10]);
    r05_link_brackets(n[0], n[10]);
    r05_push_stack(n[9]);
    r05_push_stack(n[5]);
    r05_link_brackets(n[6], n[8]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_evar(n[1], eNames_b_1, eNames_e_1);
    r05_splice_evar(n[3], eName_b_1, eName_e_1);
    r05_splice_evar(n[7], eReferences_b_1, eReferences_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ST_AddFunctionCall(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eReferences_b_1;
    struct r05_node *eReferences_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eName_b_2;
    struct r05_node *eName_e_2;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *eNames_B_b_1;
    struct r05_node *eNames_B_e_1;
    struct r05_node *eNames_E_b_1;
    struct r05_node *eNames_E_e_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[10] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & SymTable e.Names_B ( & Declared e.Name  ) e.Names_E ( e.References  )  ) t.SrcPos e.Name */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_SymTable, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    eReferences_b_1 = bb[2];
    eReferences_e_1 = be[2];
    if (! r05_tvar_left(&tSrcPos_1, &bb[0], &be[0]))
      break;
    eName_b_1 = bb[0];
    eName_e_1 = be[0];
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[3] = bb[1];
      be[3] = be[1];
      if (! r05_brackets_left(&bb[4], &be[4], &bb[3], &be[3]))
        continue;
      if (! r05_function_left(r05c_Declared, &bb[4], &be[4]))
        continue;
      if (! r05_repeated_evar_left(&eName_b_2, &eName_e_2, eName_b_1, eName_e_1, &bb[4], &be[4]))
        continue;
      if (! r05_empty_seq(bb[4], be[4]))
        continue;
      eNames_E_b_1 = bb[3];
      eNames_E_e_1 = be[3];

      r05_reset_allocator();
      r05_alloc_open_bracket(n[0]);
      r05_alloc_function(r05c_SymTable, "SymTable");
      r05_alloc_insert_pos(n[1]);
      r05_alloc_open_bracket(n[2]);
      r05_alloc_function(r05c_Declared, "Declared");
      r05_alloc_insert_pos(n[3]);
      r05_alloc_close_bracket(n[4]);
      r05_alloc_insert_pos(n[5]);
      r05_alloc_open_bracket(n[6]);
      r05_alloc_insert_pos(n[7]);
      r05_alloc_close_bracket(n[8]);
      r05_alloc_close_bracket(n[9]);
      r05_link_brackets(n[0], n[9]);
      r05_link_brackets(n[6], n[8]);
      r05_link_brackets(n[2], n[4]);
      r05_splice_evar(n[1], eNames_B_b_1, eNames_B_e_1);
      r05_splice_evar(n[3], eName_b_2, eName_e_2);
      r05_splice_evar(n[5], eNames_E_b_1, eNames_E_e_1);
      r05_splice_evar(n[7], eReferences_b_1, eReferences_e_1);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eNames_B_b_1, &eNames_B_e_1, &bb[1], &be[1]));
  } while ( 0 );

  do {
    struct r05_node *eReferences_b_1;
    struct r05_node *eReferences_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eName_b_2;
    struct r05_node *eName_e_2;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *eNames_B_b_1;
    struct r05_node *eNames_B_e_1;
    struct r05_node *eNames_E_b_1;
    struct r05_node *eNames_E_e_1;
    struct r05_node *sScopeClass_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[10] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & SymTable e.Names_B ( & Defined s.ScopeClass e.Name  ) e.Names_E ( e.References  )  ) t.SrcPos e.Name */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_SymTable, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    eReferences_b_1 = bb[2];
    eReferences_e_1 = be[2];
    if (! r05_tvar_left(&tSrcPos_1, &bb[0], &be[0]))
      break;
    eName_b_1 = bb[0];
    eName_e_1 = be[0];
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[3] = bb[1];
      be[3] = be[1];
      if (! r05_brackets_left(&bb[4], &be[4], &bb[3], &be[3]))
        continue;
      if (! r05_function_left(r05c_Defined, &bb[4], &be[4]))
        continue;
      if (! r05_repeated_evar_right(&eName_b_2, &eName_e_2, eName_b_1, eName_e_1, &bb[4], &be[4]))
        continue;
      eNames_E_b_1 = bb[3];
      eNames_E_e_1 = be[3];
      if (! r05_svar_left(&sScopeClass_1, &bb[4], &be[4]))
        continue;
      if (! r05_empty_seq(bb[4], be[4]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(n[0]);
      r05_alloc_function(r05c_SymTable, "SymTable");
      r05_alloc_insert_pos(n[1]);
      r05_alloc_open_bracket(n[2]);
      r05_alloc_function(r05c_Defined, "Defined");
      r05_alloc_svar(sScopeClass_1);
      r05_alloc_insert_pos(n[3]);
      r05_alloc_close_bracket(n[4]);
      r05_alloc_insert_pos(n[5]);
      r05_alloc_open_bracket(n[6]);
      r05_alloc_insert_pos(n[7]);
      r05_alloc_close_bracket(n[8]);
      r05_alloc_close_bracket(n[9]);
      r05_link_brackets(n[0], n[9]);
      r05_link_brackets(n[6], n[8]);
      r05_link_brackets(n[2], n[4]);
      r05_splice_evar(n[1], eNames_B_b_1, eNames_B_e_1);
      r05_splice_evar(n[3], eName_b_2, eName_e_2);
      r05_splice_evar(n[5], eNames_E_b_1, eNames_E_e_1);
      r05_splice_evar(n[7], eReferences_b_1, eReferences_e_1);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eNames_B_b_1, &eNames_B_e_1, &bb[1], &be[1]));
  } while ( 0 );

  do {
    struct r05_node *eNames_b_1;
    struct r05_node *eNames_e_1;
    struct r05_node *eReferences_b_1;
    struct r05_node *eReferences_e_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[9] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & SymTable e.Names ( e.References  )  ) t.SrcPos e.Name */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_SymTable, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    eNames_b_1 = bb[1];
    eNames_e_1 = be[1];
    eReferences_b_1 = bb[2];
    eReferences_e_1 = be[2];
    if (! r05_tvar_left(&tSrcPos_1, &bb[0], &be[0]))
      break;
    eName_b_1 = bb[0];
    eName_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_SymTable, "SymTable");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_open_bracket(n[4]);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_bracket(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_alloc_close_bracket(n[8]);
    r05_link_brackets(n[0], n[8]);
    r05_link_brackets(n[2], n[7]);
    r05_link_brackets(n[4], n[6]);
    r05_splice_evar(n[1], eNames_b_1, eNames_e_1);
    r05_splice_evar(n[3], eReferences_b_1, eReferences_e_1);
    r05_splice_tvar(n[5], tSrcPos_1);
    r05_splice_evar(n[5], eName_b_1, eName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ST_CheckUnresolved(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eNames_b_1;
    struct r05_node *eNames_e_1;
    struct r05_node *eReferences_b_1;
    struct r05_node *eReferences_e_1;
    struct r05_node *tErrorList_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList ( & SymTable e.Names ( e.References  )  ) */
    if (! r05_brackets_right(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_SymTable, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    eNames_b_1 = bb[1];
    eNames_e_1 = be[1];
    eReferences_b_1 = bb[2];
    eReferences_e_1 = be[2];
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Reduce, "Reduce");
    r05_alloc_function(r05c_AddUnresolved, "AddUnresolved");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_alloc_open_bracket(n[3]);
    r05_alloc_function(r05c_SymTable, "SymTable");
    r05_alloc_insert_pos(n[4]);
    r05_alloc_open_bracket(n[5]);
    r05_alloc_evar(eReferences_b_1, eReferences_e_1);
    r05_alloc_close_bracket(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_link_brackets(n[3], n[7]);
    r05_link_brackets(n[5], n[6]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_evar(n[1], eReferences_b_1, eReferences_e_1);
    r05_splice_evar(n[4], eNames_b_1, eNames_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_AddUnresolved(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tErrorList_1;
    struct r05_node *tSrcPos_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[4] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.ErrorList ( t.SrcPos e.Name  ) */
    if (! r05_brackets_right(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_tvar_left(&tErrorList_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    if (! r05_tvar_left(&tSrcPos_1, &bb[1], &be[1]))
      break;
    eName_b_1 = bb[1];
    eName_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_EL_AddErrorAt, "EL_AddErrorAt");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_chars("Function ", 9);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_chars(" is not defined", 15);
    r05_alloc_close_call(n[3]);
    r05_push_stack(n[3]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tErrorList_1);
    r05_splice_tvar(n[1], tSrcPos_1);
    r05_splice_evar(n[2], eName_b_1, eName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ST_AllFunctions(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eNames_b_1;
    struct r05_node *eNames_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & SymTable e.Names ( e.References  )  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_SymTable, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eNames_b_1 = bb[1];
    eNames_e_1 = be[1];
    /* Unused closed variable e.References*/

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Map, "Map");
    r05_alloc_function(r05c_FunctionFromKnown, "FunctionFromKnown");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eNames_b_1, eNames_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_FunctionFromKnown(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & Declared e.Name  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_Declared, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eName_b_1 = bb[1];
    eName_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_GN_Entry, "GN_Entry");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], eName_b_1, eName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *sScopeClass_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & Defined s.ScopeClass e.Name  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_Defined, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    if (! r05_svar_left(&sScopeClass_1, &bb[1], &be[1]))
      break;
    eName_b_1 = bb[1];
    eName_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_svar(sScopeClass_1);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], eName_b_1, eName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ST_GetAnyName(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eNames_B_b_1;
    struct r05_node *eNames_B_e_1;
    struct r05_node *sScopeClass_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & SymTable e.Names_B ( & Defined s.ScopeClass e.Name  ) e.Names_E ( e.References  )  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_SymTable, &bb[1], &be[1]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    /* Unused closed variable e.References*/
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[3] = bb[1];
      be[3] = be[1];
      if (! r05_brackets_left(&bb[4], &be[4], &bb[3], &be[3]))
        continue;
      if (! r05_function_left(r05c_Defined, &bb[4], &be[4]))
        continue;
      /* Unused closed variable e.Names_E*/
      if (! r05_svar_left(&sScopeClass_1, &bb[4], &be[4]))
        continue;
      eName_b_1 = bb[4];
      eName_e_1 = be[4];

      r05_reset_allocator();
      r05_alloc_insert_pos(n[0]);
      r05_splice_evar(n[0], eName_b_1, eName_e_1);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eNames_B_b_1, &eNames_B_e_1, &bb[1], &be[1]));
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}


/* End of file */

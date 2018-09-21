// Automatically generated file. Don't edit!
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
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_SymTable, "SymTable" ) )
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

enum r05_fnresult r05c_ST_Destroy(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // ( & SymTable e.Names ( e.References ) )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_SymTable, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    // Unused closed variable e.Names
    // Unused closed variable e.References

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
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eReferences_b_1;
    static struct r05_node *eReferences_e_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    // ( e.References ) e.Name
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eReferences_b_1 = bb_1;
    eReferences_e_1 = be_1;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_PatchReferences_FilterThis, "PatchReferences_FilterThis" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eReferences_b_1, eReferences_e_1 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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

static enum r05_fnresult r05c_PatchReferences_FilterThis(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    static struct r05_node *tSrcPos_1;
    // e.Name ( t.SrcPos e.Name )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;
    if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
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
    static struct r05_node *tSrcPos_1;
    static struct r05_node *eOtherName_b_1;
    static struct r05_node *eOtherName_e_1;
    // e.Name ( t.SrcPos e.OtherName )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    // Unused closed variable e.Name
    if( ! refalrts::tvar_left( tSrcPos_1, bb_1, be_1 ) )
      break;
    eOtherName_b_1 = bb_1;
    eOtherName_e_1 = be_1;

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
    res = refalrts::splice_evar( res, eOtherName_b_1, eOtherName_e_1 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ST_AddDefined(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *eReferences_b_1;
    static struct r05_node *eReferences_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    static struct r05_node *eNames_B_b_1;
    static struct r05_node *eNames_B_e_1;
    static struct r05_node *eNames_E_b_1;
    static struct r05_node *eNames_E_e_1;
    static struct r05_node *sAnyScopeClass_1;
    static struct r05_node *sScopeClass_1;
    // t.ErrorList ( & SymTable e.Names_B ( & Defined s.AnyScopeClass e.Name ) e.Names_E ( e.References ) ) s.ScopeClass t.SrcPos e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_SymTable, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    eReferences_b_1 = bb_2;
    eReferences_e_1 = be_2;
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_0, be_0 ) )
      break;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_1;
      struct r05_node *be_3 = be_1;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( r05c_Defined, bb_4, be_4 ) )
        continue;
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_4, be_4 ) )
        continue;
      eNames_E_b_1 = bb_3;
      eNames_E_e_1 = be_3;
      if( ! refalrts::svar_left( sAnyScopeClass_1, bb_4, be_4 ) )
        continue;
      if (! r05_empty_seq(bb_4, be_4))
        continue;

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
      if( ! refalrts::alloc_chars( n2, n3, "Function ", 9) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      struct r05_node *n5 = 0;
      if( ! refalrts::alloc_chars( n4, n5, " already defined", 16) )
        return R05_NO_MEMORY;
      struct r05_node *n6 = 0;
      if( ! refalrts::alloc_close_call( n6 ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return R05_NO_MEMORY;
      struct r05_node *n8 = 0;
      if( ! refalrts::alloc_name( n8, r05c_SymTable, "SymTable" ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_name( n10, r05c_Defined, "Defined" ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return R05_NO_MEMORY;
      struct r05_node *n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return R05_NO_MEMORY;
      struct r05_node *n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return R05_NO_MEMORY;
      refalrts::link_brackets( n7, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n12, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eReferences_b_1, eReferences_e_1 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n9, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sAnyScopeClass_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::push_stack( n6 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, n4, n5 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_evar( res, n2, n3 );
      res = refalrts::splice_stvar( res, tSrcPos_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eNames_B_b_1, eNames_B_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *eReferences_b_1;
    static struct r05_node *eReferences_e_1;
    static struct r05_node *sScopeClass_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    static struct r05_node *eNames_B_b_1;
    static struct r05_node *eNames_B_e_1;
    static struct r05_node *eNames_E_b_1;
    static struct r05_node *eNames_E_e_1;
    static struct r05_node *tSrcPos_1;
    // t.ErrorList ( & SymTable e.Names_B ( & Declared e.Name ) e.Names_E ( e.References ) ) s.ScopeClass t.SrcPos e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_SymTable, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    eReferences_b_1 = bb_2;
    eReferences_e_1 = be_2;
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_0, be_0 ) )
      break;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_1;
      struct r05_node *be_3 = be_1;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( r05c_Declared, bb_4, be_4 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_4, be_4 ) )
        continue;
      if (! r05_empty_seq(bb_4, be_4))
        continue;
      eNames_E_b_1 = bb_3;
      eNames_E_e_1 = be_3;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_SymTable, "SymTable" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_name( n3, r05c_Defined, "Defined" ) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return R05_NO_MEMORY;
      struct r05_node *n5 = 0;
      if( ! refalrts::alloc_open_call( n5 ) )
        return R05_NO_MEMORY;
      struct r05_node *n6 = 0;
      if( ! refalrts::alloc_name( n6, r05c_PatchReferences, "PatchReferences" ) )
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
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return R05_NO_MEMORY;
      refalrts::link_brackets( n0, n10 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::push_stack( n9 );
      refalrts::push_stack( n5 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eReferences_b_1, eReferences_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eNames_B_b_1, eNames_B_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *eNames_b_1;
    static struct r05_node *eNames_e_1;
    static struct r05_node *eReferences_b_1;
    static struct r05_node *eReferences_e_1;
    static struct r05_node *sScopeClass_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    // t.ErrorList ( & SymTable e.Names ( e.References ) ) s.ScopeClass t.SrcPos e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_SymTable, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    eNames_b_1 = bb_1;
    eNames_e_1 = be_1;
    eReferences_b_1 = bb_2;
    eReferences_e_1 = be_2;
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_0, be_0 ) )
      break;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_SymTable, "SymTable" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Defined, "Defined" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_PatchReferences, "PatchReferences" ) )
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
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eReferences_b_1, eReferences_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eNames_b_1, eNames_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ST_AddDeclared(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eReferences_b_1;
    static struct r05_node *eReferences_e_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eNames_B_b_1;
    static struct r05_node *eNames_B_e_1;
    static struct r05_node *eNames_E_b_1;
    static struct r05_node *eNames_E_e_1;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    // ( & SymTable e.Names_B ( & Declared e.Name ) e.Names_E ( e.References ) ) e.Name
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_SymTable, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    eReferences_b_1 = bb_2;
    eReferences_e_1 = be_2;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_1;
      struct r05_node *be_3 = be_1;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( r05c_Declared, bb_4, be_4 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_4, be_4 ) )
        continue;
      if (! r05_empty_seq(bb_4, be_4))
        continue;
      eNames_E_b_1 = bb_3;
      eNames_E_e_1 = be_3;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_SymTable, "SymTable" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_name( n3, r05c_Declared, "Declared" ) )
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
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return R05_NO_MEMORY;
      refalrts::link_brackets( n0, n7 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eReferences_b_1, eReferences_e_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eNames_B_b_1, eNames_B_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eReferences_b_1;
    static struct r05_node *eReferences_e_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eNames_B_b_1;
    static struct r05_node *eNames_B_e_1;
    static struct r05_node *eNames_E_b_1;
    static struct r05_node *eNames_E_e_1;
    static struct r05_node *sScopeClass_1;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    // ( & SymTable e.Names_B ( & Defined s.ScopeClass e.Name ) e.Names_E ( e.References ) ) e.Name
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_SymTable, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    eReferences_b_1 = bb_2;
    eReferences_e_1 = be_2;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_1;
      struct r05_node *be_3 = be_1;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( r05c_Defined, bb_4, be_4 ) )
        continue;
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_4, be_4 ) )
        continue;
      eNames_E_b_1 = bb_3;
      eNames_E_e_1 = be_3;
      if( ! refalrts::svar_left( sScopeClass_1, bb_4, be_4 ) )
        continue;
      if (! r05_empty_seq(bb_4, be_4))
        continue;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_SymTable, "SymTable" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_name( n3, r05c_Defined, "Defined" ) )
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
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return R05_NO_MEMORY;
      refalrts::link_brackets( n0, n7 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eReferences_b_1, eReferences_e_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eNames_B_b_1, eNames_B_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eNames_b_1;
    static struct r05_node *eNames_e_1;
    static struct r05_node *eReferences_b_1;
    static struct r05_node *eReferences_e_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    // ( & SymTable e.Names ( e.References ) ) e.Name
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_SymTable, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    eNames_b_1 = bb_1;
    eNames_e_1 = be_1;
    eReferences_b_1 = bb_2;
    eReferences_e_1 = be_2;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_SymTable, "SymTable" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Declared, "Declared" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_PatchReferences, "PatchReferences" ) )
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
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eReferences_b_1, eReferences_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eNames_b_1, eNames_e_1 );
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

enum r05_fnresult r05c_ST_AddFunctionCall(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eReferences_b_1;
    static struct r05_node *eReferences_e_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eNames_B_b_1;
    static struct r05_node *eNames_B_e_1;
    static struct r05_node *eNames_E_b_1;
    static struct r05_node *eNames_E_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    // ( & SymTable e.Names_B ( & Declared e.Name ) e.Names_E ( e.References ) ) t.SrcPos e.Name
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_SymTable, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    eReferences_b_1 = bb_2;
    eReferences_e_1 = be_2;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_0, be_0 ) )
      break;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_1;
      struct r05_node *be_3 = be_1;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( r05c_Declared, bb_4, be_4 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_4, be_4 ) )
        continue;
      if (! r05_empty_seq(bb_4, be_4))
        continue;
      eNames_E_b_1 = bb_3;
      eNames_E_e_1 = be_3;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_SymTable, "SymTable" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_name( n3, r05c_Declared, "Declared" ) )
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
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return R05_NO_MEMORY;
      refalrts::link_brackets( n0, n7 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eReferences_b_1, eReferences_e_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eNames_B_b_1, eNames_B_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eReferences_b_1;
    static struct r05_node *eReferences_e_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eNames_B_b_1;
    static struct r05_node *eNames_B_e_1;
    static struct r05_node *eNames_E_b_1;
    static struct r05_node *eNames_E_e_1;
    static struct r05_node *sScopeClass_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *eName_b_2;
    static struct r05_node *eName_e_2;
    // ( & SymTable e.Names_B ( & Defined s.ScopeClass e.Name ) e.Names_E ( e.References ) ) t.SrcPos e.Name
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_SymTable, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    eReferences_b_1 = bb_2;
    eReferences_e_1 = be_2;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_0, be_0 ) )
      break;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_1;
      struct r05_node *be_3 = be_1;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( r05c_Defined, bb_4, be_4 ) )
        continue;
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_4, be_4 ) )
        continue;
      eNames_E_b_1 = bb_3;
      eNames_E_e_1 = be_3;
      if( ! refalrts::svar_left( sScopeClass_1, bb_4, be_4 ) )
        continue;
      if (! r05_empty_seq(bb_4, be_4))
        continue;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_SymTable, "SymTable" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_name( n3, r05c_Defined, "Defined" ) )
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
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return R05_NO_MEMORY;
      refalrts::link_brackets( n0, n7 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eReferences_b_1, eReferences_e_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eNames_B_b_1, eNames_B_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eNames_b_1;
    static struct r05_node *eNames_e_1;
    static struct r05_node *eReferences_b_1;
    static struct r05_node *eReferences_e_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    // ( & SymTable e.Names ( e.References ) ) t.SrcPos e.Name
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_SymTable, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    eNames_b_1 = bb_1;
    eNames_e_1 = be_1;
    eReferences_b_1 = bb_2;
    eReferences_e_1 = be_2;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_0, be_0 ) )
      break;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_SymTable, "SymTable" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eReferences_b_1, eReferences_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eNames_b_1, eNames_e_1 );
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

enum r05_fnresult r05c_ST_CheckUnresolved(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eNames_b_1;
    static struct r05_node *eNames_e_1;
    static struct r05_node *eReferences_b_1;
    static struct r05_node *eReferences_e_1;
    static struct r05_node *tErrorList_1;
    static struct r05_node *eReferences_b_2;
    static struct r05_node *eReferences_e_2;
    // t.ErrorList ( & SymTable e.Names ( e.References ) )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_SymTable, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    eNames_b_1 = bb_1;
    eNames_e_1 = be_1;
    eReferences_b_1 = bb_2;
    eReferences_e_1 = be_2;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eReferences_b_2, eReferences_e_2, eReferences_b_1, eReferences_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Reduce, "Reduce" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_AddUnresolved, "AddUnresolved" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_SymTable, "SymTable" ) )
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
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eReferences_b_2, eReferences_e_2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eNames_b_1, eNames_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eReferences_b_1, eReferences_e_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
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

static enum r05_fnresult r05c_AddUnresolved(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tErrorList_1;
    static struct r05_node *tSrcPos_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    // t.ErrorList ( t.SrcPos e.Name )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::tvar_left( tSrcPos_1, bb_1, be_1 ) )
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;

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
    if( ! refalrts::alloc_chars( n2, n3, "Function ", 9) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, " is not defined", 15) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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

enum r05_fnresult r05c_ST_AllFunctions(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eNames_b_1;
    static struct r05_node *eNames_e_1;
    // ( & SymTable e.Names ( e.References ) )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_SymTable, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eNames_b_1 = bb_1;
    eNames_e_1 = be_1;
    // Unused closed variable e.References

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_FunctionFromKnown, "FunctionFromKnown" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eNames_b_1, eNames_e_1 );
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

static enum r05_fnresult r05c_FunctionFromKnown(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    // ( & Declared e.Name )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Declared, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_GN_Entry, "GN_Entry" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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
    static struct r05_node *sScopeClass_1;
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    // ( & Defined s.ScopeClass e.Name )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_Defined, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    if( ! refalrts::svar_left( sScopeClass_1, bb_1, be_1 ) )
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;

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
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_ST_GetAnyName(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eName_b_1;
    static struct r05_node *eName_e_1;
    static struct r05_node *eNames_B_b_1;
    static struct r05_node *eNames_B_e_1;
    static struct r05_node *sScopeClass_1;
    // ( & SymTable e.Names_B ( & Defined s.ScopeClass e.Name ) e.Names_E ( e.References ) )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_SymTable, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    // Unused closed variable e.References
    eNames_B_b_1 = 0;
    eNames_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_3 = bb_1;
      struct r05_node *be_3 = be_1;
      struct r05_node *bb_4 = 0;
      struct r05_node *be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( r05c_Defined, bb_4, be_4 ) )
        continue;
      // Unused closed variable e.Names_E
      if( ! refalrts::svar_left( sScopeClass_1, bb_4, be_4 ) )
        continue;
      eName_b_1 = bb_4;
      eName_e_1 = be_4;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while ( refalrts::open_evar_advance( eNames_B_b_1, eNames_B_e_1, bb_1, be_1 ) );
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}


//End of file

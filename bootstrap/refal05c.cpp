// Automatically generated file. Don't edit!
#include "refalrts.h"


extern enum r05_fnresult r05c_ArgList(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_LoadFile(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Map(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_DelAccumulator(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_MapReduce(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Inc(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_ParseCommandLine(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdLineError(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CompileCommand(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_NoCompile(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_WriteLine(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Success(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Fails(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_System(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Exit(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_StrFromInt(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_FindFiles(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_NotFound(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Output(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Source(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CompileFile(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Go(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Main(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_FindFiles_Compilers(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_FindFiles_Compilers_SwFound(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_PrintNotFound(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ProcessEachSource(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ProcessEachSource_SwSuccess(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_CheckCompilationResult(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Link(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_QuoteFile(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_RenameFiles(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_GetFileName(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_GetFileName_Aux(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_DoGetFileName(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Lower(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanCollisions(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Renumerate(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Renumerate_Each(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_RestoreName(struct r05_node *arg_begin, struct r05_node *arg_end);

enum r05_fnresult r05c_Go(struct r05_node *arg_begin, struct r05_node *arg_end) {
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
    if( ! refalrts::alloc_name( n1, r05c_Main, "Main" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_ArgList, "ArgList" ) )
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

static enum r05_fnresult r05c_Main(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eProgName_b_1;
    struct r05_node *eProgName_e_1;
    struct r05_node *eConfig_b_1;
    struct r05_node *eConfig_e_1;
    // ( e.ProgName ) ( '@ e.Config )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if (! r05_brackets_left(&bb_2, &be_2, &bb_0, &be_0))
      break;
    if (! r05_char_left('@', &bb_2, &be_2))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eProgName_b_1 = bb_1;
    eProgName_e_1 = be_1;
    eConfig_b_1 = bb_2;
    eConfig_e_1 = be_2;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Main, "Main" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_LoadFile, "LoadFile" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eConfig_b_1, eConfig_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eProgName_b_1, eProgName_e_1 );
    res = refalrts::splice_elem( res, n2 );
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
    struct r05_node *eArguments_b_1;
    struct r05_node *eArguments_e_1;
    // ( e.ProgName ) e.Arguments
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    // Unused closed variable e.ProgName
    eArguments_b_1 = bb_0;
    eArguments_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_FindFiles_Compilers, "FindFiles_Compilers" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_ParseCommandLine, "ParseCommandLine" ) )
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
    res = refalrts::splice_evar( res, eArguments_b_1, eArguments_e_1 );
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

static enum r05_fnresult r05c_FindFiles_Compilers(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eMessage_b_1;
    struct r05_node *eMessage_e_1;
    // ( & CmdLineError e.Message )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_CmdLineError, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eMessage_b_1 = bb_1;
    eMessage_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_WriteLine, "WriteLine" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, "COMMAND LINE ERROR: ", 20) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eMessage_b_1, eMessage_e_1 );
    res = refalrts::splice_evar( res, n2, n3 );
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
    struct r05_node *tCompiler_1;
    struct r05_node *eFolders_b_1;
    struct r05_node *eFolders_e_1;
    struct r05_node *eFiles_b_1;
    struct r05_node *eFiles_e_1;
    // t.Compiler ( e.Folders ) e.Files
    if (! r05_tvar_left(&tCompiler_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eFolders_b_1 = bb_1;
    eFolders_e_1 = be_1;
    eFiles_b_1 = bb_0;
    eFiles_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_FindFiles_Compilers_SwFound, "FindFiles_Compilers_SwFound" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_FindFiles, "FindFiles" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
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

static enum r05_fnresult r05c_FindFiles_Compilers_SwFound(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eFiles_E_b_1;
    struct r05_node *eFiles_E_e_1;
    struct r05_node *tCompiler_1;
    struct r05_node *eFiles_B_b_1;
    struct r05_node *eFiles_B_e_1;
    // t.Compiler e.Files_B ( & NotFound e.FileName ) e.Files_E
    if (! r05_tvar_left(&tCompiler_1, &bb_0, &be_0))
      break;
    eFiles_B_b_1 = 0;
    eFiles_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_1 = bb_0;
      struct r05_node *be_1 = be_0;
      struct r05_node *bb_2 = 0;
      struct r05_node *be_2 = 0;
      if (! r05_brackets_left(&bb_2, &be_2, &bb_1, &be_1))
        continue;
      if (! r05_function_left(r05c_NotFound, &bb_2, &be_2))
        continue;
      eFileName_b_1 = bb_2;
      eFileName_e_1 = be_2;
      eFiles_E_b_1 = bb_1;
      eFiles_E_e_1 = be_1;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_Map, "Map" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_name( n2, r05c_PrintNotFound, "PrintNotFound" ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_name( n4, r05c_NotFound, "NotFound" ) )
        return R05_NO_MEMORY;
      struct r05_node *n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return R05_NO_MEMORY;
      struct r05_node *n6 = 0;
      if( ! refalrts::alloc_close_call( n6 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n6 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
      refalrts::link_brackets( n3, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eFiles_B_b_1, &eFiles_B_e_1, &bb_0, &be_0));
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *tCompiler_1;
    struct r05_node *eFoundFiles_b_1;
    struct r05_node *eFoundFiles_e_1;
    struct r05_node *tCompiler_2;
    // t.Compiler e.FoundFiles
    if (! r05_tvar_left(&tCompiler_1, &bb_0, &be_0))
      break;
    eFoundFiles_b_1 = bb_0;
    eFoundFiles_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( tCompiler_2, tCompiler_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_CheckCompilationResult, "CheckCompilationResult" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_ProcessEachSource, "ProcessEachSource" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_RenameFiles, "RenameFiles" ) )
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
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFoundFiles_b_1, eFoundFiles_e_1 );
    res = refalrts::splice_stvar( res, tCompiler_2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
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

static enum r05_fnresult r05c_PrintNotFound(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    // ( & NotFound e.FileName )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_NotFound, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eFileName_b_1 = bb_1;
    eFileName_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_WriteLine, "WriteLine" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, "COMMAND LINE ERROR: file ", 25) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, " not found", 10) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_evar( res, n2, n3 );
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
    // ( & Output e.FileName )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Output, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    // Unused closed variable e.FileName

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
    // ( & Source ( e.Source ) e.Output )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Source, &bb_1, &be_1))
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if (! r05_brackets_left(&bb_2, &be_2, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    // Unused closed variable e.Source
    // Unused closed variable e.Output

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

static enum r05_fnresult r05c_ProcessEachSource(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eOutputName_b_1;
    struct r05_node *eOutputName_e_1;
    struct r05_node *eOutputName_b_2;
    struct r05_node *eOutputName_e_2;
    // ( & Output e.OutputName )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Output, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eOutputName_b_1 = bb_1;
    eOutputName_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eOutputName_b_2, eOutputName_e_2, eOutputName_b_1, eOutputName_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_WriteLine, "WriteLine" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, "+Linking ", 9) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eOutputName_b_2, eOutputName_e_2 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
    res = refalrts::splice_evar( res, n2, n3 );
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
    struct r05_node *eSource_b_1;
    struct r05_node *eSource_e_1;
    struct r05_node *eOutputName_b_1;
    struct r05_node *eOutputName_e_1;
    struct r05_node *eSource_b_2;
    struct r05_node *eSource_e_2;
    // ( & Source ( e.Source ) e.OutputName )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Source, &bb_1, &be_1))
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if (! r05_brackets_left(&bb_2, &be_2, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eSource_b_1 = bb_2;
    eSource_e_1 = be_2;
    eOutputName_b_1 = bb_1;
    eOutputName_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eSource_b_2, eSource_e_2, eSource_b_1, eSource_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_WriteLine, "WriteLine" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, "*Compiling ", 11) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_char( n4, ':' ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_ProcessEachSource_SwSuccess, "ProcessEachSource_SwSuccess" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_CompileFile, "CompileFile" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eSource_b_2, eSource_e_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eSource_b_1, eSource_e_1 );
    res = refalrts::splice_evar( res, n2, n3 );
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

static enum r05_fnresult r05c_ProcessEachSource_SwSuccess(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eOutputName_b_1;
    struct r05_node *eOutputName_e_1;
    // & Success e.OutputName
    if (! r05_function_left(r05c_Success, &bb_0, &be_0))
      break;
    eOutputName_b_1 = bb_0;
    eOutputName_e_1 = be_0;

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
    res = refalrts::splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
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
    // & Fails
    if (! r05_function_left(r05c_Fails, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Fails, "Fails" ) )
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

static enum r05_fnresult r05c_CheckCompilationResult(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *tCompiler_1;
    struct r05_node *eOutputs_B_b_1;
    struct r05_node *eOutputs_B_e_1;
    // t.Compiler e.Outputs_B & Fails e.Outputs_E
    if (! r05_tvar_left(&tCompiler_1, &bb_0, &be_0))
      break;
    eOutputs_B_b_1 = 0;
    eOutputs_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_1 = bb_0;
      struct r05_node *be_1 = be_0;
      if (! r05_function_left(r05c_Fails, &bb_1, &be_1))
        continue;
      // Unused closed variable e.Outputs_E

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_WriteLine, "WriteLine" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_chars( n2, n3, "*** COMPILATION FAILED ***", 26) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n4 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, n2, n3 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eOutputs_B_b_1, &eOutputs_B_e_1, &bb_0, &be_0));
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *tCompiler_1;
    struct r05_node *eOutputs_b_1;
    struct r05_node *eOutputs_e_1;
    // t.Compiler e.Outputs
    if (! r05_tvar_left(&tCompiler_1, &bb_0, &be_0))
      break;
    eOutputs_b_1 = bb_0;
    eOutputs_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Link, "Link" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_WriteLine, "WriteLine" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_chars( n5, n6, "*** Compilation successed ***", 29) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, n5, n6 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eOutputs_b_1, eOutputs_e_1 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
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

static enum r05_fnresult r05c_Link(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eCommandLine_b_1;
    struct r05_node *eCommandLine_e_1;
    struct r05_node *eFiles_b_1;
    struct r05_node *eFiles_e_1;
    // ( & CompileCommand e.CommandLine ) e.Files
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_CompileCommand, &bb_1, &be_1))
      break;
    eCommandLine_b_1 = bb_1;
    eCommandLine_e_1 = be_1;
    eFiles_b_1 = bb_0;
    eFiles_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_System, "System" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_QuoteFile, "QuoteFile" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eCommandLine_b_1, eCommandLine_e_1 );
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
    // ( & NoCompile ) e.Files
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_NoCompile, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    // Unused closed variable e.Files

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

static enum r05_fnresult r05c_QuoteFile(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    // ( e.FileName )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eFileName_b_1 = bb_1;
    eFileName_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, " \"", 2) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_char( n2, '\"' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_RenameFiles(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFiles_b_1;
    struct r05_node *eFiles_e_1;
    // ( & NoCompile ) e.Files
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_NoCompile, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    eFiles_b_1 = bb_0;
    eFiles_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFiles_b_1;
    struct r05_node *eFiles_e_1;
    // ( & CompileCommand e.CommandLine ) e.Files
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_CompileCommand, &bb_1, &be_1))
      break;
    // Unused closed variable e.CommandLine
    eFiles_b_1 = bb_0;
    eFiles_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanCollisions, "ScanCollisions" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_GetFileName, "GetFileName" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
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

static enum r05_fnresult r05c_GetFileName(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eFileName_b_2;
    struct r05_node *eFileName_e_2;
    // ( & Output e.FileName )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Output, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eFileName_b_1 = bb_1;
    eFileName_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eFileName_b_2, eFileName_e_2, eFileName_b_1, eFileName_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_GetFileName_Aux, "GetFileName_Aux" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_number( n4, 0UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_Output, "Output" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n2 );
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
    struct r05_node *eSource_b_1;
    struct r05_node *eSource_e_1;
    struct r05_node *eOutput_b_1;
    struct r05_node *eOutput_e_1;
    struct r05_node *eOutput_b_2;
    struct r05_node *eOutput_e_2;
    // ( & Source ( e.Source ) e.Output )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Source, &bb_1, &be_1))
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if (! r05_brackets_left(&bb_2, &be_2, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eSource_b_1 = bb_2;
    eSource_e_1 = be_2;
    eOutput_b_1 = bb_1;
    eOutput_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_evar( eOutput_b_2, eOutput_e_2, eOutput_b_1, eOutput_e_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_GetFileName_Aux, "GetFileName_Aux" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_number( n4, 0UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_Source, "Source" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n5, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eOutput_b_2, eOutput_e_2 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eSource_b_1, eSource_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
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

static enum r05_fnresult r05c_GetFileName_Aux(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    // e.FileName '.cpp'
    if (! r05_char_right('p', &bb_0, &be_0))
      break;
    if (! r05_char_right('p', &bb_0, &be_0))
      break;
    if (! r05_char_right('c', &bb_0, &be_0))
      break;
    if (! r05_char_right('.', &bb_0, &be_0))
      break;
    eFileName_b_1 = bb_0;
    eFileName_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoGetFileName, "DoGetFileName" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

static enum r05_fnresult r05c_DoGetFileName(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // e.FileName '/'
    if (! r05_char_right('/', &bb_0, &be_0))
      break;
    // Unused closed variable e.FileName

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
    // e.FileName '\\'
    if (! r05_char_right('\\', &bb_0, &be_0))
      break;
    // Unused closed variable e.FileName

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
    struct r05_node *sLast_1;
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    // e.FileName s.Last
    if (! r05_svar_right(&sLast_1, &bb_0, &be_0))
      break;
    eFileName_b_1 = bb_0;
    eFileName_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoGetFileName, "DoGetFileName" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_Lower, "Lower" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sLast_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Lower(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'A'
    if (! r05_char_left('A', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
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
    // 'B'
    if (! r05_char_left('B', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'b' ) )
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
    // 'C'
    if (! r05_char_left('C', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'c' ) )
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
    // 'D'
    if (! r05_char_left('D', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'd' ) )
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
    // 'E'
    if (! r05_char_left('E', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'e' ) )
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
    // 'F'
    if (! r05_char_left('F', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'f' ) )
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
    // 'G'
    if (! r05_char_left('G', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'g' ) )
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
    // 'H'
    if (! r05_char_left('H', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'h' ) )
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
    // 'I'
    if (! r05_char_left('I', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'i' ) )
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
    // 'J'
    if (! r05_char_left('J', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'j' ) )
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
    // 'K'
    if (! r05_char_left('K', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'k' ) )
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
    // 'L'
    if (! r05_char_left('L', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'l' ) )
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
    // 'M'
    if (! r05_char_left('M', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'm' ) )
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
    // 'N'
    if (! r05_char_left('N', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'n' ) )
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
    // 'O'
    if (! r05_char_left('O', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'o' ) )
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
    // 'P'
    if (! r05_char_left('P', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'p' ) )
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
    // 'Q'
    if (! r05_char_left('Q', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'q' ) )
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
    // 'R'
    if (! r05_char_left('R', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'r' ) )
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
    // 'S'
    if (! r05_char_left('S', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 's' ) )
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
    // 'T'
    if (! r05_char_left('T', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 't' ) )
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
    // 'U'
    if (! r05_char_left('U', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'u' ) )
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
    // 'V'
    if (! r05_char_left('V', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'v' ) )
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
    // 'W'
    if (! r05_char_left('W', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'w' ) )
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
    // 'X'
    if (! r05_char_left('X', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'x' ) )
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
    // 'Y'
    if (! r05_char_left('Y', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'y' ) )
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
    // 'Z'
    if (! r05_char_left('Z', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, 'z' ) )
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
    struct r05_node *sOther_1;
    // s.Other
    if (! r05_svar_left(&sOther_1, &bb_0, &be_0))
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

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanCollisions(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eOutput1_b_1;
    struct r05_node *eOutput1_e_1;
    struct r05_node *eOutput2_b_1;
    struct r05_node *eOutput2_e_1;
    struct r05_node *eFiles_B_b_1;
    struct r05_node *eFiles_B_e_1;
    struct r05_node *eFileName_b_2;
    struct r05_node *eFileName_e_2;
    struct r05_node *eFiles_M_b_1;
    struct r05_node *eFiles_M_e_1;
    // e.Files_B ( e.FileName 0 ( & Output e.Output1 ) ) e.Files_M ( e.FileName 0 ( & Output e.Output2 ) ) e.Files_E
    eFiles_B_b_1 = 0;
    eFiles_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_1 = bb_0;
      struct r05_node *be_1 = be_0;
      struct r05_node *bb_2 = 0;
      struct r05_node *be_2 = 0;
      if (! r05_brackets_left(&bb_2, &be_2, &bb_1, &be_1))
        continue;
      struct r05_node *bb_3 = 0;
      struct r05_node *be_3 = 0;
      if (! r05_brackets_right(&bb_3, &be_3, &bb_2, &be_2))
        continue;
      if (! r05_function_left(r05c_Output, &bb_3, &be_3))
        continue;
      if (! r05_number_right(0UL, &bb_2, &be_2))
        continue;
      eFileName_b_1 = bb_2;
      eFileName_e_1 = be_2;
      eOutput1_b_1 = bb_3;
      eOutput1_e_1 = be_3;
      eFiles_M_b_1 = 0;
      eFiles_M_e_1 = 0;
      refalrts::start_e_loop();
      do {
        struct r05_node *bb_4 = bb_1;
        struct r05_node *be_4 = be_1;
        struct r05_node *bb_5 = 0;
        struct r05_node *be_5 = 0;
        if (! r05_brackets_left(&bb_5, &be_5, &bb_4, &be_4))
          continue;
        struct r05_node *bb_6 = 0;
        struct r05_node *be_6 = 0;
        if (! r05_brackets_right(&bb_6, &be_6, &bb_5, &be_5))
          continue;
        if (! r05_function_left(r05c_Output, &bb_6, &be_6))
          continue;
        if (! r05_number_right(0UL, &bb_5, &be_5))
          continue;
        if (! r05_repeated_evar_left(&eFileName_b_2, &eFileName_e_2, eFileName_b_1, eFileName_e_1, &bb_5, &be_5))
          continue;
        if (! r05_empty_seq(bb_5, be_5))
          continue;
        eOutput2_b_1 = bb_6;
        eOutput2_e_1 = be_6;
        // Unused closed variable e.Files_E

        refalrts::reset_allocator();
        struct r05_node *res = arg_begin;
        struct r05_node *n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return R05_NO_MEMORY;
        struct r05_node *n1 = 0;
        if( ! refalrts::alloc_name( n1, r05c_WriteLine, "WriteLine" ) )
          return R05_NO_MEMORY;
        struct r05_node *n2 = 0;
        struct r05_node *n3 = 0;
        if( ! refalrts::alloc_chars( n2, n3, "COMMAND LINE ERROR: output files ", 33) )
          return R05_NO_MEMORY;
        struct r05_node *n4 = 0;
        struct r05_node *n5 = 0;
        if( ! refalrts::alloc_chars( n4, n5, " and ", 5) )
          return R05_NO_MEMORY;
        struct r05_node *n6 = 0;
        struct r05_node *n7 = 0;
        if( ! refalrts::alloc_chars( n6, n7, " has some filename ", 19) )
          return R05_NO_MEMORY;
        struct r05_node *n8 = 0;
        if( ! refalrts::alloc_close_call( n8 ) )
          return R05_NO_MEMORY;
        struct r05_node *n9 = 0;
        if( ! refalrts::alloc_open_call( n9 ) )
          return R05_NO_MEMORY;
        struct r05_node *n10 = 0;
        if( ! refalrts::alloc_name( n10, r05c_Exit, "Exit" ) )
          return R05_NO_MEMORY;
        struct r05_node *n11 = 0;
        if( ! refalrts::alloc_number( n11, 1UL ) )
          return R05_NO_MEMORY;
        struct r05_node *n12 = 0;
        if( ! refalrts::alloc_close_call( n12 ) )
          return R05_NO_MEMORY;
        refalrts::push_stack( n12 );
        refalrts::push_stack( n9 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_elem( res, n9 );
        refalrts::push_stack( n8 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
        res = refalrts::splice_evar( res, n6, n7 );
        res = refalrts::splice_evar( res, eOutput2_b_1, eOutput2_e_1 );
        res = refalrts::splice_evar( res, n4, n5 );
        res = refalrts::splice_evar( res, eOutput1_b_1, eOutput1_e_1 );
        res = refalrts::splice_evar( res, n2, n3 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        r05_use(&res);
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return R05_SUCCESS;
      } while (r05_open_evar_advance(&eFiles_M_b_1, &eFiles_M_e_1, &bb_1, &be_1));
    } while (r05_open_evar_advance(&eFiles_B_b_1, &eFiles_B_e_1, &bb_0, &be_0));
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFiles_B_b_1;
    struct r05_node *eFiles_B_e_1;
    struct r05_node *tLocation_1;
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eFileName_b_2;
    struct r05_node *eFileName_e_2;
    struct r05_node *eFiles_M_b_1;
    struct r05_node *eFiles_M_e_1;
    struct r05_node *eOutput_b_1;
    struct r05_node *eOutput_e_1;
    struct r05_node *eFiles_E_b_1;
    struct r05_node *eFiles_E_e_1;
    struct r05_node *eFileName_b_3;
    struct r05_node *eFileName_e_3;
    // e.Files_B ( e.FileName 0 t.Location ) e.Files_M ( e.FileName 0 ( & Output e.Output ) ) e.Files_E
    eFiles_B_b_1 = 0;
    eFiles_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_1 = bb_0;
      struct r05_node *be_1 = be_0;
      struct r05_node *bb_2 = 0;
      struct r05_node *be_2 = 0;
      if (! r05_brackets_left(&bb_2, &be_2, &bb_1, &be_1))
        continue;
      if (! r05_tvar_right(&tLocation_1, &bb_2, &be_2))
        continue;
      if (! r05_number_right(0UL, &bb_2, &be_2))
        continue;
      eFileName_b_1 = bb_2;
      eFileName_e_1 = be_2;
      eFiles_M_b_1 = 0;
      eFiles_M_e_1 = 0;
      refalrts::start_e_loop();
      do {
        struct r05_node *bb_3 = bb_1;
        struct r05_node *be_3 = be_1;
        struct r05_node *bb_4 = 0;
        struct r05_node *be_4 = 0;
        if (! r05_brackets_left(&bb_4, &be_4, &bb_3, &be_3))
          continue;
        struct r05_node *bb_5 = 0;
        struct r05_node *be_5 = 0;
        if (! r05_brackets_right(&bb_5, &be_5, &bb_4, &be_4))
          continue;
        if (! r05_function_left(r05c_Output, &bb_5, &be_5))
          continue;
        if (! r05_number_right(0UL, &bb_4, &be_4))
          continue;
        if (! r05_repeated_evar_left(&eFileName_b_2, &eFileName_e_2, eFileName_b_1, eFileName_e_1, &bb_4, &be_4))
          continue;
        if (! r05_empty_seq(bb_4, be_4))
          continue;
        eOutput_b_1 = bb_5;
        eOutput_e_1 = be_5;
        eFiles_E_b_1 = bb_3;
        eFiles_E_e_1 = be_3;

        refalrts::reset_allocator();
        struct r05_node *res = arg_begin;
        if( ! refalrts::copy_evar( eFileName_b_3, eFileName_e_3, eFileName_b_2, eFileName_e_2 ) )
          return R05_NO_MEMORY;
        struct r05_node *n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return R05_NO_MEMORY;
        struct r05_node *n1 = 0;
        if( ! refalrts::alloc_name( n1, r05c_ScanCollisions, "ScanCollisions" ) )
          return R05_NO_MEMORY;
        struct r05_node *n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return R05_NO_MEMORY;
        struct r05_node *n3 = 0;
        if( ! refalrts::alloc_number( n3, 1UL ) )
          return R05_NO_MEMORY;
        struct r05_node *n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return R05_NO_MEMORY;
        struct r05_node *n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return R05_NO_MEMORY;
        struct r05_node *n6 = 0;
        if( ! refalrts::alloc_number( n6, 0UL ) )
          return R05_NO_MEMORY;
        struct r05_node *n7 = 0;
        if( ! refalrts::alloc_open_bracket( n7 ) )
          return R05_NO_MEMORY;
        struct r05_node *n8 = 0;
        if( ! refalrts::alloc_name( n8, r05c_Output, "Output" ) )
          return R05_NO_MEMORY;
        struct r05_node *n9 = 0;
        if( ! refalrts::alloc_close_bracket( n9 ) )
          return R05_NO_MEMORY;
        struct r05_node *n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return R05_NO_MEMORY;
        struct r05_node *n11 = 0;
        if( ! refalrts::alloc_open_call( n11 ) )
          return R05_NO_MEMORY;
        struct r05_node *n12 = 0;
        if( ! refalrts::alloc_name( n12, r05c_Renumerate, "Renumerate" ) )
          return R05_NO_MEMORY;
        struct r05_node *n13 = 0;
        if( ! refalrts::alloc_open_bracket( n13 ) )
          return R05_NO_MEMORY;
        struct r05_node *n14 = 0;
        if( ! refalrts::alloc_close_bracket( n14 ) )
          return R05_NO_MEMORY;
        struct r05_node *n15 = 0;
        if( ! refalrts::alloc_close_call( n15 ) )
          return R05_NO_MEMORY;
        struct r05_node *n16 = 0;
        if( ! refalrts::alloc_close_call( n16 ) )
          return R05_NO_MEMORY;
        refalrts::push_stack( n16 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n16 );
        refalrts::push_stack( n15 );
        refalrts::push_stack( n11 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
        refalrts::link_brackets( n13, n14 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_evar( res, eFileName_b_3, eFileName_e_3 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n5, n10 );
        res = refalrts::splice_elem( res, n10 );
        refalrts::link_brackets( n7, n9 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, tLocation_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eFiles_B_b_1, eFiles_B_e_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        r05_use(&res);
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return R05_SUCCESS;
      } while (r05_open_evar_advance(&eFiles_M_b_1, &eFiles_M_e_1, &bb_1, &be_1));
    } while (r05_open_evar_advance(&eFiles_B_b_1, &eFiles_B_e_1, &bb_0, &be_0));
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFiles_B_b_1;
    struct r05_node *eFiles_B_e_1;
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eFileName_b_2;
    struct r05_node *eFileName_e_2;
    struct r05_node *eOutput_b_1;
    struct r05_node *eOutput_e_1;
    struct r05_node *eFiles_M_b_1;
    struct r05_node *eFiles_M_e_1;
    struct r05_node *eFiles_E_b_1;
    struct r05_node *eFiles_E_e_1;
    struct r05_node *tLocation_1;
    struct r05_node *eFileName_b_3;
    struct r05_node *eFileName_e_3;
    // e.Files_B ( e.FileName 0 ( & Output e.Output ) ) e.Files_M ( e.FileName 0 t.Location ) e.Files_E
    eFiles_B_b_1 = 0;
    eFiles_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_1 = bb_0;
      struct r05_node *be_1 = be_0;
      struct r05_node *bb_2 = 0;
      struct r05_node *be_2 = 0;
      if (! r05_brackets_left(&bb_2, &be_2, &bb_1, &be_1))
        continue;
      struct r05_node *bb_3 = 0;
      struct r05_node *be_3 = 0;
      if (! r05_brackets_right(&bb_3, &be_3, &bb_2, &be_2))
        continue;
      if (! r05_function_left(r05c_Output, &bb_3, &be_3))
        continue;
      if (! r05_number_right(0UL, &bb_2, &be_2))
        continue;
      eFileName_b_1 = bb_2;
      eFileName_e_1 = be_2;
      eOutput_b_1 = bb_3;
      eOutput_e_1 = be_3;
      eFiles_M_b_1 = 0;
      eFiles_M_e_1 = 0;
      refalrts::start_e_loop();
      do {
        struct r05_node *bb_4 = bb_1;
        struct r05_node *be_4 = be_1;
        struct r05_node *bb_5 = 0;
        struct r05_node *be_5 = 0;
        if (! r05_brackets_left(&bb_5, &be_5, &bb_4, &be_4))
          continue;
        if (! r05_repeated_evar_left(&eFileName_b_2, &eFileName_e_2, eFileName_b_1, eFileName_e_1, &bb_5, &be_5))
          continue;
        if (! r05_number_left(0UL, &bb_5, &be_5))
          continue;
        eFiles_E_b_1 = bb_4;
        eFiles_E_e_1 = be_4;
        if (! r05_tvar_left(&tLocation_1, &bb_5, &be_5))
          continue;
        if (! r05_empty_seq(bb_5, be_5))
          continue;

        refalrts::reset_allocator();
        struct r05_node *res = arg_begin;
        if( ! refalrts::copy_evar( eFileName_b_3, eFileName_e_3, eFileName_b_2, eFileName_e_2 ) )
          return R05_NO_MEMORY;
        struct r05_node *n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return R05_NO_MEMORY;
        struct r05_node *n1 = 0;
        if( ! refalrts::alloc_name( n1, r05c_ScanCollisions, "ScanCollisions" ) )
          return R05_NO_MEMORY;
        struct r05_node *n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return R05_NO_MEMORY;
        struct r05_node *n3 = 0;
        if( ! refalrts::alloc_number( n3, 0UL ) )
          return R05_NO_MEMORY;
        struct r05_node *n4 = 0;
        if( ! refalrts::alloc_open_bracket( n4 ) )
          return R05_NO_MEMORY;
        struct r05_node *n5 = 0;
        if( ! refalrts::alloc_name( n5, r05c_Output, "Output" ) )
          return R05_NO_MEMORY;
        struct r05_node *n6 = 0;
        if( ! refalrts::alloc_close_bracket( n6 ) )
          return R05_NO_MEMORY;
        struct r05_node *n7 = 0;
        if( ! refalrts::alloc_close_bracket( n7 ) )
          return R05_NO_MEMORY;
        struct r05_node *n8 = 0;
        if( ! refalrts::alloc_open_bracket( n8 ) )
          return R05_NO_MEMORY;
        struct r05_node *n9 = 0;
        if( ! refalrts::alloc_number( n9, 1UL ) )
          return R05_NO_MEMORY;
        struct r05_node *n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return R05_NO_MEMORY;
        struct r05_node *n11 = 0;
        if( ! refalrts::alloc_open_call( n11 ) )
          return R05_NO_MEMORY;
        struct r05_node *n12 = 0;
        if( ! refalrts::alloc_name( n12, r05c_Renumerate, "Renumerate" ) )
          return R05_NO_MEMORY;
        struct r05_node *n13 = 0;
        if( ! refalrts::alloc_open_bracket( n13 ) )
          return R05_NO_MEMORY;
        struct r05_node *n14 = 0;
        if( ! refalrts::alloc_close_bracket( n14 ) )
          return R05_NO_MEMORY;
        struct r05_node *n15 = 0;
        if( ! refalrts::alloc_close_call( n15 ) )
          return R05_NO_MEMORY;
        struct r05_node *n16 = 0;
        if( ! refalrts::alloc_close_call( n16 ) )
          return R05_NO_MEMORY;
        refalrts::push_stack( n16 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n16 );
        refalrts::push_stack( n15 );
        refalrts::push_stack( n11 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
        refalrts::link_brackets( n13, n14 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_evar( res, eFileName_b_3, eFileName_e_3 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n8, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_stvar( res, tLocation_1 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::link_brackets( n2, n7 );
        res = refalrts::splice_elem( res, n7 );
        refalrts::link_brackets( n4, n6 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eFiles_B_b_1, eFiles_B_e_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        r05_use(&res);
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return R05_SUCCESS;
      } while (r05_open_evar_advance(&eFiles_M_b_1, &eFiles_M_e_1, &bb_1, &be_1));
    } while (r05_open_evar_advance(&eFiles_B_b_1, &eFiles_B_e_1, &bb_0, &be_0));
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFiles_B_b_1;
    struct r05_node *eFiles_B_e_1;
    struct r05_node *tLocation1_1;
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eFileName_b_2;
    struct r05_node *eFileName_e_2;
    struct r05_node *eFiles_M_b_1;
    struct r05_node *eFiles_M_e_1;
    struct r05_node *eFiles_E_b_1;
    struct r05_node *eFiles_E_e_1;
    struct r05_node *tLocation2_1;
    struct r05_node *eFileName_b_3;
    struct r05_node *eFileName_e_3;
    // e.Files_B ( e.FileName 0 t.Location1 ) e.Files_M ( e.FileName 0 t.Location2 ) e.Files_E
    eFiles_B_b_1 = 0;
    eFiles_B_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_1 = bb_0;
      struct r05_node *be_1 = be_0;
      struct r05_node *bb_2 = 0;
      struct r05_node *be_2 = 0;
      if (! r05_brackets_left(&bb_2, &be_2, &bb_1, &be_1))
        continue;
      if (! r05_tvar_right(&tLocation1_1, &bb_2, &be_2))
        continue;
      if (! r05_number_right(0UL, &bb_2, &be_2))
        continue;
      eFileName_b_1 = bb_2;
      eFileName_e_1 = be_2;
      eFiles_M_b_1 = 0;
      eFiles_M_e_1 = 0;
      refalrts::start_e_loop();
      do {
        struct r05_node *bb_3 = bb_1;
        struct r05_node *be_3 = be_1;
        struct r05_node *bb_4 = 0;
        struct r05_node *be_4 = 0;
        if (! r05_brackets_left(&bb_4, &be_4, &bb_3, &be_3))
          continue;
        if (! r05_repeated_evar_left(&eFileName_b_2, &eFileName_e_2, eFileName_b_1, eFileName_e_1, &bb_4, &be_4))
          continue;
        if (! r05_number_left(0UL, &bb_4, &be_4))
          continue;
        eFiles_E_b_1 = bb_3;
        eFiles_E_e_1 = be_3;
        if (! r05_tvar_left(&tLocation2_1, &bb_4, &be_4))
          continue;
        if (! r05_empty_seq(bb_4, be_4))
          continue;

        refalrts::reset_allocator();
        struct r05_node *res = arg_begin;
        if( ! refalrts::copy_evar( eFileName_b_3, eFileName_e_3, eFileName_b_2, eFileName_e_2 ) )
          return R05_NO_MEMORY;
        struct r05_node *n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return R05_NO_MEMORY;
        struct r05_node *n1 = 0;
        if( ! refalrts::alloc_name( n1, r05c_ScanCollisions, "ScanCollisions" ) )
          return R05_NO_MEMORY;
        struct r05_node *n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return R05_NO_MEMORY;
        struct r05_node *n3 = 0;
        if( ! refalrts::alloc_number( n3, 0UL ) )
          return R05_NO_MEMORY;
        struct r05_node *n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return R05_NO_MEMORY;
        struct r05_node *n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return R05_NO_MEMORY;
        struct r05_node *n6 = 0;
        if( ! refalrts::alloc_number( n6, 1UL ) )
          return R05_NO_MEMORY;
        struct r05_node *n7 = 0;
        if( ! refalrts::alloc_close_bracket( n7 ) )
          return R05_NO_MEMORY;
        struct r05_node *n8 = 0;
        if( ! refalrts::alloc_open_call( n8 ) )
          return R05_NO_MEMORY;
        struct r05_node *n9 = 0;
        if( ! refalrts::alloc_name( n9, r05c_Renumerate, "Renumerate" ) )
          return R05_NO_MEMORY;
        struct r05_node *n10 = 0;
        if( ! refalrts::alloc_open_bracket( n10 ) )
          return R05_NO_MEMORY;
        struct r05_node *n11 = 0;
        if( ! refalrts::alloc_close_bracket( n11 ) )
          return R05_NO_MEMORY;
        struct r05_node *n12 = 0;
        if( ! refalrts::alloc_close_call( n12 ) )
          return R05_NO_MEMORY;
        struct r05_node *n13 = 0;
        if( ! refalrts::alloc_close_call( n13 ) )
          return R05_NO_MEMORY;
        refalrts::push_stack( n13 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n13 );
        refalrts::push_stack( n12 );
        refalrts::push_stack( n8 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_evar( res, eFiles_E_b_1, eFiles_E_e_1 );
        refalrts::link_brackets( n10, n11 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_evar( res, eFileName_b_3, eFileName_e_3 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_elem( res, n8 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_stvar( res, tLocation2_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_evar( res, eFileName_b_2, eFileName_e_2 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eFiles_M_b_1, eFiles_M_e_1 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, tLocation1_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eFiles_B_b_1, eFiles_B_e_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        r05_use(&res);
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return R05_SUCCESS;
      } while (r05_open_evar_advance(&eFiles_M_b_1, &eFiles_M_e_1, &bb_1, &be_1));
    } while (r05_open_evar_advance(&eFiles_B_b_1, &eFiles_B_e_1, &bb_0, &be_0));
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFiles_b_1;
    struct r05_node *eFiles_e_1;
    // e.Files
    eFiles_b_1 = bb_0;
    eFiles_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_RestoreName, "RestoreName" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
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

static enum r05_fnresult r05c_Renumerate(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eFiles_b_1;
    struct r05_node *eFiles_e_1;
    // ( e.FileName ) e.Files
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eFileName_b_1 = bb_1;
    eFileName_e_1 = be_1;
    eFiles_b_1 = bb_0;
    eFiles_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DelAccumulator, "DelAccumulator" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_MapReduce, "MapReduce" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_Renumerate_Each, "Renumerate_Each" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_number( n7, 2UL ) )
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
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
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

static enum r05_fnresult r05c_Renumerate_Each(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eSource_b_1;
    struct r05_node *eSource_e_1;
    struct r05_node *eOutput_b_1;
    struct r05_node *eOutput_e_1;
    struct r05_node *sNextNumber_1;
    struct r05_node *eFileName_b_2;
    struct r05_node *eFileName_e_2;
    struct r05_node *sNextNumber_2;
    // e.FileName s.NextNumber ( e.FileName 0 ( & Source ( e.Source ) e.Output ) )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_right(&bb_1, &be_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if (! r05_brackets_right(&bb_2, &be_2, &bb_1, &be_1))
      break;
    if (! r05_function_left(r05c_Source, &bb_2, &be_2))
      break;
    if (! r05_number_right(0UL, &bb_1, &be_1))
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if (! r05_brackets_left(&bb_3, &be_3, &bb_2, &be_2))
      break;
    eFileName_b_1 = bb_1;
    eFileName_e_1 = be_1;
    if (! r05_repeated_evar_left(&eFileName_b_2, &eFileName_e_2, eFileName_b_1, eFileName_e_1, &bb_0, &be_0))
      break;
    eSource_b_1 = bb_3;
    eSource_e_1 = be_3;
    eOutput_b_1 = bb_2;
    eOutput_e_1 = be_2;
    if (! r05_svar_left(&sNextNumber_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sNextNumber_2, sNextNumber_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_Source, "Source" ) )
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
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n3, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eSource_b_1, eSource_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNextNumber_2 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNextNumber_1 );
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
    struct r05_node *tNextFile_1;
    struct r05_node *sNextNumber_1;
    // e.FileName s.NextNumber t.NextFile
    if (! r05_tvar_right(&tNextFile_1, &bb_0, &be_0))
      break;
    if (! r05_svar_right(&sNextNumber_1, &bb_0, &be_0))
      break;
    // Unused closed variable e.FileName

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_stvar( res, tNextFile_1 );
    res = refalrts::splice_stvar( res, sNextNumber_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_RestoreName(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eOutputName_b_1;
    struct r05_node *eOutputName_e_1;
    struct r05_node *sNumber_1;
    // ( e.FileName s.Number ( & Output e.OutputName ) )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if (! r05_brackets_right(&bb_2, &be_2, &bb_1, &be_1))
      break;
    if (! r05_function_left(r05c_Output, &bb_2, &be_2))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eOutputName_b_1 = bb_2;
    eOutputName_e_1 = be_2;
    if (! r05_svar_right(&sNumber_1, &bb_1, &be_1))
      break;
    // Unused closed variable e.FileName

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Output, "Output" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eOutputName_b_1, eOutputName_e_1 );
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
    struct r05_node *eSource_b_1;
    struct r05_node *eSource_e_1;
    struct r05_node *eOutput_b_1;
    struct r05_node *eOutput_e_1;
    // ( e.FileName 0 ( & Source ( e.Source ) e.Output ) )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if (! r05_brackets_right(&bb_2, &be_2, &bb_1, &be_1))
      break;
    if (! r05_function_left(r05c_Source, &bb_2, &be_2))
      break;
    if (! r05_number_right(0UL, &bb_1, &be_1))
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if (! r05_brackets_left(&bb_3, &be_3, &bb_2, &be_2))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    // Unused closed variable e.FileName
    eSource_b_1 = bb_3;
    eSource_e_1 = be_3;
    eOutput_b_1 = bb_2;
    eOutput_e_1 = be_2;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Source, "Source" ) )
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
    res = refalrts::splice_evar( res, eOutput_b_1, eOutput_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eSource_b_1, eSource_e_1 );
    res = refalrts::splice_elem( res, n2 );
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
    struct r05_node *eSource_b_1;
    struct r05_node *eSource_e_1;
    struct r05_node *eOutName_b_1;
    struct r05_node *eOutName_e_1;
    struct r05_node *sNumber_1;
    // ( e.FileName s.Number ( & Source ( e.Source ) e.OutName '.cpp' ) )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if (! r05_brackets_right(&bb_2, &be_2, &bb_1, &be_1))
      break;
    if (! r05_function_left(r05c_Source, &bb_2, &be_2))
      break;
    if (! r05_char_right('p', &bb_2, &be_2))
      break;
    if (! r05_char_right('p', &bb_2, &be_2))
      break;
    if (! r05_char_right('c', &bb_2, &be_2))
      break;
    if (! r05_char_right('.', &bb_2, &be_2))
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if (! r05_brackets_left(&bb_3, &be_3, &bb_2, &be_2))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eSource_b_1 = bb_3;
    eSource_e_1 = be_3;
    eOutName_b_1 = bb_2;
    eOutName_e_1 = be_2;
    if (! r05_svar_right(&sNumber_1, &bb_1, &be_1))
      break;
    // Unused closed variable e.FileName

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Source, "Source" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_char( n4, '@' ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_StrFromInt, "StrFromInt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_chars( n8, n9, ".cpp", 4) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, n8, n9 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eOutName_b_1, eOutName_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eSource_b_1, eSource_e_1 );
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

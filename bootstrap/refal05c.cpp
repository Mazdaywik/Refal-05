/* Automatically generated file. Don't edit! */
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
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Main, "Main");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_ArgList, "ArgList");
    r05_alloc_close_call(n[2]);
    r05_alloc_close_call(n[3]);
    r05_push_stack(n[3]);
    r05_push_stack(n[0]);
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

static enum r05_fnresult r05c_Main(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eProgName_b_1;
    struct r05_node *eProgName_e_1;
    struct r05_node *eConfig_b_1;
    struct r05_node *eConfig_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.ProgName  ) ( '@' e.Config  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[0], &be[0]))
      break;
    if (! r05_char_left('@', &bb[2], &be[2]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eProgName_b_1 = bb[1];
    eProgName_e_1 = be[1];
    eConfig_b_1 = bb[2];
    eConfig_e_1 = be[2];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Main, "Main");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_LoadFile, "LoadFile");
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_alloc_close_call(n[7]);
    r05_push_stack(n[7]);
    r05_push_stack(n[0]);
    r05_push_stack(n[6]);
    r05_push_stack(n[4]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_evar(n[2], eProgName_b_1, eProgName_e_1);
    r05_splice_evar(n[5], eConfig_b_1, eConfig_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eArguments_b_1;
    struct r05_node *eArguments_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.ProgName  ) e.Arguments */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    /* Unused closed variable e.ProgName*/
    eArguments_b_1 = bb[0];
    eArguments_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_FindFiles_Compilers, "FindFiles_Compilers");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_ParseCommandLine, "ParseCommandLine");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_call(n[3]);
    r05_alloc_close_call(n[4]);
    r05_push_stack(n[4]);
    r05_push_stack(n[0]);
    r05_push_stack(n[3]);
    r05_push_stack(n[1]);
    r05_splice_evar(n[2], eArguments_b_1, eArguments_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_FindFiles_Compilers(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eMessage_b_1;
    struct r05_node *eMessage_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & CmdLineError e.Message  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_CmdLineError, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eMessage_b_1 = bb[1];
    eMessage_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_WriteLine, "WriteLine");
    r05_alloc_chars("COMMAND LINE ERROR: ", 20);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eMessage_b_1, eMessage_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tCompiler_1;
    struct r05_node *eFolders_b_1;
    struct r05_node *eFolders_e_1;
    struct r05_node *eFiles_b_1;
    struct r05_node *eFiles_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[9] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Compiler ( e.Folders  ) e.Files */
    if (! r05_tvar_left(&tCompiler_1, &bb[0], &be[0]))
      break;
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eFolders_b_1 = bb[1];
    eFolders_e_1 = be[1];
    eFiles_b_1 = bb[0];
    eFiles_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_FindFiles_Compilers_SwFound, "FindFiles_Compilers_SwFound");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_FindFiles, "FindFiles");
    r05_alloc_open_bracket(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_close_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_call(n[7]);
    r05_alloc_close_call(n[8]);
    r05_push_stack(n[8]);
    r05_push_stack(n[0]);
    r05_push_stack(n[7]);
    r05_push_stack(n[2]);
    r05_link_brackets(n[3], n[5]);
    r05_splice_tvar(n[1], tCompiler_1);
    r05_splice_evar(n[4], eFolders_b_1, eFolders_e_1);
    r05_splice_evar(n[6], eFiles_b_1, eFiles_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_FindFiles_Compilers_SwFound(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tCompiler_1;
    struct r05_node *eFiles_B_b_1;
    struct r05_node *eFiles_B_e_1;
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eFiles_E_b_1;
    struct r05_node *eFiles_E_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[6] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Compiler e.Files_B ( & NotFound e.FileName  ) e.Files_E */
    if (! r05_tvar_left(&tCompiler_1, &bb[0], &be[0]))
      break;
    eFiles_B_b_1 = 0;
    eFiles_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[1] = bb[0];
      be[1] = be[0];
      if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
        continue;
      if (! r05_function_left(r05c_NotFound, &bb[2], &be[2]))
        continue;
      eFileName_b_1 = bb[2];
      eFileName_e_1 = be[2];
      eFiles_E_b_1 = bb[1];
      eFiles_E_e_1 = be[1];

      r05_reset_allocator();
      r05_alloc_open_call(n[0]);
      r05_alloc_function(r05c_Map, "Map");
      r05_alloc_function(r05c_PrintNotFound, "PrintNotFound");
      r05_alloc_open_bracket(n[1]);
      r05_alloc_function(r05c_NotFound, "NotFound");
      r05_alloc_insert_pos(n[2]);
      r05_alloc_close_bracket(n[3]);
      r05_alloc_insert_pos(n[4]);
      r05_alloc_close_call(n[5]);
      r05_push_stack(n[5]);
      r05_push_stack(n[0]);
      r05_link_brackets(n[1], n[3]);
      r05_splice_evar(n[2], eFileName_b_1, eFileName_e_1);
      r05_splice_evar(n[4], eFiles_E_b_1, eFiles_E_e_1);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eFiles_B_b_1, &eFiles_B_e_1, &bb[0], &be[0]));
  } while ( 0 );

  do {
    struct r05_node *tCompiler_1;
    struct r05_node *eFoundFiles_b_1;
    struct r05_node *eFoundFiles_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Compiler e.FoundFiles */
    if (! r05_tvar_left(&tCompiler_1, &bb[0], &be[0]))
      break;
    eFoundFiles_b_1 = bb[0];
    eFoundFiles_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_CheckCompilationResult, "CheckCompilationResult");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_Map, "Map");
    r05_alloc_function(r05c_ProcessEachSource, "ProcessEachSource");
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_RenameFiles, "RenameFiles");
    r05_alloc_tvar(tCompiler_1);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_close_call(n[5]);
    r05_alloc_close_call(n[6]);
    r05_alloc_close_call(n[7]);
    r05_push_stack(n[7]);
    r05_push_stack(n[0]);
    r05_push_stack(n[6]);
    r05_push_stack(n[2]);
    r05_push_stack(n[5]);
    r05_push_stack(n[3]);
    r05_splice_tvar(n[1], tCompiler_1);
    r05_splice_evar(n[4], eFoundFiles_b_1, eFoundFiles_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_PrintNotFound(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & NotFound e.FileName  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_NotFound, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eFileName_b_1 = bb[1];
    eFileName_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_WriteLine, "WriteLine");
    r05_alloc_chars("COMMAND LINE ERROR: file ", 25);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_chars(" not found", 10);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eFileName_b_1, eFileName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & Output e.FileName  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_Output, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    /* Unused closed variable e.FileName*/

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & Source ( e.Source  ) e.Output  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_Source, &bb[1], &be[1]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    /* Unused closed variable e.Source*/
    /* Unused closed variable e.Output*/

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ProcessEachSource(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eOutputName_b_1;
    struct r05_node *eOutputName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & Output e.OutputName  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_Output, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eOutputName_b_1 = bb[1];
    eOutputName_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_WriteLine, "WriteLine");
    r05_alloc_chars("+Linking ", 9);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_alloc_open_bracket(n[3]);
    r05_alloc_evar(eOutputName_b_1, eOutputName_e_1);
    r05_alloc_close_bracket(n[4]);
    r05_link_brackets(n[3], n[4]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eOutputName_b_1, eOutputName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eSource_b_1;
    struct r05_node *eSource_e_1;
    struct r05_node *eOutputName_b_1;
    struct r05_node *eOutputName_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[10] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & Source ( e.Source  ) e.OutputName  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_Source, &bb[1], &be[1]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eSource_b_1 = bb[2];
    eSource_e_1 = be[2];
    eOutputName_b_1 = bb[1];
    eOutputName_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_WriteLine, "WriteLine");
    r05_alloc_chars("*Compiling ", 11);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_char(':');
    r05_alloc_close_call(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_ProcessEachSource_SwSuccess, "ProcessEachSource_SwSuccess");
    r05_alloc_open_call(n[4]);
    r05_alloc_function(r05c_CompileFile, "CompileFile");
    r05_alloc_open_bracket(n[5]);
    r05_alloc_evar(eSource_b_1, eSource_e_1);
    r05_alloc_close_bracket(n[6]);
    r05_alloc_insert_pos(n[7]);
    r05_alloc_close_call(n[8]);
    r05_alloc_close_call(n[9]);
    r05_push_stack(n[9]);
    r05_push_stack(n[3]);
    r05_push_stack(n[8]);
    r05_push_stack(n[4]);
    r05_link_brackets(n[5], n[6]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eSource_b_1, eSource_e_1);
    r05_splice_evar(n[7], eOutputName_b_1, eOutputName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ProcessEachSource_SwSuccess(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eOutputName_b_1;
    struct r05_node *eOutputName_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & Success e.OutputName */
    if (! r05_function_left(r05c_Success, &bb[0], &be[0]))
      break;
    eOutputName_b_1 = bb[0];
    eOutputName_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], eOutputName_b_1, eOutputName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* & Fails */
    if (! r05_function_left(r05c_Fails, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_function(r05c_Fails, "Fails");
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_CheckCompilationResult(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *tCompiler_1;
    struct r05_node *eOutputs_B_b_1;
    struct r05_node *eOutputs_B_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[2] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Compiler e.Outputs_B & Fails e.Outputs_E */
    if (! r05_tvar_left(&tCompiler_1, &bb[0], &be[0]))
      break;
    eOutputs_B_b_1 = 0;
    eOutputs_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[1] = bb[0];
      be[1] = be[0];
      if (! r05_function_left(r05c_Fails, &bb[1], &be[1]))
        continue;
      /* Unused closed variable e.Outputs_E*/

      r05_reset_allocator();
      r05_alloc_open_call(n[0]);
      r05_alloc_function(r05c_WriteLine, "WriteLine");
      r05_alloc_chars("*** COMPILATION FAILED ***", 26);
      r05_alloc_close_call(n[1]);
      r05_push_stack(n[1]);
      r05_push_stack(n[0]);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eOutputs_B_b_1, &eOutputs_B_e_1, &bb[0], &be[0]));
  } while ( 0 );

  do {
    struct r05_node *tCompiler_1;
    struct r05_node *eOutputs_b_1;
    struct r05_node *eOutputs_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* t.Compiler e.Outputs */
    if (! r05_tvar_left(&tCompiler_1, &bb[0], &be[0]))
      break;
    eOutputs_b_1 = bb[0];
    eOutputs_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Link, "Link");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_WriteLine, "WriteLine");
    r05_alloc_chars("*** Compilation successed ***", 29);
    r05_alloc_close_call(n[4]);
    r05_push_stack(n[4]);
    r05_push_stack(n[3]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_tvar(n[1], tCompiler_1);
    r05_splice_evar(n[1], eOutputs_b_1, eOutputs_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Link(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eCommandLine_b_1;
    struct r05_node *eCommandLine_e_1;
    struct r05_node *eFiles_b_1;
    struct r05_node *eFiles_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[6] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & CompileCommand e.CommandLine  ) e.Files */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_CompileCommand, &bb[1], &be[1]))
      break;
    eCommandLine_b_1 = bb[1];
    eCommandLine_e_1 = be[1];
    eFiles_b_1 = bb[0];
    eFiles_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_System, "System");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_open_call(n[2]);
    r05_alloc_function(r05c_Map, "Map");
    r05_alloc_function(r05c_QuoteFile, "QuoteFile");
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_call(n[4]);
    r05_alloc_close_call(n[5]);
    r05_push_stack(n[5]);
    r05_push_stack(n[0]);
    r05_push_stack(n[4]);
    r05_push_stack(n[2]);
    r05_splice_evar(n[1], eCommandLine_b_1, eCommandLine_e_1);
    r05_splice_evar(n[3], eFiles_b_1, eFiles_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & NoCompile  ) e.Files */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_NoCompile, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;
    /* Unused closed variable e.Files*/

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_QuoteFile(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.FileName  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eFileName_b_1 = bb[1];
    eFileName_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_chars(" \"", 2);
    r05_alloc_insert_pos(n[0]);
    r05_alloc_char('\"');
    r05_splice_evar(n[0], eFileName_b_1, eFileName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_RenameFiles(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eFiles_b_1;
    struct r05_node *eFiles_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & NoCompile  ) e.Files */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_NoCompile, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[1], be[1]))
      break;
    eFiles_b_1 = bb[0];
    eFiles_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_insert_pos(n[0]);
    r05_splice_evar(n[0], eFiles_b_1, eFiles_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eFiles_b_1;
    struct r05_node *eFiles_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & CompileCommand e.CommandLine  ) e.Files */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_CompileCommand, &bb[1], &be[1]))
      break;
    /* Unused closed variable e.CommandLine*/
    eFiles_b_1 = bb[0];
    eFiles_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_ScanCollisions, "ScanCollisions");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_Map, "Map");
    r05_alloc_function(r05c_GetFileName, "GetFileName");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_call(n[3]);
    r05_alloc_close_call(n[4]);
    r05_push_stack(n[4]);
    r05_push_stack(n[0]);
    r05_push_stack(n[3]);
    r05_push_stack(n[1]);
    r05_splice_evar(n[2], eFiles_b_1, eFiles_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_GetFileName(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[7] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & Output e.FileName  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_Output, &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eFileName_b_1 = bb[1];
    eFileName_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_GetFileName_Aux, "GetFileName_Aux");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_call(n[3]);
    r05_alloc_number(0UL);
    r05_alloc_open_bracket(n[4]);
    r05_alloc_function(r05c_Output, "Output");
    r05_alloc_evar(eFileName_b_1, eFileName_e_1);
    r05_alloc_close_bracket(n[5]);
    r05_alloc_close_bracket(n[6]);
    r05_link_brackets(n[0], n[6]);
    r05_link_brackets(n[4], n[5]);
    r05_push_stack(n[3]);
    r05_push_stack(n[1]);
    r05_splice_evar(n[2], eFileName_b_1, eFileName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eSource_b_1;
    struct r05_node *eSource_e_1;
    struct r05_node *eOutput_b_1;
    struct r05_node *eOutput_e_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[10] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( & Source ( e.Source  ) e.Output  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_function_left(r05c_Source, &bb[1], &be[1]))
      break;
    if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eSource_b_1 = bb[2];
    eSource_e_1 = be[2];
    eOutput_b_1 = bb[1];
    eOutput_e_1 = be[1];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_GetFileName_Aux, "GetFileName_Aux");
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_call(n[3]);
    r05_alloc_number(0UL);
    r05_alloc_open_bracket(n[4]);
    r05_alloc_function(r05c_Source, "Source");
    r05_alloc_open_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_alloc_evar(eOutput_b_1, eOutput_e_1);
    r05_alloc_close_bracket(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_link_brackets(n[0], n[9]);
    r05_link_brackets(n[4], n[8]);
    r05_link_brackets(n[5], n[7]);
    r05_push_stack(n[3]);
    r05_push_stack(n[1]);
    r05_splice_evar(n[2], eOutput_b_1, eOutput_e_1);
    r05_splice_evar(n[6], eSource_b_1, eSource_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_GetFileName_Aux(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.FileName '.cpp' */
    if (! r05_char_right('p', &bb[0], &be[0]))
      break;
    if (! r05_char_right('p', &bb[0], &be[0]))
      break;
    if (! r05_char_right('c', &bb[0], &be[0]))
      break;
    if (! r05_char_right('.', &bb[0], &be[0]))
      break;
    eFileName_b_1 = bb[0];
    eFileName_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_DoGetFileName, "DoGetFileName");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eFileName_b_1, eFileName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_DoGetFileName(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.FileName '/' */
    if (! r05_char_right('/', &bb[0], &be[0]))
      break;
    /* Unused closed variable e.FileName*/

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.FileName '\\' */
    if (! r05_char_right('\\', &bb[0], &be[0]))
      break;
    /* Unused closed variable e.FileName*/

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *sLast_1;
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[5] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.FileName s.Last */
    if (! r05_svar_right(&sLast_1, &bb[0], &be[0]))
      break;
    eFileName_b_1 = bb[0];
    eFileName_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_DoGetFileName, "DoGetFileName");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_alloc_open_call(n[3]);
    r05_alloc_function(r05c_Lower, "Lower");
    r05_alloc_svar(sLast_1);
    r05_alloc_close_call(n[4]);
    r05_push_stack(n[4]);
    r05_push_stack(n[3]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eFileName_b_1, eFileName_e_1);
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
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Lower(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'A' */
    if (! r05_char_left('A', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('a');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'B' */
    if (! r05_char_left('B', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('b');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'C' */
    if (! r05_char_left('C', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('c');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'D' */
    if (! r05_char_left('D', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('d');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'E' */
    if (! r05_char_left('E', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('e');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'F' */
    if (! r05_char_left('F', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('f');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'G' */
    if (! r05_char_left('G', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('g');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'H' */
    if (! r05_char_left('H', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('h');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'I' */
    if (! r05_char_left('I', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('i');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'J' */
    if (! r05_char_left('J', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('j');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'K' */
    if (! r05_char_left('K', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('k');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'L' */
    if (! r05_char_left('L', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('l');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'M' */
    if (! r05_char_left('M', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('m');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'N' */
    if (! r05_char_left('N', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('n');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'O' */
    if (! r05_char_left('O', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('o');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'P' */
    if (! r05_char_left('P', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('p');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'Q' */
    if (! r05_char_left('Q', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('q');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'R' */
    if (! r05_char_left('R', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('r');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'S' */
    if (! r05_char_left('S', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('s');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'T' */
    if (! r05_char_left('T', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('t');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'U' */
    if (! r05_char_left('U', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('u');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'V' */
    if (! r05_char_left('V', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('v');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'W' */
    if (! r05_char_left('W', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('w');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'X' */
    if (! r05_char_left('X', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('x');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'Y' */
    if (! r05_char_left('Y', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('y');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* 'Z' */
    if (! r05_char_left('Z', &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_char('z');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *sOther_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* s.Other */
    if (! r05_svar_left(&sOther_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_svar(sOther_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanCollisions(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eFiles_B_b_1;
    struct r05_node *eFiles_B_e_1;
    struct r05_node *eFileName_b_2;
    struct r05_node *eFileName_e_2;
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eOutput1_b_1;
    struct r05_node *eOutput1_e_1;
    struct r05_node *eFiles_M_b_1;
    struct r05_node *eFiles_M_e_1;
    struct r05_node *eOutput2_b_1;
    struct r05_node *eOutput2_e_1;
    struct r05_node *bb[7] = { 0 };
    struct r05_node *be[7] = { 0 };
    struct r05_node *n[7] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Files_B ( e.FileName 0 ( & Output e.Output1  )  ) e.Files_M ( e.FileName 0 ( & Output e.Output2  )  ) e.Files_E */
    eFiles_B_b_1 = 0;
    eFiles_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[1] = bb[0];
      be[1] = be[0];
      if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
        continue;
      if (! r05_brackets_right(&bb[3], &be[3], &bb[2], &be[2]))
        continue;
      if (! r05_function_left(r05c_Output, &bb[3], &be[3]))
        continue;
      if (! r05_number_right(0UL, &bb[2], &be[2]))
        continue;
      eFileName_b_1 = bb[2];
      eFileName_e_1 = be[2];
      eOutput1_b_1 = bb[3];
      eOutput1_e_1 = be[3];
      eFiles_M_b_1 = 0;
      eFiles_M_e_1 = 0;
      r05_start_e_loop();
      do {
        bb[4] = bb[1];
        be[4] = be[1];
        if (! r05_brackets_left(&bb[5], &be[5], &bb[4], &be[4]))
          continue;
        if (! r05_brackets_right(&bb[6], &be[6], &bb[5], &be[5]))
          continue;
        if (! r05_function_left(r05c_Output, &bb[6], &be[6]))
          continue;
        if (! r05_number_right(0UL, &bb[5], &be[5]))
          continue;
        if (! r05_repeated_evar_left(&eFileName_b_2, &eFileName_e_2, eFileName_b_1, eFileName_e_1, &bb[5], &be[5]))
          continue;
        if (! r05_empty_seq(bb[5], be[5]))
          continue;
        eOutput2_b_1 = bb[6];
        eOutput2_e_1 = be[6];
        /* Unused closed variable e.Files_E*/

        r05_reset_allocator();
        r05_alloc_open_call(n[0]);
        r05_alloc_function(r05c_WriteLine, "WriteLine");
        r05_alloc_chars("COMMAND LINE ERROR: output files ", 33);
        r05_alloc_insert_pos(n[1]);
        r05_alloc_chars(" and ", 5);
        r05_alloc_insert_pos(n[2]);
        r05_alloc_chars(" has some filename ", 19);
        r05_alloc_insert_pos(n[3]);
        r05_alloc_close_call(n[4]);
        r05_alloc_open_call(n[5]);
        r05_alloc_function(r05c_Exit, "Exit");
        r05_alloc_number(1UL);
        r05_alloc_close_call(n[6]);
        r05_push_stack(n[6]);
        r05_push_stack(n[5]);
        r05_push_stack(n[4]);
        r05_push_stack(n[0]);
        r05_splice_evar(n[1], eOutput1_b_1, eOutput1_e_1);
        r05_splice_evar(n[2], eOutput2_b_1, eOutput2_e_1);
        r05_splice_evar(n[3], eFileName_b_2, eFileName_e_2);
        r05_splice_from_freelist(arg_begin);
        r05_splice_to_freelist(arg_begin, arg_end);
        return R05_SUCCESS;
      } while (r05_open_evar_advance(&eFiles_M_b_1, &eFiles_M_e_1, &bb[1], &be[1]));
    } while (r05_open_evar_advance(&eFiles_B_b_1, &eFiles_B_e_1, &bb[0], &be[0]));
  } while ( 0 );

  do {
    struct r05_node *eFiles_B_b_1;
    struct r05_node *eFiles_B_e_1;
    struct r05_node *tLocation_1;
    struct r05_node *eFileName_b_2;
    struct r05_node *eFileName_e_2;
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eFiles_M_b_1;
    struct r05_node *eFiles_M_e_1;
    struct r05_node *eOutput_b_1;
    struct r05_node *eOutput_e_1;
    struct r05_node *eFiles_E_b_1;
    struct r05_node *eFiles_E_e_1;
    struct r05_node *bb[6] = { 0 };
    struct r05_node *be[6] = { 0 };
    struct r05_node *n[19] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Files_B ( e.FileName 0 t.Location  ) e.Files_M ( e.FileName 0 ( & Output e.Output  )  ) e.Files_E */
    eFiles_B_b_1 = 0;
    eFiles_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[1] = bb[0];
      be[1] = be[0];
      if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
        continue;
      if (! r05_tvar_right(&tLocation_1, &bb[2], &be[2]))
        continue;
      if (! r05_number_right(0UL, &bb[2], &be[2]))
        continue;
      eFileName_b_1 = bb[2];
      eFileName_e_1 = be[2];
      eFiles_M_b_1 = 0;
      eFiles_M_e_1 = 0;
      r05_start_e_loop();
      do {
        bb[3] = bb[1];
        be[3] = be[1];
        if (! r05_brackets_left(&bb[4], &be[4], &bb[3], &be[3]))
          continue;
        if (! r05_brackets_right(&bb[5], &be[5], &bb[4], &be[4]))
          continue;
        if (! r05_function_left(r05c_Output, &bb[5], &be[5]))
          continue;
        if (! r05_number_right(0UL, &bb[4], &be[4]))
          continue;
        if (! r05_repeated_evar_left(&eFileName_b_2, &eFileName_e_2, eFileName_b_1, eFileName_e_1, &bb[4], &be[4]))
          continue;
        if (! r05_empty_seq(bb[4], be[4]))
          continue;
        eOutput_b_1 = bb[5];
        eOutput_e_1 = be[5];
        eFiles_E_b_1 = bb[3];
        eFiles_E_e_1 = be[3];

        r05_reset_allocator();
        r05_alloc_open_call(n[0]);
        r05_alloc_function(r05c_ScanCollisions, "ScanCollisions");
        r05_alloc_insert_pos(n[1]);
        r05_alloc_open_bracket(n[2]);
        r05_alloc_insert_pos(n[3]);
        r05_alloc_number(1UL);
        r05_alloc_insert_pos(n[4]);
        r05_alloc_close_bracket(n[5]);
        r05_alloc_insert_pos(n[6]);
        r05_alloc_open_bracket(n[7]);
        r05_alloc_insert_pos(n[8]);
        r05_alloc_number(0UL);
        r05_alloc_open_bracket(n[9]);
        r05_alloc_function(r05c_Output, "Output");
        r05_alloc_insert_pos(n[10]);
        r05_alloc_close_bracket(n[11]);
        r05_alloc_close_bracket(n[12]);
        r05_alloc_open_call(n[13]);
        r05_alloc_function(r05c_Renumerate, "Renumerate");
        r05_alloc_open_bracket(n[14]);
        r05_alloc_evar(eFileName_b_1, eFileName_e_1);
        r05_alloc_close_bracket(n[15]);
        r05_alloc_insert_pos(n[16]);
        r05_alloc_close_call(n[17]);
        r05_alloc_close_call(n[18]);
        r05_push_stack(n[18]);
        r05_push_stack(n[0]);
        r05_push_stack(n[17]);
        r05_push_stack(n[13]);
        r05_link_brackets(n[14], n[15]);
        r05_link_brackets(n[7], n[12]);
        r05_link_brackets(n[9], n[11]);
        r05_link_brackets(n[2], n[5]);
        r05_splice_evar(n[1], eFiles_B_b_1, eFiles_B_e_1);
        r05_splice_evar(n[3], eFileName_b_2, eFileName_e_2);
        r05_splice_tvar(n[4], tLocation_1);
        r05_splice_evar(n[6], eFiles_M_b_1, eFiles_M_e_1);
        r05_splice_evar(n[8], eFileName_b_1, eFileName_e_1);
        r05_splice_evar(n[10], eOutput_b_1, eOutput_e_1);
        r05_splice_evar(n[16], eFiles_E_b_1, eFiles_E_e_1);
        r05_splice_from_freelist(arg_begin);
        r05_splice_to_freelist(arg_begin, arg_end);
        return R05_SUCCESS;
      } while (r05_open_evar_advance(&eFiles_M_b_1, &eFiles_M_e_1, &bb[1], &be[1]));
    } while (r05_open_evar_advance(&eFiles_B_b_1, &eFiles_B_e_1, &bb[0], &be[0]));
  } while ( 0 );

  do {
    struct r05_node *eFiles_B_b_1;
    struct r05_node *eFiles_B_e_1;
    struct r05_node *eFileName_b_2;
    struct r05_node *eFileName_e_2;
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eOutput_b_1;
    struct r05_node *eOutput_e_1;
    struct r05_node *eFiles_M_b_1;
    struct r05_node *eFiles_M_e_1;
    struct r05_node *eFiles_E_b_1;
    struct r05_node *eFiles_E_e_1;
    struct r05_node *tLocation_1;
    struct r05_node *bb[6] = { 0 };
    struct r05_node *be[6] = { 0 };
    struct r05_node *n[19] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Files_B ( e.FileName 0 ( & Output e.Output  )  ) e.Files_M ( e.FileName 0 t.Location  ) e.Files_E */
    eFiles_B_b_1 = 0;
    eFiles_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[1] = bb[0];
      be[1] = be[0];
      if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
        continue;
      if (! r05_brackets_right(&bb[3], &be[3], &bb[2], &be[2]))
        continue;
      if (! r05_function_left(r05c_Output, &bb[3], &be[3]))
        continue;
      if (! r05_number_right(0UL, &bb[2], &be[2]))
        continue;
      eFileName_b_1 = bb[2];
      eFileName_e_1 = be[2];
      eOutput_b_1 = bb[3];
      eOutput_e_1 = be[3];
      eFiles_M_b_1 = 0;
      eFiles_M_e_1 = 0;
      r05_start_e_loop();
      do {
        bb[4] = bb[1];
        be[4] = be[1];
        if (! r05_brackets_left(&bb[5], &be[5], &bb[4], &be[4]))
          continue;
        if (! r05_repeated_evar_left(&eFileName_b_2, &eFileName_e_2, eFileName_b_1, eFileName_e_1, &bb[5], &be[5]))
          continue;
        if (! r05_number_left(0UL, &bb[5], &be[5]))
          continue;
        eFiles_E_b_1 = bb[4];
        eFiles_E_e_1 = be[4];
        if (! r05_tvar_left(&tLocation_1, &bb[5], &be[5]))
          continue;
        if (! r05_empty_seq(bb[5], be[5]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(n[0]);
        r05_alloc_function(r05c_ScanCollisions, "ScanCollisions");
        r05_alloc_insert_pos(n[1]);
        r05_alloc_open_bracket(n[2]);
        r05_alloc_insert_pos(n[3]);
        r05_alloc_number(0UL);
        r05_alloc_open_bracket(n[4]);
        r05_alloc_function(r05c_Output, "Output");
        r05_alloc_insert_pos(n[5]);
        r05_alloc_close_bracket(n[6]);
        r05_alloc_close_bracket(n[7]);
        r05_alloc_insert_pos(n[8]);
        r05_alloc_open_bracket(n[9]);
        r05_alloc_insert_pos(n[10]);
        r05_alloc_number(1UL);
        r05_alloc_insert_pos(n[11]);
        r05_alloc_close_bracket(n[12]);
        r05_alloc_open_call(n[13]);
        r05_alloc_function(r05c_Renumerate, "Renumerate");
        r05_alloc_open_bracket(n[14]);
        r05_alloc_evar(eFileName_b_1, eFileName_e_1);
        r05_alloc_close_bracket(n[15]);
        r05_alloc_insert_pos(n[16]);
        r05_alloc_close_call(n[17]);
        r05_alloc_close_call(n[18]);
        r05_push_stack(n[18]);
        r05_push_stack(n[0]);
        r05_push_stack(n[17]);
        r05_push_stack(n[13]);
        r05_link_brackets(n[14], n[15]);
        r05_link_brackets(n[9], n[12]);
        r05_link_brackets(n[2], n[7]);
        r05_link_brackets(n[4], n[6]);
        r05_splice_evar(n[1], eFiles_B_b_1, eFiles_B_e_1);
        r05_splice_evar(n[3], eFileName_b_2, eFileName_e_2);
        r05_splice_evar(n[5], eOutput_b_1, eOutput_e_1);
        r05_splice_evar(n[8], eFiles_M_b_1, eFiles_M_e_1);
        r05_splice_evar(n[10], eFileName_b_1, eFileName_e_1);
        r05_splice_tvar(n[11], tLocation_1);
        r05_splice_evar(n[16], eFiles_E_b_1, eFiles_E_e_1);
        r05_splice_from_freelist(arg_begin);
        r05_splice_to_freelist(arg_begin, arg_end);
        return R05_SUCCESS;
      } while (r05_open_evar_advance(&eFiles_M_b_1, &eFiles_M_e_1, &bb[1], &be[1]));
    } while (r05_open_evar_advance(&eFiles_B_b_1, &eFiles_B_e_1, &bb[0], &be[0]));
  } while ( 0 );

  do {
    struct r05_node *eFiles_B_b_1;
    struct r05_node *eFiles_B_e_1;
    struct r05_node *tLocation1_1;
    struct r05_node *eFileName_b_2;
    struct r05_node *eFileName_e_2;
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eFiles_M_b_1;
    struct r05_node *eFiles_M_e_1;
    struct r05_node *eFiles_E_b_1;
    struct r05_node *eFiles_E_e_1;
    struct r05_node *tLocation2_1;
    struct r05_node *bb[5] = { 0 };
    struct r05_node *be[5] = { 0 };
    struct r05_node *n[17] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Files_B ( e.FileName 0 t.Location1  ) e.Files_M ( e.FileName 0 t.Location2  ) e.Files_E */
    eFiles_B_b_1 = 0;
    eFiles_B_e_1 = 0;
    r05_start_e_loop();
    do {
      bb[1] = bb[0];
      be[1] = be[0];
      if (! r05_brackets_left(&bb[2], &be[2], &bb[1], &be[1]))
        continue;
      if (! r05_tvar_right(&tLocation1_1, &bb[2], &be[2]))
        continue;
      if (! r05_number_right(0UL, &bb[2], &be[2]))
        continue;
      eFileName_b_1 = bb[2];
      eFileName_e_1 = be[2];
      eFiles_M_b_1 = 0;
      eFiles_M_e_1 = 0;
      r05_start_e_loop();
      do {
        bb[3] = bb[1];
        be[3] = be[1];
        if (! r05_brackets_left(&bb[4], &be[4], &bb[3], &be[3]))
          continue;
        if (! r05_repeated_evar_left(&eFileName_b_2, &eFileName_e_2, eFileName_b_1, eFileName_e_1, &bb[4], &be[4]))
          continue;
        if (! r05_number_left(0UL, &bb[4], &be[4]))
          continue;
        eFiles_E_b_1 = bb[3];
        eFiles_E_e_1 = be[3];
        if (! r05_tvar_left(&tLocation2_1, &bb[4], &be[4]))
          continue;
        if (! r05_empty_seq(bb[4], be[4]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(n[0]);
        r05_alloc_function(r05c_ScanCollisions, "ScanCollisions");
        r05_alloc_insert_pos(n[1]);
        r05_alloc_open_bracket(n[2]);
        r05_alloc_insert_pos(n[3]);
        r05_alloc_number(0UL);
        r05_alloc_insert_pos(n[4]);
        r05_alloc_close_bracket(n[5]);
        r05_alloc_insert_pos(n[6]);
        r05_alloc_open_bracket(n[7]);
        r05_alloc_insert_pos(n[8]);
        r05_alloc_number(1UL);
        r05_alloc_insert_pos(n[9]);
        r05_alloc_close_bracket(n[10]);
        r05_alloc_open_call(n[11]);
        r05_alloc_function(r05c_Renumerate, "Renumerate");
        r05_alloc_open_bracket(n[12]);
        r05_alloc_evar(eFileName_b_1, eFileName_e_1);
        r05_alloc_close_bracket(n[13]);
        r05_alloc_insert_pos(n[14]);
        r05_alloc_close_call(n[15]);
        r05_alloc_close_call(n[16]);
        r05_push_stack(n[16]);
        r05_push_stack(n[0]);
        r05_push_stack(n[15]);
        r05_push_stack(n[11]);
        r05_link_brackets(n[12], n[13]);
        r05_link_brackets(n[7], n[10]);
        r05_link_brackets(n[2], n[5]);
        r05_splice_evar(n[1], eFiles_B_b_1, eFiles_B_e_1);
        r05_splice_evar(n[3], eFileName_b_2, eFileName_e_2);
        r05_splice_tvar(n[4], tLocation1_1);
        r05_splice_evar(n[6], eFiles_M_b_1, eFiles_M_e_1);
        r05_splice_evar(n[8], eFileName_b_1, eFileName_e_1);
        r05_splice_tvar(n[9], tLocation2_1);
        r05_splice_evar(n[14], eFiles_E_b_1, eFiles_E_e_1);
        r05_splice_from_freelist(arg_begin);
        r05_splice_to_freelist(arg_begin, arg_end);
        return R05_SUCCESS;
      } while (r05_open_evar_advance(&eFiles_M_b_1, &eFiles_M_e_1, &bb[1], &be[1]));
    } while (r05_open_evar_advance(&eFiles_B_b_1, &eFiles_B_e_1, &bb[0], &be[0]));
  } while ( 0 );

  do {
    struct r05_node *eFiles_b_1;
    struct r05_node *eFiles_e_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.Files */
    eFiles_b_1 = bb[0];
    eFiles_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Map, "Map");
    r05_alloc_function(r05c_RestoreName, "RestoreName");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_call(n[2]);
    r05_push_stack(n[2]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[1], eFiles_b_1, eFiles_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Renumerate(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eFiles_b_1;
    struct r05_node *eFiles_e_1;
    struct r05_node *bb[2] = { 0 };
    struct r05_node *be[2] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.FileName  ) e.Files */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    eFileName_b_1 = bb[1];
    eFileName_e_1 = be[1];
    eFiles_b_1 = bb[0];
    eFiles_e_1 = be[0];

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_DelAccumulator, "DelAccumulator");
    r05_alloc_open_call(n[1]);
    r05_alloc_function(r05c_MapReduce, "MapReduce");
    r05_alloc_open_bracket(n[2]);
    r05_alloc_function(r05c_Renumerate_Each, "Renumerate_Each");
    r05_alloc_insert_pos(n[3]);
    r05_alloc_close_bracket(n[4]);
    r05_alloc_number(2UL);
    r05_alloc_insert_pos(n[5]);
    r05_alloc_close_call(n[6]);
    r05_alloc_close_call(n[7]);
    r05_push_stack(n[7]);
    r05_push_stack(n[0]);
    r05_push_stack(n[6]);
    r05_push_stack(n[1]);
    r05_link_brackets(n[2], n[4]);
    r05_splice_evar(n[3], eFileName_b_1, eFileName_e_1);
    r05_splice_evar(n[5], eFiles_b_1, eFiles_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Renumerate_Each(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eFileName_b_2;
    struct r05_node *eFileName_e_2;
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    struct r05_node *eSource_b_1;
    struct r05_node *eSource_e_1;
    struct r05_node *eOutput_b_1;
    struct r05_node *eOutput_e_1;
    struct r05_node *sNextNumber_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[11] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.FileName s.NextNumber ( e.FileName 0 ( & Source ( e.Source  ) e.Output  )  ) */
    if (! r05_brackets_right(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    if (! r05_function_left(r05c_Source, &bb[2], &be[2]))
      break;
    if (! r05_number_right(0UL, &bb[1], &be[1]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[2], &be[2]))
      break;
    eFileName_b_1 = bb[1];
    eFileName_e_1 = be[1];
    if (! r05_repeated_evar_left(&eFileName_b_2, &eFileName_e_2, eFileName_b_1, eFileName_e_1, &bb[0], &be[0]))
      break;
    eSource_b_1 = bb[3];
    eSource_e_1 = be[3];
    eOutput_b_1 = bb[2];
    eOutput_e_1 = be[2];
    if (! r05_svar_left(&sNextNumber_1, &bb[0], &be[0]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;

    r05_reset_allocator();
    r05_alloc_open_call(n[0]);
    r05_alloc_function(r05c_Inc, "Inc");
    r05_alloc_svar(sNextNumber_1);
    r05_alloc_close_call(n[1]);
    r05_alloc_open_bracket(n[2]);
    r05_alloc_insert_pos(n[3]);
    r05_alloc_svar(sNextNumber_1);
    r05_alloc_open_bracket(n[4]);
    r05_alloc_function(r05c_Source, "Source");
    r05_alloc_open_bracket(n[5]);
    r05_alloc_insert_pos(n[6]);
    r05_alloc_close_bracket(n[7]);
    r05_alloc_insert_pos(n[8]);
    r05_alloc_close_bracket(n[9]);
    r05_alloc_close_bracket(n[10]);
    r05_link_brackets(n[2], n[10]);
    r05_link_brackets(n[4], n[9]);
    r05_link_brackets(n[5], n[7]);
    r05_push_stack(n[1]);
    r05_push_stack(n[0]);
    r05_splice_evar(n[3], eFileName_b_2, eFileName_e_2);
    r05_splice_evar(n[6], eSource_b_1, eSource_e_1);
    r05_splice_evar(n[8], eOutput_b_1, eOutput_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *tNextFile_1;
    struct r05_node *sNextNumber_1;
    struct r05_node *bb[1] = { 0 };
    struct r05_node *be[1] = { 0 };
    struct r05_node *n[1] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* e.FileName s.NextNumber t.NextFile */
    if (! r05_tvar_right(&tNextFile_1, &bb[0], &be[0]))
      break;
    if (! r05_svar_right(&sNextNumber_1, &bb[0], &be[0]))
      break;
    /* Unused closed variable e.FileName*/

    r05_reset_allocator();
    r05_alloc_svar(sNextNumber_1);
    r05_alloc_insert_pos(n[0]);
    r05_splice_tvar(n[0], tNextFile_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_RestoreName(struct r05_node *arg_begin, struct r05_node *arg_end) {
  r05_this_is_generated_function();
  do {
    struct r05_node *eOutputName_b_1;
    struct r05_node *eOutputName_e_1;
    struct r05_node *sNumber_1;
    struct r05_node *bb[3] = { 0 };
    struct r05_node *be[3] = { 0 };
    struct r05_node *n[3] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.FileName s.Number ( & Output e.OutputName  )  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    if (! r05_function_left(r05c_Output, &bb[2], &be[2]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eOutputName_b_1 = bb[2];
    eOutputName_e_1 = be[2];
    if (! r05_svar_right(&sNumber_1, &bb[1], &be[1]))
      break;
    /* Unused closed variable e.FileName*/

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_Output, "Output");
    r05_alloc_insert_pos(n[1]);
    r05_alloc_close_bracket(n[2]);
    r05_link_brackets(n[0], n[2]);
    r05_splice_evar(n[1], eOutputName_b_1, eOutputName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eSource_b_1;
    struct r05_node *eSource_e_1;
    struct r05_node *eOutput_b_1;
    struct r05_node *eOutput_e_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[6] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.FileName 0 ( & Source ( e.Source  ) e.Output  )  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    if (! r05_function_left(r05c_Source, &bb[2], &be[2]))
      break;
    if (! r05_number_right(0UL, &bb[1], &be[1]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[2], &be[2]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    /* Unused closed variable e.FileName*/
    eSource_b_1 = bb[3];
    eSource_e_1 = be[3];
    eOutput_b_1 = bb[2];
    eOutput_e_1 = be[2];

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_Source, "Source");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_close_bracket(n[5]);
    r05_link_brackets(n[0], n[5]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_evar(n[2], eSource_b_1, eSource_e_1);
    r05_splice_evar(n[4], eOutput_b_1, eOutput_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *eSource_b_1;
    struct r05_node *eSource_e_1;
    struct r05_node *eOutName_b_1;
    struct r05_node *eOutName_e_1;
    struct r05_node *sNumber_1;
    struct r05_node *bb[4] = { 0 };
    struct r05_node *be[4] = { 0 };
    struct r05_node *n[8] = { 0 };
    r05_start_sentence();
    r05_prepare_argument(&bb[0], &be[0], arg_begin, arg_end);
    /* ( e.FileName s.Number ( & Source ( e.Source  ) e.OutName '.cpp'  )  ) */
    if (! r05_brackets_left(&bb[1], &be[1], &bb[0], &be[0]))
      break;
    if (! r05_brackets_right(&bb[2], &be[2], &bb[1], &be[1]))
      break;
    if (! r05_function_left(r05c_Source, &bb[2], &be[2]))
      break;
    if (! r05_char_right('p', &bb[2], &be[2]))
      break;
    if (! r05_char_right('p', &bb[2], &be[2]))
      break;
    if (! r05_char_right('c', &bb[2], &be[2]))
      break;
    if (! r05_char_right('.', &bb[2], &be[2]))
      break;
    if (! r05_brackets_left(&bb[3], &be[3], &bb[2], &be[2]))
      break;
    if (! r05_empty_seq(bb[0], be[0]))
      break;
    eSource_b_1 = bb[3];
    eSource_e_1 = be[3];
    eOutName_b_1 = bb[2];
    eOutName_e_1 = be[2];
    if (! r05_svar_right(&sNumber_1, &bb[1], &be[1]))
      break;
    /* Unused closed variable e.FileName*/

    r05_reset_allocator();
    r05_alloc_open_bracket(n[0]);
    r05_alloc_function(r05c_Source, "Source");
    r05_alloc_open_bracket(n[1]);
    r05_alloc_insert_pos(n[2]);
    r05_alloc_close_bracket(n[3]);
    r05_alloc_insert_pos(n[4]);
    r05_alloc_char('@');
    r05_alloc_open_call(n[5]);
    r05_alloc_function(r05c_StrFromInt, "StrFromInt");
    r05_alloc_svar(sNumber_1);
    r05_alloc_close_call(n[6]);
    r05_alloc_chars(".cpp", 4);
    r05_alloc_close_bracket(n[7]);
    r05_link_brackets(n[0], n[7]);
    r05_push_stack(n[6]);
    r05_push_stack(n[5]);
    r05_link_brackets(n[1], n[3]);
    r05_splice_evar(n[2], eSource_b_1, eSource_e_1);
    r05_splice_evar(n[4], eOutName_b_1, eOutName_e_1);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}


/* End of file */

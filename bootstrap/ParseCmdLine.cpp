// Automatically generated file. Don't edit!
#include "refalrts.h"


extern enum r05_fnresult r05c_ParseCommandLine(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_NoCompile(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CompileCommand(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_CmdLineError(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_DoParseCommandLine(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_DoParseFileNamesOnly(struct r05_node *arg_begin, struct r05_node *arg_end);

enum r05_fnresult r05c_ParseCommandLine(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eArguments_b_1;
    static struct r05_node *eArguments_e_1;
    // e.Arguments
    eArguments_b_1 = bb_0;
    eArguments_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoParseCommandLine, "DoParseCommandLine" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_NoCompile, "NoCompile" ) )
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
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eArguments_b_1, eArguments_e_1 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n2, n4 );
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

enum r05_fnresult r05c_NoCompile(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CompileCommand(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_CmdLineError(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_DoParseCommandLine(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *eScannedFiles_b_1;
    static struct r05_node *eScannedFiles_e_1;
    static struct r05_node *eFolders_b_1;
    static struct r05_node *eFolders_e_1;
    static struct r05_node *eCompileCommand_b_1;
    static struct r05_node *eCompileCommand_e_1;
    static struct r05_node *eOptions_b_1;
    static struct r05_node *eOptions_e_1;
    // ( & NoCompile ) ( e.ScannedFiles ) ( e.Folders ) ( '-c' ) ( e.CompileCommand ) e.Options
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_NoCompile, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( '-', bb_4, be_4 ) )
      break;
    if( ! refalrts::char_left( 'c', bb_4, be_4 ) )
      break;
    struct r05_node *bb_5 = 0;
    struct r05_node *be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    if (! r05_empty_seq(bb_4, be_4))
      break;
    eScannedFiles_b_1 = bb_2;
    eScannedFiles_e_1 = be_2;
    eFolders_b_1 = bb_3;
    eFolders_e_1 = be_3;
    eCompileCommand_b_1 = bb_5;
    eCompileCommand_e_1 = be_5;
    eOptions_b_1 = bb_0;
    eOptions_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoParseCommandLine, "DoParseCommandLine" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_CompileCommand, "CompileCommand" ) )
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
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eOptions_b_1, eOptions_e_1 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eCompileCommand_b_1, eCompileCommand_e_1 );
    res = refalrts::splice_elem( res, n3 );
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
    // ( & CompileCommand e.Command ) ( e.ScannedFiles ) ( e.Folders ) ( '-c' ) ( e.CompileCommand ) e.Options
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( r05c_CompileCommand, bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( '-', bb_4, be_4 ) )
      break;
    if( ! refalrts::char_left( 'c', bb_4, be_4 ) )
      break;
    struct r05_node *bb_5 = 0;
    struct r05_node *be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_4, be_4))
      break;
    // Unused closed variable e.Command
    // Unused closed variable e.ScannedFiles
    // Unused closed variable e.Folders
    // Unused closed variable e.CompileCommand
    // Unused closed variable e.Options

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_CmdLineError, "CmdLineError" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, "Multiple declaration of C++ compiler command line", 49) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
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
    static struct r05_node *tCompiler_1;
    // t.Compiler ( e.ScannedFiles ) ( e.Folders ) ( '-c' )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( '-', bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( 'c', bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    // Unused closed variable e.ScannedFiles
    // Unused closed variable e.Folders
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_CmdLineError, "CmdLineError" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, "After option \'-c\' expected C++ compiler command line", 52) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
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
    static struct r05_node *tCompiler_1;
    static struct r05_node *eScannedFiles_b_1;
    static struct r05_node *eScannedFiles_e_1;
    static struct r05_node *eFolders_b_1;
    static struct r05_node *eFolders_e_1;
    static struct r05_node *eDirectory_b_1;
    static struct r05_node *eDirectory_e_1;
    static struct r05_node *eOptions_b_1;
    static struct r05_node *eOptions_e_1;
    // t.Compiler ( e.ScannedFiles ) ( e.Folders ) ( '-d' ) ( e.Directory ) e.Options
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( '-', bb_3, be_3 ) )
      break;
    if( ! refalrts::char_left( 'd', bb_3, be_3 ) )
      break;
    struct r05_node *bb_4 = 0;
    struct r05_node *be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;
    eScannedFiles_b_1 = bb_1;
    eScannedFiles_e_1 = be_1;
    eFolders_b_1 = bb_2;
    eFolders_e_1 = be_2;
    eDirectory_b_1 = bb_4;
    eDirectory_e_1 = be_4;
    eOptions_b_1 = bb_0;
    eOptions_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoParseCommandLine, "DoParseCommandLine" ) )
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
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eOptions_b_1, eOptions_e_1 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eDirectory_b_1, eDirectory_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
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
    static struct r05_node *tCompiler_1;
    // t.Compiler ( e.ScannedFiles ) ( e.Folders ) ( '-d' )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( '-', bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( 'd', bb_1, be_1 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    // Unused closed variable e.ScannedFiles
    // Unused closed variable e.Folders
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_CmdLineError, "CmdLineError" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_chars( n2, n3, "After option \'-d\' expected find directory", 41) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
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
    static struct r05_node *tCompiler_1;
    static struct r05_node *eScannedFiles_b_1;
    static struct r05_node *eScannedFiles_e_1;
    static struct r05_node *eFolders_b_1;
    static struct r05_node *eFolders_e_1;
    static struct r05_node *eFiles_b_1;
    static struct r05_node *eFiles_e_1;
    // t.Compiler ( e.ScannedFiles ) ( e.Folders ) ( '--' ) e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( '-', bb_3, be_3 ) )
      break;
    if( ! refalrts::char_left( '-', bb_3, be_3 ) )
      break;
    if (! r05_empty_seq(bb_3, be_3))
      break;
    eScannedFiles_b_1 = bb_1;
    eScannedFiles_e_1 = be_1;
    eFolders_b_1 = bb_2;
    eFolders_e_1 = be_2;
    eFiles_b_1 = bb_0;
    eFiles_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoParseFileNamesOnly, "DoParseFileNamesOnly" ) )
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
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
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
    static struct r05_node *tCompiler_1;
    static struct r05_node *eScannedFiles_b_1;
    static struct r05_node *eScannedFiles_e_1;
    static struct r05_node *eFolders_b_1;
    static struct r05_node *eFolders_e_1;
    static struct r05_node *eNextFileName_b_1;
    static struct r05_node *eNextFileName_e_1;
    static struct r05_node *eOptions_b_1;
    static struct r05_node *eOptions_e_1;
    // t.Compiler ( e.ScannedFiles ) ( e.Folders ) ( e.NextFileName ) e.Options
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    eScannedFiles_e_1 = be_1;
    eFolders_b_1 = bb_2;
    eFolders_e_1 = be_2;
    eNextFileName_b_1 = bb_3;
    eNextFileName_e_1 = be_3;
    eOptions_b_1 = bb_0;
    eOptions_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoParseCommandLine, "DoParseCommandLine" ) )
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
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eOptions_b_1, eOptions_e_1 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eNextFileName_b_1, eNextFileName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
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
    static struct r05_node *eScannedFiles_b_1;
    static struct r05_node *eScannedFiles_e_1;
    static struct r05_node *eFolders_b_1;
    static struct r05_node *eFolders_e_1;
    static struct r05_node *tCompiler_1;
    // t.Compiler ( e.ScannedFiles ) ( e.Folders )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eScannedFiles_b_1 = bb_2;
    eScannedFiles_e_1 = be_2;
    eFolders_b_1 = bb_1;
    eFolders_e_1 = be_1;
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_DoParseFileNamesOnly(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    static struct r05_node *tCompiler_1;
    static struct r05_node *eScannedFiles_b_1;
    static struct r05_node *eScannedFiles_e_1;
    static struct r05_node *eNextFileName_b_1;
    static struct r05_node *eNextFileName_e_1;
    static struct r05_node *eFiles_b_1;
    static struct r05_node *eFiles_e_1;
    // t.Compiler ( e.ScannedFiles ) ( e.Folders ) ( e.NextFileName ) e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    struct r05_node *bb_3 = 0;
    struct r05_node *be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    eScannedFiles_e_1 = be_1;
    // Unused closed variable e.Folders
    eNextFileName_b_1 = bb_3;
    eNextFileName_e_1 = be_3;
    eFiles_b_1 = bb_0;
    eFiles_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_DoParseFileNamesOnly, "DoParseFileNamesOnly" ) )
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
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eNextFileName_b_1, eNextFileName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
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
    static struct r05_node *eScannedFiles_b_1;
    static struct r05_node *eScannedFiles_e_1;
    static struct r05_node *eFolders_b_1;
    static struct r05_node *eFolders_e_1;
    static struct r05_node *tCompiler_1;
    // t.Compiler ( e.ScannedFiles ) ( e.Folders )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eScannedFiles_b_1 = bb_2;
    eScannedFiles_e_1 = be_2;
    eFolders_b_1 = bb_1;
    eFolders_e_1 = be_1;
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) )
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}


//End of file

/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(ArgList)
R05_DECLARE_ENTRY_FUNCTION(LoadFile)
R05_DECLARE_ENTRY_FUNCTION(Map)
R05_DECLARE_ENTRY_FUNCTION(R05m_FindFilesm_Default)
R05_DECLARE_ENTRY_FUNCTION(R05m_CCompile)
R05_DECLARE_ENTRY_FUNCTION(R05m_Parsem_File)
R05_DECLARE_ENTRY_FUNCTION(R05m_Generatem_ToFile)
R05_DECLARE_ENTRY_FUNCTION(GO)
R05_DECLARE_LOCAL_FUNCTION(Main)
R05_DECLARE_LOCAL_FUNCTION(FindFilesm_SwFound)
R05_DECLARE_ENTRY_FUNCTION(refal05cu_PrintNotFound)
R05_DECLARE_ENTRY_FUNCTION(refal05cu_ProcessEachSource)
R05_DECLARE_LOCAL_FUNCTION(CompileSourcem_SwSuccessedParse)
R05_DECLARE_ENTRY_FUNCTION(refal05cu_WriteError)
R05_DECLARE_LOCAL_FUNCTION(StrFromSrcPos)
R05_DECLARE_LOCAL_FUNCTION(CheckCompilationResult)
R05_DECLARE_LOCAL_FUNCTION(CheckRetcode)
R05_DECLARE_ENTRY_FUNCTION(Prout)
R05_DECLARE_ENTRY_FUNCTION(Symb)
R05_DECLARE_ENTRY_FUNCTION(Exit)
R05_DEFINE_LOCAL_ENUM(NotFound, "NotFound")
R05_DEFINE_LOCAL_ENUM(Output, "Output")
R05_DEFINE_LOCAL_ENUM(Source, "Source")
R05_DEFINE_LOCAL_ENUM(Success, "Success")
R05_DEFINE_LOCAL_ENUM(Fails, "Fails")

/*
*$FROM LibraryEx
*/
/*
*$FROM R05-CompilerUtils
*/
/*
*$FROM R05-Parser
*/
/*
*$FROM R05-Generator
*/
R05_DEFINE_ENTRY_FUNCTION(GO, "GO") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[6] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Main);
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_ArgList);
    r05_alloc_close_call(p+4);
    r05_alloc_close_call(p+5);
    r05_push_stack(p[5]);
    r05_push_stack(p[2]);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Main, "Main") {
  r05_this_is_generated_function();

  do {
    /* e.ProgName: 7 */
    /* e.Config: 9 */
    struct r05_node *p[19] = { 0 };
    /* (e.ProgName) ('@' e.Config) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '@'))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[6], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Main);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_LoadFile);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[11]);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[12], p[14]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[13], p+7);
    r05_splice_evar(p[16], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.ProgName: 4 */
    /* e.Files: 6 */
    struct r05_node *p[13] = { 0 };
    /* (e.ProgName) e.Files */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_FindFilesm_SwFound);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_R05m_FindFilesm_Default);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[8]);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[10], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindFilesm_SwFound, "FindFiles-SwFound") {
  r05_this_is_generated_function();

  do {
    /* e.Files-B: 2 */
    /* e.FileName: 7 */
    /* e.Files-E: 9 */
    struct r05_node *p[17] = { 0 };
    /* e.Files-B (NotFound e.FileName) e.Files-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+4, p[3], p[1]))
        continue;
      if (! r05_function_left(p+6, p[4], p[5], &r05f_NotFound))
        continue;
      r05_close_evar(p+7, p[6], p[5]);
      r05_close_evar(p+9, p[5], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_Map);
      r05_alloc_function(&r05f_refal05cu_PrintNotFound);
      r05_alloc_open_bracket(p+12);
      r05_alloc_function(&r05f_NotFound);
      r05_alloc_insert_pos(p+13);
      r05_alloc_close_bracket(p+14);
      r05_alloc_insert_pos(p+15);
      r05_alloc_close_call(p+16);
      r05_push_stack(p[16]);
      r05_push_stack(p[11]);
      r05_correct_evar(p+9);
      r05_link_brackets(p[12], p[14]);
      r05_correct_evar(p+7);
      r05_splice_evar(p[13], p+7);
      r05_splice_evar(p[15], p+9);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.FoundFiles: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.FoundFiles */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CheckCompilationResult);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_refal05cu_ProcessEachSource);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(refal05cu_PrintNotFound, "refal05c_PrintNotFound") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 5 */
    struct r05_node *p[10] = { 0 };
    /* (NotFound e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_NotFound))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("COMMAND LINE ERROR: file ", 25);
    r05_alloc_insert_pos(p+8);
    r05_alloc_chars(" not found", 10);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[8], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FileName: 5 */
    struct r05_node *p[7] = { 0 };
    /* (Output e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Output))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[3]);

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Source: 7 */
    /* e.Output: 9 */
    struct r05_node *p[11] = { 0 };
    /* (Source (e.Source) e.Output) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Source))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[3]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[6], p[3]);

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(refal05cu_ProcessEachSource, "refal05c_ProcessEachSource") {
  r05_this_is_generated_function();

  do {
    /* e.OutputName: 5 */
    struct r05_node *p[12] = { 0 };
    /* (Output e.OutputName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Output))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("+Linking ", 9);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_open_bracket(p+10);
    r05_alloc_evar(p+5);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[10], p[11]);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[8], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Source: 7 */
    /* e.OutputName: 9 */
    struct r05_node *p[23] = { 0 };
    /* (Source (e.Source) e.OutputName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Source))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[3]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[6], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("*Compiling ", 11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_char(':');
    r05_alloc_close_call(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_CompileSourcem_SwSuccessedParse);
    r05_alloc_open_bracket(p+15);
    r05_alloc_evar(p+7);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_R05m_Parsem_File);
    r05_alloc_evar(p+7);
    r05_alloc_close_call(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[14]);
    r05_push_stack(p[21]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[15], p[16]);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[12], p+7);
    r05_splice_evar(p[18], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CompileSourcem_SwSuccessedParse, "CompileSource-SwSuccessedParse") {
  r05_this_is_generated_function();

  do {
    /* e.SrcName: 7 */
    /* e.OutputName: 9 */
    /* e.Tree: 11 */
    struct r05_node *p[21] = { 0 };
    /* (e.SrcName) (e.OutputName) Success e.Tree */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[5], p[1], &r05f_Success))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[4], p[5]);
    r05_close_evar(p+11, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_R05m_Generatem_ToFile);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_evar(p+9);
    r05_alloc_close_bracket(p+20);
    r05_link_brackets(p[19], p[20]);
    r05_push_stack(p[18]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[15], p+9);
    r05_splice_evar(p[17], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.SrcName: 7 */
    /* e.OutputName: 9 */
    /* e.Errors: 11 */
    struct r05_node *p[19] = { 0 };
    /* (e.SrcName) (e.OutputName) Fails e.Errors */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[5], p[1], &r05f_Fails))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[4], p[5]);
    r05_close_evar(p+11, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Map);
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_refal05cu_WriteError);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_function(&r05f_Fails);
    r05_push_stack(p[18]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[15], p+7);
    r05_splice_evar(p[17], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(refal05cu_WriteError, "refal05c_WriteError") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 4 */
    /* t.SrcPos: 6 */
    /* e.Message: 8 */
    struct r05_node *p[17] = { 0 };
    /* e.FileName (t.SrcPos e.Message) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[0], p[2]);
    if (! r05_tvar_left(p+6, p[2], p[3]))
      continue;
    r05_close_evar(p+8, p[7], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_insert_pos(p+11);
    r05_alloc_char(':');
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_StrFromSrcPos);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_chars(":ERROR: ", 8);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_push_stack(p[16]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+8);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[11], p+4);
    r05_splice_tvar(p[13], p+6);
    r05_splice_evar(p[15], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(StrFromSrcPos, "StrFromSrcPos") {
  r05_this_is_generated_function();

  do {
    /* s.Line: 4 */
    /* s.Col: 5 */
    /* e.FileName: 6 */
    struct r05_node *p[12] = { 0 };
    /* (s.Line s.Col e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[2], p[3]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[3]))
      continue;
    r05_close_evar(p+6, p[5], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+4);
    r05_alloc_close_call(p+9);
    r05_alloc_char(':');
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+5);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckCompilationResult, "CheckCompilationResult") {
  r05_this_is_generated_function();

  do {
    /* e.Outputs-B: 2 */
    /* e.Outputs-E: 5 */
    struct r05_node *p[11] = { 0 };
    /* e.Outputs-B Fails e.Outputs-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_function_left(p+4, p[3], p[1], &r05f_Fails))
        continue;
      r05_close_evar(p+5, p[4], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+7);
      r05_alloc_function(&r05f_Prout);
      r05_alloc_chars("*** COMPILATION FAILED ***", 26);
      r05_alloc_close_call(p+8);
      r05_alloc_open_call(p+9);
      r05_alloc_function(&r05f_Exit);
      r05_alloc_number(1UL);
      r05_alloc_close_call(p+10);
      r05_push_stack(p[10]);
      r05_push_stack(p[9]);
      r05_push_stack(p[8]);
      r05_push_stack(p[7]);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Outputs: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.Outputs */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CheckRetcode);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_R05m_CCompile);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(CheckRetcode, "CheckRetcode") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[5] = { 0 };
    /* 0 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_left(p+2, p[0], p[1], 0UL))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("*** Compilation successed ***", 29);
    r05_alloc_close_call(p+4);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.RetCode: 2 */
    struct r05_node *p[11] = { 0 };
    /* e.RetCode */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("*** COMPILATION FAILED (C COMPILER FAILED, RETCODE: ", 52);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_chars(")***", 4);
    r05_alloc_close_call(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Exit);
    r05_alloc_evar(p+2);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}


/* End of file */

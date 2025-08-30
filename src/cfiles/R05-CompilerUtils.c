/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Trim)
R05_DECLARE_ENTRY_FUNCTION(Map)
R05_DECLARE_ENTRY_FUNCTION(PathSeparator)
R05_DECLARE_ENTRY_FUNCTION(IsDirectorySeparator)
R05_DECLARE_ENTRY_FUNCTION(R05m_LoadPath)
R05_DECLARE_LOCAL_FUNCTION(ParsePath)
R05_DECLARE_LOCAL_FUNCTION(ParsePathu_check)
R05_DECLARE_LOCAL_FUNCTION(ParsePathu_forward)
R05_DECLARE_LOCAL_FUNCTION(ParsePathu_next)
R05_DECLARE_LOCAL_FUNCTION(ParsePathu_cont)
R05_DECLARE_LOCAL_FUNCTION(ParseFolder)
R05_DECLARE_LOCAL_FUNCTION(ParseFolderm_CheckEmpty)
R05_DECLARE_ENTRY_FUNCTION(R05m_FindFilesm_Default)
R05_DECLARE_ENTRY_FUNCTION(R05m_FindFiles)
R05_DECLARE_ENTRY_FUNCTION(findfileu_AnalyzeFilem_ByFolders)
R05_DECLARE_ENTRY_FUNCTION(findfileu_AnalyzeInFolder)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFilem_CheckNotFound)
R05_DECLARE_LOCAL_FUNCTION(ExistFilem_T)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFile)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeSourcem_CheckExist)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeOutputm_CheckExist)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeBothm_CheckExist)
R05_DECLARE_LOCAL_FUNCTION(CutFolder)
R05_DECLARE_LOCAL_FUNCTION(CutFolderu_check)
R05_DECLARE_LOCAL_FUNCTION(CutFolderu_forward)
R05_DECLARE_LOCAL_FUNCTION(CutFolderu_next)
R05_DECLARE_LOCAL_FUNCTION(CutFolderu_cont)
R05_DECLARE_ENTRY_FUNCTION(R05m_CCompile)
R05_DECLARE_LOCAL_FUNCTION(CCompilem_SwSetEnv)
R05_DECLARE_ENTRY_FUNCTION(compilerutilsu_IncludeFlag)
R05_DECLARE_ENTRY_FUNCTION(compilerutilsu_QuoteFile)
R05_DECLARE_ENTRY_FUNCTION(GetEnv)
R05_DECLARE_ENTRY_FUNCTION(System)
R05_DECLARE_ENTRY_FUNCTION(ExistFile)
R05_DEFINE_LOCAL_ENUM(Current, "Current")
R05_DEFINE_LOCAL_ENUM(Source, "Source")
R05_DEFINE_LOCAL_ENUM(Output, "Output")
R05_DEFINE_LOCAL_ENUM(NotFound, "NotFound")
R05_DEFINE_LOCAL_ENUM(True, "True")
R05_DEFINE_LOCAL_ENUM(False, "False")

/*
*$FROM LibraryEx
*/
/*
*$FROM Platform
*/
R05_DEFINE_ENTRY_FUNCTION(R05m_LoadPath, "R05-LoadPath") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[10] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_ParsePath);
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_GetEnv);
    r05_alloc_chars("R05PATH", 7);
    r05_alloc_close_call(p+4);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_ParsePath);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_GetEnv);
    r05_alloc_chars("REF5RSL", 7);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[6]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
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

R05_DEFINE_LOCAL_FUNCTION(ParsePath, "ParsePath") {
  r05_this_is_generated_function();

  do {
    /* e.Folder: 2 */
    /* s.Sep: 4 */
    /* e.Path: 5 */
    struct r05_node *p[17] = { 0 };
    /* e.Folder s.Sep e.Path */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_svar_left(p+4, p[3], p[1]))
        continue;
      r05_close_evar(p+5, p[4], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+7);
      r05_alloc_function(&r05f_ParsePathu_check);
      r05_alloc_open_bracket(p+8);
      r05_alloc_insert_pos(p+9);
      r05_alloc_close_bracket(p+10);
      r05_alloc_svar(p+4);
      r05_alloc_open_bracket(p+11);
      r05_alloc_insert_pos(p+12);
      r05_alloc_close_bracket(p+13);
      r05_alloc_open_call(p+14);
      r05_alloc_function(&r05f_PathSeparator);
      r05_alloc_close_call(p+15);
      r05_alloc_close_call(p+16);
      r05_push_stack(p[16]);
      r05_push_stack(p[7]);
      r05_push_stack(p[15]);
      r05_push_stack(p[14]);
      r05_link_brackets(p[11], p[13]);
      r05_correct_evar(p+5);
      r05_link_brackets(p[8], p[10]);
      r05_correct_evar(p+2);
      r05_splice_evar(p[9], p+2);
      r05_splice_evar(p[12], p+5);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_ParsePathu_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(ParsePathu_check, "ParsePath_check") {
  r05_this_is_generated_function();

  do {
    /* e.Folder: 4 */
    /* s.Sep: 6, 9 */
    /* e.Path: 10 */
    struct r05_node *p[18] = { 0 };
    /* (e.Folder) s.Sep (e.Path) s.Sep */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_repeated_svar_left(p+9, p[8], p[1], p+6))
      continue;
    if (! r05_empty_hole(p[9], p[1]))
      continue;
    r05_close_evar(p+10, p[7], p[8]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_ParseFolder);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_ParsePath);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+10);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[13], p+4);
    r05_splice_evar(p[16], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Folder: 4 */
    /* s.Sep: 6 */
    /* e.Path: 9 */
    /* e.Other: 11 */
    struct r05_node *p[19] = { 0 };
    /* (e.Folder) s.Sep (e.Path) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    r05_close_evar(p+11, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_ParsePathu_forward);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_svar(p+6);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[15], p+4);
    r05_splice_evar(p[17], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ParsePathu_forward, "ParsePath_forward") {
  r05_this_is_generated_function();

  do {
    /* e.Folder_fix: 4 */
    /* t.Folder_next: 6 */
    /* e.Folder_rest: 8 */
    struct r05_node *p[16] = { 0 };
    /* (e.Folder_fix) t.Folder_next e.Folder_rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[3], p[1]))
      continue;
    r05_close_evar(p+8, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_ParsePathu_next);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[12], p+4);
    r05_splice_tvar(p[12], p+6);
    r05_splice_evar(p[14], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Folder_fix: 4 */
    struct r05_node *p[9] = { 0 };
    /* (e.Folder_fix) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_ParsePathu_cont);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ParsePathu_next, "ParsePath_next") {
  r05_this_is_generated_function();

  do {
    /* e.Folder_fix: 4 */
    /* e.Folder_var: 6 */
    /* s.Sep: 8 */
    /* e.Path: 9 */
    struct r05_node *p[21] = { 0 };
    /* (e.Folder_fix) e.Folder_var s.Sep e.Path */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    p[6] = p[3]->next;
    p[7] = p[3];
    r05_start_e_loop();
    do {
      if (! r05_svar_left(p+8, p[7], p[1]))
        continue;
      r05_close_evar(p+9, p[8], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_ParsePathu_check);
      r05_alloc_open_bracket(p+12);
      r05_alloc_insert_pos(p+13);
      r05_alloc_close_bracket(p+14);
      r05_alloc_svar(p+8);
      r05_alloc_open_bracket(p+15);
      r05_alloc_insert_pos(p+16);
      r05_alloc_close_bracket(p+17);
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_PathSeparator);
      r05_alloc_close_call(p+19);
      r05_alloc_close_call(p+20);
      r05_push_stack(p[20]);
      r05_push_stack(p[11]);
      r05_push_stack(p[19]);
      r05_push_stack(p[18]);
      r05_link_brackets(p[15], p[17]);
      r05_correct_evar(p+9);
      r05_link_brackets(p[12], p[14]);
      r05_correct_evar(p+6);
      r05_correct_evar(p+4);
      r05_splice_evar(p[13], p+4);
      r05_splice_evar(p[13], p+6);
      r05_splice_evar(p[16], p+9);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+6, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Folder_fix: 4 */
    /* e.Folder_rest: 6 */
    struct r05_node *p[11] = { 0 };
    /* (e.Folder_fix) e.Folder_rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_ParsePathu_cont);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ParsePathu_cont, "ParsePath_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Folder: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Folder */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_ParseFolder);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(ParseFolder, "ParseFolder") {
  r05_this_is_generated_function();

  do {
    /* e.Folder: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.Folder */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_ParseFolderm_CheckEmpty);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Trim);
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

R05_DEFINE_LOCAL_FUNCTION(ParseFolderm_CheckEmpty, "ParseFolder-CheckEmpty") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Folder: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Folder */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+4);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_bracket(p+6);
    r05_link_brackets(p[4], p[6]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(R05m_FindFilesm_Default, "R05-FindFiles-Default") {
  r05_this_is_generated_function();

  do {
    /* e.Files: 2 */
    struct r05_node *p[11] = { 0 };
    /* e.Files */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_R05m_FindFiles);
    r05_alloc_open_bracket(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_R05m_LoadPath);
    r05_alloc_close_call(p+7);
    r05_alloc_close_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_link_brackets(p[5], p[8]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[9], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(R05m_FindFiles, "R05-FindFiles") {
  r05_this_is_generated_function();

  do {
    /* e.Folders: 4 */
    /* e.Files: 6 */
    struct r05_node *p[14] = { 0 };
    /* (e.Folders) e.Files */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Map);
    r05_alloc_open_bracket(p+9);
    r05_alloc_function(&r05f_findfileu_AnalyzeFilem_ByFolders);
    r05_alloc_function(&r05f_Current);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[10], p+4);
    r05_splice_evar(p[12], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(findfileu_AnalyzeFilem_ByFolders, "findfile_AnalyzeFile-ByFolders") {
  r05_this_is_generated_function();

  do {
    /* e.Folders: 4 */
    /* e.FileName: 6 */
    struct r05_node *p[18] = { 0 };
    /* e.Folders (e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[0], p[2]);
    r05_close_evar(p+6, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_AnalyzeFilem_CheckNotFound);
    r05_alloc_open_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Map);
    r05_alloc_open_bracket(p+13);
    r05_alloc_function(&r05f_findfileu_AnalyzeInFolder);
    r05_alloc_evar(p+6);
    r05_alloc_close_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[8]);
    r05_push_stack(p[16]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+4);
    r05_link_brackets(p[13], p[14]);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[10], p+6);
    r05_splice_evar(p[15], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(findfileu_AnalyzeInFolder, "findfile_AnalyzeInFolder") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 3 */
    struct r05_node *p[8] = { 0 };
    /* e.FileName Current */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_Current))
      continue;
    r05_close_evar(p+3, p[0], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_AnalyzeFile);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FileName: 4 */
    /* e.Folder: 6 */
    struct r05_node *p[12] = { 0 };
    /* e.FileName (e.Folder) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[0], p[2]);
    r05_close_evar(p+6, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_AnalyzeFile);
    r05_alloc_insert_pos(p+9);
    r05_alloc_char('/');
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+4);
    r05_correct_evar(p+6);
    r05_splice_evar(p[9], p+6);
    r05_splice_evar(p[10], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFilem_CheckNotFound, "AnalyzeFile-CheckNotFound") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 9 */
    /* e.Source: 11 */
    /* e.Output: 13 */
    /* e.Variants: 15 */
    struct r05_node *p[23] = { 0 };
    /* (e.FileName) (Source (e.Source) e.Output) e.Variants */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Source))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[5]))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[8], p[5]);
    r05_close_evar(p+15, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+17);
    r05_alloc_function(&r05f_Source);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_link_brackets(p[17], p[22]);
    r05_correct_evar(p+13);
    r05_link_brackets(p[18], p[20]);
    r05_correct_evar(p+11);
    r05_splice_evar(p[19], p+11);
    r05_splice_evar(p[21], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FileName: 7 */
    /* e.Output: 9 */
    /* e.Variants: 11 */
    struct r05_node *p[16] = { 0 };
    /* (e.FileName) (Output e.Output) e.Variants */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_Output))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[6], p[5]);
    r05_close_evar(p+11, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_function(&r05f_Output);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[14], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FileName: 7 */
    /* e.NotFoundPath: 9 */
    /* e.Variants: 11 */
    struct r05_node *p[19] = { 0 };
    /* (e.FileName) (NotFound e.NotFoundPath) e.Variants */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_NotFound))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[6], p[5]);
    r05_close_evar(p+11, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_AnalyzeFilem_CheckNotFound);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
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

  do {
    /* e.FileName: 4 */
    struct r05_node *p[9] = { 0 };
    /* (e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_function(&r05f_NotFound);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_bracket(p+8);
    r05_link_brackets(p[6], p[8]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ExistFilem_T, "ExistFile-T") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.FileName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_ExistFile);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_alloc_evar(p+2);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFile, "AnalyzeFile") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 6 */
    struct r05_node *p[13] = { 0 };
    /* e.FileName '.ref' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], 'f'))
      continue;
    if (! r05_char_right(p+3, p[0], p[2], 'e'))
      continue;
    if (! r05_char_right(p+4, p[0], p[3], 'r'))
      continue;
    if (! r05_char_right(p+5, p[0], p[4], '.'))
      continue;
    r05_close_evar(p+6, p[0], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_AnalyzeSourcem_CheckExist);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_ExistFilem_T);
    r05_alloc_insert_pos(p+10);
    r05_alloc_chars(".ref", 4);
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

  do {
    /* e.FileName: 4 */
    struct r05_node *p[11] = { 0 };
    /* e.FileName '.c' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], 'c'))
      continue;
    if (! r05_char_right(p+3, p[0], p[2], '.'))
      continue;
    r05_close_evar(p+4, p[0], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_AnalyzeOutputm_CheckExist);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_ExistFilem_T);
    r05_alloc_insert_pos(p+8);
    r05_alloc_chars(".c", 2);
    r05_alloc_close_call(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[6]);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[8], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FileName: 2 */
    struct r05_node *p[13] = { 0 };
    /* e.FileName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_AnalyzeBothm_CheckExist);
    r05_alloc_open_bracket(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_ExistFilem_T);
    r05_alloc_insert_pos(p+7);
    r05_alloc_chars(".ref", 4);
    r05_alloc_close_call(p+8);
    r05_alloc_close_bracket(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_ExistFilem_T);
    r05_alloc_evar(p+2);
    r05_alloc_chars(".c", 2);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[4]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_link_brackets(p[5], p[9]);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[7], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeSourcem_CheckExist, "AnalyzeSource-CheckExist") {
  r05_this_is_generated_function();

  do {
    /* e.UnitName: 7 */
    struct r05_node *p[16] = { 0 };
    /* True e.UnitName '.ref' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_char_right(p+3, p[2], p[1], 'f'))
      continue;
    if (! r05_char_right(p+4, p[2], p[3], 'e'))
      continue;
    if (! r05_char_right(p+5, p[2], p[4], 'r'))
      continue;
    if (! r05_char_right(p+6, p[2], p[5], '.'))
      continue;
    r05_close_evar(p+7, p[2], p[6]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_function(&r05f_Source);
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_chars(".ref", 4);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_CutFolder);
    r05_alloc_evar(p+7);
    r05_alloc_chars(".c", 2);
    r05_alloc_close_call(p+14);
    r05_alloc_close_bracket(p+15);
    r05_link_brackets(p[9], p[15]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[11], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.SourceName: 3 */
    struct r05_node *p[8] = { 0 };
    /* False e.SourceName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_False))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+5);
    r05_alloc_function(&r05f_NotFound);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeOutputm_CheckExist, "AnalyzeOutput-CheckExist") {
  r05_this_is_generated_function();

  do {
    /* e.OutName: 3 */
    struct r05_node *p[8] = { 0 };
    /* True e.OutName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_True))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+5);
    r05_alloc_function(&r05f_Output);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.OutName: 3 */
    struct r05_node *p[8] = { 0 };
    /* False e.OutName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_left(p+2, p[0], p[1], &r05f_False))
      continue;
    r05_close_evar(p+3, p[2], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+5);
    r05_alloc_function(&r05f_NotFound);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeBothm_CheckExist, "AnalyzeBoth-CheckExist") {
  r05_this_is_generated_function();

  do {
    /* e.SoureName: 5 */
    /* s.Res: 7 */
    /* e.OutName: 8 */
    struct r05_node *p[18] = { 0 };
    /* (True e.SoureName) s.Res e.OutName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_True))
      continue;
    r05_close_evar(p+5, p[4], p[3]);
    if (! r05_svar_left(p+7, p[3], p[1]))
      continue;
    r05_close_evar(p+8, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_function(&r05f_Source);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_CutFolder);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_alloc_close_bracket(p+17);
    r05_link_brackets(p[10], p[17]);
    r05_push_stack(p[16]);
    r05_push_stack(p[14]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[12], p+5);
    r05_splice_evar(p[15], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.SoureName: 6 */
    /* e.OutName: 8 */
    struct r05_node *p[13] = { 0 };
    /* (False e.SoureName) True e.OutName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_False))
      continue;
    if (! r05_function_left(p+5, p[3], p[1], &r05f_True))
      continue;
    r05_close_evar(p+6, p[4], p[3]);
    r05_close_evar(p+8, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_function(&r05f_Output);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[11], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.UnitName: 12, 14 */
    struct r05_node *p[19] = { 0 };
    /* (False e.UnitName '.ref') False e.UnitName '.c' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], 'c'))
      continue;
    if (! r05_char_right(p+3, p[0], p[2], '.'))
      continue;
    if (! r05_brackets_left(p+4, p[0], p[3]))
      continue;
    if (! r05_function_left(p+6, p[4], p[5], &r05f_False))
      continue;
    if (! r05_function_left(p+7, p[5], p[3], &r05f_False))
      continue;
    if (! r05_char_right(p+8, p[6], p[5], 'f'))
      continue;
    if (! r05_char_right(p+9, p[6], p[8], 'e'))
      continue;
    if (! r05_char_right(p+10, p[6], p[9], 'r'))
      continue;
    if (! r05_char_right(p+11, p[6], p[10], '.'))
      continue;
    r05_close_evar(p+12, p[6], p[11]);
    if (! r05_repeated_evar_left(p+14, p[7], p[3], p+12))
      continue;
    if (! r05_empty_hole(p[15], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_NotFound);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+12);
    r05_splice_evar(p[17], p+12);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CutFolder, "CutFolder") {
  r05_this_is_generated_function();

  do {
    /* e.Folder: 2 */
    /* s.Sep: 4 */
    /* e.FileName: 5 */
    struct r05_node *p[17] = { 0 };
    /* e.Folder s.Sep e.FileName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_svar_left(p+4, p[3], p[1]))
        continue;
      r05_close_evar(p+5, p[4], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+7);
      r05_alloc_function(&r05f_CutFolderu_check);
      r05_alloc_open_bracket(p+8);
      r05_alloc_insert_pos(p+9);
      r05_alloc_close_bracket(p+10);
      r05_alloc_svar(p+4);
      r05_alloc_open_bracket(p+11);
      r05_alloc_insert_pos(p+12);
      r05_alloc_close_bracket(p+13);
      r05_alloc_open_call(p+14);
      r05_alloc_function(&r05f_IsDirectorySeparator);
      r05_alloc_svar(p+4);
      r05_alloc_close_call(p+15);
      r05_alloc_close_call(p+16);
      r05_push_stack(p[16]);
      r05_push_stack(p[7]);
      r05_push_stack(p[15]);
      r05_push_stack(p[14]);
      r05_link_brackets(p[11], p[13]);
      r05_correct_evar(p+5);
      r05_link_brackets(p[8], p[10]);
      r05_correct_evar(p+2);
      r05_splice_evar(p[9], p+2);
      r05_splice_evar(p[12], p+5);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CutFolderu_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(CutFolderu_check, "CutFolder_check") {
  r05_this_is_generated_function();

  do {
    /* e.Folder: 7 */
    /* e.FileName: 9 */
    /* s.Sep: 11 */
    struct r05_node *p[15] = { 0 };
    /* (e.Folder) s.Sep (e.FileName) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_left(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_svar_left(p+11, p[4], p[5]))
      continue;
    if (! r05_empty_hole(p[11], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_CutFolder);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[13], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Folder: 4 */
    /* s.Sep: 6 */
    /* e.FileName: 9 */
    /* e.Other: 11 */
    struct r05_node *p[19] = { 0 };
    /* (e.Folder) s.Sep (e.FileName) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    r05_close_evar(p+11, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_CutFolderu_forward);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_svar(p+6);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[15], p+4);
    r05_splice_evar(p[17], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CutFolderu_forward, "CutFolder_forward") {
  r05_this_is_generated_function();

  do {
    /* e.Folder_fix: 4 */
    /* t.Folder_next: 6 */
    /* e.Folder_rest: 8 */
    struct r05_node *p[16] = { 0 };
    /* (e.Folder_fix) t.Folder_next e.Folder_rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[3], p[1]))
      continue;
    r05_close_evar(p+8, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_CutFolderu_next);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[12], p+4);
    r05_splice_tvar(p[12], p+6);
    r05_splice_evar(p[14], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Folder_fix: 4 */
    struct r05_node *p[9] = { 0 };
    /* (e.Folder_fix) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_CutFolderu_cont);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CutFolderu_next, "CutFolder_next") {
  r05_this_is_generated_function();

  do {
    /* e.Folder_fix: 4 */
    /* e.Folder_var: 6 */
    /* s.Sep: 8 */
    /* e.FileName: 9 */
    struct r05_node *p[21] = { 0 };
    /* (e.Folder_fix) e.Folder_var s.Sep e.FileName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    p[6] = p[3]->next;
    p[7] = p[3];
    r05_start_e_loop();
    do {
      if (! r05_svar_left(p+8, p[7], p[1]))
        continue;
      r05_close_evar(p+9, p[8], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_CutFolderu_check);
      r05_alloc_open_bracket(p+12);
      r05_alloc_insert_pos(p+13);
      r05_alloc_close_bracket(p+14);
      r05_alloc_svar(p+8);
      r05_alloc_open_bracket(p+15);
      r05_alloc_insert_pos(p+16);
      r05_alloc_close_bracket(p+17);
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_IsDirectorySeparator);
      r05_alloc_svar(p+8);
      r05_alloc_close_call(p+19);
      r05_alloc_close_call(p+20);
      r05_push_stack(p[20]);
      r05_push_stack(p[11]);
      r05_push_stack(p[19]);
      r05_push_stack(p[18]);
      r05_link_brackets(p[15], p[17]);
      r05_correct_evar(p+9);
      r05_link_brackets(p[12], p[14]);
      r05_correct_evar(p+6);
      r05_correct_evar(p+4);
      r05_splice_evar(p[13], p+4);
      r05_splice_evar(p[13], p+6);
      r05_splice_evar(p[16], p+9);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+6, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Folder_fix: 4 */
    /* e.Folder_rest: 6 */
    struct r05_node *p[11] = { 0 };
    /* (e.Folder_fix) e.Folder_rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_CutFolderu_cont);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CutFolderu_cont, "CutFolder_cont") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 2 */
    struct r05_node *p[5] = { 0 };
    /* e.FileName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+4);
    r05_correct_evar(p+2);
    r05_splice_evar(p[4], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(R05m_CCompile, "R05-CCompile") {
  r05_this_is_generated_function();

  do {
    /* e.CSources: 2 */
    struct r05_node *p[11] = { 0 };
    /* e.CSources */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CCompilem_SwSetEnv);
    r05_alloc_open_bracket(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_GetEnv);
    r05_alloc_chars("R05CCOMP", 8);
    r05_alloc_close_call(p+7);
    r05_alloc_close_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_link_brackets(p[5], p[8]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[9], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(CCompilem_SwSetEnv, "CCompile-SwSetEnv") {
  r05_this_is_generated_function();

  do {
    /* e.CSources: 4 */
    struct r05_node *p[6] = { 0 };
    /* () e.CSources */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[3]))
      continue;
    r05_close_evar(p+4, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_number(0UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.CommandLine: 4 */
    /* e.CSources: 6 */
    struct r05_node *p[20] = { 0 };
    /* (e.CommandLine) e.CSources */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_System);
    r05_alloc_insert_pos(p+9);
    r05_alloc_char(' ');
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_GetEnv);
    r05_alloc_chars("R05CFLAGS", 9);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_compilerutilsu_IncludeFlag);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_R05m_LoadPath);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_compilerutilsu_QuoteFile);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[8]);
    r05_push_stack(p[18]);
    r05_push_stack(p[16]);
    r05_correct_evar(p+6);
    r05_push_stack(p[15]);
    r05_push_stack(p[12]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_evar(p[17], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(compilerutilsu_IncludeFlag, "compilerutils_IncludeFlag") {
  r05_this_is_generated_function();

  do {
    /* e.PathEntry: 4 */
    struct r05_node *p[7] = { 0 };
    /* (e.PathEntry) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_chars(" -I\"", 4);
    r05_alloc_insert_pos(p+6);
    r05_alloc_char('\"');
    r05_correct_evar(p+4);
    r05_splice_evar(p[6], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(compilerutilsu_QuoteFile, "compilerutils_QuoteFile") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 4 */
    struct r05_node *p[7] = { 0 };
    /* (e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_chars(" \"", 2);
    r05_alloc_insert_pos(p+6);
    r05_alloc_char('\"');
    r05_correct_evar(p+4);
    r05_splice_evar(p[6], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */

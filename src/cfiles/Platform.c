/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Platform)
R05_DECLARE_ENTRY_FUNCTION(DirectorySeparator)
R05_DECLARE_ENTRY_FUNCTION(IsDirectorySeparator)
R05_DECLARE_ENTRY_FUNCTION(PathSeparator)
R05_DEFINE_LOCAL_ENUM(POSIX, "POSIX")
R05_DEFINE_LOCAL_ENUM(True, "True")
R05_DEFINE_LOCAL_ENUM(False, "False")

R05_DEFINE_ENTRY_FUNCTION(Platform, "Platform") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_POSIX);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(DirectorySeparator, "DirectorySeparator") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('/');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(IsDirectorySeparator, "IsDirectorySeparator") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[3] = { 0 };
    /* '/' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_left(p+2, p[0], p[1], '/'))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_True);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* s.Other: 2 */
    struct r05_node *p[3] = { 0 };
    /* s.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_svar_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[2], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_False);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(PathSeparator, "PathSeparator") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[2] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_char(':');
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */

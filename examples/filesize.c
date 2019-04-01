#include <stdio.h>
#include "refal05rts.h"


/*
  <FileSize s.CHAR+> == s.NUMBER
*/
R05_DEFINE_ENTRY_FUNCTION(FileSize) {
  struct r05_node *fname_b, *fname_e;
  char filename[FILENAME_MAX + 1];
  size_t filename_len;
  FILE *f;
  long int size;
  struct r05_node *callee = arg_begin->next;

  /* сопоставление с образцом */
  r05_prepare_argument(&fname_b, &fname_e, arg_begin, arg_end);
  filename_len =
    r05_read_chars(filename, FILENAME_MAX, &fname_b, &fname_e);
  filename[filename_len] = '\0';

  if (filename_len == 0) {
    r05_recognition_impossible();
  }

  if (! r05_empty_seq(fname_b, fname_e)) {
    struct r05_node *p = fname_b;
    while (p != fname_e->next && p->tag == R05_DATATAG_CHAR) {
      p = p->next;
    }

    if (p == fname_e->next) {
      r05_builtin_error("very long filename");
    } else {
      r05_recognition_impossible();
    }
  }

  /* получение объёма файла */
  f = fopen(filename, "r");
  if (f == NULL) {
    r05_builtin_error_errno("Can't open file");
  }

  if (fseek(f, 0, SEEK_END) != 0) {
    r05_builtin_error_errno("Can't seeking to end of file");
  }

  size = ftell(f);
  if (size == -1L) {
    r05_builtin_error_errno("Can't telling position of file");
  }

  if (fclose(f) == EOF) {
    r05_builtin_error_errno("Can't close file correctly");
  }

  /* построение результата */
  arg_begin->tag = R05_DATATAG_NUMBER;
  arg_begin->info.number = (r05_number) size;
  r05_splice_to_freelist(callee, arg_end);
}

#!/bin/bash
(
  MODULES="refal05c Error Escape FindFile Generator Lexer Parser
    Sentence SymTable LibraryEx"
  MODULES=$(echo $MODULES)

  mkdir -p ../bin

  if [ "$1" == "stable" ]; then
    refc $MODULES
    mv *.rsl ../bin
    EXECUTABLE="refgo ../bin(${MODULES// /+})"
  else
    EXECUTABLE="../bin/refal05c"
  fi

  source ../c-plus-plus.conf.sh
  R05CCOMP="$R05CCOMP -I../lib -orefal05c"
  R05PATH=../lib
  echo Y | $EXECUTABLE $MODULES Library refalrts

  # Копирование необходимо при компиляции при помощи Cygwin или MSYS,
  # поскольку на платформе Windows невозможно перезаписать исполнимый
  # файл, если соответствующая ему программма выполняется.
  # Поэтому создаём файл в текущей папке и перекладываем в ../bin
  mv refal05c ../bin

  mkdir -p cfiles
  mv *.c ../lib/Library.c cfiles
)

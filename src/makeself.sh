#!/bin/bash
(
  MODULES="refal05c Algorithm Error Escape FindFile Generator Lexer
    ParseCmdLine Parser SymTable LibraryEx"
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
  CLINE="$CLINE -I../lib -orefal05c"
  echo Y | $EXECUTABLE +c "$CLINE" +d ../lib $MODULES Library refalrts

  # Копирование необходимо при компиляции при помощи Cygwin или MSYS,
  # поскольку на платформе Windows невозможно перезаписать исполнимый
  # файл, если соответствующая ему программма выполняется.
  # Поэтому создаём файл в текущей папке и перекладываем в ../bin
  mv refal05c ../bin

  mkdir -p cfiles
  mv *.c ../lib/Library.c cfiles
)

#!/bin/bash
(
  MODULES="refal05c R05-AST R05-CompilerUtils R05-Generator R05-Lexer R05-Parser
    LibraryEx"
  MODULES=$(echo $MODULES)

  mkdir -p ../bin

  if [ "$1" == "stable" ]; then
    refc $MODULES
    mv *.rsl ../bin
    EXECUTABLE="refgo ../bin(${MODULES// /+})"
  else
    EXECUTABLE="../bin/refal05c"
  fi

  if [ "$1" == "lambda" ]; then
    srmake -o$EXECUTABLE refal05c.ref
    echo
    rm -f *.rasl
  fi

  source ../c-plus-plus.conf.sh
  export R05CFLAGS="-orefal05c -DR05_SHOW_STAT $R05CFLAGS"
  export R05PATH=../lib
  echo Y | $EXECUTABLE $MODULES Library refal05rts

  # Копирование необходимо при компиляции при помощи Cygwin или MSYS,
  # поскольку на платформе Windows невозможно перезаписать исполнимый
  # файл, если соответствующая ему программма выполняется.
  # Поэтому создаём файл в текущей папке и перекладываем в ../bin
  mv refal05c ../bin

  mkdir -p cfiles
  mv *.c cfiles
)

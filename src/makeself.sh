#!/bin/bash
(
  MODULES="main CompilerUtils generator parser"
  LIBS="LibraryEx R5FW-Parser R5FW-Plainer R5FW-Transformer Platform"

  mkdir -p ../bin rsl

  if [[ "$1" == "stable" ]]; then
    refc ${MODULES}
    mv *.rsl rsl
    EXECUTABLE="refgo -l20 rsl(${MODULES// /+})+${LIBS// /+}"
  else
    EXECUTABLE="../bin/refal05c"
  fi

  if [[ "$1" == "lambda" ]]; then
    rlmake --debug -o${EXECUTABLE} --ref5rsl main.ref
    echo
  fi

  if [[ "$2" == "and_stop" ]]; then
    exit
  fi

  source ../c-plus-plus.conf.sh
  export R05CFLAGS="-orefal05c -DR05_SHOW_STAT $R05CFLAGS"
  export R05PATH=../lib
  echo Y | ${EXECUTABLE} ${MODULES} ${LIBS} Library refal05rts

  # Копирование необходимо при компиляции при помощи Cygwin или MSYS,
  # поскольку на платформе Windows невозможно перезаписать исполнимый
  # файл, если соответствующая ему программма выполняется.
  # Поэтому создаём файл в текущей папке и перекладываем в ../bin
  mv refal05c ../bin

  mkdir -p cfiles
  mv *.c cfiles
)

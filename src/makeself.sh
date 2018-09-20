#!/bin/sh
[ -e refal05c ] || cp ../bin/refal05c refal05c
[ -e refal05c-s ] || cp ../bin/refal05c refal05c-s
# Копирование необходимо при компиляции при помощи Cygwin или MSYS,
# поскольку на платформе Windows невозможно перезаписать исполнимый
# файл, если соответствующая ему программма выполняется.
cp refal05c refal05c_
(
  MODULES="refal05c Algorithm Error Escape FindFile Generator Lexer
    ParseCmdLine Parser SymTable
    Library LibraryEx refalrts"
  ./refal05c_ -c "g++ -I../lib -orefal05c" -d ../lib $MODULES
)
mv *.cpp ../bootstrap
mv ../lib/LibraryEx.cpp ../bootstrap
cp ../lib/*.cpp ../bootstrap
cp refal05c ../bin

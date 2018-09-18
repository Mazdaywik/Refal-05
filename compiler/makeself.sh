#!/bin/sh
[ -e refal05c ] || cp ../bin/refal05c refal05c
[ -e refal05c-s ] || cp ../bin/refal05c refal05c-s
# Копирование необходимо при компиляции при помощи Cygwin или MSYS,
# поскольку на платформе Windows невозможно перезаписать исполнимый
# файл, если соответствующая ему программма выполняется.
cp refal05c refal05c_
../bin/lexgen Lexer.sref
../bin/srmake -s ./refal05c_ -c "g++ -I../srlib -orefal05c" -d ../srlib refal05c
mv *.cpp ../bootstrap
mv ../srlib/LibraryEx.cpp ../bootstrap
cp ../srlib/*.cpp ../bootstrap
cp refal05c ../bin

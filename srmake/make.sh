#!/bin/sh
export MODULES='SRMake FileScanner FindFile ParseCmdLine
  Library LibraryEx refalrts'
export GCCLINE='g++ -I../srlib -osrmake -DDONT_PRINT_STATISTICS'
../bin/refal05c -c "$GCCLINE" -d ../srlib -d ../compiler $MODULES
cp srmake ../bin
rm *.cpp

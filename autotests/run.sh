#!/bin/bash

run_test_aux() {
  echo Passing $1...
  REF=$1
  CFILE=${REF%%.ref}.c
  EXE=${REF%%.ref}
  SATELLITE=${REF%%.ref}.SATELLITE.ref
  SATELLITEC=${REF%%.ref}.SATELLITE.c

  CLINE=$R05CCOMP

  R05CCOMP= R05PATH= ../bin/refal05c $REF 2>__error.txt
  if [ $? -ge 200 ]; then
    echo COMPILER ON $REF FAILS, SEE __error.txt
    exit
  fi
  rm __error.txt
  if [ ! -e $CFILE ]; then
    echo COMPILATION FAILED
    exit
  fi

  if [ -e $SATELLITE ]; then
    ../bin/refal05c $SATELLITE
    if [ ! -e $SATELLITEC ]; then
      echo COMPILATION FAILED
      exit
    fi
  else
    set SATELLITEC=
  fi

  $CLINE -I../lib -o$EXE $CFILE $SATELLITEC ../lib/Library.c ../lib/refal05rts.c
  if [ $? -gt 0 ]; then
    echo COMPILATION FAILED
    exit
  fi

  ./$EXE 2> __dump.txt
  # команда [ в условии меняет код возврата, поэтому нужна переменная
  EXIT_CODE=$?
  if [ $EXIT_CODE -ge 200 ]; then
    echo TEST FAILED, SEE __dump.txt
    exit
  elif [ $EXIT_CODE -gt 0 ]; then
    echo "TEST FAILED (INTERNAL ERROR)"
    exit
  fi

  rm $CFILE $EXE $SATELLITEC
  [ -e __dump.txt ] && rm __dump.txt

  echo
}

run_test_aux.BAD-SYNTAX() {
  echo Passing $1...
  REF=$1
  CFILE=${REF%%.ref}.c
  EXE=${REF%%.ref}

  R05CCOMP= R05PATH= ../bin/refal05c $REF 2>__error.txt
  if [ $? -ge 200 ]; then
    echo COMPILER ON $REF FAILS, SEE __error.txt
    exit
  fi
  rm __error.txt
  if [ -e $CFILE ]; then
    echo COMPILATION SUCCESSED, BUT EXPECTED SYNTAX ERROR
    rm $CFILE
    exit
  fi

  echo "Ok! Compiler didn't crash on invalid syntax"
  echo
}

run_test_aux.SATELLITE() {
  # echo нужен, так как bash не позволяет объявлять пустые функции
  echo "Skip run_test_aux.SATELLITE"
}

run_test() {
  REF=$1
  SUFFIX=`echo ${REF%%.ref} | sed 's/[^.]*\(\.[^.]*\)*/\1/'`
  run_test_aux$SUFFIX $1
}

source ../c-plus-plus.conf.sh

if [ -z "$1" ]; then
  for s in *.ref; do
    run_test $s
  done
else
  for s in $*; do
    run_test $s
  done
fi

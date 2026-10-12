@echo off
setlocal DisableDelayedExpansion
call :MAIN %*
exit /b

:MAIN
setlocal
  call ..\c-plus-plus.conf.cmd
  if {%1}=={} (
    for %%s in (*.ref) do (
      echo %%~s>filename.tmp
      call :RUN_TEST "%%~s" || exit /b 1
    )
  ) else (
    for %%s in (%*) do (
      echo %%~s>filename.tmp
      call :RUN_TEST "%%~s" || exit /b 1
    )
  )
  erase filename.tmp
endlocal
goto :EOF

:RUN_TEST
setlocal
  for %%s in ("%~n1") do call :RUN_TEST_AUX%%~xs "%~1" || exit /b 1
endlocal
goto :EOF

:RUN_TEST_AUX
setlocal
  for /F "delims=/" %%i in (filename.tmp) do (
    echo Passing %%~i...
    set REF="%%~i"
    set EXE="%%~ni.exe"
    set SATELLITE="satellite\%%~i"
  )

  if not exist %SATELLITE% (
    set SATELLITE=
  )

  set REF5RSL=
  set R05PATH=..\lib
  ..\bin\refal05c ..\lib\refal05rts %REF% %SATELLITE% refal05bif 2> __error.txt
  if errorlevel 200 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit /b 1
  )
  erase __error.txt

  if exist refal05rts.exe move refal05rts.exe %EXE%
  if exist a.exe move a.exe %EXE%
  if not exist %EXE% (
    echo COMPILATION FAILED
    exit /b 1
  )

  %EXE% 2> __dump.txt
  if errorlevel 200 (
    echo TEST FAILED, SEE __dump.txt
    exit /b 1
  )

  if errorlevel 1 (
    echo TEST FAILED ^(INTERNAL ERROR^)
    exit /b 1
  )

  erase *.c %EXE%
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  if exist __dump.txt erase __dump.txt
  echo.
endlocal
goto :EOF

:RUN_TEST_AUX.BAD-SYNTAX
setlocal
  echo Passing %~1 (syntax error recovering)...
  set REF="%1"
  set CFILE="%~n1.c"

  set R05CCOMP=
  set R05PATH=

  ..\bin\refal05c %1 2> __error.txt
  if errorlevel 200 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit /b 1
  )
  erase __error.txt
  if exist %CFILE% (
    echo COMPILATION SUCCESSED, BUT EXPECTED SYNTAX ERROR
    erase %CFILE%
    exit /b 1
  )
  echo Ok! Compiler didn't crash on invalid syntax
  echo.
endlocal
goto :EOF

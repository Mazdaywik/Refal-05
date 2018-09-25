@echo off
call :MAIN %*
exit

:MAIN
setlocal
  call ..\c-plus-plus.conf.bat
  if {%1}=={} (
    for %%s in (*.ref) do call :RUN_TEST %%s
  ) else (
    for %%s in (%*) do call :RUN_TEST %%s
  )
endlocal
goto :EOF

:RUN_TEST
setlocal
  for %%s in (%~n1) do call :RUN_TEST_AUX%%~xs %1
endlocal
goto :EOF

:RUN_TEST_AUX
setlocal
  echo Passing %1...
  set REF=%1
  set CFILE=%~n1.c
  set EXE=%~n1.exe

  ..\bin\refal05c %1 2> __error.txt
  if errorlevel 1 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit
  )
  erase __error.txt
  if not exist %CFILE% (
    echo COMPILATION FAILED
    exit
  )

  %CLINE% -I../lib -DDUMP_FILE=\"dump.txt\" -DDONT_PRINT_STATISTICS ^
    %CFILE% ../lib/refalrts.c
  if errorlevel 1 (
    echo COMPILATION FAILED
    exit
  )
  if exist a.exe move a.exe %EXE%

  %EXE%
  if errorlevel 1 (
    echo TEST FAILED, SEE dump.txt
    exit
  )

  erase %CFILE% %EXE%
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  if exist dump.txt erase dump.txt
  echo.
endlocal
goto :EOF

:RUN_TEST_AUX.BAD-SYNTAX
setlocal
  echo Passing %1 (syntax error recovering)...
  set REF=%1
  set CFILE=%~n1.c

  ..\bin\refal05c %1 2> __error.txt
  if errorlevel 1 (
    echo COMPILER ON %1 FAILS, SEE __error.txt
    exit
  )
  erase __error.txt
  if exist %CFILE% (
    echo COMPILATION SUCCESSED, BUT EXPECTED SYNTAX ERROR
    erase %CFILE%
    exit
  )
  echo Ok! Compiler didn't crash on invalid syntax
  echo.
endlocal
goto :EOF

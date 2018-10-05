@echo off
setlocal
  set MODULES=refal05c Error Escape FindFile Generator Lexer
  set MODULES=%MODULES% Parser R05-AST Sentence SymTable LibraryEx

  md ..\bin 2>NUL

  if {%1}=={stable} (
    for %%r in (%MODULES%) do refc %%r
    move *.rsl ..\bin >NUL
    set EXECUTABLE=refgo ../bin^(%MODULES: =+%^)
  ) else (
    set EXECUTABLE=..\bin\refal05c.exe
  )

  call ..\c-plus-plus.conf.bat
  set R05CFLAGS=-DR05_SHOW_STAT
  set R05PATH=..\lib
  echo Y|%EXECUTABLE% %MODULES% Library refal05rts
  if exist a.exe move a.exe refal05c.exe
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds

  move refal05c.exe ..\bin >NUL

  md cfiles 2>NUL
  move *.c cfiles >NUL
  move ..\lib\Library.c cfiles >NUL
endlocal

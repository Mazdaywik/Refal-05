@echo off
setlocal
  set MODULES=refal05c R05-CompilerUtils R05-Generator R05-Parser
  set LIBS=LibraryEx Refal5-AST Refal5-Plainer Refal5-Lexer Refal5-Parser
  set LIBS=%LIBS% Refal5-Transformer Refal5-Tokens Platform

  md ..\bin 2>NUL

  if {%1}=={stable} (
    refc %MODULES%
    move *.rsl ..\bin >NUL
    set EXECUTABLE=refgo ../bin^(%MODULES: =+%^)+%LIBS: =+%
  ) else (
    set EXECUTABLE=..\bin\refal05c.exe
  )

  if {%1}=={lambda} (
    call srmake -o..\bin\refal05c.exe refal05c.ref
    echo.
    erase *.rasl
  )

  call ..\c-plus-plus.conf.bat
  set R05CFLAGS=-DR05_SHOW_STAT %R05CFLAGS%
  set R05PATH=..\lib
  echo Y|%EXECUTABLE% %MODULES% %LIBS% Library refal05rts
  if exist a.exe move a.exe refal05c.exe
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds

  move refal05c.exe ..\bin >NUL

  md cfiles 2>NUL
  move *.c cfiles >NUL
endlocal

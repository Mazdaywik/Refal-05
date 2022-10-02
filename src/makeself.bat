@echo off
setlocal
  set MODULES=refal05c R05-CompilerUtils R05-Generator R05-Parser
  set LIBS=LibraryEx R5FW-Parser-Defs R5FW-Parser R5FW-Plainer
  set LIBS=%LIBS% R5FW-Transformer Platform

  md ..\bin 2>NUL

  if {%1}=={stable} (
    refc %MODULES%
    move *.rsl ..\bin >NUL
    set EXECUTABLE=refgo -l20 ../bin^(%MODULES: =+%^)+%LIBS: =+%
  ) else (
    set EXECUTABLE=..\bin\refal05c.exe
  )

  :: В опцию -o нельзя вставлять %EXECUTABLE%, приводит к ошибке.
  if {%1}=={lambda} (
    call rlmake --debug -o..\bin\refal05c.exe --ref5rsl refal05c.ref
    echo.
  )

  if {%2}=={and_stop} goto :EOF

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

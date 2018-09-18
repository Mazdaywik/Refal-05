@echo off
setlocal
  call ..\c-plus-plus.conf.bat
  ..\bin\srmake ^
    -s ..\bin\refal05c ^
    -c "%CPPLINE% -I../srlib -DDONT_PRINT_STATISTICS" ^
    -d ..\srlib -d ..\compiler LexGen
  if exist a.exe move a.exe LexGen.exe
  copy LexGen.exe ..\bin\lexgen.exe
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  erase *.cpp
endlocal

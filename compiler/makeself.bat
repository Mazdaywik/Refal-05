@echo off
setlocal
  call ..\c-plus-plus.conf.bat
  if not exist refal05c.exe copy ..\bin\refal05c.exe refal05c.exe
  if not exist refal05c-s.exe copy ..\bin\refal05c.exe refal05c-s.exe
  copy refal05c.exe refal05c_.exe >NUL
  ..\bin\srmake -s refal05c_ -c "%CPPLINE% -I..\srlib" -d ..\srlib refal05c
  if exist a.exe move a.exe refal05c.exe
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  move *.cpp ..\bootstrap >NUL
  move ..\srlib\LibraryEx.cpp ..\bootstrap >NUL
  copy ..\srlib\*.cpp ..\bootstrap >NUL
  copy refal05c.exe ..\bin >NUL
endlocal

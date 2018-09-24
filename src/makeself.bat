@echo off
setlocal
  set MODULES=refal05c Algorithm Error Escape FindFile Generator Lexer
  set MODULES=%MODULES% ParseCmdLine Parser SymTable
  set MODULES=%MODULES% Library LibraryEx refalrts

  call ..\c-plus-plus.conf.bat
  if not exist refal05c.exe copy ..\bin\refal05c.exe refal05c.exe
  if not exist refal05c-s.exe copy ..\bin\refal05c.exe refal05c-s.exe
  copy refal05c.exe refal05c_.exe >NUL
  refal05c_ +c "%CPPLINE% -I..\lib" +d ..\lib %MODULES%
  if exist a.exe move a.exe refal05c.exe
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  move *.cpp ..\bootstrap >NUL
  move ..\lib\Library*.cpp ..\bootstrap >NUL
  copy ..\lib\*.cpp ..\bootstrap >NUL
  copy refal05c.exe ..\bin >NUL
endlocal

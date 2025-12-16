@echo off
setlocal
if {%1}=={lambda} (
  set STABLE=lambda
) else (
  set STABLE=stable
)
if not exist c-plus-plus.conf.bat (
  copy lib\c-plus-plus.conf.bat.template c-plus-plus.conf.bat
)
cd src
call makeself.bat %STABLE%
call makeself.bat
cd ..\autotests
call run.bat
cd ..
endlocal

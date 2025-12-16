@echo off
setlocal
if {%1}=={lambda} (
  set STABLE=lambda
) else (
  set STABLE=stable
)
if not exist c-plus-plus.conf.cmd (
  copy lib\c-plus-plus.conf.cmd.template c-plus-plus.conf.cmd
)
cd src
call makeself.cmd %STABLE%
call makeself.cmd
cd ..\autotests
call run.cmd
cd ..
endlocal

@if not exist c-plus-plus.conf.bat (
  @copy lib\c-plus-plus.conf.bat.template c-plus-plus.conf.bat
)
cd src
call makeself.bat stable
call makeself.bat
cd ..\autotests
call run.bat
cd ..

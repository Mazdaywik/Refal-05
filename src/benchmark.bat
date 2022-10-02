@echo off

if {%1}=={} (
  set TIMES=9
) else (
  set TIMES=%1
)

if {%~2}=={} (
  set LOG=benchmark-%DATE%-%TIME::=-%
) else (
  set LOG=benchmark-%~2-%DATE%-%TIME::=-%
)

echo.
echo Build refal05c with Refal-5-lambda...
call makeself.bat lambda and_stop

echo.
echo Run "..\bin\refal05c @benchmark.prj" with profile...
set INI=@refal-5-lambda-diagnostics.ini
set INISAVE=%INI%.save
if not exist %INISAVE% copy %INI% %INISAVE%
echo enable-profiler = true>> %INI%
setlocal
set R05CCOMP=
..\bin\refal05c @benchmark.prj
endlocal
move %INISAVE% %INI%
if exist _profile_time.txt move _profile_time.txt "%LOG%_profile_time.txt"
if exist _profile_count.txt move _profile_count.txt "%LOG%_profile_count.txt"

echo.
echo Build refal05c with itself...
call makeself.bat

echo.
echo Run "..\bin\refal05c @benchmark.prj" %TIMES% times...

setlocal
set R05CCOMP=
for /L %%i in (1, 1, %TIMES%) do (
  echo %%i
  echo %%i>>"%LOG%.stdout"
  ..\bin\refal05c @benchmark.prj 1>> "%LOG%.stdout" 2>> "%LOG%.stderr"
)
sort "%LOG%.stderr" > "%LOG%_time.txt"
if exist *.c erase *.c
endlocal

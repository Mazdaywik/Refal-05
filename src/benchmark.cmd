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
call makeself.cmd lambda and_stop

echo.
echo Run "..\bin\refal05c @benchmark.prj" with profile (Refal-5-lambda)...
set INI=@refal-5-lambda-diagnostics.ini
set INISAVE=%INI%.save
if not exist %INISAVE% copy %INI% %INISAVE%
echo enable-profiler = true>> %INI%
setlocal
set R05CCOMP=
..\bin\refal05c @benchmark.prj ^
  1>> "%LOG%_profile-lambda.stdout" ^
  2>> "%LOG%_profile-lambda.stderr"
endlocal
move %INISAVE% %INI%
if exist _profile_time.txt (
  move _profile_time.txt "%LOG%_profile-lambda_time.txt"
)
if exist _profile_count.txt (
  move _profile_count.txt "%LOG%_profile-lambda_count.txt"
)

echo.
echo Build refal05c with itself (with -DR05_PROFILER)...
setlocal
set R05CFLAGS=%R05CFLAGS% -DR05_PROFILER
call makeself.cmd lambda
endlocal

echo.
echo Run "..\bin\refal05c @benchmark.prj" with profile (Refal-05)...
setlocal
set R05CCOMP=
..\bin\refal05c @benchmark.prj ^
  1>> "%LOG%_profile-05.stdout" ^
  2>> "%LOG%_profile-05.stderr"
endlocal
if exist __profile-05.txt move __profile-05.txt "%LOG%_profile-05.txt"

echo.
echo Build refal05c with itself...
call makeself.cmd
if exist __profile-05.txt erase __profile-05.txt

echo.
echo Run "..\bin\refal05c @benchmark.prj" %TIMES% times...

setlocal
set R05CCOMP=
for /L %%i in (1, 1, %TIMES%) do (
  echo %%i
  echo %%i>>"%LOG%.stdout"
  ..\bin\refal05c -nts @benchmark.prj 1>> "%LOG%.stdout" 2>> "%LOG%.stderr"
)
sort "%LOG%.stderr" > "%LOG%_time.txt"
if exist *.c erase *.c
endlocal

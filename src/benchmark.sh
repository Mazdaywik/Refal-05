#!/bin/bash

if [[ -z "$1" ]]; then
  TIMES=9
else
  TIMES="$1"
fi

if [[ -z "$2" ]]; then
  LOG="benchmark-$(date)"
else
  LOG="benchmark-$2-$(date)"
fi

echo
echo Build refal05c with Refal-5-lambda...
./makeself.sh lambda and_stop

echo
echo Run "../bin/refal05c @benchmark.prj" with profile...
INI=@refal-5-lambda-diagnostics.ini
INISAVE=${INI}.save
[[ -e "$INISAVE" ]] || cp "$INI" "$INISAVE"
echo "enable-profiler = true" >> "$INI"
../bin/refal05c @benchmark.prj
mv "$INISAVE" "$INI"
[[ -e _profile_time.txt ]] && mv _profile_time.txt "${LOG}_profile_time.txt"
[[ -e _profile_count.txt ]] && mv _profile_count.txt "${LOG}_profile_count.txt"

echo
echo Build refal05c with itself...
./makeself.sh

echo
echo Run "../bin/refal05c @benchmark.prj" $TIMES times...

for ((i = 1; i <= "$TIMES"; ++i)); do
  echo ${i}
  echo ${i}>>"$LOG".stdout
  R05CCOMP= ../bin/refal05c @benchmark.prj 1>> "$LOG".stdout 2>> "$LOG".stderr
done

sort "$LOG".stderr > "$LOG"_time.txt
rm -f *.cpp

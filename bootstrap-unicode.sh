#!/bin/bash
if [ ! -e c-plus-plus.conf.sh ]; then
  cp lib/c-plus-plus-unicode.conf.sh.template c-plus-plus.conf.sh
fi

# Initialize Unicode support
echo "Initializing Unicode support..."
source c-plus-plus.conf.sh

if [ "$1" == "lambda" ]; then
  STABLE=lambda
else
  STABLE=stable
fi

( cd src && ./makeself.sh $STABLE )
( cd src && ./makeself.sh )
( cd autotests && ./run.sh )
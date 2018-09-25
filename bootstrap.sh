#!/bin/bash
if [ ! -e c-plus-plus.conf.sh ]; then
  cp lib/c-plus-plus.conf.sh.template c-plus-plus.conf.sh
fi
( cd src && ./makeself.sh stable )
( cd src && ./makeself.sh )
( cd autotests && ./run.sh )

#!/bin/bash
( cd src && ./makeself.sh stable )
( cd src && ./makeself.sh )
( cd autotests && ./run.sh )

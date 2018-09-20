#!/bin/bash
( cd bootstrap && ./make.sh )
( cd src && ./makeself.sh )
( cd autotests && ./run.sh )

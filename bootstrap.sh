#!/bin/bash
( cd bootstrap && ./make.sh )
( cd compiler && ./makeself.sh )
( cd autotests && ./run.sh )

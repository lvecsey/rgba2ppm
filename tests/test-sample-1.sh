#!/bin/bash

echo srcdir = $srcdir

../src/rgba2ppm $srcdir/sample1.rgba 50 50 > ./sample1.ppm
retval="$?"
echo retval "$retval"

if [ "$retval" != 0 ]; then
    echo Failure on rgba2ppm execution.
    exit 1
fi

ls -ltr $srcdir/sample1.rgba $srcdir/sample1.ppm ./sample1.ppm

cmp $srcdir/sample1.ppm ./sample1.ppm
retval="$?"
echo retval "$retval"

if [ "$retval" != 0 ]; then
    echo Failure on cmp of sample1.ppm files.
    exit 1
fi

exit 0

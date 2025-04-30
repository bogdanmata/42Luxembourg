#!/bin/bash

# clean
rm -f b

# the files a and sw1.diff are from exercice resources
cp a b
patch b sw.diff

diff a b > sw1.diff
diff sw.diff sw1.diff > result.diff

# should be empty
cat result.diff
ls -l result.diff
rm result.diff sw1.diff

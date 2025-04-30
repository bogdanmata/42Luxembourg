#!/bin/bash

# clean
rm -f clean

# test files
touch file1~               # ends with tilde
touch #temp#               # starts and ends with hash
touch normal.txt           # should not be deleted
mkdir subdir
touch subdir/file2~        # inside a subdirectory
touch subdir/#backup#      # also inside a subdirectory

ls -l | cat -e
cat > clean <<EOF
find . \( -name '*~' -o -name '#*#' \) -type f -exec rm -v {} +
EOF
chmod +x clean
./clean

rm -r normal.txt subdir

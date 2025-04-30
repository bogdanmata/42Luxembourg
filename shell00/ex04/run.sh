#!/bin/bash

rm -f midLS

touch file1
touch file2
mkdir subdir
touch subdir/file3

cat > midLS <<EOF
ls -ptm
EOF

chmod +x midLS
./midLS

rm -rf subdir file*

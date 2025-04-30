#!/bin/bash

#clean 
rm -f count_files.sh

cat > count_files.sh <<EOF
find . \( -type f -o -type d \) | wc -l
EOF

chmod +x count_files.sh

touch test1
touch test2
touch test3
touch test4
mkdir subfolder
touch subfolder/test5
touch subfolder/test6

./count_files.sh

rm -rf test* subfolder

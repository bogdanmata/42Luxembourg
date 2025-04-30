#!/bin/bash

#clean 
rm -f find_sh.sh

cat > find_sh.sh <<EOF
find . -type f -name "*.sh" -exec basename {} .sh \;
EOF

chmod +x find_sh.sh

touch test1
touch test2.sh
mkdir subfolder
touch subfolder/test3
touch subfolder/test4.sh

./find_sh.sh | cat -e

rm -rf test* subfolder

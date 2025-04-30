#!/bin/bash

#clean 
rm -f skip.sh

cat > skip.sh <<EOF
ls -l | awk 'NR % 2 == 1'
EOF

chmod +x skip.sh

touch tata
touch titi
touch toto
touch tutu
./skip.sh

rm tata titi toto tutu

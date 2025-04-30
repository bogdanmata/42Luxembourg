#!/bin/bash

#clean 
rm -f MAC.sh

cat > MAC.sh <<'EOF'
ifconfig | awk '/ether/ { print $2 }'
EOF

chmod +x MAC.sh
./MAC.sh | cat -e

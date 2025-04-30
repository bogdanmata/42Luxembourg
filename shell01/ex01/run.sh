#!/bin/bash

#clean 
rm -f print_groups.sh

cat > print_groups.sh << 'EOF'
id -Gn "$FT_USER" | tr ' ' ',' | tr -d '\n'
EOF

chmod +x print_groups.sh
export FT_USER=bocal
./print_groups.sh
export FT_USER=deamon
./print_groups.sh


#!/bin/bash

#clean 
rm -f r_dwssap.sh

cat > r_dwssap.sh <<'EOF'
cat /etc/passwd \
| grep -v '^#' \
| awk 'NR % 2 == 0' \
| cut -d: -f1 \
| rev \
| sort -r \
| awk -v l1="$FT_LINE1" -v l2="$FT_LINE2" 'NR >= l1 && NR <= l2' \
| awk '{ s = s ? s", "$0 : $0 } END { printf "%s.", s }'
EOF

chmod +x r_dwssap.sh

export FT_LINE1=1
export FT_LINE2=4
./r_dwssap.sh | cat -e

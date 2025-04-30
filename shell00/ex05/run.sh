#!/bin/bash

rm -f git_commit.sh

cat > git_commit.sh <<EOF
git log -n 5 --pretty=%H
EOF

chmod +x git_commit.sh
./git_commit.sh | cat -e

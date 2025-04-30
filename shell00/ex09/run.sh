#!/bin/bash

# clean
rm -f ft_magic

cat > ft_magic <<EOF
41      string    42      42 file
EOF

# test files
dd if=/dev/zero of=test1 bs=1 count=41
dd if=/dev/zero of=test2 bs=1 count=42
echo -n "42" >> test1
echo -n "42" >> test2

# should be a 42 file
file -m ft_magic test1
# should not be a 42 file
file -m ft_magic test2

rm test*

#!/bin/bash

# clean
rm -f git_ignore.sh

cat > git_ignore.sh <<EOF
#!/bin/bash
git ls-files --others --ignored --exclude-standard
EOF

chmod +x git_ignore.sh

touch test1
touch test2
mkdir test3
touch test3/file1

./git_ignore.sh | cat -e

rm -r test*

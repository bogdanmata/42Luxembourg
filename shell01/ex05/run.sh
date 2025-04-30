#!/bin/bash

#clean 
rm -f "\"\\?\$*'MaRViN'*\$?\\\""

echo -n "42" > "\"\\?\$*'MaRViN'*\$?\\\""
chmod 614 "\"\\?\$*'MaRViN'*\$?\\\""

ls -lRa *MaRV* | cat -e
cat "\"\\?\$*'MaRViN'*\$?\\\""

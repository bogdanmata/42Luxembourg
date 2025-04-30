#!/bin/bash

#clean
rm -f testShell00.tar

dd if=/dev/zero of=testShell00 bs=1 count=40
chmod 455 testShell00
touch -t 202506012342 testShell00
ls -l
tar -cf testShell00.tar testShell00
rm testShell00

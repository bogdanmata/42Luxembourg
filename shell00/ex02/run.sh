#!/bin/bash

#clean
rm -f exo2.tar

mkdir test0
chmod 715 test0
touch -t 202506012047 test0

dd if=/dev/zero of=test1 bs=1 count=4
chmod 714 test1
touch -t 202506012146 test1

mkdir test2
chmod 504 test2
touch -t 202506012245 test2

dd if=/dev/zero of=test3 bs=1 count=2
chmod 404 test3
touch -t 202506012344 test3

dd if=/dev/zero of=test4 bs=1 count=1
chmod 641 test4
touch -t 202506012343 test4

ln test3 test5
touch -t 202506012344 test5

ln -s test0 test6
touch -t 202506012220 test6

ls -l

tar -cf exo2.tar test*
rm -rf test*

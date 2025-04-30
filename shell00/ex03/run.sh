#!/bin/bash

# clean
rm -f id_rsa_pub

cp ~/.ssh/id_rsa.pub id_rsa_pub

cat id_rsa_pub

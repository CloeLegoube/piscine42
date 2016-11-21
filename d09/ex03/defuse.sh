#!/bin/sh
touch bomb.txt
FTTIME=$(stat -f %m bomb.txt)
FTSECONDS=$((FTTIME + 1))
echo $FTSECONDS

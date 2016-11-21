#!/bin/sh
cat /etc/passwd | sed '/^#/ d' | sed '1d;n;d' | rev | sed 's/\(.*\)://g' | sort -r | sed -n ${FT_LINE1},${FT_LINE2}p | tr '\n' ',' | sed 's/,/, /g' | sed 's/\(.*\), /\1./' | tr -d '\r\n'

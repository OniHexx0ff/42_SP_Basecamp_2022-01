#!/bin/sh

cat /etc/passwd | sed -n "s/:.*//;0~2p" | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2} p" | sed -z "s/\n/, /g;s/, $/./"
#!/bin/sh
cat annuaire.txt | grep -i "bomber" | sed -n "/^[bBnN]/p" | awk '{print $3}' | sed 'n;d'

#!/bin/bash
if [ $(($1 % 2)) -eq 0 ]; then
    echo "Число четное"
else
    echo "Число нечетное"
fi

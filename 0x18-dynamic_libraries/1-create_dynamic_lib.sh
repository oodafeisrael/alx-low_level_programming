#!/bin/bash

c_files=$(ls *.c | grep -v "main.c")
for file in $c_files; do
    gcc -Wall -Werror -Wextra -pedantic -std=c99 -c -fPIC "$file" -o "${file%.c}.o"
done
gcc -shared -o liball.so *.o
rm -f *.o
echo "Dynamic library liball.so created."

#!/bin/bash

# Collect all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each .c file into corresponding .o file
for file in $c_files; do
    gcc -c "$file"
done

# Create the static library
ar rcs liball.a *.o

# Clean up: remove the object files
rm -f *.o

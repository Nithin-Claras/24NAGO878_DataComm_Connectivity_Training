#!/bin/bash
count_file_lines() {
    local file_name=$1
       line_count=$(wc -l < "$file_name")
       echo "The number of lines in $file_name: $line_count"
}

for file_name in "$@"; do
     if test -e "$file_name"; then
         count_file_lines "$file_name"
     else
         echo "Error. File $file_name does not exixts"
     fi
done

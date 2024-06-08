#!/bin/bash
file_name="myfile.txt"
if test -f "$file_name"; then
   echo "File Exists"
else
   echo "File not exists"
fi

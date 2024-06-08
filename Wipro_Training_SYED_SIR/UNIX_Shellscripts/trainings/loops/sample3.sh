#!/bin/bash
a=7
while [ $a -gt 0 ]; do
     echo $a
     ((a--))
done
echo "outside of the loop"
     

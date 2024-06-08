#!/bin/bash
echo -n "Enter a number:"
read num

if [ $num -gt 0 ]; then
   echo "$num is greater than 0"
elif [ $num -lt 0 ]; then
   echo "$num is lesser than 0"
else 
   echo "Entered number 0"
fi

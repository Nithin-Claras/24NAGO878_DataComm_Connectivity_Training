#!/bin/bash
echo -n "Enter your age:"
read age

if [ "$age" -gt 18 -a "$age" -lt 65 ]; then
   echo "You are eligible to vote"
elif [ $age -gt 65 ]; then
   echo "You are eligible for senior citizen benifits"
else 
   echo "You are not eligible to vote"
fi

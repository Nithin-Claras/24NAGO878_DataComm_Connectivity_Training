#!/bin/bash

welcome() {
   echo "welcome $1"
   return 40
}

welcome Alex
res=$?
echo "Number is: $res"

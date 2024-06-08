#!/bin/bash

day=7
case "$day" in 
   '1') echo "Monday"
   ;;
   '2') echo "Tuesday"
   ;;
   '3') echo "Wednesday"
   ;;
   '4') echo "Thursday"
   ;;
   '5') echo "Friday"
   ;;
   '6') echo "Saturday"
   ;;
   '7') echo "Sunday"
   ;;
   *) 
   echo "Enter number between 1 and 7";
   exit 1;
esac
   

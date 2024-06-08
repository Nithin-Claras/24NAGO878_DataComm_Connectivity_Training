#!/bin/bash
check_fn(){
    local num=$1
    
    if((num % 2 == 0)); then
       echo "Number is Even"
    else 
       echo "Number is odd"
    fi
}

read_fn(){
     local number
     while true; do
       read -p "Enter a number(0 to exit):" number
       if [[ $number =~ ^-?[0-9]+$ ]]; then
           if test "$number" -eq 0; then
           echo "Exiting..."
           break
           elif test "$number" -gt 0; then
              check_fn "$number"
           fi
       else
         echo "Please Enter a valid number"
       fi
     done
}
read_fn
     
       

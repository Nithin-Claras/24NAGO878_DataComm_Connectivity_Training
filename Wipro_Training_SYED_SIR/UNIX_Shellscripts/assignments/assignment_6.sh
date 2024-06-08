#!/bin/bash
file_exists() {
    local file="$1"
    [ -f "$file" ]
}

print_error() {
   local msg="$1"
   echo "Error: $msg">&2
   exit 1
}

extract_error() {
   local logfile="$1"
   grep "ERROR" "$logfile" | awk '{print $1, $2, substr($0, index($0,$3))}' | sed 's/\[//; s/\]//; s/:[0-9]         [0-9]:/ /'  
}

main() {
   if [ $# -eq 0 ]; then
      print_error "Log file name not provided"
   fi
   
   local logfile="$1"
   
   if ! file_exists "$logfile"; then
      print_error "Log file '$logfile' not found or is not a regular file"
   fi
   
   extract_error "$logfile"
 }
 
 main "$@"

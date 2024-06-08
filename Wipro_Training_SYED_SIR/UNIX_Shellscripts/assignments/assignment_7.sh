#!/bin/bash    
text_replacement() {
    local input_file=$1
    local old_text=$2
    local new_text=$3
    
    if [ -z "$old_text" ] || [ -z "$new_text" ]; then
       echo "Error: Both old_text and new_text must be non empty."
       exit 1
    fi
    
    if [ ! -f "$input_file" ]; then
       echo "Error: Input file '$input_file' not found."
       exit 1
    fi
    
    local output_file="${input_file%.txt}_replaced.txt"
    sed "s/$old_text/$new_text/g" "$input_file" > "$output_file" 2>&1
    
    echo "File Replacement completed and Output is saved to $output_file"
}

check_arg() {
    if [ "$#" -ne 3 ]; then
       echo "Usage: $0 input_file old_text new_text"
       exit 1 
    fi
}

main() {
   check_arg "$@"
   text_replacement "$@"
}
main "$@"



debug_msg() {
   [ "$DEBUG" = "true" ] && echo "DEBUG: $1"
}

file_create() {
   local directory="$1"
   if [ -d "$directory" ]; then
      echo "Error: Directory '$directory' already exists." >&2
      exit 1
   fi
   
   mkdir -p "$directory" || { echo "Error: Failed to create directory '$directory'." >&2; exit 1; }
   
   filename=""
   for i in $(seq 1 10); do
       filename="$directory/File${i}.txt"
       debug_msg "Creating file: $filename"
       echo "File${i}.txt" > "$filename" || { echo "Error: Failed to create file '$filename'." >&2; exit 1; }
   done
   
   echo "Files created successfully in $directory."
}

while getopts ":d" opt; do
   case $opt in
        d) DEBUG="true";;
        \?) echo "Error: Invalid option -$OPTARG" >&2; exit 1;;
   esac
done
   
shift $((OPTIND -1))
   
if [ $# -eq 0 ]; then
   echo "Error: Directory name not provided." >&2
   exit 1
fi

file_create "$1" 





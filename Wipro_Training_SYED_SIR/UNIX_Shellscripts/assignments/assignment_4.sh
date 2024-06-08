#!/bin/bash
mkdir -p TestDir
printf "File%s.txt\n" {1..10} | xargs -I {} sh -c 'echo "{}" > "TestDir/{}"'
echo "File created successfully"

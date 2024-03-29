#!/bin/bash

filename=$1
word=$2

count=$(grep -c "\<$word\>" "$filename")
total_words=$(wc -w < "$filename")

echo "Total number of words in the file '$filename': $total_words"

echo "The word '$word' occurred $count times in the file '$filename'."

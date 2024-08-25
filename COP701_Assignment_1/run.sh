#!/bin/bash

# Check if the correct number of arguments is provided
if [ "$#" -ne 2 ]; then
    echo "Usage: ./run.sh input.tex output.md"
    exit 1
fi

# Assign input arguments to variables
INPUT_FILE=$1
OUTPUT_FILE=$2

# Run the parser with the provided input and output files
./newparser "./input_folder/$INPUT_FILE" "./output_folder/$OUTPUT_FILE"

# Check if the parser ran successfully
if [ $? -eq 0 ]; then
    echo "Conversion successful. Output written to $OUTPUT_FILE."
else
    echo "An error occurred during conversion."
fi
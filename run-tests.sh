#!/bin/bash

# < means read file into program's input (not using this time)
# > means write program's output to file
# this is called "redirection"

yes|build/hexdump hexdump-test-text > textOutput.txt
yes|build/hexdump hexdump-test-binary.ico > binaryOutput.txt



#include <stdio.h>
#include <ctype.h>

//THIS IS THE FIRST APP IN HEXDUMP 
//courtesy of Preet Ji 
const int ROWS = 24;
const int COLUMNS = 16;

int main(int argc, char const *argv[]){

    // open a file (store file handle in target_file
    FILE *target_file = fopen(argv[1], "r"); //open a file and read and close from it, using argv because 

    // create somewhere to store file contents 
    char buffer[16];

    //read into buffer from file 
    fread(buffer, 1, COLUMNS, target_file); //passes in an argument, need to put 1 for the size for alignment with the end of the file size_t 

    /*printf("%x", buffer[0]);
    printf("%x", buffer[1]);
    printf("%x", buffer[2]);
    printf("%x", buffer[3]);*/

    
    //PRINT THE CONTENTS OF THE BUFFER, ONE BYTE AT A TIME, IN HEXADECIMAL
    //E.G.
    //ab 99 0f c1 ..., print only the first 16 bytes

// 16 characters - use loop?

// BREAK DOWN THE PROBLEM!!!!

    for (int row = 0; row < ROWS; row++ ) {
    for (int col = 0; col < COLUMNS; col++) { //initialised  (this was before you added col < 16etci as 0, i is less than 16 because we want it to print 15 characters in the buffer and loop until end is reached
        // how to select 1 character?
        printf("%02x ", buffer[row][col]); //PERCENT X WILL PRINT IT IN HEXADECIMAL FORM AND buffer[i] will access each line in the buffer
    }//Alex helped with this one and you and Robert gave the inputs, added 0 to signify its the first line 
    }
    printf("\n");

// display --- printf?

// hexadecimal


    fclose(target_file); //closes the file 

    return 0;
}
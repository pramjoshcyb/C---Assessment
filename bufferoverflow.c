#include <stdio.h>


//courtesy of Preet Ji 


int main(int argc, char const *argv[]){

    // open a file (store file handle in target_file)
    FILE *target_file = fopen("hexdump.c", "r"); //open a file and read and close from it 

    // create somewhere to store file contents 
    char buffer[30];

    //read into buffer from file 
    fread(buffer, 1, 30, target_file); //passes in an argument, need to put 1 for the size for alignment with the end of the file size_t 

    int b = 9;

    c++;
    c++;

    for (int i=0; i< 62; i++){
    printf("%4d", buffer[i]);
    }
    printf("\n");

    fclose(target_file); //closes the file 

    return 0;
}
#include <stdio.h>
//e.g.  ./myprogram -p file.txt
    //argc = 3
    // argv[0] = "./myprogram"
    // argv[1] = "-p"
    // argv[2] = "file.txt"
    

    // x = x + 1 is not legal 

int main(int argc, char *argv[]) { //need to create variables and state exactly how big something is
//put type before the variable: int main so the main returns an integer: //main function is the starting point of a program
// a character pointer like the one char above , the variable of that type points to the start and executes till it reaches the end. 
    printf("HELLO WORLD\n"); //print with format
    printf("HI\n");
    return 0; //success! //0 means success
    //this function takes two arguments in the form of type, name argc = argument count which tells how many arguments there are
    //argv gives the output of the characters. 
    //inputs and the outputs are connected to the shell 
    //argv contains the arguments s
    //./h is calling the library and it allows to use things 
}


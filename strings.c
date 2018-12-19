#include <stdio.h>

//courtesy of Preet Ji 


int main(int argc, char const *argv[]){
    // manual strings!


    char manual_string[13] = {'h', 'e', 'l', 'l', 'o', 32,   //char man str is a buffer overflow, if 5 chars are reserved for an array, the initialiser cant go above the specs in the array
                             'w', 'o', 'r', 'l', 'd', '\n',0};

    printf(manual_string);  //manual and easy string are different parts in memory, one is an array and the other is a pointer in memory 
    int x = 47;
    char *easy_string = "abcd";  ///char is a small integer, there is an automatic null char at the end hence were able to see 0 at the end
    x = x+1;
    for (int i= -40; i< 60; i++){
        printf("%d %4d %4c %4x\n", i, manual_string[i], manual_string[i], manual_string[i]);  //%4d is a different variable
    }
    return 0; //if some char is above 32 and below 72 its not considered as a printable character 
}
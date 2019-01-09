#include <stdio.h>

//courtesy of Preet Ji 


 //prints a C-style string  (nul-terminated i.e. last character is a 0)
void fake_print(char *string) {   //function can be int or anything but void doesnt return anything  or any value 
    int i = 0;

    // as long as current character is not 0...
    while(string[i] != 0) { //while the condition which is so that the string does not start at 0
        printf("%c", string[i]); //print each character of string
        i++; //loop until the string is done , the string is the char *string function above
        //the string is hello world
    }
    
}

    /*
 printf("%c", string[0]);
        printf("%c", string[1]);  //printing two chars here using printf, get it to print the whole string 
        printf("%c", string[2]);
        std:cout << "The whole string is called " << manual_string << " with the second word " << manual_string << std::endl;
    */ //this was a good way but its too advanced 


int main(int argc, char const *argv[]){
    // manual strings!

    char manual_string[13] = {'h', '\n', 'l', 'l', 'o', 32,   //char man str is a buffer overflow, if 5 chars are reserved for an array, the initialiser cant go above the specs in the array
                             'w', 'o', 'r', 'l', 'd', '\n',0};

    printf(manual_string);
    fake_print(manual_string);//this is calling the fake_print function  //manual and easy string are different parts in memory, one is an array and the other is a pointer in memory 
    int x = 47;
    char *easy_string = "abcd";  ///char is a small integer, there is an automatic null char at the end hence were able to see 0 at the end
    x = x+1;
    for (int i= -40; i< 60; i++){
        //printf("%d %4d %4c %4x\n", i, manual_string[i], manual_string[i], manual_string[i]);  //%4d is a different variable
    }
    return 0; //if some char is above 32 and below 72 its not considered as a printable character 
}
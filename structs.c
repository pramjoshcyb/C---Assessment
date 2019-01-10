#include <stdio.h>

// structs are user-defined types (UDTs)
// this can later be used as the type of a variable
// structs is a collection of items, items are called members

//each item in a struct is called a member

struct month_and_year {
    int month;
    int year;
}

struct credit_card {
    char *                      name:
    char                        number[20];
    struct month_and_year       expiry;
    int                         CVV;
};



// structs can be nested 
// structs always has a fixed size like the number example for the credit card number 

struct 


int main(int argc, char const *argv[]) {

    //declare a variable of type 'struct credit_card'
    struct credit_card my_credit_card;

    my_credit_card.name = "PramathJ";  
    
    gettimeofday(time, NULL);

    printf



    // pass by ref or value concpts 
    
    
    //pointer to nowhere is called a null

    for (int i = 0; i < 20; i++) { //array of size 20, what gets passed into the function is a pointer to the start of an array
        my_credit_card.number[i] = "5010-2065-1040-1099"[i];
    }
    my_credit_card.number[0] = '5'; //points to somewhere in memory 
    my_credit_card.expiry.month = 12;
    my_credit_card.expiry.year = 2030;
    my_credit_card.CVV = 707;
    printf("Name: %s, Number: %s, CVV: %d, year: %d\n", my_credit_card.name,
                                                        my_credit_card.number,
                                                        my_credit_card.CVV,
                                                        my_credit_card.expiry.year
    );

    return 0;
}
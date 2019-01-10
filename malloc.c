#include <stdio.h>
#include <string.h>

int main(int argc, chat const *argv[]) {
    int money = 15; //integer variable

    int *p; //points to an integer and *p means getting the contents at that address, it can also be starting address for an array
    //eg: p[i]

    p = malloc(sizeof(int));

    printf("money contains %d, and is located at %p\n", money, &money);
    printf("p contains %d, and is located at %p\n", *p, p);
    printf("q contains %d, and is located at %p\n", *q, q);
}
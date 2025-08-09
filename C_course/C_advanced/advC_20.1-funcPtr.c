#include <stdio.h>

// 1. Pointer as argument - int* num = parameter
// int* num - num is a pointer to an integer.

/* PARAMETER - placeholder variable declared inside a function's 
parentheses that receives a value or input when the function is called. */

void findValue (int *num) {
    *num = 39;
}
int main() {
    
    int number;
    /* num receives the address of number because it's declared as a pointer 
    parameter (int *num), and you're passing the address &number to it from 
    main. */ 
    
    findValue(&number);
    printf("Number: %d", number);
    
    return 0;
}
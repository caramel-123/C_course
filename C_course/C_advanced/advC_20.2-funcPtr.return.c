// Return pointers from a function
#include <stdio.h>

// declare findSquare(){} as integer
int findValue (int* num) {
    
    //declares the product of *num(value of the pointer int* main) is equal to
    // square
    int square = *num * *num;
    *num = square;
    
    //Send a value back to where the function was called.
    return num;
}

int main() {
    
    int number;
    
    // declare a pointer to the value of "findValue(&number)"
    //&number another address for int* num
    int* result = findValue(&number);
    
    //use *, because you are reffering to the value of result
    printf("Result is: %d", *result);
    
    
    return 0;
}
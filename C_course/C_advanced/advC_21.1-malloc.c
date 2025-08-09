#include <stdio.h>
#include <stdlib.h>
int main() {
    
    // malloc() - allocates 10 integers worth of memory in the heap:
    // sizeof(int) - gets the size (in bytes) of an int (usually 4 bytes).
    // sizeof(int) * 10 - gives the total size for 10 integers.
    // malloc(...) - reserves this much space and returns a pointer to it.
    // int* array - declares a pointer to integer, named array.
 
    // So array now points to a dynamically allocated block of memory that can hold 10 integers.
    int* array = malloc(sizeof(int) * 10);
    
    // array[i] = i; sets each element of the array to its index value:
    // array[0] = 0, array[1] = 1, ..., array[9] = 9
    for (int i=0; i<10; i++) {
        array[i]=i;
    }
    
    // printf("%i", array[i]); prints the integer value stored in array[i].
    for (int i=0; i<10; i++) {
        
        // In printf(), %i and %d are exactly the same. They both print an integer in base 10 (decimal).
        // You can use either, no difference.
        printf("%i", array[i]);
    }
    
    printf("\n");
    
    // free()
    // It releases the entire block of memory that was allocated — used or unused.
    //It returns the memory that you previously reserved using malloc() back to 
    // the system (the heap), so your program (or other programs) can use it again.
    free(array);
    return 0;
}
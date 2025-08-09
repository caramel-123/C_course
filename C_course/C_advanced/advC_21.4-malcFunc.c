#include <stdio.h>
#include <stdlib.h>

// It takes an integer size as parameter(int size) (how many elements to generate)
// It returns a pointer to int (int*), which will point to a dynamically created array.
int* generateArray(int size) {
    
    // sizeof(int) gives the size (in bytes) of an int (typically 4 bytes)
    // sizeof(int) * size = total memory needed for size integers
    // malloc(...) allocates that much memory on the heap
    // array points to the start of that memory block
    int* array = malloc(sizeof(int) * size);
    for (int i=0; i<size; i++) {
        array[i] = i;
}
    return array;
}

int main() {
    
    int size = 20;
    int count = size;
    
    int* array = generateArray(size);
    
    for (int i=0; i<count; i++) {
        printf("%i", array[i]);
    }
    
    printf("\n");
    free(array);
    return 0;
}
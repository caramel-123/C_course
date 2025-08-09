// REALLOC
// Grow Dynamic array with realloc

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int count = 20;
    int* array = malloc(count * sizeof(int));
    
    if (array == NULL) {
        printf("Memory Allocation failed\n");
        return 1;
    }
    // You increase the count from 20 to 21 — simulating growing the array.
    count++;
    
    // array - This is the existing allocated memory
    //  sizeof(int) * count - This is the new total size in bytes that you want 
        // the block to become.
    int* array2 = realloc(array, sizeof(int) * count);
    
    if (array2 == NULL) {
        printf("New Memory Allocation failed\n");
        return 1;
    } else {
        array = array2;
    }
    
    for (int i=0; i<count; i++) {
        array[i] = i;
    }
    
    for (int i=0; i<count; i++) {
        printf("%d", array[i]);
    }
    
    printf("\n");
    free(array);
    
    return 0;
}
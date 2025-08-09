#include <stdio.h>
#include <stdlib.h>
int main() {
    
    int* num = malloc(10 * sizeof(int));
    // int* num = malloc(19999999999999999999990 * sizeof(int)); == NULL
    
    // NULL - when malloc failed it always signal NULL due to high value
    if (num == NULL) {
        printf("Memory Allocation failed.\n");
        return 1;
    }
    
    for (int i=0; i<10; i++) {
        num[i] = i;
    }
    
    for (int i=0; i<10; i++) {
        printf("%d", num[i]);
    }
    
    printf("\n");
    free(num);
    
    
    return 0;
}
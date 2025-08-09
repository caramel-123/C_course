#include <stdio.h>

int main() {
    
    int num[] = {1, 3, 5, 7, 9};
    // the adress of num is always the first element so 
    // *number = 1 
    // number = adress of 1 
    
    //for (int i=0; i<5; ++i) {
    //    printf("%d\n", num[i]);
    //}
    
    // 1. Access array using pointer
    //for (int i=0; i<5; ++i) {
    //    printf("%d = %p\n", *(num + i), num + i);
    //}
    
    // 2. Change array elements using pointers
    *num = 2;
    *(num + 4) = 11;
    
    printf("First Element: %d\n", *num);
    printf("Last number: %d", *(num +4));
    return 0;
}
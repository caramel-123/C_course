#include <stdio.h>

typedef struct Farmer {
    int carrots;
    int lettuce;
} farmer;

int main() {
    
    farmer f1 = {.carrots = 30, .lettuce = 45};
    farmer f2 = {.carrots = 23, .lettuce = 51};
    
    farmer sum;
    
    sum.carrots = f1.carrots + f2.carrots;
    sum.lettuce = f1.lettuce + f2.lettuce;
    
    printf("The total carrots are %d\n", sum.carrots);
    printf("The total lettuce are %d", sum.lettuce);
    

    
    
    
    
    
    
    
    
    
    return 0;
}
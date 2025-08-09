#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    
    int dice;
    
    srand(time(0));
    dice = (random() % 6) + 1;
    
    printf("You rolled %d", dice);
    
    return 0;
}
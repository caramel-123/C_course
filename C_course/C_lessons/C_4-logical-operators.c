//LOGICAL OPERATORS
#include <stdio.h>

int main ()
{
    int coffee = 0;
    int creamer = 0;
    
    int ask = coffee && creamer;
    // 0 && 0 = 0
    // 1 && 0 = 0
    // 1 && 1 = 1
    
    // 0 || 0 = 0
    // 1 || 0 = 1
    // 1 || 1 = 1
    
    //printf("%d", !coffee);
    //= 1
    
    printf("%d", !coffee);
    
    return 0;
}

// Logical OPERATORS
// and = &&
// or = ||
// not = !
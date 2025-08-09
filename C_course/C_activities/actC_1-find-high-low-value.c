// FIND HIGHEST, LOWEST, SUM
#include <stdio.h>

int main ()
{
    int n1, n2, n3, n4, n5;
    int highest, lowest, sum;
    
    printf("Enter your five digits: \n"); //\n = para di magulo
    scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    
    
    highest = n1;
    lowest = n1;
    
    //ladder if else statement
    if (n2 > highest) {
        highest = n2;
    }
    if (n3 > highest) {
        highest = n3;
    }
    if (n4 > highest) {
        highest = n4;
    }
    if (n5 > highest) {
        highest = n5;
    }
    
    /////
    
    if (n2 < lowest) {
        lowest = n2;
    }
    if (n3 < lowest) {
        lowest = n3;
    }
    if (n4 < lowest) {
        lowest = n4;
    }
    if (n5 < lowest) {
        lowest = n5;
    }
    
    sum = lowest + highest;
    
    printf("\n The highest score is: %d", highest);
    printf("\n The lowest score is: %d", lowest);
    printf("\n The sum of two is: %d", sum);
}
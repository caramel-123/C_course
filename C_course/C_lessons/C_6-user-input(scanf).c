// USER INPUT
#include <stdio.h> //#include is a library

//Calculator
int main ()
{
    int n1, n2, sum;
    
    printf("Input the first number: ");
    scanf("%d", &n1) ;//%d represents specifier of integer //scanf for user input
    
    printf("Input the second number: ");
    scanf("%d", &n2);
    
    sum = n1 + n2;
    printf("The sum is: %d", sum);
    return 0;
}
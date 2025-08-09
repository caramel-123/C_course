//FOR LOOP
#include <stdio.h>

int main() 
{
    int i;
    //for (initialization; condition; updation)
    for (i=1; i<=5; i++)
    //for (i=5; i>=1; i--)
{
    printf("%d \n", i); //\n is for countdown
}
    return 0; //statement explicitly tells the operating system 
    //that the program has finished successfully
}
//i++ will increment the value of i, 
//but return the original value that i held before being incremented.
 //i = 1;
 //j = i++;
 //(i is 2, j is 1)
 
//++i will increment the value of i, and then return the incremented value.
 //i = 1;
 //j = ++i;
 //(i is 2, j is 2)
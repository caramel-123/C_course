// IF ELSE STATEMENT
#include <stdio.h>

int main () 
{
    int grade; 
    printf("Please enter your grade: ");
    scanf("%d", &grade);
    
    if (grade>=75) {
        printf("Congratulations!");
    } else {
        printf("Sorry");}
    
    return 0;
}
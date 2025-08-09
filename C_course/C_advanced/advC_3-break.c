/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
/*    int i =0;
   for ( i= 0; i <= 10; i++) {
   printf("%d\n", i);
   break;
   }
*/

while(1){
    int number; 
    printf("Enter a number: ");
    scanf("%d", number);
    
    if (number<0) {
        break;
    }
    printf("%d\n", number);
}
    return 0;
}
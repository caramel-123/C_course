#include <stdio.h>
#include <math.h>

int main() {

  int num1;
  int num2;

  printf("Calculate the difference of two numbers. \n");
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  printf("\nThe difference is %d", num1 - num2);

  return 0;
}
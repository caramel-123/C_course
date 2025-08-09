#include <stdio.h>

int main() {

  int num1;
  int num2;
  char operation;

  printf("This is calculator for addition and multiplication\n");
  printf("Select operation (+)(*): ");
  scanf(" %c", &operation);
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);

  switch (operation) {
    case '+' :
    printf("\nSum: %d", num1 + num2);
    break;

    case '*' :
    printf("\n\nProduct: %d", num1 * num2);
    break;

    default :
    printf("Invalid input");
  }

  
  return 0;
}
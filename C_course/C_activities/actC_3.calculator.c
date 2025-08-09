#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1;
  int num2;
  char operator;

  printf("(+) (-) (*) (/)\n");
  printf("Select an operator: ");
  scanf(" %c", &operator);  // space before %c ignores leftover newline

  printf("Enter first number: ");
  scanf("%d", &num1);

  printf("Enter second number: ");
  scanf("%d", &num2);

  switch (operator) {
    case '+':
      printf("Answer: %d\n", num1 + num2);
      break;
    case '-':
      printf("Answer: %d\n", num1 - num2);
      break;
    case '*':
      printf("Answer: %d\n", num1 * num2);
      break;
    case '/':
      if (num2 != 0)
        printf("Answer: %d\n", num1 / num2);
      else
        printf("Error: Division by zero is not allowed.\n");
      break;
    default:
      printf("Invalid operator.\n");
  }

  return 0;
}

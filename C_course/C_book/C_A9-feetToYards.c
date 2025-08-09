#include <stdio.h>

int main() {

  int feet;

  printf("This calculator converst feet to yard!!\n");
  printf("Enter the feet: ");
  scanf("%d", &feet);
  printf("The yard is %.2f long", (float)feet / 3);

  return 0;
}
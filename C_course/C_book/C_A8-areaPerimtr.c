#include <stdio.h>

int main() {

  int length, width;

  printf("This is calculator for area and perimeter of a rectangle.\n");
  printf("Enter the length: ");
  scanf("%d", &length);
  printf("Enter the width: ");
  scanf("%d", &width);
  printf("\nThe area of rectangle is %d\n", length * width);
  printf("The perimeter of rectangle is %d", (length + width) * 2);

  return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

  char name[20];  
  int age;

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, '\n')]=0; // Using fgets to read string input
  
  printf("Enter your age: ");
  scanf("%d", &age); // Reading integer input

  printf("Hello, %s. Your age is %d.\n", name, age);
  return 0;
}
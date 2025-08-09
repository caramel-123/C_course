#include <stdio.h>


int main() {

  int dollar;
  int pesos;

  printf("This is dollar to pesos converter. \n");
  
  printf("Dollar: ");
  scanf("%d", &dollar);

  pesos = dollar * 50.74;

  printf("Pesos: %d\n", pesos);
  printf("The computed dollar is %d pesos", pesos);

  
  return 0;
}
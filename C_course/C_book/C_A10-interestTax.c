#include <stdio.h>

int main() {

  int principal;
  int days;
  float interest;
  int rate;
  float tax, computedTax;

  printf("This calculator computes net interest, and withholding tax. \n");
  printf("Enter your deposit: ");
  scanf("%d", &principal);
  printf("Enter the rate(percent): ");
  scanf("%d", &rate);
  printf("Enter the days be taken: ");
  scanf("%d", &days);
  printf("Enter the withholding tax: ");
  scanf(" %d", &tax);

  computedTax = tax / 100;
  interest = (float)principal * (rate/100) * (days/12);
  tax = (float)interest - (interest / computedTax);

  printf("Your interest is %.2f", interest);
  printf("Your tax is %.2f", tax);

  return 0;
}
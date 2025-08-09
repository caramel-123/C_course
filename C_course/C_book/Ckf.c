#include <stdio.h>
#include <string.h>

int main() {

  float grossPay;
  int workHours;
  float rateHours;
  char name[50];

  printf("This is the calculator for gross pay.\n");
  printf("Enter your details\n\n");

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';  // ✅ Fixed this line

  printf("\nEnter your working hours: ");
  scanf("%d", &workHours);

  printf("Enter the rate per hour: ");
  scanf("%f", &rateHours);  // ✅ Already correct

  grossPay = workHours * rateHours;

  printf("\n\n%s, the amount of your gross pay is: %.2f\n", name, grossPay);

  return 0;
}

#include <stdio.h>
#include <string.h>

int main() {

  int prelimScore, prelimItems, midtermScore, midtermItems, endtermScore, endtermItems;
  float prelimAverage, midtermAverage, endtermAverage;
  float grade;
  char name[50];

  printf("Compute your final grade base from prelim(20), midterm(30), endterm(50)\n");
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';

  printf("\nPrelim total items: ");
  scanf("%d", &prelimItems);
  printf("Prelim score: ");
  scanf("%d", &prelimScore);

  printf("\nMidterm total items: ");
  scanf("%d", &midtermItems);
  printf("Midterm score: ");
  scanf("%d", &midtermScore);

  printf("\nEndterm total items: ");
  scanf("%d", &endtermItems);
  printf("Endterm score: ");
  scanf("%d", &endtermScore);

  prelimAverage = ((float)prelimScore / prelimItems) * 20;
  midtermAverage = ((float)midtermScore / midtermItems) * 30;
  endtermAverage = ((float)endtermScore / endtermItems) * 50;
  grade = prelimAverage + midtermAverage + endtermAverage;

  printf("\n%s, your final computed grade is %.2f", name, grade);



  return 0;
}
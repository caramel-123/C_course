#include <stdio.h>
#include <stdlib.h>

int main() {

  int grade;
  printf("Enter your grade: ");
  scanf("%d", &grade);

  if (grade>=75 && grade<90) {
    printf("You are passed.\n");
  } else if (grade<75) {
    printf("You are failed.\n");
  } else if (grade>=90 && grade<95) {
    printf("You have with honors.\n");    
  } else if (grade>=95 && grade<98) {
    printf("You have with high honors.\n");
  } else if (grade>=98 && grade<=100) {
    printf("You have with highest honors.\n");
  }
  
  return 0;
}
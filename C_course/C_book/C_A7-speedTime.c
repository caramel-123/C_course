#include <stdio.h>

int main() {
  
  int value;
  int distance;
  int time;
  int speed;

  printf("This is Speed-Time-Distance calculator. \n");
  printf("Select which you want to compute Speed(0), Time(1), Distance(2). \n");

  printf("What: ");
  scanf("%d", &value);

  if (value==0) {

    printf("Find the Speed!! \n");
    printf("Enter the time(hrs): ");
    scanf("%d", &time);
    printf("Enter the distance(miles): ");
    scanf("%d", &distance);

    printf("\nThe calculated speed is %.2fmph", (float)distance / time);
  } else if (value==1) {

    printf("Find the Time!! \n");
    printf("Enter the speed(mph): ");
    scanf("%d", &speed);
    printf("Enter the distance(miles): ");
    scanf("%d", &distance);

    printf("\nThe calculated time is %.2fhrs", (float)distance / speed);
    
  } else if (value==2) {

    printf("Find the Distance!! \n");
    printf("Enter the speed(mph): ");
    scanf("%d", &speed);
    printf("Enter the time(hrs): ");
    scanf("%d", &time);

    printf("\nThe calculated distance is %.2fmiles", (float)time * speed);
    
  } 




  return 0;
}
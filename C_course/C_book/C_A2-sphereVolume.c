#include <stdio.h>

int main() {

  float volume;
  int radius;

  printf("This is calculator for volume of sphere.\n");
  printf("Fill out the data given.\n\n");

  printf("Radius: ");
  scanf("%d", &radius);

  volume = (4.0/3) * 3.14 * (radius*radius*radius);
  
  printf("Volume: %.2f\n\n", volume);
  printf("The volume of the sphere is: %.2f", volume);

  return 0;
}
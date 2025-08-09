#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  int guess;
  int lives = 5;

  printf("Enter a guessing number: ");
  scanf("%d", &num);

  // Clear screen so the guesser won't see the answer
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif

  while (lives > 0) {
    printf("Guess the number between 1-20: ");
    scanf("%d", &guess);

    if (guess < 1 || guess > 20) {
      printf("Invalid guess. Please enter a number between 1 and 20.\n");
      continue;
    }

    if (guess == num) {
      printf("🎉 Congratulations, you guessed it!\n");
      break;
    } else if (guess > num) {
      printf("Too high\n");
    } else {
      printf("Too low\n");
    }

    lives--;
    if (lives > 0) {
      printf("Lives left: %d\n\n", lives);
    }
  }

  if (lives == 0) {
    printf("Sorry, you've run out of lives. The number was %d.\n", num);
  }

  return 0;
}

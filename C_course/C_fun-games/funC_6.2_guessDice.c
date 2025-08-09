#include <stdio.h>
#include <time.h>

int main() {

  int dice;
  int guess;
  int lives = 3;

  srand(time(0));
  dice = (rand() % 6) + 1; // Generate a random number between 1 and 6

  printf("Welcome to the Dice Guessing Game!\n");

  while (lives > 0) {
    printf("You have %d lives left.\n", lives);
    printf("Guess the number on the dice (1-6): ");
    scanf("%d", &guess);

    if (guess < 1 || guess > 6) {
      printf("Invalid guess. Please enter a number between 1 and 6.\n");
      continue;
    } else if (guess == dice) {
      printf("Congratulations! You guessed it right. The number was %d.\n", dice);
      break;
    } else {
      printf("Sorry, you guessed wrong. \n", dice);
      lives--;
      if (lives == 0) {
        printf("Game over! You've run out of lives. The number was %d.\n", dice);
      }
    }
  }
  
  return 0;
}
#include <stdio.h>

// Function to check the guess
void checkGuess(int guess, int secret) {
    if (guess == secret) {
        printf("You guessed it right!\n");
    } else {
        printf("Wrong guess. Try again!\n");
    }
}

int main() {
    int secretNumber;  // the correct number
    int playerGuess;
    
    srand(time(0));
    secretNumber=(rand()%10);

    printf("Guess a number between 1 and 10: ");
    scanf("%d", &playerGuess);

    // Call the function
    checkGuess(playerGuess, secretNumber);

    return 0;
}

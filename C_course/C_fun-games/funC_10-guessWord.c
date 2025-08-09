#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("Welcome to the Word Guessing Game!\n");
    printf("Try to guess the word within 6 attempts.\n\n");

    const char *word = "programming";
    int word_length = strlen(word);
    char display[20];  // What the user sees: "_ r o g _ _ _ _ _ g"
    char guess;
    int attempts = 6;
    int i, correct_guess;

    // Initialize the display with underscores
    for (i = 0; i < word_length; i++) {
        display[i] = '_';
        //array display will turn all index-i into '_'
    }
    display[word_length] = '\0'; // Null-terminate the string
    // \0=tells where to stop, like a period in sentence

    while (attempts > 0) {
        printf("\nWord: ");
        for (i = 0; i < word_length; i++) {
            printf("%c ", display[i]);
            // print _ based on how many letter is in the index of display from word_length
        }

        printf("\nEnter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);
        //turns your guess to lowercase

        correct_guess = 0;
        //its to reset
        //its on the outside of for loop, so when you guess right, you are in a loop to gain correct_guess=1
        for (i = 0; i < word_length; i++) {
            if (word[i] == guess && display[i] == '_') {
                //if any index of word = guess and the number of index = '_'
                display[i] = guess;
                //then the index in the display will be replace with the letter of guess
                correct_guess = 1;
                //gains correct
                //
            }
        }

        if (!correct_guess) {
        // this (!correct_guess) is your isolated else for the if inside the forloop
            attempts--;
            printf("Wrong guess! Attempts left: %d\n", attempts);
        } else {
            printf("Good job! Keep going.\n");
        }

        // Check if the word is fully guessed
        if (strcmp(display, word) == 0) {
            // if the word of display is equal to word of word
            printf("\nCongratulations! You guessed the word: %s\n", word);
            break;
            //end of program if finished
        }
    }

    if (attempts == 0) {
    // if you lost all your lives then game is over
        printf("\nOut of attempts! The word was: %s\n", word);
    }

    return 0;
}

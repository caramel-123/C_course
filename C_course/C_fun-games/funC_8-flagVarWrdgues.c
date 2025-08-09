#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("Welcome to the Word Guessing Game!\n");
    printf("Try to guess the word within 6 attempts.\n\n");
// -------------------------VARIABLES-------------------------------------------------------
    const char *word = "programming";
    int word_length = strlen(word);
    char display[20];  // What the user sees: "_ r o g _ _ _ _ _ g"
    char guess;
    int attempts = 6;
    int i, correct_guess;

//-----------------------LOOP-INITIALIZE------------------------------------------------------
    for (i=0; i<word_length; i++) {
        display[i] = '_';  // Initialize display with underscores
    }

//-------------------------PRINTING--------------------------------------------------------
    while (attempts > 0) {
        printf("Word: ");
        for (i = 0; i < word_length; i++) {
            printf("%c ", display[i]);
        }
        printf("\nAttempts left: %d\n", attempts);
        
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);  // Convert to lowercase for consistency

//-------------------------CONDITIONS--------------------------------------------------------
        //Flag Variable 
        correct_guess = 0; // Reset correct guess flag for this round
        //correct_guess = false
        for (i = 0; i < word_length; i++) { // Check each letter in the word
            if (word[i] == guess) { // Check if the guess is correct
                display[i] = guess;  // Reveal the letter in the display
                correct_guess = 1; // Mark as a correct guess
                //correct_guess = true 
            }
        }
        
        // (correct_guess) = (correct_guess == 1)
        // (!correct_guess) = (correct_guess == 0)
        //if correct_guess is false then print "Wrong guess!"
        //if correct_guess is true then print "Good guess!"

        if (!correct_guess) {
            attempts--;
            printf("Wrong guess!\n");
        } else {
            printf("Good guess!\n");
        }

        if (strcmp(display, word) == 0) {
            printf("Congratulations! You've guessed the word: %s\n", word);
            return 0;
        }
    }
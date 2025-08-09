#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>

char getch_hidden() {
    struct termios oldt, newt;
    char ch;

    tcgetattr(STDIN_FILENO, &oldt);            // Get current terminal attributes
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);          // Disable canonical mode and echo
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);   // Apply new settings

    ch = getchar();                            // Read a single char
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);   // Restore old settings
    return ch;
}

int main() {
    char ch;
    char input[10];
    int index = 0;
    int num;
    int guess;
    int lives = 5;

    printf("Enter a guessing number (hidden): ");
    
    while (1) {
        ch = getch_hidden();

        if (ch == '\n') { // ENTER
            input[index] = '\0';
            break;
        } else if (ch >= '0' && ch <= '9' && index < sizeof(input) - 1) {
            input[index++] = ch;
            printf("*");
        } else if (ch == 127 && index > 0) { // Backspace on Linux
            index--;
            printf("\b \b");
        }
    }

    num = atoi(input);
    printf("\n\n");

    // Guessing logic
    while (lives > 0) {
        printf("Guess the number between 1-20: ");
        scanf("%d", &guess);

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
            printf("You still have %d lives left\n\n", lives);
        } else {
            printf("Game Over, the number was %d\n", num);
        }
    }

    return 0;
}

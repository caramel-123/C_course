#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;
    const char *choices[] = {"rock", "paper", "scissor"};

    printf("Welcome to Jack en Poy! \n");
    printf("Rock(0), Paper(1), Scissor(2)\n");

    printf("Jack en Poy! Choose: ");
    scanf("%d", &player);

    srand(time(0));
    computer = rand() % 3;

    printf("Computer chose: %s\n", choices[computer]);
    printf("You chose: %s\n", choices[player]);

    if (player == computer) {
        printf("It's a draw!\n");
    } else if (
      (player == 0 && computer == 2) ||
      (player == 1 && computer == 0) ||
      (player == 2 && computer == 1)) {
        printf("🎉 You won!\n");
    } else {
        printf("💀 You lose :(\n");
    }

    return 0;
}

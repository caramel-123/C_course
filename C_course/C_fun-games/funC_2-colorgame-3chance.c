#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int color, wheel, live=3;
    const char *choices[]= {"red", "orange", "yellow", "green", "blue", "purple"};
    
    printf("Welcome to Color Wheel! \n");
    printf("Red(0), Orange(1), Yellow(2), Green(3), Blue(4), Purple(5)\n\n");
    
    while (live > 0) {
    
    srand(time(0));
    wheel=(rand()%3);
    
    printf("Select a guess: ");
    scanf("%d", &color);
    
    printf("You: %s\n", choices[color]);
    printf("Wheel: %s\n\n", choices[wheel]);
    
    if (color=wheel) {
        printf("Congrastulations!!!");
        break;
    } 
    
    live--;
    
    if (live > 0) {
        printf("You have %d lives\n\n", live);
    } else {
        printf("Game Over!!");
    }
    }
    return 0;
}

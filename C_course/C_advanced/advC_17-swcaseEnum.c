#include <stdio.h>

// Define traffic light states using enum
enum TrafficLight { RED, YELLOW, GREEN }light;

int main() {
    
    // Simulate all traffic light states
    for (light = RED; light <= GREEN; light++) {
        printf("Current Light: ");

        switch (light) {
            case RED:
                printf("RED - Stop\n");
                break;
            case YELLOW:
                printf("YELLOW - Slow Down\n");
                break;
            case GREEN:
                printf("GREEN - Go\n");
                break;
        }
    }

    return 0;
}

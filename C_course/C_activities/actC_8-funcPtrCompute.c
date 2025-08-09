#include <stdio.h>

void findValue (int* num) {
    
    int square = *num * *num;
    *num = square;
    
};

int main() {
    
    int number=4;
    
    findValue(&number);
    printf("Square is: %d", number);
}

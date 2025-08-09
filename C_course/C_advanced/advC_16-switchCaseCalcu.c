#include <stdio.h>

int main() {
    
    char ope;
    int num1;
    int num2;
    
    printf("choose an operation: ");
    scanf("%s", &ope);
    
    printf("First number: ");
    scanf("%d", &num1);
    
    printf("Second number: ");
    scanf("%d", &num2);
    
    switch (ope) {
        case '+':
        printf("Result: %d", num1 + num2);
        break;
        
        case '-':
        printf("Result: %d", num1 - num2);
        break;
        
        case '*':
        printf("Result: %d", num1 * num2);
        break;
        
        case '/':
        printf("Result: %d", num1 / num2);
        break;
        
        default:
        printf("Invalid operator");
    }
    return 0;
}
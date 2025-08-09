#include <stdio.h>
#include <string.h>

int main() { 
    char username[100];
    char invalidChars[] = " !@#$%^&*()+=-[]{}|;:'\",.<>/?`~";

    printf("Enter your username: ");
    fgets(username, sizeof(username), stdin);
    //stdin = Read input from the keyboard

    // Remove newline character from fgets
    username[strcspn(username, "\n")] = '\0';
    //strcspn count the letters before "\n"
    //the num counted will be index of username
    //ex; mel = 3 counted letters
    // the index will be , 0,1,2,3 --> 'm', 'e', 'l', \0

    // Check for any invalid character
    int index = strcspn(username, invalidChars);
    //the number counted by strcspn = the value of int index

    if (index != strlen(username)) {
        printf("Invalid username! Avoid special characters or spaces.\n");
    } else {
        printf("Username accepted: %s\n", username);
    }

    return 0;
}

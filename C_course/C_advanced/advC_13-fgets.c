// FGETS
// - reads the entire line including spaces and the newline \n, 
// while scanf("%s") stops reading at the first space or tab.
#include <stdio.h>

int main() {
    
    char name[20];
    
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin);
    // scanf("%s", &name);
    
    printf("Your name is %s", name);
    
    
    return 0;
}
// stdin - Used to read data from the user (like when you type into the terminal).
// fgets - File Get String - It reads a string from an input stream (like the keyboard or a file),

//stdin - as a microphone that captures what you're saying (input).
//fgets() - as the recorder that saves what the mic hears 
// into a notebook (string variable).

//Yes, fgets() gets the full name, counts characters including spaces, stores them safely, and prints the entire name correctly
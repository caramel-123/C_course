// STRCSPN
// - String Complement Span

// The strcspn() function searches for the first occurrence in a string of 
// any of the specified characters and returns the length of the string up to that point.

// strcspn() will start counting each character in the first string (str1). 
// It will stop as soon as it finds a character that also exists in the second string (str2).
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "ABCDEFG1234";
    char num[] = "0123456";
    
    int init = strcspn(s, num);
    printf("init: %d\n", init);

    return 0;
}
/* strcspn(str1, str2) counts how many characters at the start of str1 do not appear in str2.
It stops counting as soon as it finds a character in str1 that exists in str2.

🧠 In simple words (your version, refined):
"strcspn() gives the number of letters or digits in the first string that are 
not found in the second string, starting from the beginning, 
until it finds one that is."
*/
#include <stdio.h>


int main() {

int age;
printf("Enter your age: ");
scanf("%d", &age);

(age>=18) ? printf("Youre eligible") : printf("Youre not allowed");
    return 0;
}
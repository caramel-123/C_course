// STRUCTURE 
// Sum of complex numbers
#include <stdio.h>
typedef struct Complex {
    double real;
    double imag;
} complex; //complex is alias for "struct Complex"

int main() {
    
    complex c1 = {.real = 21.87, .imag=30};
    complex c2 = {.real = 13.34, .imag=112.23};
    
    complex sum;
    
    sum.real= c1.real + c2.real;
    sum.imag= c1.imag + c2.imag;
    
    printf("Result is %.2lf + %.2lfi", sum.real, sum.imag);
    
    
    
    return 0;
}
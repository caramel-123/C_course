// POINTER

#include <stdio.h>
    // So when I call getNumber, it should give me the value 5,  
    // but when I call the void function, it doesn't return anything — it just proceeds to print 'Hi there'."
  void printAge(int age)
    {
        printf("You are %d yrs old\n", age);
    }
int main() {
    
    int age = 21;
    int *pAge = &age;
    
    //PASSING A POINTER
  
    printAge(age);
    //POINTER
    //printf("address of age: %p\n", &age);
    //printf("value of pAge: %d\n", age);
    
    //INDIRECTION OPERATOR
//    printf("value of age: %d\n", age); // -----> 21
//    printf("value at stored address: %d\n", *pAge); // -----> 21
    
    //printf("size of age: %d bytes\n", sizeof(age));
    //printf("size of pAge: %d bytes\n", sizeof(pAge));
        //sizeof integers is about bytes, while
         //sizeof char is how many letter with an extra 1
         
   
    


    return 0;
}
// STRUCTURE
// - collection of variables in a single name

//DataType - struct
//StructureName - Person
//DataMembers - salary, age, etc
//Variable Name - person1

#include <stdio.h>

// this is an instruction; like a form that has data needed to filled up
struct Person {
    double salary;
    int age;
};

int main() {
    
    //This is a copy of form but its is filled-up
    struct Person person1;
    
    person1.salary=250.345;
    person1.age=21;
    
    printf("Your salary is: %.3lf\n", person1.salary);
    printf("Your age is: %d\n", person1.age);
    
    return 0;
}
/* 
1. Student Record System
How struct helps:
It lets you group a student's name, age, and grade into one unit. Instead of 
making separate variables for each student, you just create one structure 
variable per student. This makes storing, displaying, and managing student data 
much easier.
*/

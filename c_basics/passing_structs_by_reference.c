/*
Abegail Santos
CS 5008 - Fall 2024 

Module 2: The C Programming Language: Intro to C, pointers, and arrays
Passing Structs by Reference and Use of the Arrow Operator

This code shows how to update and print structs through the process of passing them by reference. 
This will be done by having the functions take pointers as parameters instead 
of the struct itself. 
*/

#include <stdio.h> 

// function for student struct

typedef struct student {
    int id;
    const char* name;
    int age;
} student_t; 

// function to print student details 

void printStudent(student_t* aStudent) {
    printf("ID: %d, Name: %s, Age: %d\n",
    aStudent->id, aStudent->name, aStudent->age);
}

void updateStudent(student_t* aStudent, int age, int id) {
    // Access members of the structure pointed to by aStudent using arrow notation
    aStudent->age = age;
    aStudent->id = id;
}

int main() {
    // initialize students
    student_t s1; 
    student_t s2; 

    // assign values to Student struct using dot notation
    s1.id = 1001;
    s1.name = "Abegail";
    s1.age = 23;

    s2.id = 1008;
    s2.name = "Kevin";
    s2.age = 25;  

    // Pass pointers to s1 and s2, and print details 
    printStudent(&s1);
    printStudent(&s2);

    // Update student details using a pointer
    updateStudent(&s1, 24, 2001); // Pass pointer to s1 and new values
    updateStudent(&s2, 26, 2008); // Pass pointer to s2 and new values

    // Print new student details
    printf("\nAfter updating:\n");
    printStudent(&s1);
    printStudent(&s2);

    return 0;
}
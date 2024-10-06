/*
Abegail Santos
CS 5008 - Fall 2024 

Module 2: The C Programming Language: Intro to C, pointers, and arrays
Passing Structs by Reference and Use of the Arrow Operator

similar to passing_structs_by_reference.c, this code shows how to update and print structs
and instantiate new structs with values using a function rather than using dot notation
*/

#include <stdio.h> 
#include <stdlib.h>  // Required for malloc and free

/* student struct */ 
typedef struct student {
    int id;
    const char* name; // Pointer to student name (string)
    int age;
} student_t; 


/*  
 * Function to create pointer to a student_t
 * Return: pointer to a student_t
 */ 
student_t* makeStudent(int id, const char* name, int age) {

    student_t* p_aStudent = (student_t*)malloc(sizeof(student_t));

    p_aStudent-> id = id;
    p_aStudent-> name = name;
    p_aStudent-> age = age;

    return p_aStudent;
}

/* Function to print details of student_t */ 
void printStudent(student_t* aStudent) {
    printf("ID: %d, Name: %s, Age: %d\n",
    aStudent->id, aStudent->name, aStudent->age);
}

/* Function to update a student_t by reference */ 
void updateStudent(student_t* aStudent, int age, int id) {

    // Access members of the structure pointed to by aStudent using arrow notation
    aStudent->age = age;
    aStudent->id = id;
}

int main() {
    // create instances of pointers to student_t
    student_t* s1 = makeStudent(1008, "Abegail", 23); 
    student_t* s2 = makeStudent(1001, "Kevin", 25); 

    // Pass pointers to s1 and s2, and print details 
    printStudent(s1);
    printStudent(s2);

    // Update student details using a pointer
    updateStudent(s1, 24, 2008); 
    updateStudent(s2, s2->age, 2001);

    // Print new student details
    printf("\nAfter updating:\n");
    printStudent(s1);
    printStudent(s2);

    // Free allocated memory
    free(s1);
    free(s2);

    return 0;
}
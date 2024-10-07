/*
Abegail Santos
CS 5008 -  Fall 2024

Week 4
*/

#include <stdio.h>

int main() {


    // initialize variables
    int age;
    float height;
    char initial;

    // get user input
    printf("Enter your age, height (in meters), and first initial:\n");

    /* Note: 
        - %*s ignores the input until the next space or newline
        - Arguments to scanf() must be pointers or strings
    */
    int result = scanf("%*s %d %f %c", &age, &height, &initial);


    /* Note: 
        - scanf() returns the number of successfully assigned input items as its value
        - return value of 0 means next input character does not match the first specification in the format string.
    */

    if (result == 3) {
        printf("You entered: \nAge: %d, Height: %f, First initial: %c\n", age, height, initial);
    } else {
        printf("Failed to read values.\n");
    }

    return 0;
}
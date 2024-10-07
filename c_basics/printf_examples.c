/*
Abegail Santos
CS 5008 -  Fall 2024

Week 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


#define STRMAX 40

int main() {

    char s0[STRMAX] = "123456789012345678901234567890";
    char s1[STRMAX] = "abcdefghijklmno";
    char s2[STRMAX] = "ABCDE";

    printf("Using: %%s\n");
    printf(">%s<\n", s0);
    printf(">%s<\n", s1);
    printf(">%s<\n", s2);

    printf("\n");

    // %10s -> field will be least 10 char wide, right-adjusted
    printf("Using: %%10s\n");
    printf(">%10s<\n", s0);
    printf(">%10s<\n", s1);
    printf(">%10s<\n", s2);
    printf("\n");

    // %-10s -> field will be least 10 char wide, left-adjusted
    printf("Using: %%10s\n");
    printf(">%-10s<\n", s0);
    printf(">%-10s<\n", s1);
    printf(">%-10s<\n", s2);
    printf("\n");

    // %.10s -> string max of 10 char wide
    printf("Using: %%10s\n");
    printf(">%.10s<\n", s0);
    printf(">%.10s<\n", s1);
    printf(">%.10s<\n", s2);
    printf("\n");

    return 0;
}
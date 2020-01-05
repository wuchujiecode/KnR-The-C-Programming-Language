/*
 * Filename:    ctof.c
 * Author:      JerryMoo wuchujie123@gmail.com
 * Date:        25-FEB-2010
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 1-4, page 13
 *
 * Write a program to print the corresponding Celsius to Fahrenheit
 * table.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("  C      F  \n");
    printf("------------\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}

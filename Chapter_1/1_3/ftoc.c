/*
 * Filename:    ftoc.c
 * Author:      JerryMoo wuchujie123@gmail.com
 * Date:        25-FEB-2010
 *
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 1-3, page 13
 *
 * Modify the temparature conversion program to print a heading above
 * the table.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  printf("  F    C  \n");
  printf("----------\n");

  fahr = lower;
  while (fahr <= upper){
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}

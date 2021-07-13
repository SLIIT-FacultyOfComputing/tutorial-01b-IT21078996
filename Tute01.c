/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {
  int sub1, sub2, sum;
  float avg;

  printf("Enter Subject 1 : ");
  scanf("%d", &sub1);
  printf("Enter Subject 2 : ");
  scanf("%d", &sub2);
  sum = sub1 + sub2;
  avg = sum / 2;
  printf("Average of two subjects : %.1f", avg);

  return 0;
}


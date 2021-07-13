/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

 #include <stdio.h>

int main(void) {
  int num, count, sum = 0;

  printf("Enter number : ");
  scanf("%d", &num);

  for( count = 0; count <= num; count++ ){
    sum += count;
  }
  printf("Sum of the numbers 1 ~ %d : %d", num, sum);

  return 0;
}


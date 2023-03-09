/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  int num1, num2;
  float avg;

  printf("Enter the mark 1: ");
  scanf("%d", &num1);

  printf("Enter the mark 2: ");
  scanf("%d", &num2);

  printf("Average is: %.2f", (num1 + num2) / 2.0);

  return 0;
}

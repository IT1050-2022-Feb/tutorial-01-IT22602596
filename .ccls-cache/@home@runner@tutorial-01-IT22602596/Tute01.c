/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   float mark1, mark2, total, avg;
   
   printf("Enter Mark 1 :");
   scanf("%f", &mark1);
   
   printf("Enter Mark 2 :");
   scanf("%f", &mark2);
   
   total = mark1 + mark2;
   avg = (mark1 + mark2 )/2;
   
   printf("The average of the two marks:%f" , avg);
   
  
  return 0;
}


//Write a C Program to calculate average using arrays?

#include <stdio.h>
int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int sum=0, i;
   float avg=0;

   for(i = 0; i < 10; i++) {
      sum = sum + array[i];
   }
   avg = (float)sum / i;
   printf("Average of array values is %.2f", avg);   
   return 0;
}
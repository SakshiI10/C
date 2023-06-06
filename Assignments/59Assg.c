//Initialize, print and calculate sum of arrays.

#include<stdio.h>
int main(){
    int arr[100], size, i, sum=0; 

    printf("Enter size of array upto 100: ");
    scanf("%d", &size);

    printf("Enter elements of an array: ");
    for(i=0; i<size; i++)
    scanf("%d", &arr[i]);

    for(i=0; i<size; i++)
    sum=sum+arr[i];

    printf("Sum of array is: %d", sum);
    return 0;
}
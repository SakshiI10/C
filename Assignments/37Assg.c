// Write a C program to calculate sum of the array elements using pointer.

#include <stdio.h>
#include <malloc.h>

int main()
{
    int n, sum = 0;
    int *ptr;

    printf("Enter size of array : ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter elements in the List ");

    for (int i = 0; i < n; i++)
        scanf("%d", ptr + i);

    for (int i = 0; i < n; i++)
        sum = sum + *(ptr + i);
    printf("Sum of elements: %d", sum);
    return 0;
}
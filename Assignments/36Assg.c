// Write a C Program to access elements of an array using pointer.

#include <stdio.h>
#include <malloc.h>

int main()
{
    int n;
    int *ptr;

    printf("How many elements you would like to enter?: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    
    printf("Enter elements: ");
    for (int i = 0; i < n; ++i)
        scanf("%d", ptr + i);

    printf("Entered elements: ");
    for (int i = 0; i < n; ++i)
        printf("%d ", *(ptr + i));
        
    return 0;
}
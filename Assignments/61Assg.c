// Slicing array elements

#include <stdio.h>
int main()
{
    int arr[100], size, i;

    printf("Enter size of an array upto 100: ");
    scanf("%d", &size);

    printf("Enter elements of an array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Slicing from index 3 to 5: ");
    for(i=3; i<=5; i++)
    printf("%d ", i);
    printf("\n");

    printf("Slicing upto 5: ");
    for(i=0; i<5; i++)
    printf("%d ", i);
    printf("\n");

    printf("Slicing from 3 onwards: ");
    for(i=3; i<=size; i++)
    printf("%d ", i);
    printf("\n");

    printf("Slicing from 3 onwards: ");
    for(i=0; i<=size; i++)
    printf("%d ", i);
    printf("\n");

    return 0;
}
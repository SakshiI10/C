// Write a C Program to find largest element of an array.

#include <stdio.h>

int main()
{
    int size, i, largest;
    printf("Enter size of an array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of an array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < size; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
    }
    printf("Largest element: %d", largest);
    return 0;
}
// Reorder an array according to given indexes.

#include <stdio.h>
int main()
{
    int arr[100], size, i, ind[100], temp[100];

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter index of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &ind[i]);

    for (i = 0; i < size; i++)
    {
        temp[i] = arr[ind[i]];
    }
    for (i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
    printf("The even array is: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}
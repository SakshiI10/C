// Rearrange an array such that arr[i] = i.

#include <stdio.h>
int main()
{
    int arr[100], size, i, j, temp;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);


    printf("After rearranging an array: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}
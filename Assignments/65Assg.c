// Move all zeroes to end of array

#include <stdio.h>
int main()
{
    int arr[100], size, i;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int temp[100], k = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            temp[k] = arr[i];
            k++;
        }
    }

    while (k < size)
    {
        temp[k] = 0;
        k++;
    }

    printf("The elements are: ");
    for (k = 0; k < size; k++)
        printf("%d ", temp[k]);
}
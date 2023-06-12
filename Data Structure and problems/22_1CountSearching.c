// Count 1’s in a sorted binary array

#include <stdio.h>

int OneCount(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[100], size, i, j;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int count = OneCount(arr, size);
    printf("Number of Ones in the array: %d", count);

    return 0;
}

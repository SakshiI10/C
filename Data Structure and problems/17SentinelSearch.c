// Sentinel Linear Search.

#include <stdio.h>

int sentinellinearsearch(int arr[100], int size, int element)
{
    arr[size - 1] = element;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
}
int main()
{
    int arr[100], size, i, element;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to be searched: ");
    scanf("%d", &element);

    int index = sentinellinearsearch(arr, size, element);
    printf("Element %d found at index %d", element, index);
    return 0;
}
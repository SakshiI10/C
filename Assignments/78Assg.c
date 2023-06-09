// Linear Search Algorithm.

#include <stdio.h>

int linearsearch(int arr[100], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
        return -1;
    }
}

int main()
{
    int arr[100], size, i;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int element = 7;
    int index = linearsearch(arr, size, element);

    (index == -1)
        ? printf("Element not found")
        : printf("Element %d found at index %d\n", element, index);

    return 0;
}
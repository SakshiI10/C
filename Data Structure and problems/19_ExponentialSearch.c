// Exponential Search

#include <stdio.h>
#include <time.h>
#include <math.h>

int binarysearch(int arr[], int low, int high, int element);

int exponentialsearch(int arr[], int size, int element)
{
    if (arr[0] == element)
        return 0;

    int i = 1;
    while (i < size && arr[i] <= element)
        i = i * 2;

    return binarysearch(arr, i / 2, fmin(i, size - 1), element);
}

int binarysearch(int arr[], int low, int high, int element)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == element)
            return mid;

        if (arr[mid] < element)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
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

    int index = exponentialsearch(arr, size, element);

    if (index == -1)
        printf("Element not found\n");
    else
        printf("Element %d found at index %d\n", element, index);

    return 0;
}

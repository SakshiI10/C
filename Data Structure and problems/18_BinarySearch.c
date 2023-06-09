// Binary Search

#include <stdio.h>

int binarysearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size-1;
    while(low <= high)
    {
        mid = (low+high)/2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if(arr[mid] < element)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
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

    int index = binarysearch(arr, size, element);

    (index == -1)
        ? printf("Element not found")
        : printf("Element %d found at index %d\n", element, index);

    return 0;
}
// Reversal algorithm for array rotation

#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int d, int size) {
    reverseArray(arr, 0, d-1);       // Reverse the first part
    reverseArray(arr, d, size-1);    // Reverse the second part
    reverseArray(arr, 0, size-1);    // Reverse the entire array
}

int main()
{
    int arr[100], size, i;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int d;
    if (size % 2 == 0)
    {
        d = size / 2;
    }
    else
    {
        d = (size + 1) / 2;
    }
    //printf("The value of d: %d\n", d);

    rotateArray(arr, d, size);

    printf("The rotated array is: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
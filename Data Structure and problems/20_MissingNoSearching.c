// Find the missing number in an array of integers.

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, sum = 0, me = 0;

    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    me = (size * (size + 1)) / 2 - sum;
    printf("Missing element is: %d ", me);
    return 0;
}
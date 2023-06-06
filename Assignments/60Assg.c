// Find duplicate element in array.

#include <stdio.h>
int main()
{
    int arr[100], size, i, j;

    printf("Enter size of an array upto 100: ");
    scanf("%d", &size);

    printf("Enter elements of an array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < size; i++)
        for (j = i+1; j < size; j++)
            if (arr[i] == arr[j])
            {
                printf("Duplicate element is: %d\n", arr[i]);
            }
    return 0;
}
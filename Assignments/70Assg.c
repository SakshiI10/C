// Print All Distinct Elements of a given integer array.

#include <stdio.h>
int main()
{
    int arr[100], size, i, j, var;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
                break;
        }
        if (i == j)
            printf("%d ", arr[i]);
    }
    return 0;
}
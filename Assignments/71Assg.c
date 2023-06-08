// Find the element that appears once in Array where every other element appears twice.

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
        int count=0;
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count== 1)
            printf("%d ", arr[i]);
    }
    return 0;
}
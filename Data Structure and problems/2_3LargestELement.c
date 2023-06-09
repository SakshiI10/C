// Find the largest three elements in an array

#include <stdio.h>
int main()
{
    int arr[100], size, i, max, max2, max3;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    max = max2 = max3 = arr[0];

    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max3 = max2;
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3)
        {
            max3 = arr[i];
        }
    }

    printf("Three largest numbers are: %d %d %d\n", max, max2, max3);

    return 0;
}

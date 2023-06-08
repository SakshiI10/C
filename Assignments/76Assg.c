// Find subarraywith given sum.

#include <stdio.h>
int main()
{
    int arr[100], size, i, j, k, sum, currentsum;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter sum: ");
    scanf("%d", &sum);

    for (i = 0; i < size; i++)
    {
        currentsum = arr[i];
        for (j = i+1; j < size; j++)
        {
            if (currentsum == sum)
            {
                printf("Required subarray: ");
                for (k = i; k <= j - 1; k++)
                {
                    printf("%d ", arr[k]);
                }
                return 0;
            }
            if (currentsum > sum)
                break;
            currentsum = currentsum + arr[j];
        }
    }
}

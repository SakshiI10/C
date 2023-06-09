// Segregate even and odd numbers
#include <stdio.h>
int main()
{
    int arr[100], size, i;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int even[100], odd[100], j = 0, k = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }

    printf("The even array is: ");
    for (i = 0; i < j; i++)
        printf("%d ", even[i]);

    printf("\nThe odd array is: ");
    for (i = 0; i < k; i++)
        printf("%d ", odd[i]);
}
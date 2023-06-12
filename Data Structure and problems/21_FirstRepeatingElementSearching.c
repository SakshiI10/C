// Find the first repeating element in an array.

#include <stdio.h>

int firstRepeatingElement(int arr[], int size)
{
    // Nested loop to check for repeating elements
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            // If a repeating element is found, return its
            // index
            if (arr[i] == arr[j])
            {
                return i;
            }
        }
    }
    // If no repeating element is found, return -1
    return -1;
}

int main()
{
    int arr[100], size, i, j, var;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int index = firstRepeatingElement(arr, size);

    if (index == -1)
    {
        printf("No repeating element found!");
    }
    else
    {
        // Printing the first repeating element and its
        // index
        printf("First repeating element is: %d", arr[index]);
    }
    return 0;
}
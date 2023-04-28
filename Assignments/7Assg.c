// Write a C program using if...else to check whether a number entered by the user is even or odd.

#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    if (i == 0)
        printf("ZERO");
    else if (i % 2 == 0)
        printf("EVEN");
    else
        printf("ODD");
    return 0;
}
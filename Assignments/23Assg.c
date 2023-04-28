// Write a C program to check whether number is EVEN or ODD using switch.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch (n % 2)
    {
    case 0:
        printf("Even");
        break;

    default:
        printf("Odd");
        break;
    }
    return 0;
}
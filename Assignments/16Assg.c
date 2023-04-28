// Write a C program to count number of digits in an integer using while loop.

#include <stdio.h>
int main()
{
    int n, i = 1, count = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        count = i;
        i++;
    }
    printf("Count=%d", count);
    return 0;
}
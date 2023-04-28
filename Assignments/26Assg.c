// Write a C program to find the sum of natural numbers using recursion.

#include <stdio.h>
int add(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Addition: %d", add(n));
    return 0;
}

int add(int n)
{
    if (n >= 1)
        return n + add(n - 1);
    else
        return 0;
}

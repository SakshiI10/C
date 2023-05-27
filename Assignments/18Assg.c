 // Write a C program to check whether a no is palindrome or not.

#include <stdio.h>
int main()
{
    int n, temp, mod, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        mod = n % 10;
        rev = rev * 10 + mod;
        n /= 10;
    }
    if (temp == rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    return 0;
}
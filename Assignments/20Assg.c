// Write a C program to read gender (M/F) and print corresponding gender using switch?

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter your gender: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'F':
    case 'f':
        printf("Female");
        break;
    case 'M':
    case 'm':
        printf("Male");
        break;
    default:
        printf("Other");
        break;
    }
    return 0;
}
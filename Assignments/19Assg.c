// Write a C program to read weekday number and print weekday name using switch?

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number between 1 and 7: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    default:
        printf("Sunday");
        break;
    }
    return 0;
}
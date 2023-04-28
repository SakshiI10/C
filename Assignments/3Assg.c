// Write a C program to take input number of days from the user and converts it into years, weeks and days.

#include <stdio.h>
int main()
{
    int days, years, weeks;
    printf("Enter days: ");
    scanf("%d", &days);

    years = (days / 365);
    printf("YEARS: %d\n", years);

    weeks = (days % 365) / 7;
    printf("WEEKS: %d\n", weeks);

    days = days - ((years * 365) + (weeks * 7));
    printf("DAYS: %d", days);

    return 0;
}
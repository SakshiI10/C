// Calculate Compound interest.

#include <stdio.h>
#include <math.h>
int main()
{
    float amount, rate, time, ci;
    printf("Enter principle amount: ");
    scanf("%f", &amount);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);

    ci = amount * (pow((1 + rate / 100), time) - 1);
    printf("COMPOUND INTEREST: %f", ci);

    return 0;
}
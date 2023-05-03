// Write a C Program to calculate area of circle using a function like macro circleArea?

#include <stdio.h>
#define circleArea 3.14*r*r;
int main()
{
    float r, area;
    printf("Enter Radius of Circle\n");
    scanf("%f", &r);
    area = circleArea;
    printf("Area of Circle is %f\n", area);
    return 0;
}
// Write a C Program using #define preprocessor to calculate the area of circle?

#include <stdio.h>
#define PI 3.14 // Macro
int main()
{
    float r, area;
    printf("Enter the radius\n");
    scanf("%f", &r);
    area = PI * r * r;
    printf("Area of Circle is %.2f", area);
    return 0;
}
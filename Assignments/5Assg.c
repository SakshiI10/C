#include<stdio.h>
int main(){
    float c, f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c=(f-32)/1.8;
    printf("Temperature in Celcius: %f", c);
    printf("Temperature in Celcius: %f", c);

    return 0;
}
#include<stdio.h>
void main()
{
    float a = 10.5;
    printf("\n===FIRST CONDITION\n");
    if(sizeof(a)==sizeof(10.5))
    printf("Matched!!!");
    else
    printf("Not matched!!!");

    printf("\n===SECOND CONDITION\n");
    if(sizeof(a)==sizeof(10.5f))
    printf("Matched!!!");
    else
    printf("Not matched!!!");

    printf("\n===THIRD CONDITION\n");
    if(sizeof((double)a)==sizeof(10.5f))
    printf("Matched!!!");
    else
    printf("Not matched!!!");

    printf("\n===FOURTH CONDITION\n");
    if(sizeof((double)a)==sizeof(10.5))
    printf("Matched!!!");
    else
    printf("Not matched!!!");

    printf("\n");
}
//Write a C program to whether a year entered is leap year or not.

#include<stdio.h>
int main(){
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    if(y%4==0)
    printf("Leap Year");
    else
    printf("Not a leap year");
}
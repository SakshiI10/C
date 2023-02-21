//Write a C program to check whether a character is an alpabet or not?

#include<stdio.h>
int main(){
    char a;
    printf("Enter an alphabet or a number: ");
    scanf("%c", &a);

    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    printf("It is a character");
    else
    printf("It is not a character");
}

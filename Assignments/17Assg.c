//Write a C program to find factorial of a number using while loop.
#include<stdio.h>
int main(){
    int n, i=1, fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n){
        fact=fact*i;
        i++;
    }
    printf("Factorial = %d", fact);
    return 0;
}
//Write a C program to calculate the LCM of two integers using loops and decision making statements.

#include<stdio.h>
int main(){
    int a, b, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
        gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    printf("lcm: %d", lcm);
    return 0;
}
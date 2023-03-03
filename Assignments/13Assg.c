//Write a C program to reverse an integer entered by the user using while loop?

#include<stdio.h>
int main(){
    int n, temp, rev=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0){
        temp=n%10;
        printf("%d\n",temp);
        rev=rev*10+temp;
        n/=10;
    }
    printf("Reversed number: %d", rev);
    return 0;
}
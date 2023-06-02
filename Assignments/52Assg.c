//Fibonacci series

#include<stdio.h>
int main(){
    int n1=0, n2=1, n3, n, count=1;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d", n1);
    printf(" %d", n2);
    while(n3<=n){
        n3=n1+n2;
        printf(" %d", n3);
    n1=n2;
    n2=n3;
    n3++;
    }
}
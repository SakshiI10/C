//Write a C program to find GCD of two number using while loop and if...else statement.

#include<stdio.h>
int main(){
/*  int n1, n2;
    printf("Enter two positive numbers: ");
    scanf("%d %d", &n1, &n2);
    while(n1!=n2){
        if(n1>n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD: %d", n2);
    return 0;
}*/

    int n1, n2, i, gcd;
    printf("Enter two positive numbers: ");
    scanf("%d %d", &n1, &n2);
    for(i=1; i<=n1 && i<=n2; i++){
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    printf("GCD of %d %d is: %d", n1, n2, gcd);
    return 0;
}
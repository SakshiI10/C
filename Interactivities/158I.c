#include<stdio.h>
#define SI(p, n, r) float si; si=p*n*r/100;

int main(){
    float p=2500, r=3.5;
    int n=3;
    SI(p, n, r);
    SI(1500, 2, 2.5);
    return 0;
}
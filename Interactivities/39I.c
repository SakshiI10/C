#include<stdio.h>
void main(){
    int a=5, b=10;
    if(++a||++b)
        printf("%d %d", a, b);
    else
        printf("A");
}
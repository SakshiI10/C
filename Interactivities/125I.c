#include<stdio.h>
int fun(int**ptr);

int main(){
    int i=10, j=20;
    const int*ptr=&i;
    printf("i=%5X\n", ptr);
    printf("ptr=%d\n", *ptr);
    ptr=&j;
    printf("j=%5X\n", ptr);
    printf("ptr=%d\n", *ptr);
    return 0;
}
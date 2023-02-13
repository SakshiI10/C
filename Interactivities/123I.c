#include<stdio.h>
int fun(int**ptr);

int main(){
    int i=10;
    const int*ptr=&i;
    fun(&ptr);
    return 0;
}

int fun(int**ptr){
    int j=223;
    int *temp=&j;
    printf("Before changing ptr=%5x\n", *ptr);
    const *ptr=temp;
    printf("After changing ptr=%5x\n", *ptr);
    return 0;
}
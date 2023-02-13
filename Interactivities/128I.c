#include<stdio.h>
int fun(int*f){
    *f=10;
    return 0;
}

int main(){
    const int arr[5]={1,2,3,4,5};
    printf("Before modification arr[3]=%d", arr[3]);
    fun(&arr[3]);
    printf("After modification arr[3]=%d", arr[3]);
    return 0;
}
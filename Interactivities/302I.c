#include<stdio.h>
int main(){
    typedef int arr[5];
    arr iarr={1,2,3,4,5};
    int i;
    for(i=0; i<4; i++)
    printf("%d", iarr[i]);
    return 0;
}
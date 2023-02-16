#include<stdio.h>
int main(){
    foo(ary);
}
void foo(int**ary){
    int i=10, k=10, j=2;
    int*ary[2];
    ary[0]=&i;
    ary[1]=&j;
    printf("%d\n", ary[0][1]);
}
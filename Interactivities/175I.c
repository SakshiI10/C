#include<stdio.h>
int main(){
    int ary[2][3][4], j=20;
    ary[0][0]=&j;
    printf("%d\n", *ary[0][0]);
}
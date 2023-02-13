#include<stdio.h>
void foo(){
    return 0;
}
void main(){
    int x=0;
    x=foo();
    printf("%d", x);
}
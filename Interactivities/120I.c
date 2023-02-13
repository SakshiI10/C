#include<stdio.h>
int main(){
    int i=3, *j, k;
    j=&i;
    printf("%d\n", i**j*i+*j);
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", *j);
    return 0;
}
#include<stdio.h>
int main(){
    int a[5]={5, 1, 15,20, 25};
    int i, j, m, n;
    i=++a[1];
    j=a[1]++;
    m=a[i++];
    n=a[4];
    printf("%d, %d, %d, %d", i, j, m, n);
    return 0;
}
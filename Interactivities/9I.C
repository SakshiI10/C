#include<stdio.h>
int main(){
    int x = 10000;
    double y = 56;
    int*p=&x;
    double*q=&y;
    printf("p and q are %d and %d\n", sizeof(p), sizeof(q));    //In general, a 32-bit computer machine the size of a pointer would be 4 bytes while for a 64-bit computer machine, it would be 8 bytes.
    printf("p and q are %d and %d", p, q);
    return 0;
}
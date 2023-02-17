#include<stdio.h>
int main(){
    char a[]="Visual C++";
    char *b="Visual C++";
    printf("%d, %d\n", sizeof(a), sizeof(b));
    printf("%d, %d\n", sizeof(*a), sizeof(*b));
    return 0;
}
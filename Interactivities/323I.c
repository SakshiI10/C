#include<stdio.h>
typedef int integer;

int main(){
    int i=10, *ptr;
    float f=20;
    integer j=i;
    ptr=&i;
    printf("%s\n", *ptr);
    return 0;
}

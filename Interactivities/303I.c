#include<stdio.h>
int main(){
    typedef int LONG;
    LONG a=4;
    LONG b=68;
    float c=0;
    c=b;
    b+=a;
    printf("%d,",b);
    printf("%f,",c);
    return 0;
}
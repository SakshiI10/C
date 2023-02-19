#include<stdio.h>
int main(){
    union temp{
        int a;
        float b;
        char c;
    };
    union temp s={1,2.5,'A'};
    return 0;
}
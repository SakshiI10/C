#include<stdio.h>
int main(){
    struct emp{
        int code;
        struct emp *e;
    };
    return 0;
}
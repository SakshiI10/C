#include<stdio.h>
#include<string.h>
int main(){
    char str[]="MK\0\CL\0";
    printf("%d\n", strlen(str));
    return 0;
}
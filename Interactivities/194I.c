#include<stdio.h>
int main(){
    char str[]="value is=%d";
    int a='7';
    str[11]='c';
    printf(str, a);
    return 0;
}
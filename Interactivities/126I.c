#include<stdio.h>
int main(){
    const char *s="";
    char str[]="Hello";
    s=str;
    while(*s)
        printf("%c", *s++);
    return 0;
} 
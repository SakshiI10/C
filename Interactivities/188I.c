#include<stdio.h>
int main(){
    char str1[]="Hello";
    char str2[10];
    char *t, *s;
    s=str1;
    t=str2;
    while(*t=*s)
    *t++=*s++;
    printf("%s\n", str2);
    return 0;
}
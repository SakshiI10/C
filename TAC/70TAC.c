#include<stdio.h>
int main(){
    char *str="This";
    char *ptr="Program";
    str=ptr;
    printf("%s, %s\n", str, ptr);
}   
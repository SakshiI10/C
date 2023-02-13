#include<stdio.h>
int main(){
    char *str="This";
    char *ptr="Program\n";
    str=ptr;
    printf("%s, %s\n", str, ptr);
}   
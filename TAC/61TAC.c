#include<stdio.h>
int main(){
    char *str="Hello, World\n";
    char *strc="Good Morning\n";
    strcpy(strc,  str);
    printf("%s\n", strc);
    return 0;
}           
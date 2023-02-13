#include<stdio.h>
#define MAX 128

int main(){
    char mybuf[]="OKCL";
    char yourbuf[]="OKCL";
    char *const ptr=mybuf;
    *ptr='a';
    ptr=yourbuf;
    return 0;
}
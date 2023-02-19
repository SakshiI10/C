#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("c:\tc\file.c", "r");
    if(!fp)
    printf("Unable to open file");
    fclose(fp);
    return 0;
}
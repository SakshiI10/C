#include<stdio.h>
int main(){
    FILE *ptr;
    char i;
    ptr=fopen("myfile.c", "r");
    while((i=fgetc(ptr))!=NULL)
    printf("%c", i);
    return 0;
}

//Can't to comparison between pointer and integer
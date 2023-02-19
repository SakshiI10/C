#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned char;
    FILE *fp;
    fp=fopen("trial", "r");
    if(!fp){
        printf("Unable to open a file");
        exit(1);
    }
    fclose(fp);
    return 0;
}
#include<stdio.h>
int main(){
    FILE *fp;
    openfile("myfile.c", fp);
    if(fp==NULL)
    printf("Unable to open file");
}
openfile(char *fn, FILE**f){
    *f=fopen(fn, "r");
}
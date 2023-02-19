#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("myfile.c", "r");
    fseek(fp, "20", SEEK_SET);
    fclose(fp);
    return 0;
}
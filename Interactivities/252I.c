#include<stdio.h>
int main(){
    FILE *fp1, *fp2;
    fp1=fopen("file.c", "w");
    fp2=fopen("file.c", "w");
    fputc('A', fp1);
    fputc('B', fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
#include<stdio.h>
int main(){
    FILE *fs, *ft;
    char c[10];
    fs=fopen("source.txt", "r");
    c[0]=getc(fs);
    fseek(fs, 0, SEEK_END);
    fseek(fs, -3L, SEEK_CUR);
    fgets(c, 5, fs);
    puts(c);
    return 0;
}
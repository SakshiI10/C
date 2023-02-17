#include<stdio.h>
int main(){
    int m,n,b=m=n=8;
    char wer [80];
    sprintf(wer, "%d%d%d", m,n,b);
    puts(wer);
}
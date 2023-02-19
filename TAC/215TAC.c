#include<stdio.h>
int main(){
    FILE *fp;
    int n;
    fprintf(fp, "%d", 45);
    fflush(stdout);
    fprintf(stderr, "%d", 65);
    return 0;
}
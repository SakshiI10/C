#include<stdio.h>
int main(){
    int i=5;
    while(i-->=0)
        printf("%d", i) ;
    i=5;
    printf("\n");
    while(i-->=0)
        printf("%ia ", i);
    while(i-->=0)
        printf("%db ", i);
    return 0;
}   
#include<stdio.h>
void main(){
    int i, j, charVal='A';
    for(i=5; i>=1; i--)
    {
        for(j=0; j<i; j++)
            printf("%c", (charVal+j));
        printf("\n");
    }
}
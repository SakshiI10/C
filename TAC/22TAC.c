#include<stdio.h>
int main(){
    int x = 0;
    if(x++)
        printf("T\n");
    else if(x==1)
        printf("F\n");
}
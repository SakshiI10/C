#include<stdio.h>
int main(){
    int i=1;
    i++;
    switch(i--)
    {
        case 1: printf("1");
        break;
        case 2: printf("2");
        break;
        default: printf("D");
        break;
    }
    return 0;
}
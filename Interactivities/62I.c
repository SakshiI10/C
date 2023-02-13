#include<stdio.h>
void main(){
    int i = 0;
    while(i<10)
    {
        i++;
        printf("Hi %d\n",i);
        while(i<8){
            i++;
            printf("Hello %d abc\n",i);
        }
    }
}
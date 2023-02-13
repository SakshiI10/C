#include<stdio.h>
int main(){
    int i;
    for(i=0; i<10; i++){
        if(i==5){
            printf("\nA");
            goto HAI;
        }
        printf("%d", i);
    }
    HAI: printf("\nNow, we are inside label name \"hai\"\n");
}
#include<stdio.h>
#define L 10
void main(){
    auto money=10;
    switch(money, money*2){
        case L: printf("A");
        break;
        case L*2: printf("B");
        break;
        case L*3: printf("C");
        break;
        default: printf("D");
        case L*4: printf("E");
        break;
    }
}
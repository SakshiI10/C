#include<stdio.h>
void main(){
    switch(*(1+"AB" "CD"+1)){
        case 'A': printf("A");
        break;
        case 'B': printf("B");
        break;
        case 'C': printf("C");
        break;
        case 'D': printf("D");
    }
}
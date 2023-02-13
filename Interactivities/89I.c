#include<stdio.h>
void main(){
    int i=65;
    char ch='B';
    switch(ch, i){
        case 65: printf("Integer");
        break;
        case 'B': printf("Char");
        break;
        default: printf("Bye");
    }
}
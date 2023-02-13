#include<stdio.h>
void main(){
    int movie=1;
    switch (movie<<2+movie)
    {
    default: printf("D");
    case 1: printf("A");
    case 2: printf("B");
    case 3: printf("C");
    }
}
#include<stdio.h>
typedef struct data mystruct;

int main(){
    struct data{
        int x;
        mystruct *b;
    };
    return 0;
}
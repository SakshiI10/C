#include<stdio.h>
typedef struct p{
    int x,y;
}k={1,2};

int main(){
    p k1=k;    
    printf("%d\n", k1.x);
}
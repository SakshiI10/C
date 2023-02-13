#include<stdio.h>
int get();

int main(){
    const int x=get();
    printf("%d", x);
    return 0;
}

int get(){
    return 20;
}

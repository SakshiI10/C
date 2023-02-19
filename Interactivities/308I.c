#include<stdio.h>
int main(){
    struct value{
        int bit1:1;
        int bit2:2;
        int bit3:3;
    }bit;
    printf("%d\n", sizeof(bit));
    return 0;
}
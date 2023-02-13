#include<stdio.h>
int main(){
    int i=3;
    switch(i)
    {
        case 1:
            printf("Hello\n");
        case 2:
            printf("Hi\n");
        case 3:
            continue;
        default:
            printf("Bye\n");
    }
    return 0;
}       
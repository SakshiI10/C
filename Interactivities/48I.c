#include<stdio.h>
void main(){
    int ch;
    printf("Enter a value btw 1 to 2: ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
            printf("1");

        default:
            printf("2");
    }
}
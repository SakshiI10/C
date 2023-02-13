#include<stdio.h>
int main(){
    int i;
    #if A
        printf("Enter any number: ");
        scanf("%d", &i);
    #elif B
        printf("The number is odd");
    return 0;
}
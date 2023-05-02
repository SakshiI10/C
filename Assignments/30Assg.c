//Write a C program to swap number in cylic order using call by reference.

#include<stdio.h>
int swap(int *a, int *b, int *c);
int main(){
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Values before swaping: %d %d %d\n", a, b, c);
    swap(&a, &b, &c);
    printf("Values after swaping: %d %d %d\n", a, b, c);
    return 0;
}

int swap(int *a, int *b, int*c){
    int temp;
    temp=*a;
    *a=*c;
    *b=*b;
    *c=temp;
}

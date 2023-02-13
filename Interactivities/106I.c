#include<stdio.h>
int i;
int fun();

int main(){
    printf("Bello\n");
    while(i)
    {
        fun();
        main();
    }
    printf("Hello\n");
    return 0;
}

int fun()
{
    printf("Hi");
}
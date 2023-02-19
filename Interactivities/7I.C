#include<stdio.h>
int main(){
    float f1=0.1;               //This is of type double
    if (f1 == 0.1)
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
}

//It would be equal if, in line no 4 0.1f is there
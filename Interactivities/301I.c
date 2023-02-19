#include<stdio.h>
int main(){
    enum color{red, green, blue};
    typedef enum color mycolor;
    mycolor m=red;
    printf("%d", m);
    return 0;
}
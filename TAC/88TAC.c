#include<stdio.h>
#include<stdarg.h>
int main(){
    void display(int num, ...);
    display(4, 12.5, 13.5, 14.5, 44.3);
    return 0;
}
void display(int num,...)
{
    float c; int j;
    va_list ptr;
    va_start(ptr, num);
    for(j=1; j<=num; j++)
    {
        c=va_arg(ptr,float);
        printf("%f", c);
    }
}
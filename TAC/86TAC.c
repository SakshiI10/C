#include<stdio.h>
#include<stdarg.h>

int main(){
    varfun(3, 7, -11, 0);
    return 0;
}
void varfun(int n, ...)
{
    va_list ptr;
    int num;
    num=va_arg(ptr, int);
    printf("%d", num);
}
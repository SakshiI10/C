#include<stdio.h>
#include<stdarg.h>
void dumplist(int,...);

int main(){
    dumplist(2, 4, 8);
    dumplist(3, 6, 9, 7);
    return 0;
}
void dumplist(int n,...)
{
    va_list p; int i;
    va_start(p,n);
    while(n-->0)
    {
        i=va_arg(p, int);
        printf("%d", i);
    }
    va_end(p);
    printf("\n");
}
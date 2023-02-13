#include <stdio.h>
#include <stdarg.h>
int main()
{
    varfun(3, 7, -11.2, 0.66);
    return 0;
}
void varfun(int n, ...)
{
    float *ptr;
    int num;
    va_start(ptr, n);
    num = va_arg(ptr, float);
    printf("%f", num);
}
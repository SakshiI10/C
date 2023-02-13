#include <stdio.h>
#include <stdarg.h>

int main()
{
    void display(char *s, int num1, int num2, ...);
    display("Hello", 4,2, 12.5, 13.5, 14.5, 44.0);
    return 0;
}
void display(char*s, int num1, int num2, ...)
{
    double c;
    char s;
    va_list ptr;
    va_start(ptr, s);
    c=va_arg(ptr, double);
    printf("%f", c);
}
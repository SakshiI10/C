#include<stdio.h>
#include<stdarg.h>
void fun1(int num, ...);
void fun2(int num, ...);

int main(){
    fun1(1, "Apple", "Boys", "Cats", "Dogs");
    fun2(2, 12, 13, 14);
    return 0;
}

void fun1(int num,...)
{
    char *str;
    va_list ptr;
    va_start(ptr, num);
    str=va_arg(ptr, char*);
    printf("%s ", str);
}
void fun2(int num, ...)
{
    va_list ptr;
    va_start(ptr, num);
    num=va_arg(ptr, int);
    printf("%d ", num);
}
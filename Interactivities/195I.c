#include<stdio.h>
int main(){
    char result, str[]="\0IncludeHelp";
    result=printf("%s", str);
    if(result)
    printf("TRUE");
    else
    printf("FALSE");
    return 0;
}
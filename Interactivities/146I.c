#include<stdio.h>
#define JOIN(s1, s2) printf("%s=%s %s=%s \n", #s1, s1, #s2, s2);
int main(){
    char *str1="OKCL";
    char *str2="OKCL";
    JOIN(str1, str2);
    return 0;
}
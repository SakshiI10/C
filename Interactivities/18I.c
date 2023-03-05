//Ques_191
#include<stdio.h>
int main(){
    char *str="hello, world";
    char *str1="hello, world";
    if(strcmp(str, str1))
    printf("equal");
    else
    printf("unequal");
}

//Ques_192
#include<stdio.h>
#include<string.h>
int main(){
    int val=0;
    char str[]="IncludeHelp.Com";
    val=strcmp(str, "includehelp.com");
    printf("%d", val);
    return 0;
}

//Ques_193
#include<stdio.h>
int main(){
    char str[]="Hello%s%dFriends";
    printf(str);
    printf("\n");
    printf("%s", str);
    return 0;
}

//Ques_194
#include<stdio.h>
int main(){
    char str[]="value is=%d";
    int a='7';
    str[11]='c';
    printf(str, a);
    return 0;
}

//Ques_195
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

//Ques_196
#include<stdio.h>
#include<string.h>
int main(){
    if(printf("Hello")==strlen("Hello"))
    printf("...Friends");
    else
    printf("...Enemies");
    return 0;
}

//Ques_197
#include<stdio.h>
#include<string.h>
int main(){
    int len;
    char array[20]="fresh2refresh.com";
    len=strlen(array);
    printf("\string length=%d\n", len);
    return 0;
}

//Ques_198
#include<stdio.h>
int main(){
    char str1[]="fresh";
    char str2[]="refresh";
    int i, j, k;
    i=strcmp(str1, "fresh");
    j=strcmp(str1, str2);
    k=strcmp(str1, "f");
    printf("\n%d%d%d", i, j, k);
    return 0;
}
//Ques_181
#include<stdio.h>
int main(){
    void fun();
    fun();
    printf("\n");
    return 0;
}
void fun(){
    char c;
    if((c=getchar())!='\n')
    fun();
    printf("%c",c);
}

//Ques_182
#include<stdio.h>
int main(){
    char *names[]={"Suresh", "Siva", "Sona", "Baija", "Ritu"};
    int i;
    char *t;
    t=names[3];
    names[3]=names[4];
    names[4]=t;
    for(i=0; i<=4; i++)
    printf("%s", names[i]);
    return 0;
}

//Ques_183
#include<stdio.h>
#include<string.h>
int main(){
    static char str1[]="dills";
    static char str2[20];
    static char str3[]="Daffo";
    int i;
    i=strcmp(strcat(str3, strcpy(str2, str1)),"Daffodils");
    printf("%d\n",i);
    return 0;
}

//Ques_184
#include<stdio.h>
int main(){
    static char s[25]="The cocaine man";
    int i=0;
    char ch;
    ch=s[++i];
    printf("%c", ch);
    ch=s[i++];
    printf("%c", ch);
    ch=i++[s];
    printf("%c", ch);
    ch=++i[s];
    printf("%c", ch);
    return 0;
}

//Ques_185
#include<stdio.h>
int main(){
    int i;
    char a[]="\0";
    if(printf("%s", a))
    printf("The string is empty\n");
    else
    printf("The string is not empty\n");
    return 0;
}

//Ques_186
#include<stdio.h>
int main(){
    char a[]="Visual C++";
    char *b="Visual C++";
    printf("%d, %d\n", sizeof(a), sizeof(b));
    printf("%d, %d\n", sizeof(*a), sizeof(*b));
    return 0;
}

//Ques_187
#include<stdio.h>
int main(){
    static char mess[6][30]={"Don't walk in front of me...", "I may not follow;","Don't walk behind me...", "Just walk beside me...", "And be my frined."};
    printf("%c, %c\n", *(mess[2]+9), *(*(mess+2)+9));
    return 0;
}

//Ques_188
#include<stdio.h>
int main(){
    char str1[]="Hello";
    char str2[10];
    char *t, *s;
    s=str1;
    t=str2;
    while(*t=*s)
    *t++=*s++;
    printf("%s\n", str2);
    return 0;
}

//Ques_189
#include<stdio.h>
void swap(char*, char*);
int main(){
    char *pstr[2]={"Hello", "OKCL"};
    swap(pstr[0], pstr[1]);
    printf("%s\n%s", pstr[0], pstr[1]);
    return 0;
}
void swap(char *t1, char *t2){
    char *t;
    t=t1;
    t1=t2;
    t2=t;
}

//Ques_190
#include<stdio.h>
#include<string.h>
int main(){
    char *str1="Odisha";
    char *str2="KCL";
    char *str3;
    str3=strcat(str1, str2);
    printf("%s %s\n", str3, str1);
    return 0;
}
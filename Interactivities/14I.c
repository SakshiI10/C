//Ques_151
#include<stdio.h>
#define FUN(arg) do\
{\
    if(arg)\
    printf("OKCL...","\n");\
}while(--i)
int main(){
    int i=2;
    FUN(i<3);
    return 0;
}

//Ques_152
#include<stdio.h>
#define MAX(a,b)(a>b?a:b)
int main(){
    int x;
    x=MAX(3+2, 2+7)    ;
    printf("%d\n", x);
    return 0;
}

//Ques_153
#include<stdio.h>
#define MIN(x,y) (x<y)?x:y;
int main(){
    int x=3, y=4, z;
    z=MIN(x+y/2, y-1);
    if(z>0)
        printf("%d\n", z);
    return 0;
}

//Ques_154
#include<stdio.h>
#define str(x) #x
#define Xstr(x) str(x)
#define oper multiply
int main(){
    char *opername=Xstr(oper);
    printf("%s\n", opername);
    return 0;
}

//Ques_155
#include<stdio.h>
#define MESS junk
int main(){
    printf("MESS\n") ;   
    return 0;
}

//Ques_157
#include<stdio.h>
#define MAX(a, b, c) (a>b?a>c?a:c:b>c?b:c)
int main(){
    int x;
    x=MAX(3+2, 2+7, 3+7);
    printf("%d\n", x);
    return 0;
}

//Ques_158
#include<stdio.h>
#define SI(p, n, r) float si; si=p*n*r/100;
int main(){
    float p=2500, r=3.5;
    int n=3;
    SI(p, n, r);
    SI(1500, 2, 2.5);
    return 0;
}

//Ques_159
#include<stdio.h>
int main(){
    int i;
    #if A
        printf("Enter any number: ");
        scanf("%d", &i);
    #elif B
        printf("The number is odd");
    return 0;
}


//Ques_103
#include<stdio.h>
int main(){
    printf("OKCL");
    main();
    return 0;
}

//Ques_104
#include<stdio.h>
int main(){
    int fun();
    int i;
    i=fun();
    printf("%d \n",i);
    return 0;
}
int fun()
{
    _AX=1990;
}

//Ques_105
#include<stdio.h>
void fun(int*, int*);
int main(){
    int i=5, j=2;
    fun(&i, &j);
    printf("%d, %d", i, j);
    return 0;
}
void fun(int*i, int*j)
{
    *i=*i**i;
    *j=*j**j;
}

//Ques_106
#include<stdio.h>
int i;
int fun();
int main(){
    printf("Bello\n");
    while(i)
    {
        fun();
        main();
    }
    printf("Hello\n");
    return 0;
}
int fun()
{
    printf("Hi");
}

//Ques_107
#include<stdio.h>
int reverse(int);
int main(){
    int no=5;
    reverse(no);
    return 0;
}
int reverse(int no)
{
    if(no == 0)
        return 0;
    else
        printf("%d", no);
        printf("Hello");
        reverse(no--);
}

//Ques_108
#include<stdio.h>
void fun(int);
typedef int(*pf) (int, int);
int proc(pf, int, int);
int main(){
    int a=3;
    fun(a);
    return 0;
}
void fun(int n)
{
    if(n>0)
    {
        fun(--n);
        printf("%d ", n);
        fun(--n);
    }
}

//Ques_109
#include<stdio.h>
int sumdig(int);
int main(){
    int a, b;
    a=sumdig(123);
    b=sumdig(123);
    printf("%d, %d\n", a, b);
    return 0;
}
int sumdig(int n)
{
    int s, d;
    if(n!=0)
    {
        d=n%10;
        n=n/10;
        s=d+sumdig(n);
    }
    else
    return 0;
    return s;
}

//Ques_110
#include<stdio.h>
int main(){
    void fun(char*);
    char a[100];
    a[0]='A';a[1]='B';
    a[2]='C';a[3]='D';
    fun(&a[0]);
    return 0;
}
void fun(char*a)
{
    a++;
    printf("%c ", *a);
    a++;
    printf("%c", *a);
}
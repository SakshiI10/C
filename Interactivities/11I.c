//Ques_120
#include<stdio.h>
int main(){
    int i=3, *j, k;
    j=&i;
    printf("%d\n", i**j*i+*j);
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", *j);
    return 0;
}

//Ques_121
#include<stdio.h>
int main(){
    int y=128;
    const int x=y;
    printf("%d\n", x);
    return 0;
}

//Ques_122
#include<stdio.h>
#include<stdlib.h>
union employee{
    char name[15];
    int age;
    float salary;
};
const union employee e1;
int main(){
    strcpy(e1.name, "K");
    printf("%s %d %f", e1.name, e1.age, e1.salary);
    return 0;
}

//Ques_123
#include<stdio.h>
int fun(int**ptr);
int main(){
    int i=10;
    const int*ptr=&i;
    fun(&ptr);
    return 0;
}
int fun(int**ptr){
    int j=223;
    int *temp=&j;
    printf("Before changing ptr=%5x\n", *ptr);
    const *ptr=temp;
    printf("After changing ptr=%5x\n", *ptr);
    return 0;
}

//Ques_124
#include<stdio.h>
int main(){
    const int x=5;
    const int *ptrx;
    ptrx=&x;
    *ptrx=10;
    printf("%d\n", x);
    return 0;
}

//Ques_125
#include<stdio.h>
int fun(int**ptr);
int main(){
    int i=10, j=20;
    const int*ptr=&i;
    printf("i=%5X\n", ptr);
    printf("ptr=%d\n", *ptr);
    ptr=&j;
    printf("j=%5X\n", ptr);
    printf("ptr=%d\n", *ptr);
    return 0;
}

//Ques_126
#include<stdio.h>
int main(){
    const char *s="";
    char str[]="Hello";
    s=str;
    while(*s)
        printf("%c", *s++);
    return 0;
} 

//Ques_127
#include<stdio.h>
int get();
int main(){
    const int x=get();
    printf("%d", x);
    return 0;
}
int get(){
    return 20;
}

//Ques_128
#include<stdio.h>
int fun(int*f){
    *f=10;
    return 0;
}
int main(){
    const int arr[5]={1,2,3,4,5};
    printf("Before modification arr[3]=%d", arr[3]);
    fun(&arr[3]);
    printf("After modification arr[3]=%d", arr[3]);
    return 0;
}

//Ques_129
#include<stdio.h>
int main(){
    const int i=0;
    printf("%d\n", i++);
    return 0;
}

//Ques_130
#include<stdio.h>
int main(){
    const int c=-11;
    const int d=34;
    printf("%d, %d\n", c, d);
    return 0;
}
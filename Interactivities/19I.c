//Ques_201
#include<stdio.h>
struct student{
    char *name;
};
struct student s;
struct student fun(void){
    s.name="newton";
    printf("%s\n", s.name);
    s.name="alan";
    return s;
}

//Ques_202
void main(){
    struct student m=fun();
    printf("%s\n",m.name);
    m.name="turing";
    printf("%s\n", s.name);
}

//Ques_203
#include<stdio.h>
struct temp{
    int a;
}s;
void func(struct temp){
    s.a=10;
    printf("%d\t", s.a);s
}
void main(){
    func(s);
    printf("%d\t", s.a);
}

//Ques_204
#include<stdio.h>
struct student{
    char *name;
};
struct student fun(void){
    struct student s;
    s.name="alan";
    return s;
}
void main(){
    struct student m=fun();
    printf("%s", m.name);
}

//Ques_205
#include<stdio.h>
int main(){
    struct value{
        int bit1:1;
        int bit3:4;
        int bit4:4;
    }bit={1,2,13};
    printf("%d %d %d\n", bit.bit1, bit.bit3, bit.bit4);
    return 0;
}

//Ques_206
#include<stdio.h>
int main(){
    int fun();
    int i;
    i=fun();
    printf("%d\n", i);
    return 0;
}
int fun(){
    int AX=1990;
}

//Ques_207
#include<stdio.h>
int main(){
    int i=0;
    for(;i<=5;i++)
    printf("%d", i);
    return 0;
}

//Ques_208
#include<stdio.h>
int main(){
    struct emp{
        char *n;
        int age;
    };
    struct emp e1={"Dravid", 23};
    struct emp e2=e1;
    strupr(e2.n);
    printf("%s\n", e1.n);
    return 0;
}

//Ques_209
#include<stdio.h>
int main(){
    struct node{
        int data;
        struct node *link;
    };
    struct node *p, *q;
    p=(struct node *)malloc(sizeof(struct node));
    q=(struct node *)malloc(sizeof(struct node));
    printf("%d, %d\n", sizeof(p), sizeof(q));
    return 0;
}

//Ques_210
#include<stdio.h>
int main(){
    struct byte{
        int one:1;
    };
    struct byte var={1};
    printf("%d\n", var.one);
    return 0;
}
#include<stdio.h>
struct course{
    int courseno;
    char coursename[25];
};
int main(){
    struct course c[]={{102,"Java"}, {103,"PHP"}, {103,"DotNet"}};
    printf("%d ", c[1].courseno);
    printf("%d ", (*(c+2)).coursename);
    return 0;
}
//Ques_312
#include<stdio.h>
int main(){
    struct emp{
        char *n;
        int age;
    };
    struct emp e1={"Dravid", 23};
    struct emp e2= e1;
    strupr(e2.n);
    printf("%s\n", e1.n);
    return 0;
}

//Ques_313
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

//Ques_314
#include<stdio.h>
int main(){
    struct byte{
        int one:1;
    };
    struct byte var={1};
    printf("%d\n", var.one);
    return 0;
}

//Ques_316
#include<stdio.h>
int main(){
    enum value{VAL1=0, VAL2, VAL3, VAL4, VAL5} var;
    printf("%d\n", sizeof(var));
    return 0;
}

//Ques_317
#include<stdio.h>
int main(){
    struct emp{
        int code;
        struct emp *e;
    };
    return 0;
}

//Ques_318
#include<stdio.h>
typedef struct data mystruct;
int main(){
    struct data{
        int x;
        mystruct *b;
    };
    return 0;
}

//Ques_319
#include<stdio.h>
int main(){
    union a{
        int i;
        char ch[2];
    };
    union a u1={512};
    union a u2={0, 2};
    return 0;
}
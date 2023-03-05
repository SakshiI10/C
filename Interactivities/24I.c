//Ques_321
#include<stdio.h>
typedef struct student{
    char *a;
} stu;
void main(){
    struct student s;
    s.a="hey";
    printf("%s",s.a);
}

//Ques_322
#include<stdio.h>
typedef struct student{
    char *a;
} stu;
void main(){
    struct stu s;
    s.a="hi";
    printf("%s",s.a);
}

//Ques_323
#include<stdio.h>
typedef int integer;
int main(){
    int i=10, *ptr;
    float f=20;
    integer j=i;
    ptr=&i;
    printf("%s\n", *ptr);
    return 0;
}

//Ques_326
#include<stdio.h>
typedef struct p{
    int x,y;
};
int main(){
    p k1={1,2}    ;
    printf("%d\n", k1.x);
}

//Ques_327
#include<stdio.h>
typedef struct p{
    int x,y;
}k={1,2};
int main(){
    p k1=k;    
    printf("%d\n", k1.x);
}

//Ques_328
#include<stdio.h>
typedef struct p{
    int x,y;
}k;
int main(){
    struct p p={1,2}    ;
    k k1=p;
    printf("%d\n", k1.x);
}

//Ques_336
#include<stdio.h>
typedef struct student{
    char *a;
}stu;
void main(){
    stu s;
    s.a="hi";
    printf("%s",s.a);
}
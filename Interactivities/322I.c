#include<stdio.h>
typedef struct student{
    char *a;
} stu;

void main(){
    struct stu s;
    s.a="hi";
    printf("%s",s.a);
}

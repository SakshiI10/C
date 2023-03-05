//Ques_172
#include<stdio.h>
int main(){
    int ary[2][3];
    foo(ary);
}
void foo(int *ary[]){
    int i=10, j=2, k;
    ary[0]=&i;
    ary[1]=&j;
    *ary[0]=2;
    for (k=0; k<2; k++)
    printf("%d\n", *ary[k]);
}

//Ques_173
#include<stdio.h>
int main(){
    int ary[2][3];
    foo(ary);
}
void foo(int *ary[]){
    int i=10, j=2, k;
    ary[0]=&i;
    ary[1]=&j;
    for (k=0; k<2; k++)
    printf("%d\n", *ary[k]);
}

//Ques_174
#include<stdio.h>
int main(){
    foo(ary);
}
void foo(int**ary){
    int i=10, k=10, j=2;
    int*ary[2];
    ary[0]=&i;
    ary[1]=&j;
    printf("%d\n", ary[0][1]);
}

//Ques_175
#include<stdio.h>
int main(){
    int ary[2][3][4], j=20;
    ary[0][0]=&j;
    printf("%d\n", *ary[0][0]);
}

//Ques_176
#include<stdio.h>
void main(){
    int a[2][3]={1, 2, 3, 4, 5};
    int i=0, j=0;
    for(i=0; i<2; i++)
    for(j=0; j<3; j++)
    printf("%d", a[i][j]);
}

//Ques_177
#include<stdio.h>
void main(){
    int a[2][3]={1, 2, 3, , 4, 5};
    int i=0, j=0;
    for(i=0; i<2; i++)
    for(j=0; j<3; j++)
    printf("%d", a[i][j]);
}

//Ques_178
#include<stdio.h>
void f(int a[][3]){
    a[0][1]=3;
    int i=0, j=0;
    for(i=0; i<2; i++)
    for(j=0; j<3; j++)
    printf("%d", a[i][j]);
}
void main(){
    int a[2][3]={0};
    f(a);
}

//Ques_179
#include<stdio.h>
void f(int a[][]){
    a[0][1]=3;
    int i=0, j=0;
    for(i=0; i<2; i++)
    for(j=0; j<3; j++)
    printf("%d", a[i][j]);
}
void main(){
    int a[2][3]={0};
    f(a);
}

//Ques_180
#include<stdio.h>
void f(int a[2][]){
    a[0][1]=3;
    int i=0, j=0;
    for(i=0; i<2; i++)
    for(j=0; j<3; j++)
    printf("%d", a[i][j]);
}
void main(){
    int a[2][3]={0};
    f(a);
}
//Ques_131
#include<stdio.h>
#define MAX 128
int main(){
    char mybuf[]="OKCL";
    char yourbuf[]="OKCL";
    char *const ptr=mybuf;
    *ptr='a';
    ptr=yourbuf;
    return 0;
}

//Ques_132
/* #include<stdio.h>
#define MAX 128
int main(){
    const int max=128;
    char array[max];
    char string[MAX];
    array[0]=string[0]='A';
    printf("%c %c\n", array[0], string[0]);
    return 0;
} */

//Ques_133
/* #include<stdio.h>
union employee{
    char name[15];
    int age;
    float salary;
};
const union employee e1;
int main(){
    strcpy(e1.name, "K");
    printf("%s", e1.name);
    e1.age=85;
    printf("%d", e1.age);
    printf("%f", e1.salary);
    return 0;
} */

//Ques_135
/* #include<stdio.h>
int main(){
    const int x;
    x=128;
    printf("%d\n", x);
    return 0;
} */

//Ques_136
/* #include<stdio.h>
int main(){
    const int k=7;
    int const* q=&k;
    printf("%d\n", *q);
    return 0;
} */

//Ques_137
/* #include<stdio.h>
#define MAX 128
int main(){
    char mybuf[]="OKCL";
    char yourbuf[]="OKCL";
    char const* ptr=mybuf;
    *ptr='a';
    ptr=yourbuf;
    return 0;
} */

//Ques_138
/* #include<stdio.h>
const char *fun();
int main(){
    *fun()='A';
    return 0;
}
const char*fun(){
    return "Hello";
} */

//Ques_140
/* #include<stdio.h>
#define SWAP (a, b, c)(c t; t=a, a=b, b=t)
int main(){
    int x=10, y=20;
    SWAP(x, y, int);
    printf("%d %d\n", x, y);
    return 0;
} */
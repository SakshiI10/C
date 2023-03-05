//Ques_143
#include<stdio.h>
#define MAN(x, y)((x)>(y))?(x):(y);
int main(){
    int i=10, j=5, k=0;
    k=MAN(++i, j++);
    printf("%d, %d, %d\n", i, j, k);
    return 0;
}

//Ques_144
#include<stdio.h>
#define SQUARE(x)x*x
int main(){
    float s=10, u=30, t=2, a;
    a=2*(s-u*t)/SQUARE(t);
    printf("Result=%f", a);
    return 0;
}

//Ques_145
#include<stdio.h>
#define SQR(x)(x*x)
int main(){
    int a=3, b=3;
    a=SQR(b+2);
    printf("%d\n", a);
    return 0;
}

//Ques_146
#include<stdio.h>
#define JOIN(s1, s2) printf("%s=%s %s=%s \n", #s1, s1, #s2, s2);
int main(){
    char *str1="OKCL";
    char *str2="OKCL";
    JOIN(str1, str2);
    return 0;
}

//Ques_147
#include<stdio.h>
#define CUBE(x)(x*x*x)
int main(){
    int a, b=3;
    a=CUBE(b++);
    printf("%d, %d\n", a, b);
    return 0;
}

//Ques_148
#include<stdio.h>
#define PRINT(int)printf("int=%d,", int)
int main(){
    int x=2, y=3, z=4;
    PRINT(x);
    PRINT(y);
    PRINT(z);
    return 0;
}

//Ques_149
#include<stdio.h>
#define SWAP(a,b) int t; t=a, a=b, b=t;
int main(){
    int a=10, b=12;
    SWAP(a,b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

//Ques_150
#include<stdio.h>
#define FUN(i,j) i##j
int main(){
    int va1=10;
    int va12=20;
    printf("%d\n", FUN(va1,2));
    return 0;
}
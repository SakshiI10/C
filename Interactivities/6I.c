//Ques_61
#include<stdio.h>
void main(){
    int i = 0;
    do
    {
        printf("Hello");
    } while (i != 0);
}

//Ques_62
#include<stdio.h>
void main(){
    int i = 0;
    while(i<10)
    {
        i++;
        printf("Hi %d\n",i);
        while(i<8){
            i++;
            printf("Hello %d abc\n",i);
        }
    }
}

//Ques_63
//**
#include<stdio.h>
int main(){
    int i=0, j=0;
    while(i<5, j<10)
    {
        i++;
        j++;
    }
    printf("%d, %d\n", i, j);
}

//Ques_64
#include<stdio.h>
int main(){
    int a=0, i=0, b;
    for(i=0; i<5; i++)
    {
        a++;
        continue;
    }
    printf("Hi%d ",i);
    return 0;
}

//Ques_65
#include<stdio.h>
int main(){
    int a=0, i=0, b;
    for(i=0; i<5; i++)
    {
        a++;
        if(i==3)
        break;
    }
    printf("Hi%d ",a);
    return 0;
}

//Ques_66
#include<stdio.h>
void main(){
    int i=0, j=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            if(i>1)
                break;
        }
        printf("Hi %i\n", i);
    }
}

//Ques_67
#include<stdio.h>
int main(){
    int i=0, j=0;
    for(i; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("1\n");
            break;
        }
        printf("2\n");
    }
    printf("after loop\n");
}   

//Ques_68
//**
#include<stdio.h>
int main(){
    static int i;
    for(i++; ++i; i++)
    {
        printf("%d ", i);
        if(i==6)
        break;
    }
    return 0;
}

//Ques_69
#include<stdio.h>
int main(){
    int fun={
        printf("C for loop\n")
    };
    int x=5;
    for(x=0; x<fun; x++)
    {
        printf("%x ", x);
    }
    return 0;
}

//Ques_70
//**
#include<stdio.h>
int main(){
    int i = 0;
    for(i=0; i==0; i++)
    {
        printf("%d", i);
    }
    return 0;
}
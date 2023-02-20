//Ques_81
#include<stdio.h>
#define L 10
void main(){
    auto money=10;
    switch(money, money*2){
        case L: printf("A");
        break;
        case L*2: printf("B");
        break;
        case L*3: printf("C");
        break;
        default: printf("D");
        case L*4: printf("E");
        break;
    }
}

//Ques_82
//**
#include<stdio.h>
void main(){
    switch(*(1+"AB" "CD"+1)){
        case 'A': printf("A");
        break;
        case 'B': printf("B");
        break;
        case 'C': printf("C");
        break;
        case 'D': printf("D");
    }
}

//Ques_83
#include<stdio.h>
int main(){
    int c=280;
    switch(c){
        printf("Start\t");
        case 280: printf("A");
        case 24: printf("B");
        default: printf("D");
        printf("End");
    }
}

//Ques_84
#include<stdio.h>
void main(){
    static int i;
    int j;
    for(j=0; j<=5; j+=2)
    switch(j){
        case 1: i++;
        break;
        case 2: i+=2;
        case 4: i%=2; j=-1;
        continue;
        default: --i;
        continue;
    }
    printf("%d",i);
}

//Ques_85
#include<stdio.h>
int main(){
    int sum=0;
    for(int i=0; i<=10; i++){
        sum=sum+i;
        if(i==5){
            goto addition;
        }
    }
    addition: printf("%d\n", sum);
    return 0;
}

//Ques_86
#include<stdio.h>
int main(){
    int i;
    for(i=0; i<10; i++){
        if(i==5){
            printf("\nA");
            goto HAI;
        }
        printf("%d", i);
    }
    HAI: printf("\nNow, we are inside label name \"hai\"\n");
}

//Ques_88
#include<stdio.h>
int main(){
    int i=1;
    switch(i)
    {
        case 1: printf("Hai");
        default: printf("Bye");
    }
    return 0;
}

//Ques_89
#include<stdio.h>
void main(){
    int i=65;
    char ch='B';
    switch(ch, i){
        case 65: printf("Integer");
        break;
        case 'B': printf("Char");
        break;
        default: printf("Bye");
    }
}

//Ques_90
//**
#include<stdio.h>
int main(){
    int i=1;
    i++;
    switch(i--)
    {
        case 1: printf("1");
        break;
        case 2: printf("2");
        break;
        default: printf("D");
        break;
    }
    return 0;
}
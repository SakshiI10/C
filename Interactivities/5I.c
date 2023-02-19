//Ques_51
//**
#include<stdio.h>
void main(){
    char cnt = 0;
    for(cnt++;printf("%d",cnt);)
    printf("%d",cnt);
}

//Ques_52
#include<stdio.h>
int main(){
    int tally = 0;
    for(;;)
    {
        if(tally==10)
        break;
        printf("%d ", ++tally);
    }
}

//Ques_53
#include<stdio.h>
int main(){
    int tally = 0;
    for(tally=0; tally<12; ++tally)
    {
        printf("#");
        if(tally>6 && tally<10)
        continue;;
        printf("%d ", tally);
    }
}

//Ques_54
#include<stdio.h>
void main(){
    int i, j, charVal='A';
    for(i=5; i>=1; i--)
    {
        for(j=0; j<i; j++)
            printf("%c", (charVal+j));
        printf("\n");
    }
}

//Ques_55
#include<stdio.h>
void main(){
    double k = 0;
    for (k=0.0; k<3.0; k++)
        printf("Hello\n");
}

//Ques_56
#include<stdio.h>
void main(){
    double k = 0;
    for (k=0.0; k<3.0; k++)
        printf("%lf\n",k);
}

//Ques_57
#include<stdio.h>
void main(){
    int k;
    for (k=-3; k<-5; k++)
        printf("Hello\n");
}

//Ques_58
#include<stdio.h>
int main(){
    int i = 0;
    do{
        i++;
        printf("in while loop: %d \n",i);
    }while(i<3);        //It will run till value of i becomes 3
    printf("Hi");
}

//Ques_59
//**
#include<stdio.h>
int main(){
    int i = 0;
    while(i<3)
    i++;
    printf("in while loop: %d\n", i);
}

//Ques_60
#include<stdio.h>
void main(){
    int i = 0;
    while(++i)
    {
        printf("H");
    }
}
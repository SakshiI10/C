//Ques_21:
#include<stdio.h>
void main(){
    if(!printf(""))
        printf("Okkk");
    else
        printf("Hiii");
}

//Ques_22:
#include<stdio.h>
int main(){
    int x = 22;
    if (x = 10)
    printf("TRUE");
    else
    printf("FALSE");
}

//Ques_23:
#include<stdio.h>
int main(){
    char val = 1;
    if (val--==0)
        printf("TRUE");
    else
        printf("FALSE");
    val-=0;
    printf("%d\n", val);
}

//Ques_24:
#include<stdio.h>
int main()
{
    float a = 10.5;
    printf("\n===FIRST CONDITION\n");
    if(sizeof(a)==sizeof(10.5))
    printf("Matched!!!");
    else
    printf("Not matched!!!");

    printf("\n===SECOND CONDITION\n");
    if(sizeof(a)==sizeof(10.5f))
    printf("Matched!!!");
    else
    printf("Not matched!!!");

    printf("\n===THIRD CONDITION\n");
    if(sizeof((double)a)==sizeof(10.5f))
    printf("Matched!!!");
    else
    printf("Not matched!!!");

    printf("\n===FOURTH CONDITION\n");
    if(sizeof((double)a)==sizeof(10.5))
    printf("Matched!!!");
    else
    printf("Not matched!!!");

    printf("\n");
}

//Ques_25:
#include<stdio.h>
int main(){
    if ((-100 && 100) || (20 && -20))
        printf("%s","Condition is true.");
    else
        printf("%s","Condition is false.");
    return 0;
}

//Ques_26:
#include<stdio.h>
#define TRUE 1
int main(){
    if(TRUE){
        printf("1");
        printf("2");
    }
    else{
        printf("3");
        printf("4");
    }
    return 0;
}

//Ques_27:
#include<stdio.h>
int main(){
    int pn=100;
    if(pn>20)
        if(pn<20)   
            printf("Heyyyyy");
    else
        printf("Hiiiii");
    return 0;
}

//Ques_29:
#include<stdio.h>
int main(){
    int a = 10;
    if(10L == a)
        printf("10L");
    else if(10 == a)
        printf("10");
    else
        printf("0");
    return 0;
}

//Ques_30:
#include<stdio.h>
void main(){
    int x = 1;
    if(x--)
    {
        printf("Star Wars");
        printf("Psycho");
    }
    else
        printf("The Shawshant Redemption");
}
//Ques_71
#include<stdio.h>
void main(){
    int ch;
    printf("Enter a value btw 1 to 2: ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
            printf("1\n");
        default:
            printf("2\n");
    }
}

//Ques_72
/* #include<stdio.h>
void main(){
    int ch;
    printf("Enter a value btw 1 and 2: ");
    scanf("%d", &ch);
    switch(ch, ch+1)
    {
        case 1:
        printf("1\n");
        break;
        case 2:
        printf("2\n");
        break;
    }
} */

//Ques_73
/* #include<stdio.h>
int main(){
    switch(printf("Do\n"))
    {
        case 1:
        printf("First\n");
        break;
        case 2:
        printf("Second\n");
        break;
        default:
        printf("Default\n");
        break;
    }
} */

//Ques_74
/* #include<stdio.h>
int main(){
    printf("%d", 1);
    goto l1;
    printf("%d", 2);
    l1:goto l2;
    printf("%d", 3);
    l2:printf("%d", 4);
} */

//Ques_75
/* #include<stdio.h>
int main(){
    int i=0, j=0;
    l1: while(i<2)
    {
        i++;
        while (j<3)
        {
            printf("loop\n");
            goto l1;
        }
    }
} */

//Ques_76
/* #include<stdio.h>
void main(){
    int i=0;
    if(i==0)
    {
        goto label;
    }
    label: printf("Hello");
} */

//Ques_77
/* #include<stdio.h>
int main(){
    int i=0,k;
    if(i==0)
        goto label;
        for(k=0; k<3; k++)
        {
            printf("Hi\n");
            label: k=printf("%03d",i);
        }
} */

//Ques_78
//**
/* #include<stdio.h>
void main(){
    int i=5, k;
    if(i==0)
        goto label;
        label: printf("%d\n", i);
        printf("Hey");
    
} */

//Ques_79
/* #include<stdio.h>
void main(){
    int check=2;
    switch (check)
    {
    case 1: printf("A");
    case 2: printf("B");
    case 3: printf("C");
    default: printf("D");
    }
} */

//Ques_80
/* #include<stdio.h>
void main(){
    int movie=1;
    switch (movie<<2+movie)
    {
    default: printf("D");
    case 1: printf("A");
    case 2: printf("B");
    case 3: printf("C");
    }
} */
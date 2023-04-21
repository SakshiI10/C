//Ques_41
#include<stdio.h>
void main(){
    int x = 5;
    if(x<1)
        printf("Hello");
    if(x==5)
        printf("Hi");
    else
        printf("No");
}

//Ques_42
/* #include<stdio.h>
int x;
void main(){
    if(x)
        printf("Hi");
    else
        printf("Hello");
} */

//Ques_43
/* #include<stdio.h>
void main(){
    int x = 5;
    if(true);
        printf("Hello");
} */

//Ques_44
/* #include<stdio.h>
void main(){
    int x = 0;
    if(x == 0)
        printf("Hi");
    else
        printf("How are you");
        printf("Hello");
} */

//Ques_45
/* #include<stdio.h>
void main(){
    int x = 5;
    if(x<1);
        printf("Hello");
} */

//Ques_46
/* #include<stdio.h>
int main(){
    double ch;
    printf("Enter a value btw 1 to 2: ");
    scanf("%lf", &ch);
    switch(ch)
    {
        case 1:
            printf("1");
            break;

        case 2:
            printf("2");
            break;
    }
} */

//Ques_47
/* #include<stdio.h>
void main(){
    char *ch;
    printf("Enter a value btw 1 to 3: ");
    scanf("%s", ch);
    switch(ch)
    {
        case 1:
            printf("1");
            break;

        case 2:
            printf("2");
            break;
    }
} */

//Ques_48
/* #include<stdio.h>
void main(){
    int ch;
    printf("Enter a value btw 1 to 2: ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
            printf("1");
            break;

        default:
            printf("2");
    }
} */

//Ques_49
/* #include<stdio.h>
void main(){
    int ch;
    printf("Enter a value btw 1 to 2: ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
            printf("1");
            break;
            printf("Hi");
        default:
            printf("2");
    }
} */

//Ques_50
/* #include<stdio.h>
void main(){
    int ch;
    printf("Enter a value btw 1 to 2: ");
    scanf("%d", &ch);
    switch(ch, ch+1)
    {
        case 1:
            printf("1");
            break;

        case 2:
            printf("2");
            break;
    }
} */
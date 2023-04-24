//TAC21
#include<stdio.h>
int main(){
    int x = 1;
    if(x>0)
        printf("Inside if\n");
    else if(x>0)
        printf("Inside else if\n");
}

//TAC22
//**
/* #include<stdio.h>
int main(){
    int x = 0;
    if(x++){
        printf("T\n");
        printf("%di\n", x);}
    else if(x==1)
        printf("F\n");
        printf("%de\n", x);
} */

//TAC23
/* #include<stdio.h>
int main(){
    int x = 0;
    if(x == 1)
        if(x == 0)   
            printf("Inside if\n");
        else
            printf("Inside else if\n");
    else
        printf("Inside else\n");
} */

//TAC24
/* #include<stdio.h>
int main(){
    int x = 0;
    if(x == 0)
        printf("True, \n");
    else if(x = 10)
        printf("False, \n");
    printf("%d\n", x);
} */

//TAC27
/* #include<stdio.h>
int main(){
    int x = 0;
    if(x == 1)
        if(x >= 0)   
            printf("True\n");
        else
            printf("False\n");
} */

//TAC28
//**
/* #include<stdio.h>
int main(){
    int a = 1;
    if(a--) 
            printf("True\n");
            printf("%d\n", a);
    if(a++)
            printf("False\n");
    printf("%d\n", a);
} */

//TAC29
/* #include<stdio.h>
int main(){
    int a = 1;
    if(a){
        printf("All is well\n");
        printf("I am well\n");}
    else
        printf("I am not well");
} */

//TAC30
/* #include<stdio.h>
int main(){
    if(printf("%d\n", printf("")))
        printf("We are happy");
    else if (printf("1"))
        printf("We are sad");
} */
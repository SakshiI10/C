//Ques_91
#include<stdio.h>
int main(){
    int x;
    for(x=-1; x<=10; x++)
    {
        if(x<5)
            continue;
        else
            break;
        printf("OKCL\n");
    }
    return 0;
}

//Ques_92
/* #include<stdio.h>
int main(){
    int j=1;
    while ((j<=255))
    {
        printf("%c %d\n", j, j);
        j++;
    }
    return 0;
} */

//Ques_96
/* #include<stdio.h>
int main(){
    int i=0;
    for(; i<=5; i++)
    printf("%d", i);
    return 0;
} */

//Ques_97
/* #include<stdio.h>
int main(){
    char str[]="C-program";
    int a=5;
    printf(a>10?"Ps\n":"%s\n",str);
    return 0;
} */

//Ques_98
/* #include<stdio.h>
int main(){
    int a=500, b=100, c;
    if(!a>=400)
    b=300;
    c=200;
    printf("b=%d c=%d\n", b, c);
    return 0;
} */

//Ques_100
/* #include<stdio.h>
int main(){
    int x=3;
    float y=3.0;
    if(x==y)
        printf("x and y are equal");
    else
        printf("x and y are not equal");
    return 0;
} */
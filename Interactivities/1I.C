//Ques_1:
#include<stdio.h>
int main(){
    printf("Hello World! %d\n", x);
    return 0;
}

//Ques_2:
/* #include<stdio.h>
int main(){
    int y=10000;
    int y=34;
    printf("Hello World! %d\n",y);
    return 0;
} */

//Ques_3:
/* #include<stdio.h>
int main(){
    int main = 3;
    printf("%d",main);
    return 0;
} */

//Ques_4:
/* #include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int i;
    for (i = 0; i < 5; i++)
    {
        if ((char)a[i]=='5'){
            printf("%d\n",a[i]);
            printf("a");
        }
        else
            printf("FAIL\n");
    }
} */

//Ques_5:
/* #include<stdio.h>
int main(){
    signed char chr;    //signed char range: -128 to 128
    chr=128;
    printf("%d\n",chr);
    return 0;
} */

//Ques_6:
/* #include<stdio.h>
int main(){
    char c;
    int i = 0;
    FILE *file;
    file=fopen("test.txt","w+");
    fprintf(file, "%c",'a');
    fprintf(file, "%c",-1);
    fprintf(file, "%c",'b');
    fclose(file);
    file=fopen("test.txt","r");
    while((c=fgetc(file))!=-1)
        printf("%c",c);
    return 0;
} */

//Ques_7:
/* #include<stdio.h>
int main(){
    float f1=0.1;               //This is of type double
    if (f1 == 0.1)
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
} */

//It would be equal if, in line no 4 0.1f is there

//Ques_8:
/* #include<stdio.h>
int main(){
    float f1=0.1;
    if (f1 == 0.1f)
        printf("equal\n");
    else
        printf("not equal\n");
    // return 0;
} */

//Ques_9:
/* #include<stdio.h>
int main(){
    int x = 10000;
    double y = 56;
    int*p=&x;
    double*q=&y;
    printf("p and q are %d and %d\n", sizeof(p), sizeof(q));    //In general, a 32-bit computer machine the size of a pointer would be 4 bytes while for a 64-bit computer machine, it would be 8 bytes.
    printf("p and q are %d and %d", p, q);
    return 0;
} */

//Ques_10:
/* #include<stdio.h>
int main(){
    float x = 'a';
    printf("%f",x);
    return 0;
} */

//Ques_11:
/* #include<stdio.h>
int main(){
    printf("C programming %s","Class by\n%s Institution","WOW");
} */
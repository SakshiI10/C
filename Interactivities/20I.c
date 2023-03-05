//Ques_221
#include<stdio.h>
int main(){
    int k=1;
    printf("%d==1 is " "%s\n",k,k==1?"TRUE":"FALSE");
    return 0;
}

//Ques_222
#include<stdio.h>
char *str="char *str=%c%s%c; main(){printf(str, 34, str, 34);}";
int main(){
    printf(str, 34, str, 34)    ;
    return 0;
}

//Ques_223
#include<stdio.h>
int main(){
    float a=3.15529;
    printf("%2.1f\n", a);
    return 0;
}

//Ques_224
#include<stdio.h>
int main(){
    printf("%c\n", ~('C'*-1));
    return 0;
}

//Ques_225
#include<stdio.h>
int main(){
    char *p;
    p="%d\n";
    p++;
    p++;
    printf(p-2, 23);
    return 0;
}

//Ques_226
#include<stdio.h>
int main(){
    printf("%%%%\n");
    return 0;
}

//Ques_228
#include<stdio.h>
int main(){
    int i;
    printf("%d\n", scanf("%d", &i));
    return 0;
}

//Ques_233
#include<stdio.h>
int main(){
    int n=5;
    printf("n=%*d\n",n,n);
    return 0;
}

//Ques_235
#include<stdio.h>
int main(){
    int m,n,b=m=n=8;
    char wer [80];
    sprintf(wer, "%d%d%d", m,n,b);
    puts(wer);
}

//Ques_246
#include<stdio.h>
int main(){
    FILE *fs, *ft, *fp;
    fp=fopen("A.C", "r");
    fs=fopen("B.C", "r");
    ft=fopen("C.C", "r");
    fclose(fp, fs, ft);
    return 0;
}

//Ques_247
#include<stdio.h>
int main(){
    int a=250;
    printf("%d\n", a);
    return 0;
}
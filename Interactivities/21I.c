
//Ques_252
#include<stdio.h>
int main(){
    FILE *fp1, *fp2;
    fp1=fopen("file.c", "w");
    fp2=fopen("file.c", "w");
    fputc('A', fp1);
    fputc('B', fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}

//Ques_253
#include<stdio.h>
int main(){
    FILE *fs, *ft;
    char c[10];
    fs=fopen("source.txt", "r");
    c[0]=getc(fs);
    fseek(fs, 0, SEEK_END);
    fseek(fs, -3L, SEEK_CUR);
    fgets(c, 5, fs);
    puts(c);
    return 0;
}

//Ques_255
#include<stdio.h>
int main(){
    FILE *ptr;
    char i;
    ptr=fopen("myfile.c", "r");
    while((i=fgetc(ptr))!=NULL)
    printf("%c", i);
    return 0;
}
//Can't do comparison between pointer and integer

//Ques_257
#include<stdio.h>
#include<stdlib.h>
int main(){
    unsigned char;
    FILE *fp;
    fp=fopen("trial", "r");
    if(!fp){
        printf("Unable to open a file");
        exit(1);
    }
    fclose(fp);
    return 0;
}

//Ques_258
#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("myfile.c", "r");
    fseek(fp, "20", SEEK_SET);
    fclose(fp);
    return 0;
}

//Ques_259
#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("c:\tc\file.c", "r");
    if(!fp)
    printf("Unable to open file");
    fclose(fp);
    return 0;
}

//Ques_285
#include<stdio.h>
int main(){
    printf("%x\n", -1>>1);
    return 0;
}

//Ques_286
#include<stdio.h>
int main(){
    printf("%d>>%d %d>>%d\n", 4>>1, 8>>1);
    return 0;
}

//Ques_287
#include<stdio.h>
int main(){
    char c=48;
    int i, mask=01;
    for(i=1; i<=5; i++)
    mask=mask<<1;
    return 0;
}

//Ques_288
#define P printf("%d\n", -1^~0);
#define M(P) int main()\
{\
P\
return 0;\
}
M(P)

//Ques_289
#include<stdio.h>
int main(){
    int i=32, j=0x20, k, l, m;
    k=i|j;
    l=i&j;
    m=k^l;
    printf("%d\n", j);
    printf("%d, %d, %d, %d, %d\n", i,j,k,l,m);
    return 0;
}
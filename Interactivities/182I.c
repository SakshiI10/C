#include<stdio.h>
int main(){
    char *names[]={"Suresh", "Siva", "Sona", "Baija", "Ritu"};
    int i;
    char *t;
    t=names[3];
    names[3]=names[4];
    names[4]=t;
    for(i=0; i<=4; i++)
    printf("%s", names[i]);
    return 0;
}
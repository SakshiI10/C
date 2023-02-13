#include<stdio.h>
int main(){
    int i=0,k;
    if(i==0)
        goto label;
        for(k=0; k<3; k++)
        {
            printf("Hi\n");
            label: k=printf("%03d",i);
        }
}
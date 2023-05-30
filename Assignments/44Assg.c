//Print 1 to 50 and also calculate their sum.
#include<stdio.h>
int main(){
    int i=0, sum=0;
    while(i<=50){
        sum=sum+i;
        printf("%d, ", i);
        i++;
    }
    printf("Sum: %d", sum);
    return 0;
}
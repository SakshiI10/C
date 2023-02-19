#include<stdio.h>
typedef struct error {int warning, err, exception;}ERROR;
int main(){
    ERROR e;
    e.err=1;
    printf("%d\n", e.err);
    return 0;
}
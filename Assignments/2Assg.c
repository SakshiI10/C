// Write 2 programs using 2 technique to swap 2 numbers.

#include <stdio.h>
// int main(){
//     int a, b, c;
//     printf("Enter a number=");
//     scanf("%d",&a);
//     printf("Enter sec number=");
//     scanf("%d",&b);
//     c=b;
//     b=a;
//     a=c;
//     printf("After swapping a and b are: %d %d",c, b);
//     return 0;
// }

int main()
{
    int a, b, c;
    printf("Enter a number = ");
    scanf("%d", &a);
    printf("Enter sec number = ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping a and b are: %d %d", a, b);
    return 0;
}
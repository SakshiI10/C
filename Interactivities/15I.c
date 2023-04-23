//Ques_161
#include<stdio.h>
int main(){
    int arr[2];
    arr[3]=10;
    printf("%d", arr[3]);
    return 0;
}

//Ques_164
/* #include<stdio.h>
int main(){
    int a[5]={5, 1, 15,20, 25};
    int i, j, m, n;
    i=++a[1];
    j=a[1]++;
    m=a[i++];
    n=a[4];
    printf("%d, %d, %d, %d", i, j, m, n);
    return 0;
} */

//Ques_165
/* #include<stdio.h>
int main(){
    static int a[2][2]={1, 2, 3, 4};
    int i, j;
    static int*p[]={(int*)a, (int*)a+1, (int*)a+2};
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d, %d, %d, %d\n", *(*(p+i)+j), *(*(j+p)+i), *(*(i+p)+j), *(*(p+j)+i));
        }
    }
    return 0;
} */

//Ques_166
/* #include <stdio.h>
int main()
{
    void fun(int, int[]);
    int arr[] = {1, 2, 3, 4};
    int i;
    fun(4, arr);
    for (i=0; i<4; i++)
        printf("%d,", arr[i]);
    return 0;
}
void fun(int n, int arr[])
{
    int *p=0;
    int i=0;
    while(i++<n)
        p=&arr[i];
    *p=0;
} */


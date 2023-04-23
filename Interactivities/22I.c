//Ques_291
#include<stdio.h>
int main(){
    int i=4, j=8;
    printf("%d, %d, %d\n", i|j&j|i, i|j&&j|i, i^j);
    return 0;
}

//Ques_293
#/* include<stdio.h>
int main(){
    unsigned int m=32;
    printf("%x\n", ~m);
    return 0;
} */

//Ques_295
/* #include<stdio.h>
int main(){
    unsigned int a=0xffff;
    ~a;
    printf("%x\n", a);
    return 0;
} */

//Ques_296
/* #include<stdio.h>
int main(){
    unsigned char i=0x80;
    printf("%x\n", i<<1);
    return 0;
} */

//Ques_301
/* #include<stdio.h>
int main(){
    enum color{red, green, blue};
    typedef enum color mycolor;
    mycolor m=red;
    printf("%d", m);
    return 0;
} */

//Ques_302
/* #include<stdio.h>
int main(){
    typedef int arr[5];
    arr iarr={1,2,3,4,5};
    int i;
    for(i=0; i<4; i++)
    printf("%d", iarr[i]);
    return 0;
} */

//Ques_303
/* #include<stdio.h>
int main(){
    typedef int LONG;
    LONG a=4;
    LONG b=68;
    float c=0;
    c=b;
    b+=a;
    printf("%d,",b);
    printf("%f,",c);
    return 0;
} */

//Ques_304
/* #include<stdio.h>
typedef struct error {int warning, err, exception;}ERROR;
int main(){
    ERROR e;
    e.err=1;
    printf("%d\n", e.err);
    return 0;
} */

//Ques_306
/* #include<stdio.h>
int main(){
    union a{
        int i;
        char ch[2];
    };
    union a u;
    u.ch[0]=3;
    u.ch[1]=2;
    printf("%d, %d, %d\n", u.ch[0], u.ch[1], u.i);
    return 0;
} */

//Ques_307
#include<stdio.h>
int main(){
    union var{
        int a, b;
    };
    union var v;
    v.a=10;
    v.b=20;
    printf("%d\n", v.a);
    return 0;
}

//Ques_308
#include<stdio.h>
int main(){
    struct value{
        int bit1:1;
        int bit2:2;
        int bit3:3;
    }bit;
    printf("%d\n", sizeof(bit));
    return 0;
}

//Ques_309
#include<stdio.h>
int main(){
    enum days{MON=-1, TUE, WED=6, THU, FRI, SAT};
    printf("%d, %d, %d, %d, %d, %d\n", MON, TUE, WED, THU, FRI, SAT);
    return 0;
}
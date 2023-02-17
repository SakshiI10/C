#include<stdio.h>
struct temp{
    int a;
}s;

void func(struct temp){
    s.a=10;
    printf("%d\t", s.a);s
}

void main(){
    func(s);
    printf("%d\t", s.a);
}
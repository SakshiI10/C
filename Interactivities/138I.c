#include<stdio.h>
const char *fun();

int main(){
    *fun()='A';
    return 0;
}
const char*fun(){
    return "Hello";
}
#include<stdio.h>
union employee{
    char name[15];
    int age;
    float salary;
};
const union employee e1;

int main(){
    strcpy(e1.name, "K");
    printf("%s", e1.name);
    e1.age=85;
    printf("%d", e1.age);
    printf("%f", e1.salary);
    return 0;
}
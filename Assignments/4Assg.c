//Write a program to input marks of 5 subjects of a student and calculate total, average and percentage of all subjects.

#include<stdio.h>
int main(){
    int s1, s2, s3, s4, s5, tot, avg, per;
    printf("Enter marks of subject 1: ");
    scanf("%d", &s1);
    printf("Enter marks of subject 2: ");
    scanf("%d", &s2);
    printf("Enter marks of subject 3: ");
    scanf("%d", &s3);
    printf("Enter marks of subject 4: ");
    scanf("%d", &s4);
    printf("Enter marks of subject 5: ");
    scanf("%d", &s5);

    tot = s1+s2+s3+s4+s5;
    printf("TOTAL: %d\n",tot);

    avg = tot/5;
    printf("AVERAGE: %d\n", avg);

    per = avg*10;
    printf("PERCENTAGE: %d\n",per);

    return 0;
}
//Write a C program to check whether a character is VOWEL or CONSONENT using switch?
#include<stdio.h>
int main(){
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel");
        break;
    
    default:
        printf("Consonent");
        break;
    }
    return 0;
}
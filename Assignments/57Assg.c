//Count vowels in a string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    int i, vowel=0;

    printf("Enter string: ");
    gets(str);
    
    for(i=0; i<=strlen(str); i++){
        if(str[i] == 'A' || str[i] =='E' || str[i] =='I' || str[i] =='O' || str[i] =='U' || str[i] =='a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u')
        vowel++;
    }
    printf("Vowels: %d", vowel);
    return 0;
}
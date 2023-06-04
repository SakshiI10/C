//Print alternate characters in upper case.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[30];
    int i;
    printf("Enter String : ");
    gets(str);

    for(i = 0; i <= strlen(str); i++)
    {
        if( (i % 2) == 0)
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }
    printf("%s", str);
    return 0;
}
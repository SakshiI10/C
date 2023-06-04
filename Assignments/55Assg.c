// Input a string and check for palindrome.

#include <stdio.h>
#include <string.h>

int main()
{
    char string[60];
    int i, length, flag = 0;

    printf("Enter a string upto 40 character: ");
    scanf("%s", string);

    length = strlen(string);

    for (i = 0; i <= length; i++)
    {
        if (string[i] != string[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag==1)
    {
        printf("%s is not a palindrome", string);
    }
    else
    {
        printf("%s is a palindrome", string);
    }
    return 0;
}
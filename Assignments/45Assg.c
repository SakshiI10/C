// Print 1 to 100 and change line after each 10 numbers.
#include <stdio.h>
int main()
{
    int i = 1;
    while (i < 101)
    {
        printf("%d ", i);
        if (i % 10 == 0)
        {
            printf("\n");
        }
        i++;
    }
    return 0;
}
// Write a Program to find the current time using predefined macros?

#include <stdio.h>
#include <stdlib.h>
int main()
{
     printf("Current Date: %s\n",__DATE__);
     printf("Current Time: %s\n",__TIME__);
     return 0;
}
#include <stdio.h>

int main(void)
{
    char mystring[100];
    printf("Enter a string: ");
    fflush(stdout);
    gets(mystring);
    int i = 0;

    while (mystring[i] != 0)
    {
        i++;
    }
    printf("Length of string: %d", i);
}
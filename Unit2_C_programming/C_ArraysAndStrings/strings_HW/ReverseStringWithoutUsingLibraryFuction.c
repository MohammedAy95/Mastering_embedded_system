#include <stdio.h>
#include <string.h>

int main(void)
{
    char mystring[100];
    printf("Enter a string: ");
    fflush(stdout);
    gets(mystring);

    char reverse_string[strlen(mystring)];
    for (int i = strlen(mystring) - 1; i >= 0; i--)
    {
        reverse_string[(strlen(mystring) - 1) - i] = mystring[i];
    }

    printf("Reverse string is: %s", reverse_string);
}
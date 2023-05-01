#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);

    for (int i = 65; i <= 90; i++)
    {
        if ( toupper(x) == i)
        {
            printf("%c is an alphabet\n", x);
            return 0;
        }
    }
    printf("%c is not an alphabet\n", x);
}
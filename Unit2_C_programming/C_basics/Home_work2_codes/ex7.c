#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    int f = 1;

    if (x < 0)
    {
        printf("Error!!! Factorial of negative numer doesn't exist\n");
        return 1;
    }

    for (int i = x; i > 0; i--)
    {
        f = f * i;
    }
    printf("Factorial = %d\n", f);
}
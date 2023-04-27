#include <stdio.h>

int main(void)
{
    float x;
    printf("Enter a number: ");
    scanf("%f", &x);

    if (x > 0)
    {
        printf("%.2f is positive\n", x);
    }
    else if (x == 0)
    {
        printf("You entered zero\n");
    }
    else
    {
        printf("%.2f is negative\n", x);
    }
}
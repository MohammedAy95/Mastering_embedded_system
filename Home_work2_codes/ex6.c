#include <stdio.h>

int main(void)
{
    int x;
    printf("ُEnter an integer: ");
    scanf("%d", &x);
    int sum = 0;

    for (int i = 0; i <= x; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);
}
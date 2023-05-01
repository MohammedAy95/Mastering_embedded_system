#include <stdio.h>

int main(void)
{
    int x;
    int y;
    printf("Enter two integers: ");
    scanf("%d", &x);
    scanf("%d", &y);

    int Sum = x + y;
    printf("Sum: %d\n", Sum);
}
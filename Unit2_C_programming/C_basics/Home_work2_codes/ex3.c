#include <stdio.h>

int main(void)
{
    float x;
    float y;
    float z;
    printf("Enter three numbers: ");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    float max = x;

    if (y > max)
    {
        max = y;
    }
    if (z > max)
    {
        max = z;
    }

    printf("Largest number = %.3f\n", max);
}
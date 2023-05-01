#include <stdio.h>

int main(void)
{
    char x;
    printf("Enter operator either + or - or * or /:- ");
    scanf("%c", &x);
    float y;
    float z;
    printf("Enter two operands: ");
    scanf("%f", &y);
    scanf("%f", &z);

    if (x == '+')
    {
        printf("%.2f + %.2f = %.2f\n", y, z, y + z);
    }
    else if (x == '-')
    {
        printf("%.2f - %.2f = %.2f\n", y, z, y - z);
    }
    else if (x == '*')
    {
        printf("%.2f * %.2f = %.2f\n", y, z, y * z);
    }
    else if (x == '/')
    {
        printf("%.2f / %.2f = %.2f\n", y, z, y / z);
    }
}
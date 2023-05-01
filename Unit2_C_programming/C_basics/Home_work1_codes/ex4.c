#include <stdio.h>

int main(void)
{
    float x;
    float y;
    printf("Enter two numbers: ");
    scanf("%f", &x);
    scanf("%f", &y);

    float product = x * y;

    printf("Product: %f\n", product);
}
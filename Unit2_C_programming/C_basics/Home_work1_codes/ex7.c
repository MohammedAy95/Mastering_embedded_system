#include <stdio.h>

int main(void)
{
    float a;
    float b;
    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);

    float L[] = {a,b};
    a = L[1];
    b = L[0];


    printf("After swapping, value of a = %.2f\n", a);
    printf("After swapping, value of b = %.2f\n", b);

}
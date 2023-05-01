#include <stdio.h>

int main(void)
{
    float a;
    float b;
    printf("Enter value of a: ");
    fflush(stdout);
    scanf("%f", &a);
    printf("Enter value of b: ");
    //fflush(stdout);
    scanf("%f", &b);

    float temb = a;
    a = b;
    b = temb;


    printf("After swapping, value of a = %.2f\n", a);
    printf("After swapping, value of b = %.2f\n", b);

}

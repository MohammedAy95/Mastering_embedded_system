#include <stdio.h>
#include <string.h>
struct SComplex
{
    float real;
    float imaginary;
};
void AddComplex(float real1, float real2, float imaginary1, float imaginary2)
{
    float sum_real = real1 + real2;
    float sum_imag = imaginary1 + imaginary2;

    printf("sum = %.2f + %.2f i", sum_real, sum_imag);
}
void main()
{
    struct SComplex x;
    struct SComplex y;
    printf("For 1st complex number:\n");
    printf("Enter real & imaginary respectively: ");
    scanf("%f %f", &x.real, &x.imaginary);
    printf("For 2nd complex number:\n");
    printf("Enter real & imaginary respectively: ");
    scanf("%f %f", &y.real, &y.imaginary);
    AddComplex(x.real,y.real,x.imaginary,y.imaginary);
}

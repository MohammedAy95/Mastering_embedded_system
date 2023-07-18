#include <stdio.h>

#define Pi 3.14
#define area(R) (Pi*R*R)

int main()
{
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = area(radius);
    printf("Area = %.2f", area);
}
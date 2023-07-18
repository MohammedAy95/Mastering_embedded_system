#include <stdio.h>
#include <string.h>

struct SPosition
{
    int feet;
    float inch;
};

void Sum_distance(int position1, int position2, float position11, float position22 )
{
    int feet_sum = position1 + position2;
    float inch_sum = position11 + position22;
    if (inch_sum >= 12)
    {
        feet_sum++;
        inch_sum -= 12;
    }
    printf("Sum of distances= %d'-%.2f\"", feet_sum, inch_sum);
}

void main()
{
    struct SPosition x;
    struct SPosition y;
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &x.feet);
    printf("Enter inch: ");
    scanf("%f", &x.inch);

    printf("Enter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &y.feet);
    printf("Enter inch: ");
    scanf("%f", &y.inch);

    Sum_distance(x.feet, y.feet, x.inch, y.inch);

}
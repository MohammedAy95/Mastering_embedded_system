#include <stdio.h>

int power(int x, int y, int z);
int main()
{
    int x;
    int y;
    int z = 1;
    printf("Enter base number: ");
    scanf("%d", &x);
    printf("Enter power number(positive integer): ");
    scanf("%d", &y);
    int l = power(x, y, z);
    printf("%d^%d = %d\n", x, y, l);


}
int power(int x, int y, int z)
{

    if (y > 0)
    {
        z *= x;
        y--;
        power(x, y, z);
        if (y == 0)
        {
            return z;
        }
    }
    
}
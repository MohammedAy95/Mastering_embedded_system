#include <stdio.h>

int fact(int x, int y);
int main()
{
    int x;
    int y = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &x);
    int z = fact(x, y);
    printf("Factorial of %d = ", x);
    printf("%d\n", z);
    
}
int fact(int x, int y)
{    
    if (x > 1)
    {
        y = y * x;
        x -= 1;
        fact(x, y);
        if (x == 1)
        {
            return y;
        }
        
    }
}

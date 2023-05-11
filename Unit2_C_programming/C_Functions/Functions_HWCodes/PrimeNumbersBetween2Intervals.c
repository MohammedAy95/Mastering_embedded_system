#include <stdio.h>

int prime(int x, int y);
int main()
{
    int x;
    int y;
    printf("Enter Two numbers(intervals): ");
    scanf("%d %d", &x, &y);
    prime(x, y);
}

int prime(int x, int y)
{
    
    int i;
    printf("prime numbers between %d and %d are: ", x, y);
    for (i = x + 1; i < y; i++)
    {
        int j;
        int count = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j != 0)
            {
                count += 1;
            }
        }
        if (count == i - 2)
        {
            printf("%d ", i);
        }
    }
}
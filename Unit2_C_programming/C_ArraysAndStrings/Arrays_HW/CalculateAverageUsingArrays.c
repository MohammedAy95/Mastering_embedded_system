#include <stdio.h>

int main(void)
{
    int numberOfData;
    float data[numberOfData];
    float sum = 0;
    float Average;
    printf("Enter the numbers of data: ");
    scanf("%d", &numberOfData);

    for (int i = 0; i < numberOfData; i++)
    {
        printf("Enter number: ");
        scanf("%f", &data[i]);
        sum += data[i];
    }
    Average = sum / numberOfData;
    printf("Average = %.2f", Average);
}
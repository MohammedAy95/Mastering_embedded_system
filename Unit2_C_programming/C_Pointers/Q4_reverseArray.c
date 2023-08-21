#include <stdio.h>
#include <string.h>


int main()
{
    int arr[15];
    int *ptr;
    ptr = arr;
    printf("Input 5 number of elements in the array: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("element - %d: ", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    printf("The elements of array in reverse order are: \n");
    for (int j = 5; j > 0; j--)
    {
        ptr--;
        printf("element - %d: %d\n", j, *ptr);
        
    }

}




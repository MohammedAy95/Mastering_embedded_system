#include <stdio.h>

int main(void)
{
    int no_elements; 
    printf("Enter number of elements: ");
    fflush(stdout);
    scanf("%d", &no_elements);
    int myarray[no_elements];
    for (int i = 0; i < no_elements; i++)
    {
        scanf("%d", &myarray[i]);
    }

    int searched_element;
    printf("Enter element to be searched: ");
    scanf("%d", &searched_element);

    for (int i = 0; i < no_elements; i++)
    {
        if (myarray[i] == searched_element)
        {
            printf("Number found at the location: %d", i+1);
        }
    }
}
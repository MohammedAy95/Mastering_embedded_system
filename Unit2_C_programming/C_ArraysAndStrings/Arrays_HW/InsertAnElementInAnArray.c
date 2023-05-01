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

    int new_element; 
    printf("Enter the element to be inserted: ");
    fflush(stdout);
    scanf("%d", &new_element);
    int no_new_elements = no_elements + 1;
    int new_element_location; 
    printf("Enter the location: ");
    fflush(stdout);
    scanf("%d", &new_element_location);
    int my_new_array[no_new_elements];
    my_new_array[new_element_location] = new_element;
    for (int i = 0; i < new_element_location; i++)
    {
        my_new_array[i] = myarray[i];
    }
    for (int i = new_element_location; i < no_elements; i++)
    {
        my_new_array[i + 1] = myarray[i];
    }

    for (int i = 0; i < no_new_elements; i++)
    {
        printf("%d ", my_new_array[i]);
    }
}
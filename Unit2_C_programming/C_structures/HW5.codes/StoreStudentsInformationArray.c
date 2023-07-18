#include <stdio.h>
#include <string.h>

struct SStudent
{
    char S_name[100];
    float S_marks;
};

void main()
{
    struct SStudent x[10];
    printf("Enter information of students:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("For roll number %d\n", i+1);
        printf("Enter name: ");
        scanf(" %99[^\n]", &x[i].S_name);
        printf("Enter marks: ");
        scanf("%f",&x[i].S_marks);
    }
    
    printf("Displaying information\n");
    for (int j = 0; j < 10; j++)
    {
        printf("Information for roll number %d: \n", j+1);
        printf("name: %s\nMarks: %.2f\n",x[j].S_name,x[j].S_marks);
    }
    
    
}
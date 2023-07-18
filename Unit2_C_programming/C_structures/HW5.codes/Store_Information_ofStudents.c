#include <stdio.h>
#include <string.h>

struct SStudent
{
    char S_name[100];
    int S_rollNumber;
    float S_marks;
};

void main()
{
    struct SStudent x;
    printf("Enter information of students:\n");
    printf("Enter name: ");
    gets(x.S_name);
    printf("Enter roll number: ");
    scanf("%d", &x.S_rollNumber);
    printf("Enter marks: ");
    scanf("%f",&x.S_marks);

    printf("Displaying information\n");
    printf("name: %s\nRoll: %d\nMarks: %.2f",x.S_name,x.S_rollNumber,x.S_marks);
    
}


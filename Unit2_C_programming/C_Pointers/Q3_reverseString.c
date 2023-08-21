#include <stdio.h>
#include <string.h>


int main()
{
    char TestData[100];
    printf("Input a string: ");
    gets(TestData);
    char *ptr;
    ptr = TestData + strlen(TestData) - 1;
    printf("Reverse of the string is: ");
    for(int i = 0; i < strlen(TestData); i++)
    {
        printf("%c", *ptr);
        ptr--;
    }
}




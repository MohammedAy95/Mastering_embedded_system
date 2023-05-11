#include <stdio.h>
#include <string.h>

void reverse(int x, char text1[]);
int main()
{
    
    char text[100];
    printf("Enter a sentence: ");
    gets(text);
    int x = 0;
    reverse(x, text);
    printf("%c", text[0]);
    
    
}

void reverse(int x, char text1[])
{
    // int x = 0;
    if (x < strlen(text1))
    {
        // printf("%c", text1[x]);
        x += 1;
        reverse(x, text1);
    }
    printf("%c", text1[x]);
    
}
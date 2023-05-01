#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[100];
    char test;

    printf("Enter a string: ");
    fflush(stdout);
    gets(sentence);

    printf("Enter a character to find frequency: ");
    fflush(stdout);
    scanf("%c", &test);

    int freq = 0;

    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == test)
        {
            freq += 1;
        }
    }
    printf("Frequency of %c = %d\n", test, freq);
}

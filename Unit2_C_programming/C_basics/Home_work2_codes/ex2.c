#include <stdio.h>

int main(void)
{
    char Z[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char x;
    printf("Enter an alphabet: ");
    scanf("%c", &x);
    int count = 0;


    for (int i = 0; i < 10; i++)
    {
        if (x == Z[i])
        {
            printf("%c is a vowel\n", x);
            return 0;
        }
    }

    printf("%c is a constant\n", x);

}
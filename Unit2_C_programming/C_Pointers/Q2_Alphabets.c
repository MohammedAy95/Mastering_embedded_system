#include <stdio.h>



int main()
{
    char alpha[26];
    int x;
    char *ptr;
    ptr = alpha;
    for (x = 0; x < 26; x++)
    {
        *ptr = x + 'A';
        printf("%c ", *ptr);
        ptr++;
    } 
}




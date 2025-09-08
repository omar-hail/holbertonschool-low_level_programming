#include <stdio.h>
#include "holberton.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i, j;
    int found;

    for (i = 0; s[i] != '\0'; i++)
    {
        found = 0;
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
            break;
        count++;
    }

    return count;
}

int main(void)
{
    char s[] = "abcde12345";
    char accept[] = "abcde";

    unsigned int result = _strspn(s, accept);

    printf("Number of bytes in initial segment: %u\n", result);

    return 0;
}

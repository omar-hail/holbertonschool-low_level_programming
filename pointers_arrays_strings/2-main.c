#include <stdio.h>
#include "holberton.h"

char *_strchr(char *s, char c)
{
    int a = 0, b;

    while (s[a])
    {
        a++;
    }

    for (b = 0; b <= a; b++)
    {
        if (c == s[b])
        {
            s += b;
            return (s);
        }
    }

    return (NULL);
}

int main(void)
{
    char str[] = "Hello, World!";
    char c = 'W';
    char *result;

    result = _strchr(str, c);

    if (result != NULL)
        printf("Character '%c' found at: %s\n", c, result);
    else
        printf("Character '%c' not found.\n", c);

    return 0;
}

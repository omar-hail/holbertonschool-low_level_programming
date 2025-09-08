#include <stdio.h>
#include "holberton.h"

char *_strpbrk(char *s, char *accept)
{
    int a = 0, b;

    while (s[a])
    {
        b = 0;

        while (accept[b])
        {
            if (s[a] == accept[b])
            {
                s += a;
                return (s);
            }

            b++;
        }

        a++;
    }

    return (NULL);
}

int main(void)
{
    char str[] = "hello, world";
    char accept[] = "ow";

    char *result = _strpbrk(str, accept);

    if (result != NULL)
        printf("First accepted character found at: %s\n", result);
    else
        printf("No accepted characters found.\n");

    return 0;
}

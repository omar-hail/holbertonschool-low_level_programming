#include <stdio.h>
#include "holberton.h"

char *_strstr(char *haystack, char *needle)
{
    int a = 0, b = 0;

    while (haystack[a])
    {
        b = 0;
        while (needle[b])
        {
            if (haystack[a + b] != needle[b])
            {
                break;
            }
            b++;
        }

        if (needle[b] == '\0')
        {
            return (haystack + a);
        }

        a++;
    }

    return (NULL);
}

int main(void)
{
    char haystack[] = "Holberton School is awesome!";
    char needle[] = "School";

    char *result = _strstr(haystack, needle);

    if (result != NULL)
        printf("Substring found at: %s\n", result);
    else
        printf("Substring not found.\n");

    return 0;
}

#include <stdio.h>
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int a;

    for (a = 0; a < n; a++)
    {
        dest[a] = src[a];
    }

    return (dest);
}

int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];

    printf("قبل النسخ: dest = \"%s\"\n", dest);

    _memcpy(dest, src, 13);

    printf("بعد النسخ: dest = \"%s\"\n", dest);

    return 0;
}

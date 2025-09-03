#include <stdio.h>
#include "main.h"

int main(void)
{
    char dest[100] = "Hello, ";
    char src[] = "World!";
    int n = 3;

    printf("Before _strncat:\n");
    printf("dest = \"%s\"\n", dest);
    printf("src = \"%s\"\n", src);

    _strncat(dest, src, n);

    printf("After _strncat (concatenate %d chars):\n", n);
    printf("dest = \"%s\"\n", dest);

    return 0;
}

#include <stdio.h>
#include "main.h"

int main(void)
{
    char dest[15] = "HelloWorld";
    char src[] = "ABC";
    int n = 5;

    printf("Before _strncpy:\n");
    printf("dest = \"%s\"\n", dest);
    printf("src = \"%s\"\n", src);

    _strncpy(dest, src, n);

    printf("After _strncpy (copy %d chars):\n", n);
    printf("dest = \"%s\"\n", dest);

    return 0;
}

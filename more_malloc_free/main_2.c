#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int size = 10;
    char *ptr;
    int i;

    ptr = malloc_checked(size * sizeof(char));
    if (ptr == NULL)
    {
        printf("Allocation failed\n");
        return (1);
    }

    for (i = 0; i < (int)size; i++)
        ptr[i] = 'A';

    for (i = 0; i < (int)size; i++)
        putchar(ptr[i]);

    putchar('\n');

    free(ptr);
    return (0);
}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Test the str_concat function
 *
 * Return: 0 on success
 */
int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "Holberton!";
    char *result;

    result = str_concat(s1, s2);

    if (result == NULL)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }

    printf("Concatenated String: %s\n", result);

    free(result); /* Always free allocated memory */
    return (0);
}

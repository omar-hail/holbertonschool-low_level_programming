#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Test the _strdup function
 *
 * Return: 0 on success, 1 on failure
 */
int main(void)
{
    char *original = "Holberton School";
    char *copy = _strdup(original);

    if (copy == NULL)
    {
        printf("Failed to duplicate string.\n");
        return (1);
    }

    printf("Original: %s\n", original);
    printf("Copy    : %s\n", copy);

    free(copy); /* Always free dynamically allocated memory */
    return (0);
}

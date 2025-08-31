#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c1 = 'A';
    char c2 = 'z';

    printf("%c: %d\n", c1, _isupper(c1));
    printf("%c: %d\n", c2, _isupper(c2));

    return (0);
}

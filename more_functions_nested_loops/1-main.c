#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char a = '5';
    char b = 'x';

    printf("%c: %d\n", a, _isdigit(a));
    printf("%c: %d\n", b, _isdigit(b));

    return (0);
}

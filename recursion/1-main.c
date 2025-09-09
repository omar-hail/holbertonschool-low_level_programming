#include "holberton.h"
#include <stdio.h>

int _putchar(char c)
{
    return putchar(c);
}

void _print_rev_recursion(char *s)
{
    if (*s == '\0')
    {
        return;
    }

    s++;
    _print_rev_recursion(s);
    s--;
    _putchar(*s);
}

int main(void)
{
    _print_rev_recursion("Holberton");
    _putchar('\n');
    return 0;
}

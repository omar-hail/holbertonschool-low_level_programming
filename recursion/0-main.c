#include "holberton.h"
#include <stdio.h>

int _putchar(char c)
{
    return putchar(c);
}

void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }

    _putchar(*s);
    _puts_recursion(s + 1);
}

int main(void)
{
    _puts_recursion("Holberton School");
    return (0);
}

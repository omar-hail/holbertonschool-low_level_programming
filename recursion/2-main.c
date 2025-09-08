#include "holberton.h"
#include <stdio.h>

int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + _strlen_recursion(s + 1);
}

int main(void)
{
    char str[] = "Holberton";
    int len = _strlen_recursion(str);

    printf("%d\n", len);
    return 0;
}

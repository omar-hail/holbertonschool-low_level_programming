#include "holberton.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = _pow_recursion(2, 3);
    printf("%d\n", r);

    r = _pow_recursion(5, 0);
    printf("%d\n", r);

    r = _pow_recursion(2, -1);
    printf("%d\n", r);

    return (0);
}

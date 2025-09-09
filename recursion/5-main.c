#include "holberton.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = _sqrt_recursion(4);
    printf("%d\n", r);

    r = _sqrt_recursion(16);
    printf("%d\n", r);

    r = _sqrt_recursion(1);
    printf("%d\n", r);

    r = _sqrt_recursion(10);
    printf("%d\n", r);

    r = _sqrt_recursion(-1);
    printf("%d\n", r);

    return (0);
}

#include <stdio.h>
#include "holberton.h"

int main(void)
{
    char buffer[20] = "Hello, World!";
    char *result;

    printf("قبل memset: %s\n", buffer);

    result = _memset(buffer, '*', 5);

    printf("بعد memset: %s\n", result);

    return 0;
}

#include "main.h"
#include <stdio.h>

int main(void)
{
    char n1[] = "12345678901234567890";
    char n2[] = "98765432109876543210";
    char result[50];

    if (infinite_add(n1, n2, result, sizeof(result)) != 0)
        printf("%s + %s = %s\n", n1, n2, result);
    else
        printf("Error: result buffer too small\n");

    return (0);
}

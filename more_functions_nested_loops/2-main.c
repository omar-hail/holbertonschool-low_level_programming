#include <stdio.h>
#include "main.h"

int main(void)
{
    int x = 5;
    int y = 3;

    printf("%d * %d = %d\n", x, y, mul(x, y));

    return 0;
}

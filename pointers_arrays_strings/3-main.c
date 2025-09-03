#include "main.h"
#include <stdio.h>

int main(void)
{
    char *s1 = "I";
    char *s2 = "am";
    char *s3 = "Batman";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s3));
    printf("%d\n", _strcmp(s3, s1));

    return (0);
}

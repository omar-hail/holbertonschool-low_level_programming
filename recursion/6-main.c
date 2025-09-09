#include "holberton.h"
#include <stdio.h>

int main(void)
{
    printf("%d\n", is_prime_number(1));   // 0
    printf("%d\n", is_prime_number(2));   // 1
    printf("%d\n", is_prime_number(3));   // 1
    printf("%d\n", is_prime_number(4));   // 0
    printf("%d\n", is_prime_number(17));  // 1
    printf("%d\n", is_prime_number(18));  // 0
    printf("%d\n", is_prime_number(19));  // 1
    return (0);
}

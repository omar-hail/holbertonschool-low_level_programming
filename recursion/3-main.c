#include "holberton.h"
#include <stdio.h>

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}

int main(void)
{
	int num = 5;
	int result = factorial(num);

	printf("%d\n", result);

	return (0);
}

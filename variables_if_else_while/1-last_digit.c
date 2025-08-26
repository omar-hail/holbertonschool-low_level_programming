#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}

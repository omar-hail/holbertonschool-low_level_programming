#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the last digit of the number stored in n
 * and checks whether it is greater than 5, equal to 0,
 * or less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	n = 98; /* Change this to -98 or 980 to test other values */
	last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}

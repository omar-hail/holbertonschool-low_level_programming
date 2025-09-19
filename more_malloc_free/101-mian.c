#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_error - Prints error and exits with status 98
 */
void print_error(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * is_digit_string - Checks if a string contains only digits
 * @s: The string to check
 * Return: 1 if valid, 0 if not
 */
int is_digit_string(char *s)
{
    int i = 0;

    if (!s || s[0] == '\0')
        return (0);

    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

/**
 * multiply - Multiplies two strings of digits
 * @num1: First number as string
 * @num2: Second number as string
 * Return: Result string (must be freed)
 */
char *multiply(char *num1, char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int *result = calloc(len1 + len2, sizeof(int));
    char *str_result;
    int i, j, sum, carry, pos = 0, start = 0;

    if (!result)
        return (NULL);

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int p1 = i + j;
            int p2 = i + j + 1;
            sum = mul + result[p2];

            result[p2] = sum % 10;
            result[p1] += sum / 10;
        }
    }

    // Skip leading zeros
    while (pos < len1 + len2 && result[pos] == 0)
        pos++;

    if (pos == len1 + len2) // All zeros
    {
        str_result = malloc(2);
        if (!str_result)
        {
            free(result);
            return (NULL);
        }
        str_result[0] = '0';
        str_result[1] = '\0';
    }
    else
    {
        str_result = malloc(len1 + len2 - pos + 1);
        if (!str_result)
        {
            free(result);
            return (NULL);
        }

        while (pos < len1 + len2)
            str_result[start++] = result[pos++] + '0';
        str_result[start] = '\0';
    }

    free(result);
    return (str_result);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    char *result;

    if (argc != 3)
        print_error();

    if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
        print_error();

    result = multiply(argv[1], argv[2]);
    if (!result)
        print_error();

    printf("%s\n", result);
    free(result);
    return (0);
}


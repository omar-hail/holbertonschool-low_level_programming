#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - Struct to match format specifiers with print functions
 * @symbol: Pointer to the format specifier (e.g., "c", "i", "f", "s")
 * @print: Pointer to function that handles printing for that specifier
 *
 * Description: Used in print_all to map format specifiers to their
 * corresponding print handler functions.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */


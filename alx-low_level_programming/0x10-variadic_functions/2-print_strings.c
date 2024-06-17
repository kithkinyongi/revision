#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings with a separator
 * @separator: separator btn strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		if ((i + 1) == n)
			printf("%s", va_arg(strings, char *));
		else
			printf("%s%s", va_arg(strings, char *), separator);
	}
	va_end(strings);
}

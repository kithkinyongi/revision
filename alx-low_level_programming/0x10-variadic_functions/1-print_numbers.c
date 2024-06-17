#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers with a separator
 * @n: number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if ((n + 1) != n)
			printf("%d%s", va_arg(numbers, int),separator);
		else
			printf("%d", va_arg(numbers, int));
	}
	va_end(numbers);
}

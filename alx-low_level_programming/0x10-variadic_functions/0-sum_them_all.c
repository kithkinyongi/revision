#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all the arguments passed
 * @n: number of arguments passed
 *
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list sum_args;

	sum = 0;
	va_start(sum_args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sum_args, int);
	return (sum);
}

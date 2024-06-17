#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints all arguments passed with their respective format specifiers
 * @format: format specifiers for each corresponding character
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;

	va_start(args, format);
	i = 0;
	while(format[i] != '\0')
	{
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		else if(format[i] == 'i')
			printf("%d", va_arg(args, int));
		else if(format[i] == 'f')
			printf("%f", va_arg(args, double));
		else
			printf("%s", va_arg(args, char *));
	}
	va_end(args);
}

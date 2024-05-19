#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints a numbers from starting to 98
 * @n: starting point
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; n <= 98; i++)
		{
			if (n != 98)
				printf("%d, ",n);
			else
				printf("%d", n);
			n++;
			if (n == 98)
				break;
		}
		_putchar('\n');
	}
	else
	{
		for (i = n; n >= 98; i++)
		{
			if (n != 98)
				printf("%d, ",n);
			else
				printf("%d", n);
			n++;
			if (n == 98)
				break;
		}
		_putchar('\n');
	}
}

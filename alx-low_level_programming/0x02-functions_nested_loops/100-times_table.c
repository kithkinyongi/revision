#include "main.h"
/**
 * print_times_table - prints times table starting with 0
 * @n: number of times tables
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (k > 100)
			{
				_putchar(k / 100 + '0');
				_putchar((k / 100) / 10 + '0');
				_putchar(((k / 100) / 10) % 10 + '0');
			}
			else if (k > 10)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
				_putchar(k + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_last_digit - prints the last digit of a no
 * @n: number to be checked
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else
	{
		n = -n;
		_putchar(n % 10 + '0');
		return (n % 10);
	}
}

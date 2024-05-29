#include "main.h"
/**
 * print_line - prints a straight line on the terminal
 * @n: number of times the character to be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}

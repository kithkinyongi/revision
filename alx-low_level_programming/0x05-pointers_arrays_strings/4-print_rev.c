#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i;
	int stringlen;
	char store;

	stringlen = _strlen(s);
	for (i = 0; i < (stringlen / 2); i++)
	{
		store = s[i];
		s[i] = s[stringlen - 1 - i];
		s[stringlen - 1 - i] = store;
		_putchar(s[i]);
	}
}

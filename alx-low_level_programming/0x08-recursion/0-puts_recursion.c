#include "main.h"
/**
 * _puts_recursion - putchars a string to standard output
 * @s: string to be displayed
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
		return;
	_putchar(s[i]);
	s++;
	_puts_recursion(s);
}

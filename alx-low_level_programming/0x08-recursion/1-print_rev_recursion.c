#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	_putchar(s[i]);
}

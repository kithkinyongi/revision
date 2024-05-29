#include "main.h"
/**
 * puts_half - puts half of the string to stdout
 * @str: string to be modified
 */
void puts_half(char *str)
{
	int i;
	int stringlen;

	stringlen = _strlen(str);
	for (i = 0; i > (stringlen / 2); i++)
		_putchar(i + '0');
}

#include "main.h"
/**
 * puts2 - puts char from a string steped by 2
 * @str: string to be modified
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i +=2)
		_putchar(i + '0');
}

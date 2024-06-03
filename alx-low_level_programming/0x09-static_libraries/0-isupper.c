#include "main.h"
/**
 * _isupper - checks if a char is upper cased
 * @c: character to be checked
 *
 * Return: 1 (is upper), 0 (not upper)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

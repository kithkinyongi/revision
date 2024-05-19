#include "main.h"
/**
 * _islower - checks for lower char
 * @c: character to be checked
 *
 * Return: 1 - c is lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

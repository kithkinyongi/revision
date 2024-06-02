#include "main.h"
/**
 * _memset - sets a certain part of memory with a specific buffer
 * @s: location in memory
 * @b: character to be set
 * @n: number of buffer in string s
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

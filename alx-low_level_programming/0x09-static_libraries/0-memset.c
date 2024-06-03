#include "main.h"
/**
 * _memset - sets memory with a constant character
 * @s: buffer
 * @b: character to be set
 * @n: times the character to be set
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

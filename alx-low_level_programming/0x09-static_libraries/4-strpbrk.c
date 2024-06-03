#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates the character of a string in another string
 * @s: string to be checked
 * @accept: string to be checked
 *
 * Return: pointer to s the first occerrence of char in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s [i])
				return s;
			accept++;
		}
		s++;
	}
	return (NULL);
}

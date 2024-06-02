#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string to be determined
 * @c: character to be searched in s
 *
 * Return: NULL - no match, pointer to location of the occurence
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return s;
		i++;
		++s;
	}
	return (NULL);
}

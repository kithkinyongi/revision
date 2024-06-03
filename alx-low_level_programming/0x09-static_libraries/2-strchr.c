#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character to be located
 *
 * Return: pointer to the occurence else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			++s;
			break;
		}
		if (s[i] != c)
			s++;
	}
	return (s);
}

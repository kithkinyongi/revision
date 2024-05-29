#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i;
	char store;
	int stringlen;

	stringlen = _strlen(s);
	for (i = 0; i < (stringlen / 2); i++)
	{
		store = s[i];
		s[i] = s[stringlen - 1 - i];
		s[stringlen - 1 - i] = store;
	}
}
/**
 * _strlen - returns the length of the string
 * @s: string whose length is to be determined
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;
	int stringlen;

	stringlen = 0;
	for (i = 0; s[i] != '\0'; i++)
		stringlen++;
	return (stringlen);
}

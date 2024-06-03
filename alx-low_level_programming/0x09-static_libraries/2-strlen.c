#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to be measured
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

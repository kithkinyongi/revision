#include "main.h"
/**
 * strlen - determines the length of the string
 * @str: string whose length is to be determined
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i;
	int stringlen;

	stringlen = 0;
	for (i = 0; str[i] != '\0'; i++)
		stringlen++;
	return (stringlen);
}

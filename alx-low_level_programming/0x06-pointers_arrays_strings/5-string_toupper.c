#include "main.h"
/**
 * string_toupper - string to upper
 * @str: string to to be modified
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i;
	int store;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			store = str[i];
			store = store - 32;
			str[i] = store;
		}
	}
	return (str);
}

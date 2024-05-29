#include "main.h"
/**
 * cap_string - capitalizes a string
 * @str: string to be modified
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\n' || str[i] == ' ' || str[i] == ',' ||
				str[i] == ';' || str[i] == '.' || str[i] == '?'||
				str[i] == '"' || str[i] == '(' || str[i] == ')' ||
				str[i] == '{' || str[i] == '}')
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
	}
	return (str);
}

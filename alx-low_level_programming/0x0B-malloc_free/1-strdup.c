#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string to heap region
 * @str: string to be duplicated
 *
 * Return: pointer to heap - success, otherwise NULL
 */
char *_strdup(char *str)
{
	long unsigned int i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(str) * sizeof(char));
	if (ptr == NULL)
		return NULL;
	for (i = 0; i < sizeof(str); i++)
		ptr[i] = str[i];
	return (ptr);
}

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - concats 2 strings in heap region
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to the concat string, otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	long unsigned int i;
	char *ptr;

	ptr = malloc((sizeof(s1) + sizeof(s2)) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < sizeof(s1); i++)
		ptr[i] = s1[i];
	for (i = 0; i < sizeof(s2); i++)
		ptr[sizeof(s1) + i] = s2[i];
	return (ptr);
}

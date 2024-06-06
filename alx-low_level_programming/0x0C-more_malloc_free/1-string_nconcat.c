#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - concats 2 strings in heap region
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of characters to be copied
 *
 * Return: pointer to heap region, otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *ptr;

	ptr = malloc((sizeof(s1) + n) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (sizeof(s1) - 1); i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + (sizeof(s1) - 1)] = s2[i];
	ptr[sizeof(s1) + n] = '\0';
	return (ptr);
}

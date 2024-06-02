#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates the exact location of a string in a another string
 * @haystack: static string to be checked from
 * @needle: string to be checked
 *
 * Return: NULL if no match otherwise pointer to the location of the match
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				return (haystack);
			haystack++;
		}
		needle++;
	}
	return (NULL);
}

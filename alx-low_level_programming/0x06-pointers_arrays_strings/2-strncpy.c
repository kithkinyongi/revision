#include "main.h"
/**
 * _strncpy - copies one string to a diff mem location
 * @dest: destination of the copied string
 * @src: string to be copied
 * @n: number of characters to be copied
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

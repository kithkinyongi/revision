#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination of the concate string
 * @src: source of the concate string
 * @n: number of characters to be concatenated
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int stringlendest;

	stringlendest = _strlen(dest);
	for (i = 0; i < n; i++)
		dest[stringlendest + i] = src[i];
	return (dest);
}

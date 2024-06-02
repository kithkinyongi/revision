#include "main.h"
/**
 * _memcpy - copies number of bytes from source to dest
 * @dest: destination of the buffer
 * @src: source of the buffer
 * @n: number of bytes from src to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

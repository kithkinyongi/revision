#include "main.h"
/**
 * _memcpy - copies memory from source to dest
 * @dest: destination of the memory being copied
 * @src: source of the memory
 * @n: bytes to be copied
 *
 * Return: a pointer to dest;
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}

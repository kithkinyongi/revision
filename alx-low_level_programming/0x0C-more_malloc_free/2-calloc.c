#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc - mimics calloc function
 * @nmemb: number of mem bytes
 * @size: size of data type
 *
 * Return: pointer to the allocated region, otherwise NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

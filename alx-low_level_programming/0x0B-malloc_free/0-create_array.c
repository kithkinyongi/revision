#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates a pointer in the heap region
 * @size: size of array
 * @c: character to be initialized with
 *
 * Return: Pointer to heap region, otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
	free(ptr);
}

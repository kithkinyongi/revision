#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory in heap region
 * @n: buffer size
 *
 * Return: pointer to the allocated memory, otherwise returns 98
 */
void *malloc_checked(unsigned int n)
{
	void *ptr;

	ptr = malloc(sizeof(void *) * n);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

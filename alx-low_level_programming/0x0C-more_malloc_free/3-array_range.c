#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - performs like range in Python LOL
 * @min: minimum number
 * @max: array's last value
 *
 * Return: pointer to the heap region, otherwise NULL
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);	
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		ptr[i] = i;
	return (ptr);
}

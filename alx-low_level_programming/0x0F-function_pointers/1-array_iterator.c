#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates through an array
 * @array: array to be iterated through
 * @size: size of the array
 * @action: funtion pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

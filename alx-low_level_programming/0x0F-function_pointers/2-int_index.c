#include "function_pointers.h"
/**
 * int_index - searches for an interger
 * @array: array of elements to be searched
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: index of first occurrence, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int value;
	
	if (size < 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		value = cmp(array[i]);
		if (value != 0)
			break;
		i++;
	}
	if (value == 0)
		return (-1);
	else
		return (i);
}

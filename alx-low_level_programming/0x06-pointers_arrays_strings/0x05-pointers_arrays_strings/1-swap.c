#include "main.h"
/**
 * swap_int - swaps the value of 3 integers
 * @a: 1st value to be swapped
 * @b: 2nd value to be swapped
 */
void swap_int(int *a, int *b)
{
	int store;

	store = *a;
	*a = *b;
	*b = store;
}

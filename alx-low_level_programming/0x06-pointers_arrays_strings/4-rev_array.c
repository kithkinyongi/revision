#include "main.h"
/**
 * reverse_array - reverses an int type array
 * @a: pointer to array
 * @n: length of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int store;

	for (i = 0; i < n / 2; i++)
	{
		store = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = store;
	}
}

#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of diagonals in a matrix
 * @a: matrix to be iterated
 * @s: size of rows and columns
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int diagonalleft;
	int diagonalright;
	int store;

	diagonalright = 0;
	diagonalleft = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				store = a[i][j];
				diagonalleft += store;
			}
			else if (i + j == size - 1)
			{
				store = a[i][j];
				diagonalright += store;
			}
		}
	}
	printf("%d, %d\n", diagonalleft, diagonalright);
}

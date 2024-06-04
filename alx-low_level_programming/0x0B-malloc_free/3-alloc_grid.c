#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - allocates a matrix in the heap region and initialize it
 * @width: width of the matrix
 * @height: height of the  matrix
 *
 * Return: pointer to heap region, otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;

	if (width < 0 || height < 0)
		return (NULL);
	ptr = malloc((width * height) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; i < height; i++)
			ptr[i][j] = 0;
	}
	return (ptr);
}

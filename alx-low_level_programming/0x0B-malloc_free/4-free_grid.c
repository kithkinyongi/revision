#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a grid
 * @grid: space in heap to be freed
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	(void) height;

	free (grid);
}

#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - Free up memory from 2 dimensional grid
 * @grid: pointer to grid
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	for (height = height - 1; height >= 0; height--)
	{
		free(*(grid + height));
	}
	free(grid);
}

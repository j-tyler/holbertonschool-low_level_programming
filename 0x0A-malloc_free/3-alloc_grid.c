#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - build a newly allocated 2 dimensional grid
 * @width: Width of the grid
 * @height: Height of grid
 *
 * Return: Pointer to grid, NULL of failure
 */
int **alloc_grid(int width, int height)
{
	int **pgrid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	pgrid = malloc(height * sizeof(void *));
	if (pgrid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(pgrid + i) = malloc(width * sizeof(int));
		if (*(pgrid + i) == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(*(pgrid + i));
			free(pgrid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			pgrid[i][j] = 0;
		}
	}
	return (pgrid);
}

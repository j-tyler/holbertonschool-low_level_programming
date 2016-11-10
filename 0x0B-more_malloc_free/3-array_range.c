#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Create an array filled with values from min to max inclusive
 * @min: lowest number
 * @max: highest number
 *
 * Return: pointer to array, NULL if failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		*(arr + i) = min + i;

	return (arr);
}

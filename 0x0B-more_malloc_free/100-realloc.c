#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - Re-allocate memory for a larger or smaller size
 * @ptr: Pointer to the old memory block
 * @old_size: The old size of the memory block
 * @new_size: The new size of the memory block being created
 *
 * Return: Pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *space;
	char *spacecpy, *ptrcpy;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	/* regardless, we need to make new space of new_size */
	space = malloc(new_size);
	if (space == NULL)
		return (NULL);
 	/* if ptr is null, return space without copying */
	if (ptr == NULL)
		return (space);
	/* copy old contents into new space */
	spacecpy = space;
	ptrcpy = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		spacecpy[i] = ptrcpy[i];
	}
	free(ptr);
	return (space);
}

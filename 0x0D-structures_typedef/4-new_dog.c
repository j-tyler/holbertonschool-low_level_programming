#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of doge
 * @age: age of doge
 * @owner: does anyone ever really own a doge?
 *
 * Return: Pointer to new doge, NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	dog_t dog;
	int i, len1, len2;
	char *newname, *newowner;

	new_dog = &dog;
	len1 = len2 = i = 0;
	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;

	newname = malloc(len1 + 1);
	newowner = malloc(len2 + 1);

	if (newname == NULL)
		return (NULL);
	if (newowner == NULL)
		return (NULL);
	do {
		newname[i] = name[i];
	} while (name[i++] != '\0');
	i = 0;
	do {
		newowner[i] = owner[i];
	} while (owner[i++] != '\0');

	new_dog->name = newname;
	new_dog->age = age;
	new_dog->owner = newowner;
	return (new_dog);
}

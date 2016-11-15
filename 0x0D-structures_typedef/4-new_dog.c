#include "dog.h"
#include <stdlib.h>
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
	int len1, len2, i;

	len1 = len2 = i = 0;
	while (name[len1++] != '\0')
		;
	while (owner[len2++] != '\0')
		;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(len1);
	new_dog->owner = malloc(len2);

	do {
		new_dog->name[i] = name[i];
	} while (name[i++] != '\0');
	i = 0;
	do {
		new_dog->owner[i] = owner[i];
	} while (owner[i++] != '\0');
	new_dog->age = age;
	return (new_dog);
}

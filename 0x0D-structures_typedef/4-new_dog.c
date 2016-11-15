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

	new_dog = &dog;
	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}

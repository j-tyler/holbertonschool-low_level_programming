#include "dog.h"
/**
 * init_dog - create variable dog
 * @d: pointer to dog struct
 * @name: name of doge
 * @age: age of doge
 * @owner: does anyone ever really own a doge?
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

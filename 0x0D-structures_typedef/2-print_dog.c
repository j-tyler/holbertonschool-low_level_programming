#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints out the argument of type struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints out the argument of type struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age == NULL)
			printf("Age: (nil)\n");
		else
			printf("Age: %.1f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

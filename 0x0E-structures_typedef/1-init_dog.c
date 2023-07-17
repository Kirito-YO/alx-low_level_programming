#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function can do that
 * @d: var
 * @name: var
 * @age: var
 * @owner: var
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

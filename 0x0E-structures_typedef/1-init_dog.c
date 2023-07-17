#include "dog.h"
#include <stdlib.h>


/**
 * init_dog - function that initializes dog structure
 * @d: Dog structure pointer
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = malloc(strlen(name) + 1);
		strcpy(d->name, name);

		d->age = age;

		d->owner = malloc(strlen(owner) + 1);
		strcpy(d->owner, owner);
	}
}

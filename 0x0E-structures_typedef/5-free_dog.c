#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function with free dogs
 * @d: pointer to dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

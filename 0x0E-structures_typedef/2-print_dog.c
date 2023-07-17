#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: dog structure pointer
 * REturn: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != ((void *)0))
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->name) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}

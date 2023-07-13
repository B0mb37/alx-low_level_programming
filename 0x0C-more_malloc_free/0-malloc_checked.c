#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - func that allocates memory using malloc
 * @b: bytes to be allocated
 * Return: ptr (pointer to allocated memory)
 */

void *malloc_checked(unsignes int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

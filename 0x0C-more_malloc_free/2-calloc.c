#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array of elements of which memory is to be allocated
 * @size: byte size for allocation
 * Return: ptr (pointer to allocated memory)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (n = 0; n < (nmemb * size); n++)
		ptr[n] = 0;

	return (ptr);
}

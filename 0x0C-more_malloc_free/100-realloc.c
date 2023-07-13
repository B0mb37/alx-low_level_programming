#include "main.h"

/**
 * _realloc - func that reallocates mem block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size int bytes of new memory block
 * @new_size: new size in bytes of new memory block
 * Return: new_ptr (new pointer to new memory allocated)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int copy_size;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	copy_size = old_size < new_size ? old_size : new_size;

	for (i = 0; i < copy_size; i++)
		new_ptr[i] = ((char *)ptr)[i];

	free(ptr);

	return (new_ptr);
}


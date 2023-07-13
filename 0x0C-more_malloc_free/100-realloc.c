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
	int i;

	if (new_size == old_size)
		return (ptr);
	if (new_ptr == NULL)
	{
		malloc(new_size);
		return (new_ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
		new_ptr[i] = ((char *)new_ptr)[i];
	free(ptr);
	return (new_ptr);
}


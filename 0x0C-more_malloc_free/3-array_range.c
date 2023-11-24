#include "main.h"
#include <stdlib.h>

/**
 * array_range - func that creates an array of ints
 * @min: start of array numbering
 * @max: end of array numbering
 * Return: ptr (pointer to newly created array)
 */

int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}

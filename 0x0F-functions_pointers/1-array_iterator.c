#include "function_pointers.h"

/**
 * array_iterator - executes a funct given as a parameter each on array
 * @array: the array given
 * @size: size of array
 * @action: function pointer to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

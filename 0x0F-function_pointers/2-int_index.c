#include "function_pointers.h"

/**
 * int_index - func that searches for an integer
 * @array: where to search for the int
 * @size: number of elements in array
 * @cmp: pointer to function used in comparison or search
 * Return: index of first element for which cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}

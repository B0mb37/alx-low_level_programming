#include "main.h"

/**
 * swap_int - swaps values of two ints
 * @a: first int for function
 * @b: seond int for function
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

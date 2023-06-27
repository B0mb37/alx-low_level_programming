#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a number of elements in an array
 * @a: value of array to be printed
 * @n: number if elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		ptintf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
i}

#include "main.h"

/**
 * reverse_array - reverse contemt of array of integers
 * @a: first input
 * @n: second input
 */

void reverse_array(int *a, int n)
{
	int start, finish, change;

	start = 0;
	finish = n - 1;

	for (start = 0; start < finish; start++)
	{
		change = a[start];
		a[start] = a[finish];
		a[finish] = change;
		finish--;
	}
}

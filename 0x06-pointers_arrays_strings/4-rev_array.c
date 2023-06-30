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
	while (start < finish)
	{
		change = *(a + start);
		*(a + begin) = *(a + finish);
		*(a + finish) = change;
		start++;
		finish--;
	}
}

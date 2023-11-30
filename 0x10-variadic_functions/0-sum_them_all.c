#include "variadic_functions.h"

/**
 * sum_them_all - adds all the parameters
 * @n: number of ints
 * Return: sum or 0 (sum value or zero)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int m = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);
		while (m < n)
		{
			sum += va_arg(args, int);
			m++;
		}
		va_end(args);
		return (sum);
	}
	return (0);
}

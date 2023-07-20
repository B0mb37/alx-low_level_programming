#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - func that prints numbers followed by new line
 * @separator: string printed between numbers
 * @n: number of ints passed into func
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int o = 0;

	if (n > 0)
	{
		va_start(args, n);
		while (o < n)
		{
			printf("%d", va_arg(args, int));
			if (o != n - 1 && separator != NULL)
				printf("%s", separator);
			o++;
		}
		va_end(args);
	}
	printf("\n");
}

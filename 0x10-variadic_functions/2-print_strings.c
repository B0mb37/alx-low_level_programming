#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string printed between strings
 * @n: number of strings provided
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int o = 0;
	char *str;

	if (n > 0)
	{
		va_start(args, n);
		while (o < n)
		{
			str = va_arg(args, char *);

			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);

			if (o != n - 1 && separator != NULL)
				printf("%s", separator);
			o++;
		}
		va_end(args);
	}
	printf("\n");
}

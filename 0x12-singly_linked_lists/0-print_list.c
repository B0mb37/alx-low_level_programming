#include "lists.h"

size_t power(size_t base, size_t power);

/**
 * print_list - func that prints elements of a list
 * @h: A linked list
 * Return: nodes (number of nodes)
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		_putchar('[');
		if (h->len == 0)
			_putchar('0');
		else
		{
			size_t length = h->len;
			size_t numDigits = 0;

			while (length != 0)
			{
				len /= 10;
				numDigits++;
			}
			length = h->len;
			while (numDigits > 0)
			{
				_putchar('0' + (length / power(10, numDigits - 1)));
				len %= power(10, numDigits - 1);
				numDigits--;
			}
		}
		_putchar(']');
		_putcahr(' ');

		if (h->str)
		{
			const char *str = h->str;

			while (*str)
			{
				_putchar(*str);
				str++;
			}
		}
		else
		{
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		_putchar('\n');
		h = h->next;

		nodes++;
	}
	return (nodes);
}

/**
 * power - Calculate the power of a number
 * @base: base number
 * @exponent: the exponent number
 * Return: (result) result of base^exponent
 */
size_t power(size_t base, size_t exponent)
{
	size_t result = 1;

	while (exponent > 0)
	{
		result *= base;
		exponent--;
	}
	return (result);
}

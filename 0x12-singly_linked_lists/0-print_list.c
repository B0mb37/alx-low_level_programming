#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements in a lined list
 * @h: A linked list
 * Return: nodes (the number of nodes)
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		/* Convert the length to characters and print it */
		size_t len = h->len;
		size_t digits = 0;
		size_t temp = len;
		while (temp != 0)
		{
			temp /= 10;
			digits++;
		}
		
		if (len == 0)
		{
			putchar('0');
			digits = 1; // To avoid printing (nil) after 0
		}
		else
		{
			temp = len;
			while (digits > 0)
			{
				size_t divisor = 1;
				for (size_t i = 1; i < digits; i++)
					divisor *= 10;
				size_t digit = temp / divisor;
				_putchar(digit + '0');
				temp %= divisor;
				digits--;
			}
		}
		_putchar(' ');
		if (h->str == NULL)
		{
			/* If the string is NULL, print (nil) */
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		else
		{
			/* Print the characters of the string */
			const char *str = h->str;
			while (*str)
			{
				putchar(*str);
				str++;
			}
		}

		_putchar('\n');
		h = h->next;
		count++;
	}
	return count;
}


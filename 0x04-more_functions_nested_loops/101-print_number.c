#include "main.h"

/**
 * print_number - prints an integer on terminal
 * @n: value of input to be printed
 */

void print_number(int n)
{
	int rev_num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
	}

	while (n > 0)
	{
		rev_num = rev_num * 10 + (n % 10);
		n /= 10;
	}

	while (rev_num > 0)
	{
		_putchar(rev_num % 10 + '0');
		rev_num /= 10;
	}
}

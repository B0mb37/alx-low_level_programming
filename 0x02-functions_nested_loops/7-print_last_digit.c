#include "main.h"

/**
 * print_last_digit - gets the last digit of the value entered
 * @n: number passed into func
 * Return: i (the last digit of value)
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	
	if( i < 0)
		i = -1 * i;
	_putchar(i + '0');

	return (i);
}

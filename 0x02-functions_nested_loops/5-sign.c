#include "main.h"

/**
 * print_sign - checks if int passed into it is positive or negative,
 *  returning the sign depending on answer
 *  @n: number passed int function
 * Return: -1 (number is negative), 
 * 0 (number is zero), 
 * 1 (number is positive)
 */


int print_sign(int n)
{
	if(n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}

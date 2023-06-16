#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * Return: (0)
 */

int main(void)
{
	char i = 'z';
	while ( i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar("\n");
	return (0);
:}

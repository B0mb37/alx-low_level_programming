#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * main - prints all possible combinations of single digit numbers
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i !+ 57)
		{
			putchar(44);
			putchar(32);
			i++;
		}
		else
		{
			i++;
		}
	}
	putchar("\n");
	return (0);
}

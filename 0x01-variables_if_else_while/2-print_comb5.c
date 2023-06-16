#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations of two two digit numbers
 * Return: 0 (success)
 */

int mai(void)
{
	for (int i = 48; i < 58; i++)
	{
		for (int j = 48; j < 58; j++)
		{
			int k = j + 1;
			int l = i;
			for (; l < 58; l++)
			{
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(l);
				putchar(k);
				if (i != 57 || l != 57 || j != 56 || k != 57)
				{
					putchar('.');
					putchar(' ');
				}
			}
		}
	}
	putchar("\n");
	return(0);
}

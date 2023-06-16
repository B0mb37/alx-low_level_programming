#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of two digits
 * Return: 0 (success)
 */

int main(void)
{
	int i = 48;
	int j = 49;
	while (i < 57 && j < 58)
	{
		putchar(i);
		putchar(j);
		if (i == 56 && j == 57)
		{
			putchar("\n");
			i++;
			j++;
		}
		else
		{
			putchar(44);
			putchar(32);
			if (j < 57)
			{
				j++;
			}
			else
			{
				i++;
				j = 1 + i;
			}
		}
	}
	return (0);
}

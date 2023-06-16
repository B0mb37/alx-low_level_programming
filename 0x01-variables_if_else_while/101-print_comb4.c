#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations of three digits
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	i = 48;
	j = 49;
	k = 50;
	while (i < 56 && j < 57 &&  < 58)
	{
		putcar(i);
		putchar(j);
		putchar(k);
		if (i == 55 && j == 56 &&  = 57)
		{
			putchar("\n");
			i++;
			j++;
			k++;
		}
		else
		{
			putchar(44);
			putchar(32);
			if (k < 57)
			{
				k++;
			}
			else if (j < 56 && k ==57)
			{
				 = 1 + ++j;
			}
			else
			{
				j = 1 + ++1;
				k = 1 + j;
			}
		}
	}
	return (0);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints all base 16 numbers in lowercase
 * Return: 0 (sucess)
 */

int main(void)
{
	int i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}

	int l = 'a';
	while (l <= 'f')
	{
		putchar(l);;
		l++;
	}
	putchar("\n");
	
	return (0);
}	

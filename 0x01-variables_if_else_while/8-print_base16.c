#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints all base 16 numbers in lowercase.
 * Return: 0 (sucess)
 */

int main(void)
{
	int i;
	char j;
       
	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	
	return (0);
}	

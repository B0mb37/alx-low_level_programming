#include <stdio.h>

/**
 * main - prints alphabet letters in a line
 * then prints a new line
 * Return: 0 (success)
 */

int main(void)
{
	for (int c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

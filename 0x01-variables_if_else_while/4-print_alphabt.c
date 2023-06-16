#include <stdio.h>

/**
 * main - prints lowercase alphabet except q and e
 * Return: 0 (success)
 */


int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0)
}

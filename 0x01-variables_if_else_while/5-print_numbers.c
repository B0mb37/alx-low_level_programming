#include <stdio.h>

/**
 * main -prints all base 10 single digit nos from 0 then new line
 * Return: 0 (success)
 */


int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	putchar('\n');
	return (0);
}

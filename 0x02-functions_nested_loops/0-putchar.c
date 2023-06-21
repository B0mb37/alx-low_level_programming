#include "main.h"

/**
 * main - calls putchar function from main to print '_putchar' followed by new line
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	char ch;
	char putchar[] = "_putchar";
	for (i = 0; i < 8; i++)
	{
		ch = putchar[i];
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}

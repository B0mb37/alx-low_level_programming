#include <stdio.h>

/**
 * main - prints alphabets in lowercase, uppercase then new line
 * Return: 0 (success)
 */

int main(void)
{
	for (int c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (int c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar("\n");
	return (0);
}

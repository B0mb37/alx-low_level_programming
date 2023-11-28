#include <stdio.h>

/**
 * main - prints filename of program it was compiled from
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

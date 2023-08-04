#include "main.h"

/**
 * main - checks the code
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
		printf("Little Endain\n");
	else
		printf("Big Endain\n");
	return (0);
}

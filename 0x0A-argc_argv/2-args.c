#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments recieved
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);

	return (0);
}

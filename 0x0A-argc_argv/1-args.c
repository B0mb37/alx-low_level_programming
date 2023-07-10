#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
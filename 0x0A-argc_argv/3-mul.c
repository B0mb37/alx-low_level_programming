#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of multiplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success) or  1 (fail)
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
	}

	return (0);
}

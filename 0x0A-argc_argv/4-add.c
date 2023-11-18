#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints sum of positive number args
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *k = argv[i];

			for (j = 0; j < strlen(k); j++)
			{
				if (k[j] < '0' || k[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(k);
		}

		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}

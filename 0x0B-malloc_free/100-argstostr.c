#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments of program
 * @ac: argument counts
 * @av: argument vector pointer
 * Return: ptr (new string pointer) or NULL (fails)
 */

char *argstostr(int ac, char **av)
{
	int total_len = 0, i, j, k = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]) + 1;
	ptr = malloc(total_len);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		strcpy(ptr + k, av[j]);
		k += strlen(av[j]);
		ptr[k++] = '\n';
	}
	ptr[k - 1] = '\0';

	return (ptr);
}

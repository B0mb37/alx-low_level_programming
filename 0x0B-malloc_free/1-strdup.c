#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocate memory of string
 * @str: string to be set in a memory
 * Return: ptr (pointer to new string memory)
 */

char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	ptr = malloc((sizeof(char) * i) + 1);

	if (ptr == NULL)
		return (NULL);

	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}

	ptr[j] = '\0';
	return (ptr);
}

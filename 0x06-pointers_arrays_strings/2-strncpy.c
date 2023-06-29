#include "main.h"
#include <string.h>

/**
 * _strncpy - copies an str
 * @dest: first input
 * @src: second inout
 * @n: third input
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}

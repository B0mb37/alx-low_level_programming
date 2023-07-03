#include "main.h"

/**
 * _memcpy - funct that copies memory area
 * @dest: pointer to memory area copied to
 * @src: pointer to memory area copied from
 * @n:number of bytes to be copied
 * Return: dest (pointer to memory area copied to)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

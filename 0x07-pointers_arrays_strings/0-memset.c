#include "main.h"

/**
 * _memset - func that fills memory with consonant byte
 * @s: pointer to area of memory
 * @b: consonant byte passed into func
 * @n: number of bytes of memory
 * Return: s (pointer to the memory area)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

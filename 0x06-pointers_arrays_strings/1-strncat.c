#include "main.h"

/**
 * _strncat - concatenates two str with some limitations
 * @dest: first string for func above
 * @src: second string
 * @n: limit number of bytes from src
 * Return: dest (resulting pointer string)
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLength, srcLength;

	destLength = 0;
	srcLength = 0;

	while (dest[destLength] != '\0')
		destLength++;

	while (src[srcLength] != '\0' && destLength < 97 && srcLength < n)
	{
		dest[destLength] = src[srcLength];
		destLength++;
		srcLength++;
	}
	dest[destLength] = '\0';

	return (dest);
}

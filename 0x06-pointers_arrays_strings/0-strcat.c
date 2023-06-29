#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: first string passed onto func above
 * @src: second string
 * Return: dest (resulting string pointer)
 */

char *_strcat(char *dest, char *src)
{
	int destLength, srcLength;

	destLength = 0;
	srcLength = 0;

	while (*(dest + destLength) != '\0')
		destLength++;

	while (destLength < 97 && *(src + srcLength) != '\0')
	{
		*(dest + destLength) = *(src + srcLength);
		destLength++;
		srcLength++;
	}
	*(dest + destLength) = '\0';

	return (dest);
}

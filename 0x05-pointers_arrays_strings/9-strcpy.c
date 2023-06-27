#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: passed into function, for destination
 * @src: passed into func for source
 * Return: dest (destination)
 */

char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (src[l] != '\0')
		l++;
	for (i = 0; i <= l; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

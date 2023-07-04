#include "main.h"
#include <stdio.h>

/**
 * _strstr - func finds occurence of substring in needle in the string haystac
 * @haystack: string in which to locate substring
 * @needle: the string to be found in haystack
 * Return: haystack or NULL (pointer to begining of haystack or null)
 */


char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
		{
			return (haystack);
		}
	}

	return (NULL);
}

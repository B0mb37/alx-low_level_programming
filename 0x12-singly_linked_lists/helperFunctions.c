#include "lists.h"

/**
 * _strlen - funct that gets len of a string
 * @str: string to be counted
 * Return: length (string length)
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

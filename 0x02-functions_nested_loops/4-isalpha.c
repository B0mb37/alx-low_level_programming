#include "main.h"

/**
 * _isalpha - Checks if int passe into it is of a alpha character or not
 * Return: 0 (is not alpha) 1 (is alpha)
 */

int _isalpha(int c)
{
	if (c > 64 && c < 123)
		return (1);
	else
		return (0);
}

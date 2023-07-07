#include "main.h"

int comparison(char *s, int n, int o);
int strlen_(char *s);
/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: the string to be checked by func above
 * Return: 1 (is palindrome) 0 (is not palindrome)
 */

int is_palindrome(char *s)
{
	int t;

	if (*s == '\0')
		return (1);
	return (comparison(s, 0, strlen_(s) - 1));
}

/**
 * comparison - compares characters of string
 * @s: string pased into it
 * @n: index of first character in string
 * @o: index of last character of string
 * Return: 1 or 0
 */

int comparison(char *s, int n, int o)
{
	if (s[n] == s[o])
	{
		if (n == o || n == o + 1)
			return (1);

		return (0 + comparison(s, n++, o--));
	}
	return (0);
}

/**
 * strlen_ - returns length of a string
 * @s: string to be checked
 * Return: string length
 */

int strlen_(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_(s++));
}

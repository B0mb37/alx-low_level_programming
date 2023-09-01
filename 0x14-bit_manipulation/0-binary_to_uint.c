#include "main.h"

/**
 * binary_to_uint - conversta a binary number to am unisgned int
 * @b: pointer to string of 0 & 1 chars
 * Return: uint (converted number) or NULL (invalid)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	char current_char;

	if (b == NULL)
		return (0);
	while ((current_char = *b) != '\0')
	{
		if (current_char != '0' && current_char != '1')
			return (0);
		uint = uint * 2 + (current_char - '0');
		b++;
	}
	return (uint);
}

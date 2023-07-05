#include "main.h"

/**
 * set_string - funct that sets value of a pointer to a char
 * @s: pointer to pointer whose value is to be set
 * @to: char pointer to be set as value of pointer
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}

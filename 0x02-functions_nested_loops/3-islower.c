#include <ctype.h>
#include "main.h"

/**
 * _islower - CHecks if character passsed into it is lowercase or not
 * Return: 1 (is lowercase), 2 (is not lowercase)
 */

int _islower(int c)
{
	if (islower((char) c))
		return (1);
	else
		return (0);
}

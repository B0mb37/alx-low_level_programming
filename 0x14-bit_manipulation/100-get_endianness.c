#include "main.h"

/**
 * get_endianness - checks endianness of a system
 * Return: 0 (endian) or 1 (not endain)
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return ((int)(*byte));
}

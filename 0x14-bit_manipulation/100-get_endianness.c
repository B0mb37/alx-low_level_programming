#include "main.h"

/**
 * get_endianess - checks endianness of system
 * Return: 0 (endian gotten) or 1 (not endian)
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;
	return ((int)(*byte));
}

#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes in stdout value in memory of c
 * Return: 0 (success)
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}

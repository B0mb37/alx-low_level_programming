#include "function_pointers.h"


/**
 * print_name - funct that prints a name
 * @name: Name to be printed
 * @f: pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

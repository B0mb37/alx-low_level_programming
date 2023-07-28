#include <stdio.h>
#include <stdlib.h>

/*GCC constructor attribute*/

void first(void) __attribute__ ((constructor));

/**
 * first - function that prints string, and is called first before main
 */

void first(void)
{
	printf("You're beat! and yet, you must allow, \nI bore my house upon my back!\n");
}

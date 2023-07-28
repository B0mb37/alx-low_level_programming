#include <stdio.h>

/*GCC constructor attribute*/

void first(void) __attribute__ ((constructor));

/**
 * first - function that prints string, and is called first before main
 */

void first(void)
{
	puts("You're beat! and yet, you must allow, ");
	puts("I bore my house upon my back!");
}

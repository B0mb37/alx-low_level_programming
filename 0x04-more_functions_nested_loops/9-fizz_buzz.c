#include "main.h"
#include <stdio.h>

/**
 *fizz_buzz_print - print all the numbers between 1 and 100
 * replace multiples of 3 with Fizz and those of 5 with Buzz
 * multiples of both replace with FizzBuzz
 */

void fizz_buzz_print(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	}
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - prints last digit of a number n
 * and string to tell digit range.
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n - rand() - RAND_MAX / 2;
	int x = n % 10;
	printf("Last digit of %d is %d ", n, x);
	if (x > 5)
		printf("and is greater than 5\n");
	else if (x == 0)
		printf("and is 0\n");
	else if (x < 6 && x != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}

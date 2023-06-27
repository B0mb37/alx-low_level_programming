#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 * Return: 0 (success)
 */

int main(void)
{
	int pswd[100];
	int i, n, sum;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pswd[i] = rand() % 78;
		sum += (pswd[i] + '0');
		putchar(pswd[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}

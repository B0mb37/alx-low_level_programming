#include <stdio.h>

/**
 * main - adds even valued terms while the sum is less than 4000000 then prints final total
 * Return: 0 (success)
 */

int main(void)
{
	long int total, sum, i, j;
	total = 0;
	sum = 0;
	i = 0;
	j = 1;

	while (sum < 4000000)
	{
		sum = i + j;
		if ( sum % 2 == 0)
		{
			total += sum;
		}
		i = j;
		j = sum;
	}

	printf("%li\n", total);

	return (0);
}

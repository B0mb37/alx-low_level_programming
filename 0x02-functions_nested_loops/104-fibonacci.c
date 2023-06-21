#include <stdio.h>
#include <gmp.h>

/**
 * main - finds and prints the first 98 fibonacci numbers from 1 & 2
 * Return: 0 (success)
 */

int main(void)
{
	mpz_t a, b, temp;
	int i;

	mpz_init_set_ui(a, 1);
	mpz_init_set_ui(b, 2);
	mpz_init(temp);

	printf("%s, ", mpz_get_str(NULL, 10, a));

	for (i = 2; i <= 98; i++)
	{
		mpz_swap(temp, a);
		mpz_add(a, a, b);
		mpz_swap(b, temp);
		printf("%s, ", mpz_get_str(NULL, 10, a));
	}
	printf("\n");

	mpz_clear(a);
	mpz_clear(b);
	mpz_clear(temp);

	return (0);
}

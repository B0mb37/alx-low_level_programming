#include "main.h"

int is_prime(int n, int o);

/**
 * is_prime_number - returns int if prime or not
 * @n: number passed int func above to check if prime
 * Return: 0 (1 or 0)
 */

int is_prime_number(int n)
{
	int o = is_prime(n, 1);

	return (o);
}

/**
 * is_prime - checks if number is prime number
 * @n: nuber to be checked
 * @p: number of times to iterate
 * Return: 1 if prime and ) if not
 */

int is_prime(int n, int p)
{
	if (n <= 1)
		return (0);
	else if (n % p == 0 && p > 1)
		return (0);
	else if ((n / p) < p)
		return (1);

	return (is_prime(n, p + 1));
}

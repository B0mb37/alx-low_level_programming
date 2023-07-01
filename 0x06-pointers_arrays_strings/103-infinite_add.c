#include "main.h"

/**
 * rev_string - reverse array given
 * @n: parameter passed into func
 * Return: 0 (success)
 */

void rev_string(char *n)
{
	int i, j;
	char temp;

	i = 0;
	j = 0;

	while (n[1] != '\0')
		i++;
	i--;

	for (j = 0; j < i; j++)
	{
		temp = n[j];
		n[j] = n[i];
		n[i] = temp;
	}
}
/**
 * infinite_add - adds two numbers, storing result in buffer
 * @n1: first number text
 * @n2: second number text
 * @r: buffer pointer
 * @size_r: buffer size
 * Return: r {pointer to calling function)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over, i, j, digits;
	int m, n, temp_total;

	over = 0;
	i = 0;
	j = 0;
	digits = 0;
	m = 0;
	n = 0;
	temp_total = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i--;
	j--;

	if (j >= size_r || i >= size_r)
		return (0);

	while (j >= 0 || i >= 0 || overflow == 1)
	{
		m = (i < 0) ? 0 : n1[i] - '0';
		n = (j < 0) ? 0 : n2[j] - '0';
		temp_total = m + n + overflow;
		overlow = (temp_total >= 10);
		if (digits >= size_r - 1)
			return (NULL);
		r[digits] = (temp_total % 10) + '0';
		digits++;
		j--;
		i--;
	}

	if (digits == size_r)
		return (NULL);
	r[digits] = '\0';
	rev_string(r);
	return (r);
}

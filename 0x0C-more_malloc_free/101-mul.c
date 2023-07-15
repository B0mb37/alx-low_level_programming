#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

void error(void);
int main(int argc, char *argv[]);
void multiply_numbers(const char *s1, const char *s2);


/**
 * error - handles errors for main
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments ara
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3 || !isdigit(*argv[1]) || !isdigit(*argv[2]))
		error();

	multiply_numbers(argv[1], argv[2]);
	return (0);
}

/**
 * multiply_numbers - multiplies two numbers
 * @s1: first number
 * @s2: second number
 */

void multiply_numbers(const char *s1, const char *s2)
{
	int len1, len2, total_len, i, carry, digit1, digit2, *result, a = 0;

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2 + 1;
	result = malloc(sizeof(int) * total_len);

	if (!result)
		exit(1);
	memset(result, 0, sizeof(int) * total_len);

	for (len1 -= 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;

		for (len2 -= 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < total_len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
}

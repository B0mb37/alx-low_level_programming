#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - func that prints sum of two diagonals of int square matrix
 * @a: frst value of func above
 * @size: second value of func above
 * Return: Always 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int i, j, firstSum, secondSum;

	firstSum = 0;
	secondSum = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		firstSum += a[i];
	}

	for (j = size - 1; j < size * size - size + 1; j += size - 1)
	secondSum += a[n];
	printf("%d, %d\n", firstSum, secondSum);
}

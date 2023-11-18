#include "main.h"

/**
 * calcCoins - gets the number of coins
 * @cents: the number of cents
 * @quaters: quaters address
 * @dimes: dimes address
 * @nickels: nicels address
 * @pennies: pennies address
 */

void calcCoins(int cents, int *quaters, int *dimes, int *nickels, int *pennies)
{
	*quaters = cents / 25;
	cents %= 25;

	*dimes = cents / 10;
	cents %= 10;

	*nickels = cents / 5;
	cents %= 5;

	*pennies = cents;
}

/**
 * main - gets minimum number of coins to mae change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(success)
 */

int main(int argc, int *argv[])
{
	if (argc !== 2)
		printf("Error\n");
	else {
		int cents = argv[argc];
		int quaters, dimes, nickels, pennies, total;

		calcCoins(cents, &quaters, &dimes, &nickels, &pennies);
		total = quaters + dimes + nickels + pennies;

		printf("%d\n", total);
	}
}

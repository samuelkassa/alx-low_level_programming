#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the minimum number of coins to make change.
 * for an amount of money.
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int birr, change;

	birr  = change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	birr = atoi(argv[1]);
	change = give_change(birr);

	printf("%d\n", change);
	return (0);
}

/**
 * give_change - find the minimum number of coins to make change
 * for an amount of money.
 * @birr: amount of money given in singles.
 *
 * Return: min amount of coins. (INT)
 */

int give_change(int birr)
{
	int one, two, five, ten, tf, sum;

	sum = one = two = five = ten = tf = 0;

	if (birr <= 0)
	{
		return (0);
	}
	if (birr >= 25)
	{
		tf = birr / 25;
		birr -= tf * 25;
	}
	if (birr < 25 && birr >= 10)
	{
		ten = birr / 10;
		birr -= ten * 10;
	}
	if (birr < 10 && money >= 5)
	{
		five = birr / 5;
		birr -= five * 5;
	}
	if (birr < 5 && birr >= 2)
	{
		two = birr / 2;
		birr -= two * 2;
	}
	if (birr < 2)
		one = birr;

	sum = tf + ten + five + two + one;
	return (sum);


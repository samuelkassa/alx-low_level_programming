#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b)
	{
		if (b >= c)
		{
			largest = a;
		}
		else if (c >= a)
		{
			largest = c;
		}
	}
	else if (b > a)
	{
		if (a >= c)
		{
			largest = b;
		}
		else if (c >= b)
		{
			largest = c;
		}
	}

	return (largest);
}

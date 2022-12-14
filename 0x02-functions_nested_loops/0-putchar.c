#include "main.h"

/**
 * main - Entery point
 *
 * Description: Prints _putchar
 *
 * Return: Always 0 (successfull)
 */

int main(void)
{
	char text[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	putchar('\n');

	return (0);
}

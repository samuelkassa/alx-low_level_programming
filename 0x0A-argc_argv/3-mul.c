#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the multiplication of two numbers
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: if two numbers are inserted then the result will be printed
 * If not Erro will be printed and 1 will be returned.
 */

int main(int argc, char *argv[])
{
	int value1 = 0;
	int value2 = 0;

	if (argc == 3)
	{
		value1 = atoi(argv[1]);
		value2 = atoi(argv[2]);
		printf("%d\n", value1 * value2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}


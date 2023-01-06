#include <stdio.h>

/**
 * main - prints the numbeer of arguments
 * @argc: The number of arguments
 * @argv: Argument vector.
 *
 * Return: The number of arguments.
 */


int main(int argc, char *argv[] __attribute__((unused))__)
{
	printf("%d\n", argc - 1);
	return (argc - 1);
}

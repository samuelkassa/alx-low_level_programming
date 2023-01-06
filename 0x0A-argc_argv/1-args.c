#include <stdio.h>

/**
 * main - prints the numbeer of arguments
 * @argc: The number of arguments
 * @argv: Argument vector.
 *
 * Return: Always 0 success.
 */


int main(int argc, char __attribute__((unused))__ *argv[]) 
{
	printf("%d\n", argc - 1);
	return (0);
}

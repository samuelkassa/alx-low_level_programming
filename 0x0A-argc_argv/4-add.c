 #include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the addition two numbers.
 * @argc: Argument counter
 * @argv: Argument Vector
 *
 * Return: If two positive integer is inserted the addition will be printed
 * If no number is passed 0 will be printed
 * If non number is passed then Error will be printed and 1 will be returned.
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum = 0;
	unsigned int k;
	char *s;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{

			s = argv[i];
			for (k = 0; k < strlen(s); k++)
			{
				if (s(i) < 48 || s(i) > 57)
				{
					printf("Error");
					return (1);
				}
			}
			sum += atoi(s);
			s++;
		}
		printf("%d\n", sum);
	else
	{
		printf("0\n");
	}
	return (0);
}

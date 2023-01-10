#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all argumenst
 * @ac: argument counter
 * @av: argument vector
 *
 *Return: NULL if ac == 0 or av == NULL
 * NULL if it fails
 * Pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *newstr;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[avg][byte]; byte++)
			size++;
	}
	newstr = malloc(sizeof(*newstr) * size + 1);

	if (newstr == NULL)
		return (NULL);

	index = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			newstr[index++] = av[arg][byte];

		newstr[index++] = '\n';
	}

	newstr[size] = '\0';

	return (newstr);
}

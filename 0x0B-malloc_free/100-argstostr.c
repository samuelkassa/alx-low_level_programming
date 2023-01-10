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
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	newstr = malloc((sizeof(*newstr) * ac) + ac);

	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		newstr[i] = *(*av + i);
		i++;
		newstr[i] = ('\n');
		i++;
	}

	return (newstr);
}

#include "main.h"

/**
 * leet - encoding a string into 1337
 * @str: string to be encoded
 *
 * Return: char
 */

char *leet(char *str)
{
	int inner, outer;

	int outer = 0;
	char reference[9] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[outer] != '\0')
	{
		for (inner = 0; inner <= 7; inner++)
		{
			if (str[outer] == reference[inner] || str[outer] - 32 == reference[inner])
			{
				str[outer] = inner + '0';
				break;
			}
		}
		outer++;
	}
	return (str);
}

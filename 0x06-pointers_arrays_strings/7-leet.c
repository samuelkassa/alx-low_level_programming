#include "main.h"

/**
 * leet - encoding a string into 1337
 * @src: string to be encoded
 *
 * Return: char
 */

char *leet(char *src)
{
	int index1, index2;

	int index1 = 0;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (src[index1] != '\0')
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (src[index1] == leet[index2] || src[index1] - 32 == leet[index2])
			{
				src[index1] = index2 + '0';
			}
		}
		index1++;
	}
	return (src);
}
